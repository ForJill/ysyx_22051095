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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_ctrl_RegWen,0,0);
        VL_OUT8(io_ctrl_OP,5,0);
        VL_OUT8(io_ctrl_J_JUMP,0,0);
        VL_OUT8(io_ctrl_MemWen,0,0);
        VL_OUT8(io_ctrl_wmask,7,0);
        VL_OUT8(io_ctrl_MemLoad,0,0);
        VL_OUT8(io_op,3,0);
        VL_OUT8(io_MemWen,0,0);
        VL_OUT8(io_MemLoad,0,0);
        CData/*0:0*/ Top__DOT__alu__DOT___result_T_58;
        CData/*0:0*/ Top__DOT__alu__DOT___result_T_59;
        CData/*0:0*/ Top__DOT__alu__DOT___result_T_129;
        CData/*5:0*/ Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0;
        CData/*4:0*/ Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0;
        CData/*5:0*/ Top__DOT__decoder__DOT___crtlsignals_T_130;
        CData/*5:0*/ Top__DOT__decoder__DOT___crtlsignals_T_145;
        CData/*5:0*/ Top__DOT__decoder__DOT___crtlsignals_T_160;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_215;
        CData/*2:0*/ Top__DOT__decoder__DOT___crtlsignals_T_245;
        CData/*2:0*/ Top__DOT__decoder__DOT___crtlsignals_T_260;
        CData/*2:0*/ Top__DOT__decoder__DOT___crtlsignals_T_275;
        CData/*2:0*/ Top__DOT__decoder__DOT__ImmType;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_305;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_322;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_339;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_370;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_387;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_441;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        VL_OUT(io_inst,31,0);
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_5;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_15;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_38;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_40;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_49;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_84;
        IData/*31:0*/ Top__DOT__alu__DOT___GEN_6;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_102;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_109;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_157;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_174;
        VlWide<4>/*127:0*/ Top__DOT__alu__DOT___result_T_220;
        VlWide<4>/*127:0*/ Top__DOT__alu__DOT___result_T_244;
        VlWide<4>/*127:0*/ Top__DOT__alu__DOT___result_T_266;
        VlWide<4>/*127:0*/ Top__DOT__alu__DOT___result_T_290;
        VlWide<3>/*83:0*/ Top__DOT__decoder__DOT___io_imm_T_9;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(io_pc,63,0);
        VL_OUT64(io_resultALU,63,0);
        VL_OUT64(io_rs1,63,0);
        VL_OUT64(io_rs2,63,0);
        VL_OUT64(io_imm,63,0);
        QData/*63:0*/ Top__DOT__PC__DOT__init;
        QData/*63:0*/ Top__DOT__PC__DOT___init_T_1;
        QData/*63:0*/ Top__DOT__alu__DOT___result_T_23;
        QData/*32:0*/ Top__DOT__alu__DOT___result_T_42;
        QData/*62:0*/ Top__DOT__alu__DOT___result_T_62;
        QData/*63:0*/ Top__DOT__alu__DOT___result_T_115;
        QData/*63:0*/ Top__DOT__alu__DOT___result_T_118;
        QData/*62:0*/ Top__DOT__alu__DOT___result_T_148;
    };
    struct {
        QData/*63:0*/ Top__DOT__alu__DOT___result_T_188;
        QData/*63:0*/ Top__DOT__decoder__DOT___J_T_4;
        QData/*63:0*/ Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data;
        QData/*63:0*/ Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data;
        QData/*63:0*/ Top__DOT__registers__DOT__registers_MPORT_data;
        QData/*63:0*/ Top__DOT__ifu__DOT__inst_mem_rdata;
        QData/*63:0*/ Top__DOT__ifu__DOT__data_mem_rdata;
        QData/*63:0*/ __Vtask_pmem_read__4__rdata;
        QData/*63:0*/ __Vtask_pmem_read__5__rdata;
        VlUnpacked<QData/*63:0*/, 32> Top__DOT__registers__DOT__registers;
        VlUnpacked<QData/*63:0*/, 32> Top__DOT__dpi__DOT__rf;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
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
