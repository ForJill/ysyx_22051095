// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop__Syms.h"
#include "VTop___024unit.h"

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void VTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void VTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void ebreak(int flag);

VL_INLINE_OPT void VTop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ flag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop___024unit____Vdpiimwrap_ebreak_TOP____024unit\n"); );
    // Body
    int flag__Vcvt;
    for (size_t flag__Vidx = 0; flag__Vidx < 1; ++flag__Vidx) flag__Vcvt = flag;
    ebreak(flag__Vcvt);
}

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void VTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 36> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {35, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void get_inst(long long inst);

VL_INLINE_OPT void VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit(QData/*63:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit\n"); );
    // Body
    long long inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    get_inst(inst__Vcvt);
}

extern "C" void get_pc(long long pc);

VL_INLINE_OPT void VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit\n"); );
    // Body
    long long pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    get_pc(pc__Vcvt);
}
