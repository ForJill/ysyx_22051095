// difftest
#include "common.h"
extern uint8_t pmem[CONFIG_MSIZE];
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
extern int is_exit;
extern long img_size;
int port = 1234;
uint64_t refpc = 0;
uint64_t pc = 0;
uint64_t npc = 0;
bool is_skip_ref = false;
int skip_dut_nr_inst = 0;
static char *so_file = "/home/ljw/Desktop/ysyx-workbench/npc/riscv64-nemu-interpreter-so";
enum
{
  DIFFTEST_TO_DUT,
  DIFFTEST_TO_REF
};
const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};
extern CPU_state cpu;
void difftest_skip_ref()
{
  is_skip_ref = true;
  skip_dut_nr_inst = 0;
}

void difftest_skip_dut(int nr_ref, int nr_dut)
{
  skip_dut_nr_inst += nr_dut;
  while (nr_ref-- > 0)
    ref_difftest_exec(1);
}

void init_difftest(long img_size)
{
  cpu.pc = CONFIG_MBASE;
  assert(so_file != NULL);
  void *handle;
  handle = dlopen(so_file, RTLD_LAZY);
  assert(handle);
  ref_difftest_memcpy = (void (*)(paddr_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");
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

const char *reg_name(int idx)
{
  return regs[idx];
}

void isa_reg_display()
{
  for (int i = 0; i < 32; i = i + 2)
  { // 64->16,4 but 8 seem looks better
    printf("%s\t0x%08lx\t", regs[i], cpu.gpr[i]);
    printf("%s\t0x%08lx\n", regs[i + 1], cpu.gpr[i + 1]);
  }
  printf("pc\t0x%08lx\n", cpu.pc);
}

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t npc)
{
  bool eqreg = true;
  for (int i = 0; i < 32; i++)
  {
    if (ref_r->gpr[i] != cpu.gpr[i])
    {
      eqreg = false;
      printf("difftest:\n\033[36m%s \033[34mis different at pc = 0x%08lx\n", reg_name(i), cpu.pc);
      printf("right %08lx, wrong %08lx\033[0m\n", ref_r->gpr[i], cpu.gpr[i]);
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

void difftest_step(vaddr_t pc /*, vaddr_t npc*/)
{
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
  // ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  // checkregs(&ref_r, npc);
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