// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/DPI.v:2:30
    extern void ebreak(int flag);
    // DPI import at vsrc/DPI.v:4:30
    extern void get_inst(long long inst);
    // DPI import at vsrc/DPI.v:5:30
    extern void get_pc(long long pc);
    // DPI import at vsrc/memory.v:2:30
    extern void pmem_read(long long raddr, long long* rdata);
    // DPI import at vsrc/memory.v:3:30
    extern void pmem_write(long long waddr, long long wdata, char wmask);
    // DPI import at vsrc/DPI.v:3:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
