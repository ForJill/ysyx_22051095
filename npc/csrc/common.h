#ifndef __COMMON_H__
#define __COMMON_H__
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "VTop.h"
#include "VTop__Dpi.h"
#include "verilated_dpi.h"
#include "verilated.h"
#include <verilated_vcd_c.h>
#include <cassert>
#include <unistd.h>
#include <sys/time.h>
#include <time.h>
#include <elf.h>
#include <cstdio>
#include <cstring>
#include <dlfcn.h>
#include <SDL2/SDL.h>

#define MAX_SIM_TIME 100000
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define PG_ALIGN __attribute((aligned(4096)))
#define SERIAL_PORT (DEVICE_BASE + 0x00003f8)
#define CONFIG_PC_RESET_OFFSET 0x0
#define PMEM_LEFT ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)
#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1))

//DEVICE
#define DEVICE_BASE 0xa0000000
#define MMIO_BASE   0xa0000000
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)
#define CONFIG_FB_ADDR 0xa1000000
#define CONFIG_VGA_CTL_MMIO 0xa0000100

typedef uint64_t paddr_t;
typedef uint64_t vaddr_t;
typedef struct{
  vaddr_t mcause;
  vaddr_t mepc;
  vaddr_t mstatus;
  vaddr_t mtvec;
} riscv64_CSR;
typedef struct
{
  uint64_t gpr[32];
  uint64_t pc;
  riscv64_CSR csr;
} CPU_state;
typedef struct Decode
{
  vaddr_t pc;
  vaddr_t snpc; // static next pc
  vaddr_t dnpc; // dynamic next pc
  uint32_t val;
  char logbuf[128];
} Decode;
uint8_t *guest_to_host(paddr_t paddr);

// trace
Elf64_Off find_strtab(FILE *fd);
Elf64_Off find_symtab(FILE *fd);
void ftrace(char *elf_file, int inst_num, int *call, vaddr_t *addr);
void itrace(Decode *s, uint64_t now_pc, uint32_t now_inst);
void init_log(const char *log_file);
void init_ftrace(const char *log_file);
extern "C" void init_disasm(const char *triple);

// difftest
void difftest_skip_ref();
void difftest_skip_dut(int nr_ref, int nr_dut);
void init_difftest(long img_size);
void isa_reg_display();
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t npc);
static void checkregs(CPU_state *ref, vaddr_t pc);
void difftest_step(vaddr_t pc /*, vaddr_t npc*/);

// cmd
char readChar();
void executeCommand(char input);
int cmd_c();
void dump_gpr();
long load_img(char *img_file);

// dpi
void ebreak(int flag);
extern "C" void set_gpr_ptr(const svOpenArrayHandle r);
extern "C" void get_inst(long long inst);
extern "C" void get_pc(long long pc);
extern "C" void pmem_read(long long raddr, long long *rdata);
extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

// vga
typedef uint64_t word_t;
typedef uint16_t ioaddr_t;
typedef void(*io_callback_t)(uint32_t, int, bool);
uint8_t* new_space(int size);
void init_screen();
void update_screen();
void vga_update_screen();
void init_vga();
#define SCREEN_W 400
#define SCREEN_H 300

//kbd
#define KEYDOWN_MASK 0x8000
#define KEY_QUEUE_LEN 1024
void init_i8042();
void i8042_data_io_handler();
void update_kbd();
// config
//#define CONFIG_ITRACE 1
//#define CONFIG_DIFFTEST 1
//#define CONFIG_FTRACE 1
#define CONFIG_WAVEFORM 1
//#define CONFIG_DEVICE 1
#endif
