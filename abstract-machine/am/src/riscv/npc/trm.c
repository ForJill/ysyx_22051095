#include <am.h>
#include <klib-macros.h>
#include <stdio.h>

# define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
static inline void outb(uintptr_t addr, uint8_t  data) { *(volatile uint8_t  *)addr = data; }

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  //while (1);
  //ebreak
  asm volatile("ebreak" : :"r"(code));
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
