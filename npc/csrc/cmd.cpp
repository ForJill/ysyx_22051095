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
//extern VerilatedVcdC *m_trace;
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
  }
  else
  {
    dut->reset = 0;
    dut->eval();
    if (sim_time % 2 == 1)
    {
      if (dut->clock == 1)
      {
        if (sim_time >= 2)
        {
          cpu.gpr[0] = 0;
          for (int i = 1; i < 32; i++)
            cpu.gpr[i] = cpu_gpr[i];
#ifdef CONFIG_DIFFTEST
          difftest_step(cpu.pc);
#endif
#ifdef CONFIG_ITRACE
          itrace(&s, now_pc, now_inst);
#endif
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
        }
        // printf("next_pc: %lx next_inst: %x MemWen: %d MemLoad: %d\n", dut->io_pc, dut->io_inst, dut->io_MemWen, dut->io_MemLoad);
        cpu.pc = dut->io_pc;
      }
    }
  }
  if (stop || is_exit)
  {
    printf("stop at %lx\n", dut->io_pc);
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
  //m_trace->dump(sim_time);
  sim_time++;
  return 0;
}