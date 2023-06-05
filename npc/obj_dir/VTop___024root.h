// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class VTop__Syms;
class VTop___024unit;


class VTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VTop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(io_clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_op,6,0);
    VL_OUT8(io_in_WB,0,0);
    VL_OUT8(io_ld_type,2,0);
    CData/*2:0*/ Top__DOT__axi_mem__DOT__read_state;
    CData/*2:0*/ Top__DOT__axi_mem__DOT__read_next_state;
    CData/*2:0*/ Top__DOT__axi_mem__DOT__write_state;
    CData/*2:0*/ Top__DOT__axi_mem__DOT__write_next_state;
    CData/*3:0*/ __Vtableidx1;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __Vtrigrprev__TOP__io_clock;
    CData/*0:0*/ __VactContinue;
    VL_OUT(io_fs_pc,31,0);
    VL_OUT(io_wb_pc,31,0);
    VL_OUT(io_wb_inst,31,0);
    VL_OUT(io_ds_pc,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(io_mem_result,63,0);
    QData/*63:0*/ Top__DOT__axi_mem_rdata;
    QData/*63:0*/ Top__DOT__ifu__DOT__fs_pc;
    QData/*63:0*/ Top__DOT__ifu__DOT___nextpc_T_4;
    QData/*63:0*/ Top__DOT__idu__DOT__Registers__DOT__registers_io_rdata2_MPORT_data;
    QData/*63:0*/ Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_1_data;
    VlUnpacked<QData/*63:0*/, 32> Top__DOT__idu__DOT__Registers__DOT__registers;
    VlUnpacked<QData/*63:0*/, 5> Top__DOT__idu__DOT__CSR__DOT__csr;
    VlUnpacked<QData/*63:0*/, 36> Top__DOT__idu__DOT__dpi__DOT__rf;
    VlUnpacked<QData/*63:0*/, 36> Top__DOT__dpi__DOT__rf;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* v__name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
