#include "common.h"
extern int is_exit;
extern int stop;
extern uint64_t *cpu_gpr;
extern uint32_t now_inst;
extern uint64_t now_pc;
extern long long boot_time;
extern long long now_time;
extern struct timeval now;

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
  if (raddr == RTC_ADDR)
  {
    if (boot_time == 0)
    {
      gettimeofday(&now, NULL);
      boot_time = now.tv_sec * 1000000 + now.tv_usec;
      *rdata = 0;
      return;
    }
    gettimeofday(&now, NULL);
    now_time = now.tv_sec * 1000000 + now.tv_usec;
    *rdata = now_time - boot_time;
    return;
  }
  if (raddr < CONFIG_MBASE || raddr > CONFIG_MBASE + CONFIG_MSIZE)
  {
    //printf("pmem_read: invalid address 0x%llx\n", raddr);
    return;
  }
  *rdata = *((long long *)guest_to_host(raddr));
  // printf("pmem_read: 0x%llx -> 0x%llx\n", raddr, *rdata);
}
extern "C" void pmem_write(long long waddr, long long wdata, char wmask)
{
  if (waddr == SERIAL_PORT)
  {
    putchar(wdata & 0xff);
    return;
  }
  if (waddr < CONFIG_MBASE || waddr > CONFIG_MBASE + CONFIG_MSIZE)
  {
    // printf("pmem_write: invalid address 0x%llx", waddr);
    return;
  }
  // printf("pmem_write: 0x%llx <- 0x%llx (0x%x)", waddr, wdata, wmask);
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