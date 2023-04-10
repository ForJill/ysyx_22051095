#include "common.h"
uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {0};
uint8_t *guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
CPU_state cpu;
// 解析参数读取bin文件
static char *img_file = "/home/ljw/Desktop/ysyx-workbench/am-kernels/tests/am-tests/build/amtest-riscv64-npc.bin";
long img_size = 0;
// ftrace
int inst_num = 0;
vaddr_t addr[100000] = {0};
int call[100000] = {0};
Decode s;
static char *elf_file = "/home/ljw/Desktop/ysyx-workbench/am-kernels/tests/am-tests/build/amtest-riscv64-npc.elf";
long long boot_time = 0;
long long now_time = 0;
struct timeval now;
// 设置仿真所需变量初始值
vluint64_t sim_time = 0;
uint64_t *cpu_gpr = NULL;
uint32_t now_inst = 0;
uint64_t now_pc = 0;
int stop = 0;
int is_exit = 0;
VTop *dut = NULL;
//VerilatedVcdC *m_trace = NULL;
static char *log_file = "npc-log.txt";

// 仿真初始化
void init()
{
  dut = new VTop;
  //Verilated::traceEverOn(true);
  //m_trace = new VerilatedVcdC;
  //dut->trace(m_trace, 99);
  //m_trace->open("waveform.vcd");
  init_disasm("riscv64");
#ifdef CONFIG_ITRACE
  init_log(log_file);
#endif
  printf("init sim success\n");
}
// 退出仿真
void sim_exit()
{
  delete dut;
  //m_trace->close();
  exit(EXIT_SUCCESS);
}

int main(int argc, char **argv, char **env)
{
  img_size = load_img(img_file);
#ifdef CONFIG_DIFFTEST
  init_difftest(img_size);
#endif
  init();
  char input = readChar();
  executeCommand(input);
  if (is_exit || stop)
  {
    // if(cpu.gpr[10] != 0) printf("\033[1;31mHIT BAD TRAP\33[0m\n");
    printf("\033[1;32mHIT GOOD TRAP\33[0m\n");
  }
  else
  {
    printf("\033[1;31mLOOP!\33[0m\n");
    assert(0);
  }
#ifdef CONFIG_FTRACE
  ftrace(elf_file, inst_num, call, addr);
#endif
  dump_gpr();
  sim_exit();
}
