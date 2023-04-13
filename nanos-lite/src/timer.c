#include <common.h>

struct timeval {
  long tv_sec;
  long tv_usec;
};


uintptr_t sys_gettimeofday(uintptr_t *a) {
  struct timeval* tv = (struct timeval*)a[1];
  uint64_t us = io_read(AM_TIMER_UPTIME).us;
  if (tv != NULL) {
    tv->tv_sec = us / (1000*1000);
    tv->tv_usec = us % (1000*1000);
  }
  return 0;
}
