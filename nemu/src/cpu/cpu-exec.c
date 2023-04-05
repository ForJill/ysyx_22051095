/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include "ringbuf.h"
#include "ftrace.h"
#include "/home/ljw/Desktop/ysyx-workbench/nemu/src/monitor/sdb/sdb.h"
/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 20

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;
//irringbuf
int inst_len[1024] = {0};
ringbuf r;
//ftrace
int space = 0;
int inst_num = 0;
extern FILE *fd;
extern Elf64_Ehdr ehdr;
Elf64_Shdr shdr;
Elf64_Sym symdr;
Elf64_Off symbol_base = 0;
Elf64_Off str_base = 0;
vaddr_t addr[1000]={0};
int call[1000]={0};
unsigned char strtab[1000]={0};

void device_update();

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
  #ifdef CONFIG_WATCHPOINT
  bool hit_watchpoint = checkWP();
  if (hit_watchpoint){
	  nemu_state.state = NEMU_STOP;
  }
  #endif
}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#endif     
#ifdef CONFIG_MTRACE
  //把p指向的内容赋给q
  char *q = s->logbuf;
  *q = *p;
  //把q的内容写入ringbuf
  strcat(q, "\n");
  ringbuf_write(&r,q,strlen(q));
  inst_len[g_nr_guest_inst] = strlen(q);
#endif
#ifdef CONFIG_FTRACE
  if ((BITS(s->isa.inst.val,6,0) == 0x67 && BITS(s->isa.inst.val,14,12) == 0x0 && s->isa.inst.val != 0x8067) || BITS(s->isa.inst.val,6,0)==0x6f){
    addr[inst_num] = s->pc;
    call[inst_num] = 1;
    inst_num++;
  }
  else if(s->isa.inst.val == 0x8067){
    addr[inst_num] = s->pc;
    call[inst_num] = 0;
    inst_num++;
  }
#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
#ifdef CONFIG_FTRACE
  str_base = find_strtab(fd, shdr, ehdr);
  symbol_base = find_symtab(fd, shdr, ehdr);
  int i=0;
  int a=0;
  for(i=0;i<inst_num;i++){
    //初始化指针
    fseek(fd, symbol_base, SEEK_SET);
    a = fread(&shdr, sizeof(Elf64_Shdr), 1, fd);
    fseek(fd, shdr.sh_offset, SEEK_SET);
    a = fread(&symdr, sizeof(Elf64_Sym), 1, fd);
    //找到对应的函数名
    int num = shdr.sh_size/shdr.sh_entsize;
    for(int j=0; j < num; j++){
      if (a == 0)
        {
          printf("fail to read symbol_entry\n");
          exit(0);
        }
      if(symdr.st_info == 18 && addr[i] >= symdr.st_value && addr[i] < symdr.st_value + symdr.st_size){
        Elf64_Word start = symdr.st_name;
        fseek(fd, str_base, SEEK_SET);
        a = fread(&shdr, sizeof(Elf64_Shdr), 1, fd);
        fseek(fd, shdr.sh_offset+start, SEEK_SET);
        a = fread(strtab, sizeof(Elf64_Sym), 1, fd);
        if(call[i])
        {
          space ++;
          printf("%lx:",addr[i]);
          printf("%*s",space,"");
          printf("call[%s@%lx]\n",strtab,symdr.st_value);
        }
        else 
        {
          space --;
          printf("%lx:",addr[i]);
          printf("%*s",space,"");
          printf("ret[%s@%lx]\n",strtab,symdr.st_value);
        }
        memset(strtab, 0 ,sizeof(strtab));
        break;
      }
      else a = fread(&symdr,sizeof(Elf64_Sym),1,fd);
    }
  }
#endif
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");

#ifdef CONFIG_MTRACE
  Log("Wrong instruction trace:\n");
  char buf[1024];
  while (ringbuf_read(&r, buf, 1024) > 0){
    printf("%s",buf);
  }
  printf("wrong instruction upper here\n");
  ringbuf_destroy(&r);
#endif
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  #ifdef CONFIG_MTRACE
  ringbuf_create(&r, 1024);
  #endif
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  execute(n);

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
