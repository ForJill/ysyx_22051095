#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include <fstream>
#include "VTop.h"
#include "VTop__Dpi.h"
#include "verilated_dpi.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <getopt.h>
#include <cassert>
#include<unistd.h>

#define MAX_SIM_TIME 10
typedef uint64_t paddr_t;
typedef uint64_t vaddr_t;
struct CPU_state
{
  uint64_t gpr[32];
  uint64_t pc;
}cpu;
typedef struct Decode {
  vaddr_t pc;
  vaddr_t snpc; // static next pc
  vaddr_t dnpc; // dynamic next pc
  char logbuf[128];
} Decode;
//导入memory函数
uint64_t pmem_read(paddr_t addr, int len);
void pmem_write(paddr_t addr, int len, uint64_t data);
void load_img(char *img_file);

//设置仿真所需变量初始值
vluint64_t sim_time = 0;
uint64_t *cpu_gpr = NULL;
uint32_t now_inst = 0;
uint64_t now_pc = 0;
int stop = 0;
VTop* dut = NULL;
VerilatedVcdC *m_trace = NULL;
FILE *log_fp = NULL;
static char *log_file = "../log.txt";
#define FMT_WORD "0x%016"PRIx64

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

extern "C" void get_inst(int inst){
  now_inst = inst;
}
extern "C" void get_pc(long long int pc){
  now_pc = pc;
} 

//解析参数读取bin文件
static char *img_file = NULL;
//仿真初始化
void init(){
  dut = new VTop;
  Verilated::traceEverOn(true);
  m_trace = new VerilatedVcdC;
  dut->trace(m_trace, 5);
  m_trace->open("waveform.vcd");
  //init_log(log_file);
}
//退出仿真
void exit(){
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
  s->snpc = s->pc;
  
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)now_inst;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = 8;
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      s->pc, inst, ilen);
  printf("%s\n", s->logbuf);
  //log_write("%s\n", s->logbuf);
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {};
  int o;
  while ((o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1)
  {
    switch (o)
    {
    case 1:
    {
      printf("optarg = %s",optarg);
      img_file = optarg; 
      return 0;
    }
    default:
      exit(0);
    }
  }
  return 0;
}

int main(int argc, char** argv, char** env) {
  Decode s;
  parse_args(argc, argv);
  load_img("/home/ljw/Desktop/ysyx-workbench/am-kernels/tests/cpu-tests/build/add-riscv64-nemu.bin");
  init();
  while(sim_time < 3){
			dut->reset = 1;
      dut->clock ^= 1;
		  dut->eval();
      m_trace->dump(sim_time);
      sim_time++;
    }
  while (sim_time < MAX_SIM_TIME && !stop ) {
      dut->reset = 0;
      dut->io_inst = pmem_read(dut->io_pc, 4);
		  printf("pc:%lx, inst:%x, stop:%d, op=%d\n", dut->io_pc, dut->io_inst,stop,dut->io_ctrl_OP);
      dut->clock =0;
		  dut->eval();
      printf("pc:%lx, inst:%x, stop:%d, op=%d\n", dut->io_pc, dut->io_inst,stop,dut->io_ctrl_OP);
		  dut->clock =1;
      dut->eval();
      m_trace->dump(sim_time);
      sim_time++;
      itrace(&s);
	}
  dump_gpr();
  printf("HIT GOOD TRAP\n");
  exit();
}
