#include <cstdio>
#include <stdlib.h>
#include <assert.h>
#include <cstring>
#include <iostream>
#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmaybe-uninitialized"
#endif
#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCDisassembler/MCDisassembler.h"
#include "llvm/MC/MCInstPrinter.h"
#include "llvm/Support/TargetRegistry.h"
#include "llvm/Support/TargetSelect.h"
#include <elf.h>
#include <dlfcn.h>
#include <readline/readline.h>
#include <readline/history.h>
using namespace llvm;
using namespace std;
static llvm::MCDisassembler *gDisassembler = nullptr;
static llvm::MCSubtargetInfo *gSTI = nullptr;
static llvm::MCInstPrinter *gIP = nullptr;
Elf64_Ehdr ehdr;
Elf64_Shdr shdr;
Elf64_Sym symdr;
Elf64_Off symbol_base = 0;
Elf64_Off str_base = 0;
FILE *log_fp = NULL;
FILE *ftrace_fp = NULL;
extern "C" void init_disasm(const char *triple)
{
  llvm::InitializeAllTargetInfos();
  llvm::InitializeAllTargetMCs();
  llvm::InitializeAllAsmParsers();
  llvm::InitializeAllDisassemblers();

  std::string errstr;
  std::string gTriple(triple);

  llvm::MCInstrInfo *gMII = nullptr;
  llvm::MCRegisterInfo *gMRI = nullptr;
  auto target = llvm::TargetRegistry::lookupTarget(gTriple, errstr);
  if (!target)
  {
    llvm::errs() << "Can't find target for " << gTriple << ": " << errstr << "\n";
    assert(0);
  }

  MCTargetOptions MCOptions;
  gSTI = target->createMCSubtargetInfo(gTriple, "", "");
  std::string isa = target->getName();
  if (isa == "riscv32" || isa == "riscv64")
  {
    gSTI->ApplyFeatureFlag("+m");
    gSTI->ApplyFeatureFlag("+a");
    gSTI->ApplyFeatureFlag("+c");
    gSTI->ApplyFeatureFlag("+f");
    gSTI->ApplyFeatureFlag("+d");
  }
  gMII = target->createMCInstrInfo();
  gMRI = target->createMCRegInfo(gTriple);
  auto AsmInfo = target->createMCAsmInfo(*gMRI, gTriple, MCOptions);
#if LLVM_VERSION_MAJOR >= 13
  auto llvmTripleTwine = Twine(triple);
  auto llvmtriple = llvm::Triple(llvmTripleTwine);
  auto Ctx = new llvm::MCContext(llvmtriple, AsmInfo, gMRI, nullptr);
#else
  auto Ctx = new llvm::MCContext(AsmInfo, gMRI, nullptr);
#endif
  gDisassembler = target->createMCDisassembler(*gSTI, *Ctx);
  gIP = target->createMCInstPrinter(llvm::Triple(gTriple),
                                    AsmInfo->getAssemblerDialect(), *AsmInfo, *gMII, *gMRI);
  gIP->setPrintImmHex(true);
  gIP->setPrintBranchImmAsAddress(true);
}

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte)
{
  MCInst inst;
  llvm::ArrayRef<uint8_t> arr(code, nbyte);
  uint64_t dummy_size = 0;
  gDisassembler->getInstruction(inst, dummy_size, arr, pc, llvm::nulls());

  std::string s;
  raw_string_ostream os(s);
  gIP->printInst(&inst, pc, "", *gSTI, os);

  int skip = s.find_first_not_of('\t');
  const char *p = s.c_str() + skip;
  assert((int)s.length() - skip < size);
  strcpy(str, p);
}
#define FMT_WORD "0x%016" PRIx64

void init_log(const char *log_file)
{
  ftrace_fp = stdout;
  if (log_file != NULL)
  {
    FILE *fp = fopen(log_file, "w");
    ftrace_fp = fp;
  }
}

void init_ftrace(const char *log_file)
{
  log_fp = stdout;
  if (log_file != NULL)
  {
    FILE *fp = fopen(log_file, "w");
    log_fp = fp;
  }
}

typedef uint64_t vaddr_t;
typedef struct Decode
{
  vaddr_t pc;
  vaddr_t snpc; // static next pc
  vaddr_t dnpc; // dynamic next pc
  uint32_t val;
  char logbuf[128];
} Decode;

#define log_write(...)            \
  do                              \
  {                               \
    extern FILE *log_fp;          \
    extern bool log_enable();     \
    fprintf(log_fp, __VA_ARGS__); \
    fflush(log_fp);               \
  } while (0)
#define flog_write(...)            \
  do                              \
  {                               \
    extern FILE *ftrace_fp;          \
    extern bool log_enable();     \
    fprintf(ftrace_fp, __VA_ARGS__); \
    fflush(ftrace_fp);               \
  } while (0)

Elf64_Off find_strtab(FILE *fd)
{
  int i = 0;
  int a = 0;
  Elf64_Off str_base = 0;
  for (i = 0; i < ehdr.e_shnum; i++)
  {
    fseek(fd, ehdr.e_shoff + i * ehdr.e_shentsize, SEEK_SET);
    a = fread(&shdr, sizeof(Elf64_Shdr), 1, fd);
    if (a == 0)
    {
      printf("fail to read symbol_entry\n");
      exit(0);
    }
    if (shdr.sh_type == SHT_STRTAB)
    {
      printf("strtab address: %lx\n", shdr.sh_offset);
      str_base = ehdr.e_shoff + i * ehdr.e_shentsize;
      break;
    }
  }
  return str_base;
}

Elf64_Off find_symtab(FILE *fd)
{
  int i = 0;
  int a = 0;
  Elf64_Off sym_base = 0;
  for (i = 0; i < ehdr.e_shnum; i++)
  {
    fseek(fd, ehdr.e_shoff + i * ehdr.e_shentsize, SEEK_SET);
    a = fread(&shdr, ehdr.e_shentsize, 1, fd);
    if (a == 0)
    {
      printf("fail to read symbol_entry\n");
      exit(0);
    }
    if (shdr.sh_type == SHT_SYMTAB)
    {
      printf("symtab address: %lx\n", shdr.sh_offset);
      sym_base = ehdr.e_shoff + i * ehdr.e_shentsize;
      break;
    }
  }
  return sym_base;
}
void ftrace(char *elf_file, int inst_num, int *call, vaddr_t *addr)
{
  FILE *fd = fopen(elf_file, "r");
  int a = 0;
  int space = 0;
  unsigned char strtab[1000] = {0};
  fseek(fd, 0, SEEK_SET);
  a = fread(&ehdr, sizeof(Elf64_Ehdr), 1, fd);
  if (0 == a)
  {
    printf("fail to read head\n");
    exit(0);
  }
  str_base = find_strtab(fd);
  symbol_base = find_symtab(fd);
  int i = 0;
  a = 0;
  for (i = 0; i < inst_num; i++)
  {
    // 初始化指针
    fseek(fd, symbol_base, SEEK_SET);
    a = fread(&shdr, sizeof(Elf64_Shdr), 1, fd);
    fseek(fd, shdr.sh_offset, SEEK_SET);
    a = fread(&symdr, sizeof(Elf64_Sym), 1, fd);
    // 找到对应的函数名
    int num = shdr.sh_size / shdr.sh_entsize;
    for (int j = 0; j < num; j++)
    {
      if (a == 0)
      {
        printf("fail to read symbol_entry\n");
        exit(0);
      }
      if (symdr.st_info == 18 && addr[i] >= symdr.st_value && addr[i] < symdr.st_value + symdr.st_size)
      {
        Elf64_Word start = symdr.st_name;
        fseek(fd, str_base, SEEK_SET);
        a = fread(&shdr, sizeof(Elf64_Shdr), 1, fd);
        fseek(fd, shdr.sh_offset + start, SEEK_SET);
        a = fread(strtab, sizeof(Elf64_Sym), 1, fd);
        if (call[i])
        {
          space++;
          flog_write("%lx:", addr[i]);
          flog_write("%*s", space, "");
          flog_write("call[%s@%lx]\n", strtab, symdr.st_value);
        }
        else
        {
          space--;
          flog_write("%lx:", addr[i]);
          flog_write("%*s", space, "");
          flog_write("ret[%s@%lx]\n", strtab, symdr.st_value);
        }
        memset(strtab, 0, sizeof(strtab));
        break;
      }
      else
        a = fread(&symdr, sizeof(Elf64_Sym), 1, fd);
    }
  }
  fclose(fd);
}

void itrace(Decode *s, vaddr_t now_pc, uint32_t now_inst)
{
  s->pc = now_pc;
  s->val = now_inst;
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = 4;
  int i;
  uint8_t *inst = (uint8_t *)&s->val;
  for (i = ilen - 1; i >= 0; i--)
  {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 8;
  int space_len = 4;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p, s->pc, (uint8_t *)&s->val, ilen);
  log_write("%s\n", s->logbuf);
}