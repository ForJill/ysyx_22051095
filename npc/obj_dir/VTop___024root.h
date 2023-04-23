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
        VL_OUT8(io_ctrl_OP,7,0);
        VL_OUT8(io_ctrl_J_JUMP,0,0);
        VL_OUT8(io_ctrl_MemWen,0,0);
        VL_OUT8(io_ctrl_wmask,7,0);
        VL_OUT8(io_ctrl_MemLoad,0,0);
        VL_OUT8(io_ctrl_csr_wen,0,0);
        VL_OUT8(io_ctrl_E_JUMP,0,0);
        VL_OUT8(io_rd,4,0);
        VL_OUT8(io_op,7,0);
        VL_OUT8(io_MemWen,0,0);
        VL_OUT8(io_MemLoad,0,0);
        VL_OUT8(io_is_b,0,0);
        VL_OUT8(io_wmask,7,0);
        VL_OUT8(io_is_e,0,0);
        VL_OUT8(io_is_csr,0,0);
        CData/*2:0*/ Top__DOT__alu__DOT__CSR_result_MPORT_addr;
        CData/*0:0*/ Top__DOT__alu__DOT___result_T_64;
        CData/*0:0*/ Top__DOT__alu__DOT___result_T_66;
        CData/*5:0*/ Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0;
        CData/*4:0*/ Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0;
        CData/*7:0*/ Top__DOT__decoder__DOT___crtlsignals_T_147;
        CData/*7:0*/ Top__DOT__decoder__DOT___crtlsignals_T_162;
        CData/*7:0*/ Top__DOT__decoder__DOT___crtlsignals_T_177;
        CData/*7:0*/ Top__DOT__decoder__DOT___crtlsignals_T_192;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_242;
        CData/*2:0*/ Top__DOT__decoder__DOT___crtlsignals_T_279;
        CData/*2:0*/ Top__DOT__decoder__DOT___crtlsignals_T_294;
        CData/*2:0*/ Top__DOT__decoder__DOT___crtlsignals_T_309;
        CData/*2:0*/ Top__DOT__decoder__DOT___crtlsignals_T_324;
        CData/*2:0*/ Top__DOT__decoder__DOT__ImmType;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_347;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_364;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_381;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_421;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_438;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_505;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_556;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_573;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_606;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_623;
        CData/*0:0*/ Top__DOT__decoder__DOT___crtlsignals_T_640;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        VL_OUT(io_inst,31,0);
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_5;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_16;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_42;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_44;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_54;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_84;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_94;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_113;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_121;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_167;
        IData/*31:0*/ Top__DOT__alu__DOT___result_T_190;
        VlWide<3>/*64:0*/ Top__DOT__alu__DOT___result_T_237;
        VlWide<4>/*126:0*/ Top__DOT__alu__DOT___result_T_257;
        VlWide<4>/*126:0*/ Top__DOT__alu__DOT___result_T_279;
        VlWide<4>/*126:0*/ Top__DOT__alu__DOT___result_T_301;
        VlWide<4>/*126:0*/ Top__DOT__alu__DOT___result_T_329;
        VlWide<3>/*83:0*/ Top__DOT__decoder__DOT___io_imm_T_9;
    };
    struct {
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(io_pc,63,0);
        VL_OUT64(io_resultALU,63,0);
        VL_OUT64(io_rs1,63,0);
        VL_OUT64(io_rs2,63,0);
        VL_OUT64(io_imm,63,0);
        VL_OUT64(io_rdata,63,0);
        VL_OUT64(io_fmemwdata,63,0);
        VL_OUT64(io_reg17,63,0);
        QData/*63:0*/ Top__DOT__PC__DOT__init;
        QData/*63:0*/ Top__DOT__alu__DOT__CSR_result_MPORT_data;
        QData/*63:0*/ Top__DOT__alu__DOT__CSR_MPORT_data;
        QData/*63:0*/ Top__DOT__alu__DOT__CSR_MPORT_2_data;
        QData/*63:0*/ Top__DOT__alu__DOT___result_T_26;
        QData/*32:0*/ Top__DOT__alu__DOT___result_T_46;
        QData/*63:0*/ Top__DOT__alu__DOT___result_T_128;
        QData/*63:0*/ Top__DOT__alu__DOT___result_T_131;
        QData/*63:0*/ Top__DOT__alu__DOT___result_T_138;
        QData/*63:0*/ Top__DOT__alu__DOT___result_T_205;
        QData/*63:0*/ Top__DOT__decoder__DOT__I;
        QData/*63:0*/ Top__DOT__decoder__DOT___J_T_4;
        QData/*63:0*/ Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data;
        QData/*63:0*/ Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data;
        QData/*63:0*/ Top__DOT__registers__DOT__registers_MPORT_data;
        QData/*63:0*/ Top__DOT__ifu__DOT__inst_mem_rdata;
        QData/*63:0*/ Top__DOT__mem__DOT__data_mem_rdata;
        QData/*63:0*/ __Vtask_pmem_read__4__rdata;
        QData/*63:0*/ __Vtask_pmem_read__5__rdata;
        VlUnpacked<QData/*63:0*/, 5> Top__DOT__alu__DOT__CSR;
        VlUnpacked<QData/*63:0*/, 32> Top__DOT__registers__DOT__registers;
        VlUnpacked<QData/*63:0*/, 36> Top__DOT__dpi__DOT__rf;
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
