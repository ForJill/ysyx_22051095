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
    VL_IN8(reset,0,0);
    VL_OUT8(io_ctrl_RegWen,0,0);
    VL_OUT8(io_ctrl_OP,3,0);
    VL_OUT8(io_ctrl_J_JUMP,0,0);
    VL_OUT8(io_op,3,0);
    CData/*1:0*/ Top__DOT__decoder__DOT__ImmType;
    CData/*4:0*/ Top__DOT__registers__DOT__registers_io_rdata1_MPORT_addr;
    CData/*0:0*/ __Vtrigrprev__TOP__clock;
    CData/*0:0*/ __VactContinue;
    VL_IN(io_inst,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(io_pc,63,0);
    VL_OUT64(io_resultALU,63,0);
    VL_OUT64(io_rs1,63,0);
    VL_OUT64(io_rs2,63,0);
    VL_OUT64(io_imm,63,0);
    QData/*63:0*/ Top__DOT__PC__DOT__init;
    QData/*63:0*/ Top__DOT__PC__DOT___init_T_1;
    QData/*63:0*/ Top__DOT__alu__DOT__op1;
    QData/*63:0*/ Top__DOT__alu__DOT___result_T_3;
    QData/*63:0*/ Top__DOT__registers__DOT__registers_MPORT_data;
    VlUnpacked<QData/*63:0*/, 32> Top__DOT__registers__DOT__registers;
    VlUnpacked<QData/*63:0*/, 32> Top__DOT__dpi__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
