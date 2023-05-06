#include <common.h>
#include "syscall.h"
#include "fs.h"
#include "timer.h"
void do_syscall(Context *c)
{
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  switch (a[0])
  {
  case SYS_exit:
    printf("SYS_exit\n");
    halt(a[1]);
    break;
  case SYS_yield:
    printf("SYS_yield\n");
    yield();
    c->GPRx = 0;
    break;
  case SYS_open:
    printf("SYS_open\n");
    printf("open file: %s, flags: %d, mode: %d\n", (char *)a[1], a[2], a[3]);
    c->GPRx = fs_open((char *)a[1], a[2], a[3]);
    break;
  case SYS_write:
    c->GPRx = fs_write(a[1], (void *)a[2], a[3]);
    break;
  case SYS_read:
    //printf("SYS_read a[1] = %d, a[2] = %p, a[3] = %p\n", a[1], a[2], a[3]);
    c->GPRx = fs_read(a[1], (void *)a[2], a[3]);
    break;
  case SYS_lseek:
    //printf("SYS_lseek a[1] = %p, a[2] = %p, a[3] = %p\n", a[1], a[2], a[3]);
    c->GPRx = fs_lseek(a[1], a[2], a[3]);
    break;
  case SYS_close:
    printf("SYS_close\n");
    c->GPRx = fs_close(a[1]);
    break;
  case SYS_brk:
    //printf("SYS_brk\n");
    c->GPRx = 0;
    break;
  case SYS_gettimeofday:
    c->GPRx = sys_gettimeofday(a);
    break;

  default:
    panic("Unhandled syscall ID = %d", a[0]);
  }
}
