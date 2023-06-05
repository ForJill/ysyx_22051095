#include "common.h"
extern int is_exit;
extern int stop;
extern uint64_t *cpu_gpr;
extern uint32_t now_inst;
extern uint64_t now_pc;
extern uint64_t addr[1000];
extern int call[1000];
extern int inst_num;
extern CPU_state cpu;
extern Decode s;
extern int sim_time;
extern VTop *dut;
extern VerilatedVcdC *m_trace;
#define MAX_TIME 3000000
long load_img(char *img_file)
{
  FILE *fp = fopen(img_file, "rb");
  // 若文件为空，输出报错
  if (fp == NULL)
  {
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
char readChar()
{
  char input;
  std::cin >> input;
  return input;
}
void executeCommand(char input)
{
  switch (input)
  {
  case 'c':
    while (!is_exit && !stop)
      cmd_c();
    break;
  case 'r':
    isa_reg_display();
    break;
  case 's':
    cmd_c();
    break;
  case 't':
    //执行十次cmd
    for (int i = 0; i < 10; i++)
    {
      cmd_c();
    }
  default:
    std::cout << "Invalid command" << std::endl;
    break;
  }
}

void dump_gpr()
{
  int i;
  for (i = 0; i < 32; i++)
  {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
  }
}

int cmd_c()
{
  if (sim_time < 2)
  {
    dut->reset = 1;
    dut->eval();
#ifdef CONFIG_DEVICE
    vga_update_screen();
#endif
  }
  else
  {
    dut->reset = 0;
    dut->eval();
#ifdef CONFIG_DEVICE
    vga_update_screen();
    update_kbd();
#endif
    if (sim_time % 2 == 1)
    {
      if (dut->clock == 1)
      {
        if (sim_time >= 2)
        {
          //printf("wb_pc = %lx wb_inst= %lx\n", now_pc, now_inst);
          printf("ds_pc = %x ds_inst= %lx\n", now_pc,now_inst);
          cpu.gpr[0] = 0;
          for (int i = 1; i < 32; i++)
            cpu.gpr[i] = cpu_gpr[i];
          //isa_reg_display();
          cpu.csr.mcause = cpu_gpr[33];
          cpu.csr.mepc = cpu_gpr[34];
          cpu.csr.mstatus = cpu_gpr[35];
          cpu.csr.mtvec = cpu_gpr[36];

#ifdef CONFIG_ITRACE
          itrace(&s, now_pc, now_inst);
#endif
#ifdef CONFIG_DIFFTEST
        if(dut->io_in_WB)
          difftest_step(cpu.pc);
#endif
#ifdef CONFIG_FTRACE
          if ((BITS(now_inst, 6, 0) == 0x67 && BITS(now_inst, 14, 12) == 0x0 && now_inst != 0x8067) || BITS(now_inst, 6, 0) == 0x6f)
          {
            addr[inst_num] = cpu.pc;
            call[inst_num] = 1;
            inst_num++;
          }
          else if (now_inst == 0x8067)
          {
            addr[inst_num] = cpu.pc;
            call[inst_num] = 0;
            inst_num++;
          }
#endif
        }
        cpu.pc = now_pc;
        //if(dut->io_is_e){
        //  printf("eeee!\npc = %lx inst= %lx\n", now_pc, now_inst);
        //  isa_reg_display();
        //  printf("reg17 = %d, ",dut->io_reg17);
        //}
        //if(dut->io_is_csr){
        //  printf("csr!\npc = %lx inst= %lx\n", now_pc, now_inst);
        //  isa_reg_display();
        //}
        if(dut->io_op == 255){ 
        printf("\n\033[36munvalid inst\n");
        printf("pc = %lx inst= %lx\n", now_pc, now_inst);
        isa_reg_display();
        return 1;
        }
      }
    }
  }
  if (stop || is_exit)
  {
    //printf("stop at %lx\n", dut->io_wb_pc);
    return 1;
  }
  if (sim_time % 2 == 0)
  {
    dut->clock = 1;
  }
  if (sim_time % 2 == 1)
  {
    dut->clock = 0;
  }
  //if(sim_time >= MAX_TIME)
  //{
  //  printf("\033[1;31mTIME OUT!\33[0m\n");
  //  return 1;
  //}
#ifdef CONFIG_WAVEFORM
  m_trace->dump(sim_time);
#endif
  sim_time++;
  return 0;
}
