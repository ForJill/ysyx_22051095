#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <assert.h>

#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define PG_ALIGN __attribute((aligned(4096)))

typedef uint64_t paddr_t;
typedef uint64_t vaddr_t;

uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {0};
uint8_t *guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
static inline paddr_t host_read(void *addr, int len);

void load_img(char *img_file)
{
  FILE *fp = fopen(img_file, "rb");
  //若文件为空，输出报错
  if(fp == NULL){
    printf("Cannot open image file\n");
  }
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  printf("The image is %s, size = %ld\n", img_file, size);
  int ret = fread(guest_to_host(CONFIG_MBASE), size, 1, fp);
  fclose(fp);
}

static inline paddr_t host_read(void *addr, int len)
{
  switch (len)
  {
  case 1:
    return *(uint8_t *)addr;
  case 2:
    return *(uint16_t *)addr;
  case 4:
    return *(uint32_t *)addr;
  case 8:
    return *(uint64_t *)addr;
  default:
    assert(0);
    return 0;
  }
}

static inline void host_write(void *addr, int len, paddr_t data)
{
  switch (len)
  {
  case 1:
    *(uint8_t *)addr = data;
    break;
  case 2:
    *(uint16_t *)addr = data;
    break;
  case 4:
    *(uint32_t *)addr = data;
    break;
  case 8:
    *(uint64_t *)addr = data;
    break;
  default:
    assert(0);
  }
}

uint64_t pmem_read(paddr_t addr, int len)
{
  uint64_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

void pmem_write(paddr_t addr, int len, uint64_t data)
{
  host_write(guest_to_host(addr), len, data);
}
