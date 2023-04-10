#include <common.h>
#include "syscall.h"
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;
  a[1] = c->GPR2;
  a[2] = c->GPR3;
  a[3] = c->GPR4;
  switch (a[0]) {
    case SYS_exit: printf("SYS_exit\n");halt(a[1]);break;
    case SYS_yield: printf("SYS_yield\n");yield(); c->GPRx=0; break;
    case SYS_write: {
      if(a[1] == 1 || a[1] == 2){
        char *buf = (char*)a[2];
        for(int i = 0; i < a[3]; i++){
          putch(*(buf+i));
        }
        c->GPRx = a[3];
      }
      break;
    }
    case SYS_brk:{
      c->GPRx = 0;
      break;
    }

    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
