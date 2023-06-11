#include "common.h"
extern int is_exit;
extern int stop;
extern uint64_t *cpu_gpr;
extern uint32_t now_inst;
extern uint64_t now_pc;
extern long long boot_time;
extern long long now_time;
extern struct timeval now;
extern VTop *dut;
extern void *vmem;
extern uint32_t *vgactl_port_base;
extern uint32_t *i8042_data_port_base;
// 导入DPI函数
void ebreak(int flag)
{
  if (flag)
    printf("ebreak\n");
  stop = flag;
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle r)
{
  cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar *)r)->datap());
}

extern "C" void get_inst(long long inst)
{
  now_inst = inst;
}
extern "C" void get_pc(long long pc)
{
  now_pc = pc;
}

// 导入memory函数
extern "C" void pmem_read(long long raddr, long long *rdata)
{
  if (boot_time == 0)
  {
    gettimeofday(&now, NULL);
    boot_time = now.tv_sec * 1000000 + now.tv_usec;
  }
  if (raddr == RTC_ADDR)
  {
    gettimeofday(&now, NULL);
    now_time = now.tv_sec * 1000000 + now.tv_usec;
    *(uint32_t*)rdata = (uint32_t)(now_time- boot_time);
    return;
  }
  if (raddr == RTC_ADDR+4)
  {
    *(uint32_t*)rdata = (uint32_t)((now_time-boot_time)>>32);
    return;
  }
  if(raddr == KBD_ADDR)
  {
    i8042_data_io_handler();
    *(uint32_t*)rdata = i8042_data_port_base[0];
    return ;
  }
  if(raddr == VGACTL_ADDR){
    *(uint32_t*)rdata = vgactl_port_base[0];
    return ;
  }
  if (raddr < CONFIG_MBASE || raddr > CONFIG_MBASE + CONFIG_MSIZE)
  {
    return ;
  }
  *rdata = *((long long *)guest_to_host(raddr));
  printf("pmem_read: 0x%llx -> 0x%llx\n", raddr, *rdata);
}
extern "C" void pmem_write(long long waddr, long long wdata, char wmask)
{
  
  printf("pmem_write: 0x%llx -> 0x%llx\n", waddr, wdata);
  if (waddr == SERIAL_PORT)
  {
    //difftest_skip_ref();
    putchar(wdata & 0xff);
    return;
  }
  if(waddr == VGACTL_ADDR+4){
    vgactl_port_base[1] = wdata;
    return ;
  }
  if(waddr >= FB_ADDR){
    uint32_t *p = (uint32_t *)vmem;
    p[(waddr-FB_ADDR)/4] = wdata;
    return ;
  }
  if (waddr < CONFIG_MBASE || waddr > CONFIG_MBASE + CONFIG_MSIZE)
  {
    return;
  }
  int i;
  uint8_t *len = guest_to_host(waddr);
  uint8_t *p;
  for (i = 0; i < 8; i++)
  {
    if (wmask & (1 << i))
    {
      *len = wdata & 0xff;
      wdata >>= 8;
      len++;
    }
  }
}

extern "C" void skip_ref(int ecall)
{
  if(ecall){
    //printf("ecall\n");
    difftest_skip_ref();
    return ;
  }

}