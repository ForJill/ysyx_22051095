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

#include <isa.h>
int intr_time = 0;
word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  cpu.csr.mcause = NO;
  cpu.csr.mepc = epc;
  #ifdef CONFIG_ETRACE
  {
    intr_time ++;
    //printf("Raise interrupt %ld at epc = 0x%08lx, intr_time = %d\n", NO, epc, intr_time);
    //printf("cpu.csr.mepc = 0x%08lx, cpu.csr.mtvec = 0x%08lx, cpu.csr.mstatus = 0x%08lx, cpu.csr.mcause = 0x%08lx\n", cpu.csr.mepc, cpu.csr.mtvec, cpu.csr.mstatus, cpu.csr.mcause);
  }
  #endif
  //printf("Raise interrupt %ld at epc = 0x%08lx\n", NO, epc);
  return cpu.csr.mtvec;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
