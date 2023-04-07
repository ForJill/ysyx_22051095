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
#include <cpu/difftest.h>
#include "../local-include/reg.h"
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  for (int i = 0; i < 32; i ++) {
    if (ref_r->gpr[i] != cpu.gpr[i]) {
      printf("reg[%d] = 0x%08lx, ref = 0x%08lx, pc = 0x%08lx, ref_pc = 0x%08lx\n", i, cpu.gpr[i], ref_r->gpr[i], pc, ref_r->pc);
      return false;
    }
  }
  if(ref_r->pc != cpu.pc){
    printf("pc = 0x%08lx, ref_pc = 0x%08lx\n", cpu.pc, ref_r->pc);
    return false;
  }
  if(ref_r->csr.mstatus != cpu.csr.mstatus)
  {
    printf("mstatus = 0x%08lx, ref_mstatus = 0x%08lx, pc = 0x%08lx, ref_pc = 0x%08lx\n", cpu.csr.mstatus, ref_r->csr.mstatus, pc, ref_r->pc);
    return false;
  }
  if(ref_r->csr.mepc != cpu.csr.mepc){
    printf("mepc = 0x%08lx, ref_mepc = 0x%08lx, pc = 0x%08lx, ref_pc = 0x%08lx\n", cpu.csr.mepc, ref_r->csr.mepc, pc, ref_r->pc);
    return false;
  }
  if(ref_r->csr.mcause != cpu.csr.mcause){
    printf("mcause = 0x%08lx, ref_mcause = 0x%08lx, pc = 0x%08lx, ref_pc = 0x%08lx\n", cpu.csr.mcause, ref_r->csr.mcause, pc, ref_r->pc);
    return false;
  }
  if(ref_r->csr.mtvec != cpu.csr.mtvec){
    printf("mtvec = 0x%08lx, ref_mtvec = 0x%08lx, pc = 0x%08lx, ref_pc = 0x%08lx\n", cpu.csr.mtvec, ref_r->csr.mtvec, pc, ref_r->pc);    
    return false;
  }
  return true;
}

void isa_difftest_attach() {
}
