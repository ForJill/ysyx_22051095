#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "VTop.h"
#include "VTop__Dpi.h"
#include "verilated_dpi.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <getopt.h>
#include <cassert>
#include <unistd.h>
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
#include "memory.h"
static char *so_file = "/home/ljw/Desktop/ysyx-workbench/npc/riscv64-nemu-interpreter-so";
using namespace llvm;
using namespace std;
static llvm::MCDisassembler *gDisassembler = nullptr;
static llvm::MCSubtargetInfo *gSTI = nullptr;
static llvm::MCInstPrinter *gIP = nullptr;

#define MAX_SIM_TIME 100000
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define CONFIG_PC_RESET_OFFSET 0x0
#define PG_ALIGN __attribute((aligned(4096)))
typedef uint64_t paddr_t;
typedef uint64_t vaddr_t;

uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {0};
uint8_t *guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};
struct CPU_state
{
  uint64_t gpr[32];
  uint64_t pc;
}cpu;
typedef struct Decode {
  vaddr_t pc;
  vaddr_t snpc; // static next pc
  vaddr_t dnpc; // dynamic next pc
  uint32_t val;
  char logbuf[128];
} Decode;
//解析参数读取bin文件
static char *img_file = "/home/ljw/Desktop/ysyx-workbench/am-kernels/tests/cpu-tests/build/wanshu-riscv64-npc.bin";
//difftest
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
long img_size = 0;
static int port = 1234;
static uint64_t refpc = 0;
static uint64_t pc = 0;
static uint64_t npc = 0;
static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;
enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)
//ftrace
int space = 0;
int inst_num = 0;
FILE *fd;
Elf64_Ehdr ehdr;
Elf64_Shdr shdr;
Elf64_Sym symdr;
Elf64_Off symbol_base = 0;
Elf64_Off str_base = 0;
vaddr_t addr[1000]={0};
int call[1000]={0};
static char *elf_file = "/home/ljw/Desktop/ysyx-workbench/am-kernels/tests/cpu-tests/build/add-longlong-riscv64-nemu.elf";
unsigned char strtab[1000]={0};
#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1))
Elf64_Off find_strtab(FILE *fd, Elf64_Shdr shdr, Elf64_Ehdr ehdr){
    int i=0;
    int a=0;
    Elf64_Off str_base = 0;
    for(i = 0; i < ehdr.e_shnum; i++){
        fseek(fd , ehdr.e_shoff + i * ehdr.e_shentsize, SEEK_SET);
        a = fread(&shdr, sizeof(Elf64_Shdr), 1, fd);
        if (a == 0)
            {
              printf("fail to read symbol_entry\n");
              exit(0);
            }
        if(shdr.sh_type == SHT_STRTAB){
            printf("strtab address: %lx\n",shdr.sh_offset);
            str_base = ehdr.e_shoff + i * ehdr.e_shentsize;
            break;
        }
    }
    return str_base;
}

Elf64_Off find_symtab(FILE *fd, Elf64_Shdr shdr, Elf64_Ehdr ehdr){
    int i=0;
    int a=0;
    Elf64_Off sym_base = 0;
    for(i = 0; i < ehdr.e_shnum; i++){
        fseek(fd , ehdr.e_shoff + i * ehdr.e_shentsize, SEEK_SET);
        a = fread(&shdr, ehdr.e_shentsize, 1, fd);
        if (a == 0)
            {
              printf("fail to read symbol_entry\n");
              exit(0);
            }
        if(shdr.sh_type == SHT_SYMTAB){
            printf("symtab address: %lx\n",shdr.sh_offset);
            sym_base = ehdr.e_shoff + i * ehdr.e_shentsize;
            break;
        }
    }
    return sym_base;
}
//导入memory函数
extern "C" void pmem_read(long long raddr, long long *rdata){
  if(raddr < CONFIG_MBASE || raddr > CONFIG_MBASE + CONFIG_MSIZE){
    printf("pmem_read: invalid address 0x%llx\n", raddr); return;
  }
  *rdata = *((long long*)guest_to_host(raddr));
  printf("pmem_read: 0x%llx -> 0x%llx\n", raddr, *rdata);
}
extern "C" void pmem_write(long long waddr, long long wdata, char wmask)
{
  if(waddr < CONFIG_MBASE || waddr > CONFIG_MBASE + CONFIG_MSIZE){
    printf("pmem_write: invalid address 0x%llx", waddr); return;
  }
  printf("pmem_write: 0x%llx <- 0x%llx (0x%x)", waddr, wdata, wmask);
  int i;
  uint8_t *len = guest_to_host(waddr);
  for (i = 0; i < 8; i++) {
    if (wmask & (1 << i)) {
      *len = wdata & 0xff;
      wdata >>= 8;
      len++;
    }
  }
}
long load_img(char *img_file)
{
  FILE *fp = fopen(img_file, "rb");
  //若文件为空，输出报错
  if(fp == NULL){
    printf("Cannot open image file\n");
  }
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  printf("The image is %s, size = %ld\n", img_file, size);
  int ret = fread(guest_to_host(CONFIG_MBASE), size, 1, fp);
  fclose(fp);
  return size;
}
//设置仿真所需变量初始值
vluint64_t sim_time = 0;
uint64_t *cpu_gpr = NULL;
uint32_t now_inst = 0;
uint64_t now_pc = 0;
int stop = 0;
int is_exit = 0;
VTop* dut = NULL;
VerilatedVcdC *m_trace = NULL;
FILE *log_fp = NULL;
static char *log_file = "npc-log.txt";
#define FMT_WORD "0x%016" PRIx64
void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    log_fp = fp;
  }
}
#define log_write(...) \
  do { \
    extern FILE* log_fp; \
    extern bool log_enable(); \
    fprintf(log_fp, __VA_ARGS__); \
    fflush(log_fp); \
  } while (0) \

//导入DPI函数
void ebreak(int flag) {
  if(flag)printf("ebreak\n");
  stop = flag;
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void get_inst(long long inst){
  now_inst = inst;
}
extern "C" void get_pc(long long pc){
  now_pc = pc;
} 

extern "C" void init_disasm(const char *triple) {
  llvm::InitializeAllTargetInfos();
  llvm::InitializeAllTargetMCs();
  llvm::InitializeAllAsmParsers();
  llvm::InitializeAllDisassemblers();

  std::string errstr;
  std::string gTriple(triple);

  llvm::MCInstrInfo *gMII = nullptr;
  llvm::MCRegisterInfo *gMRI = nullptr;
  auto target = llvm::TargetRegistry::lookupTarget(gTriple, errstr);
  if (!target) {
    llvm::errs() << "Can't find target for " << gTriple << ": " << errstr << "\n";
    assert(0);
  }

  MCTargetOptions MCOptions;
  gSTI = target->createMCSubtargetInfo(gTriple, "", "");
  std::string isa = target->getName();
  if (isa == "riscv32" || isa == "riscv64") {
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
   auto Ctx = new llvm::MCContext(llvmtriple,AsmInfo, gMRI, nullptr);
#else
   auto Ctx = new llvm::MCContext(AsmInfo, gMRI, nullptr);
#endif
  gDisassembler = target->createMCDisassembler(*gSTI, *Ctx);
  gIP = target->createMCInstPrinter(llvm::Triple(gTriple),
      AsmInfo->getAssemblerDialect(), *AsmInfo, *gMII, *gMRI);
  gIP->setPrintImmHex(true);
  gIP->setPrintBranchImmAsAddress(true);
}

extern "C" void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte) {
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
//difftest
void difftest_skip_ref()
{
  is_skip_ref = true;
  skip_dut_nr_inst = 0;
}

void difftest_skip_dut(int nr_ref, int nr_dut)
{
  skip_dut_nr_inst += nr_dut;
  while (nr_ref-- > 0)ref_difftest_exec(1);
}

void init_difftest(long img_size){
  cpu.pc = CONFIG_MBASE;
  assert(so_file != NULL);
  void *handle;
  handle = dlopen(so_file, RTLD_LAZY);
  assert(handle);
  ref_difftest_memcpy = (void (*)(paddr_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
  printf("difftest init success\n");
}

const char* reg_name(int idx) {
  return regs[idx];
}

void isa_reg_display() {
	for(int i=0; i<32; i=i+2){				//64->16,4 but 8 seem looks better
		printf("%s\t0x%08lx\t", regs[i], cpu.gpr[i]);
		printf("%s\t0x%08lx\n", regs[i+1], cpu.gpr[i+1]);
	}
	printf("pc\t0x%08lx\n", cpu.pc);

}

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t npc) {
  bool eqreg = true; 
  for(int i = 0; i < 32; i++) {
      if(ref_r->gpr[i] != cpu.gpr[i]) {
      	  eqreg = false;
      	  printf("difftest:\n\033[36m%s \033[34mis different at pc = 0x%08lx\n", reg_name(i), cpu.pc);
      	  printf("right %08lx, wrong %08lx\033[0m\n", ref_r->gpr[i], cpu.gpr[i] );
      }
  }
  /*
  if(ref_r->pc != npc) {
    printf("difftest:\nref_r->pc:%08lx\nnpc:%08lx\n",ref_r->pc,npc);
    eqreg = false;
    printf("now pc 0x%08lx\n", cpu.pc);
  }
  */
  return eqreg;
}

static void checkregs(CPU_state *ref, vaddr_t pc)
{
  if (!isa_difftest_checkregs(ref, pc))
  {
    is_exit = 1;
    isa_reg_display();
  }
}

void difftest_step(vaddr_t pc/*, vaddr_t npc*/) {
  CPU_state ref_r;
  /*
  if (skip_dut_nr_inst > 0) {
    if (ref_r.pc == npc) {
      skip_dut_nr_inst = 0;
      checkregs(&ref_r, npc);
      return;
    }
    skip_dut_nr_inst --;
    return;
  }
  */
  //ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  //checkregs(&ref_r, npc);
/*
  if (is_skip_ref) {
    // to skip the checking of an instruction, just copy the reg state to reference design
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }
*/                
  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  checkregs(&ref_r, pc);
}

//仿真初始化
void init(){
  dut = new VTop;
  Verilated::traceEverOn(true);
  m_trace = new VerilatedVcdC;
  dut->trace(m_trace, 99);
  m_trace->open("waveform.vcd");
  init_disasm("riscv64");
  init_log(log_file);
  printf("init sim success\n");
}
//退出仿真
void sim_exit(){
  delete dut;
  m_trace->close();
  exit(EXIT_SUCCESS);
}

void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}


void itrace(Decode *s){
  s->pc = now_pc;
  s->val = now_inst;
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = 4;
  int i;
  uint8_t *inst = (uint8_t *)&s->val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 8;
  int space_len = 4;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,s->pc, (uint8_t *)&s->val, ilen);
  log_write("%s\n", s->logbuf);
}

void ftrace(){
  fd = fopen(elf_file,"r");
  int a = 0;
  fseek(fd,0,SEEK_SET);
  a=fread(&ehdr,sizeof(Elf64_Ehdr),1,fd);
  if (0 == a)
  {
    printf("fail to read head\n");
    exit(0);
  }
  str_base = find_strtab(fd, shdr, ehdr);
  symbol_base = find_symtab(fd, shdr, ehdr);
  int i=0;
  a = 0;
  for(i=0;i<inst_num;i++){
    //初始化指针
    fseek(fd, symbol_base, SEEK_SET);
    a = fread(&shdr, sizeof(Elf64_Shdr), 1, fd);
    fseek(fd, shdr.sh_offset, SEEK_SET);
    a = fread(&symdr, sizeof(Elf64_Sym), 1, fd);
    //找到对应的函数名
    int num = shdr.sh_size/shdr.sh_entsize;
    for(int j=0; j < num; j++){
      if (a == 0)
        {
          printf("fail to read symbol_entry\n");
          exit(0);
        }
      if(symdr.st_info == 18 && addr[i] >= symdr.st_value && addr[i] < symdr.st_value + symdr.st_size){
        Elf64_Word start = symdr.st_name;
        fseek(fd, str_base, SEEK_SET);
        a = fread(&shdr, sizeof(Elf64_Shdr), 1, fd);
        fseek(fd, shdr.sh_offset+start, SEEK_SET);
        a = fread(strtab, sizeof(Elf64_Sym), 1, fd);
        if(call[i])
        {
          space ++;
          printf("%lx:",addr[i]);
          printf("%*s",space,"");
          printf("call[%s@%lx]\n",strtab,symdr.st_value);
        }
        else 
        {
          space --;
          printf("%lx:",addr[i]);
          printf("%*s",space,"");
          printf("ret[%s@%lx]\n",strtab,symdr.st_value);
        }
        memset(strtab, 0 ,sizeof(strtab));
        break;
      }
      else a = fread(&symdr,sizeof(Elf64_Sym),1,fd);
    }
  }
}

int cmd_c(){
  if(sim_time < 2) {
    dut->reset = 1; 
    dut->eval();
  }
  else{
    dut->reset = 0;
    dut->eval();
    if(sim_time % 2 == 1){
      if(dut->clock == 1){
          if(sim_time >= 2){
            cpu.gpr[0] = 0;
            for(int i = 1; i < 32; i++) cpu.gpr[i] = cpu_gpr[i];
            difftest_step(cpu.pc);
          }
          printf("next_pc: %lx next_inst: %x MemWen: %d MemLoad: %d\n", dut->io_pc, dut->io_inst, dut->io_MemWen, dut->io_MemLoad);
          cpu.pc = dut->io_pc;
      }
    }
  }
  if(stop || is_exit){
    printf("stop at %lx\n", dut->io_pc);
    return 1;
  }
  if(sim_time % 2 == 0){
    dut->clock = 1;
  }
  if(sim_time % 2 == 1){
    dut->clock = 0;
  }
  m_trace->dump(sim_time);
  sim_time++;
  return 0;
}
char readChar() {
  char input;
  std::cin >> input;
  return input;
}
void executeCommand(char input) {
  switch(input) {
    case 'c':
      while(!is_exit && !stop)cmd_c();
      break;
    case 'r':
      isa_reg_display();
      break;
    case 's':
      cmd_c();
      break;
    default:
      std::cout << "Invalid command" << std::endl;
      break;
  }
}

int main(int argc, char** argv, char** env) {
  Decode s;
  img_size = load_img(img_file);
  init_difftest(img_size);
  init();
  while(sim_time < MAX_SIM_TIME && !stop && !is_exit){
    char input = readChar();
    executeCommand(input);
  }
  if(is_exit||stop){
      if(cpu.gpr[10] != 0) printf("\033[1;31mHIT BAD TRAP\33[0m\n");
      else  printf("\033[1;32mHIT GOOD TRAP\33[0m\n");
    }
  else {
      printf("\033[1;31mLOOP!\33[0m\n");
      assert(0);
  }
  ftrace();
  dump_gpr();
  sim_exit();
}
