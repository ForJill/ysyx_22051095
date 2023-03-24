#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "VTop.h"
#include "VTop__Dpi.h"
#include "verilated.h"
#include <verilated_vcd_c.h>

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;
typedef uint64_t paddr_t;
#define PG_ALIGN __attribute((aligned(4096)))
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {0};
uint8_t* guest_to_host(paddr_t paddr) { return paddr - CONFIG_MBASE + pmem; }

static inline uint32_t host_read(void *addr) {
  return *(uint64_t *)addr;
}

static uint32_t pmem_read(paddr_t addr) {
  uint32_t ret = host_read(guest_to_host(addr));
  return ret;
}
int stop = 0;
void ebreak(int flag) {
  printf("ebreak\n");
  stop = flag;
}

int main(int argc, char** argv) {
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  VTop* top = new VTop{contextp};
  
  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  top->trace(tfp, 0);
  tfp->open("waveform.vcd"); //设置输出的文件wave.vcd
  //memcpy(guest_to_host(0x80000000), inst, sizeof(inst));
	while (sim_time < MAX_SIM_TIME && !stop ) {
		if(sim_time < 3){
			top->reset = 1;
		}else{
      top->reset = 0;
    }
		top->clock ^= 1;
		//dut->io_inst = pmem_read(dut->io_pc);
		top->eval();
		tfp->dump(sim_time);
    printf("pc:%lx, inst:%x, stop:%d\n", top->io_pc, top->io_inst,stop);
		sim_time++;
	}
  delete top;
  tfp->close();
  delete contextp;
  return 0;
}
