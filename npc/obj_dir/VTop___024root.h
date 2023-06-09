// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class VTop__Syms;
class VTop___024unit;
class VTop_BOOTH_gen;


class VTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VTop___024unit* __PVT____024unit;
    VTop_BOOTH_gen* __PVT__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen;
    VTop_BOOTH_gen* __PVT__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_op,6,0);
        VL_OUT8(io_in_WB,0,0);
        VL_OUT8(io_ld_type,2,0);
        CData/*0:0*/ Top__DOT__ifu_io_ds_allowin;
        CData/*0:0*/ Top__DOT__ifu_io_fs_to_ds_valid;
        CData/*0:0*/ Top__DOT__ifu_io_inst_sram_req;
        CData/*0:0*/ Top__DOT__ifu_io_inst_sram_addr_ok;
        CData/*0:0*/ Top__DOT__ifu_io_inst_sram_data_ok;
        CData/*0:0*/ Top__DOT__idu_io_es_allowin;
        CData/*0:0*/ Top__DOT__idu_io_ds_to_es_valid;
        CData/*7:0*/ Top__DOT__idu_io_de_bus_OP;
        CData/*0:0*/ Top__DOT__idu_io_de_bus_res_from_mem;
        CData/*0:0*/ Top__DOT__idu_io_de_bus_gr_we;
        CData/*0:0*/ Top__DOT__exu_io_ms_allowin;
        CData/*0:0*/ Top__DOT__exu_io_es_to_ms_valid;
        CData/*0:0*/ Top__DOT__exu_io_data_sram_req;
        CData/*0:0*/ Top__DOT__mem_io_ms_to_ws_valid;
        CData/*0:0*/ Top__DOT__ifu__DOT__fs_valid;
        CData/*0:0*/ Top__DOT__ifu__DOT__mid_handshake_inst;
        CData/*0:0*/ Top__DOT__ifu__DOT__inst_valid;
        CData/*0:0*/ Top__DOT__ifu__DOT__fs_ready_go;
        CData/*0:0*/ Top__DOT__ifu__DOT___fs_allow_in_T_1;
        CData/*0:0*/ Top__DOT__ifu__DOT__fs_allow_in;
        CData/*0:0*/ Top__DOT__ifu__DOT___GEN_4;
        CData/*0:0*/ Top__DOT__ifu__DOT___GEN_6;
        CData/*0:0*/ Top__DOT__idu__DOT__Registers_io_wen;
        CData/*0:0*/ Top__DOT__idu__DOT__ds_valid;
        CData/*0:0*/ Top__DOT__idu__DOT___es_rawblock_T_1;
        CData/*0:0*/ Top__DOT__idu__DOT___ms_rawblock_T_1;
        CData/*0:0*/ Top__DOT__idu__DOT__rawblock;
        CData/*0:0*/ Top__DOT__idu__DOT___br_taken_cancel_T;
        CData/*0:0*/ Top__DOT__idu__DOT__br_taken;
        CData/*0:0*/ Top__DOT__idu__DOT__br_taken_cancel;
        CData/*7:0*/ Top__DOT__idu__DOT___crtlsignals_T_147;
        CData/*7:0*/ Top__DOT__idu__DOT___crtlsignals_T_162;
        CData/*7:0*/ Top__DOT__idu__DOT___crtlsignals_T_177;
        CData/*7:0*/ Top__DOT__idu__DOT___crtlsignals_T_192;
        CData/*0:0*/ Top__DOT__idu__DOT___crtlsignals_T_242;
        CData/*2:0*/ Top__DOT__idu__DOT___crtlsignals_T_279;
        CData/*2:0*/ Top__DOT__idu__DOT___crtlsignals_T_294;
        CData/*2:0*/ Top__DOT__idu__DOT___crtlsignals_T_309;
        CData/*2:0*/ Top__DOT__idu__DOT___crtlsignals_T_324;
        CData/*2:0*/ Top__DOT__idu__DOT__ImmType;
        CData/*0:0*/ Top__DOT__idu__DOT___crtlsignals_T_421;
        CData/*0:0*/ Top__DOT__idu__DOT___crtlsignals_T_438;
        CData/*0:0*/ Top__DOT__idu__DOT___crtlsignals_T_505;
        CData/*0:0*/ Top__DOT__idu__DOT___crtlsignals_T_555;
        CData/*0:0*/ Top__DOT__idu__DOT___crtlsignals_T_572;
        CData/*2:0*/ Top__DOT__idu__DOT__csr_index;
        CData/*0:0*/ Top__DOT__idu__DOT____VdfgTmp_hfdb26f4c__0;
        CData/*0:0*/ Top__DOT__idu__DOT____VdfgTmp_h053f3f0d__0;
        CData/*4:0*/ Top__DOT__idu__DOT__Registers__DOT__registers_io_rdata1_MPORT_addr;
        CData/*2:0*/ Top__DOT__idu__DOT__CSR__DOT__csr_io_rdata_MPORT_addr;
        CData/*2:0*/ Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_3_addr;
        CData/*0:0*/ Top__DOT__exu__DOT__mul_io_out_valid;
        CData/*0:0*/ Top__DOT__exu__DOT__mul_1_io_out_valid;
        CData/*0:0*/ Top__DOT__exu__DOT__div_io_div_valid;
        CData/*0:0*/ Top__DOT__exu__DOT__div_io_div_signed;
        CData/*0:0*/ Top__DOT__exu__DOT__div_io_out_valid;
        CData/*0:0*/ Top__DOT__exu__DOT__div_1_io_div_valid;
        CData/*0:0*/ Top__DOT__exu__DOT__div_1_io_div_signed;
        CData/*0:0*/ Top__DOT__exu__DOT__div_1_io_out_valid;
    };
    struct {
        CData/*7:0*/ Top__DOT__exu__DOT__de_bus_r_OP;
        CData/*0:0*/ Top__DOT__exu__DOT__de_bus_r_res_from_mem;
        CData/*0:0*/ Top__DOT__exu__DOT__de_bus_r_gr_we;
        CData/*0:0*/ Top__DOT__exu__DOT__de_bus_r_MemWen;
        CData/*7:0*/ Top__DOT__exu__DOT__de_bus_r_wmask;
        CData/*4:0*/ Top__DOT__exu__DOT__de_bus_r_dest;
        CData/*2:0*/ Top__DOT__exu__DOT__de_bus_r_ld_type;
        CData/*2:0*/ Top__DOT__exu__DOT__de_bus_r_csr_waddr1;
        CData/*2:0*/ Top__DOT__exu__DOT__de_bus_r_csr_waddr2;
        CData/*0:0*/ Top__DOT__exu__DOT__de_bus_r_csr_wen;
        CData/*0:0*/ Top__DOT__exu__DOT__de_bus_r_eval;
        CData/*0:0*/ Top__DOT__exu__DOT__de_bus_r_is_ld;
        CData/*0:0*/ Top__DOT__exu__DOT__es_valid;
        CData/*0:0*/ Top__DOT__exu__DOT__is_div_64;
        CData/*0:0*/ Top__DOT__exu__DOT__is_div_32;
        CData/*0:0*/ Top__DOT__exu__DOT__is_rem_64;
        CData/*0:0*/ Top__DOT__exu__DOT__is_rem_32;
        CData/*0:0*/ Top__DOT__exu__DOT___io_data_sram_req_T;
        CData/*0:0*/ Top__DOT__exu__DOT__es_ready_go;
        CData/*0:0*/ Top__DOT__exu__DOT__mul__DOT__start;
        CData/*0:0*/ Top__DOT__exu__DOT__mul__DOT___GEN_1;
        CData/*0:0*/ Top__DOT__exu__DOT__mul_1__DOT__start;
        CData/*0:0*/ Top__DOT__exu__DOT__mul_1__DOT___GEN_1;
        CData/*0:0*/ Top__DOT__exu__DOT__mul_1__DOT__result_sign;
        CData/*0:0*/ Top__DOT__exu__DOT__div__DOT__start;
        CData/*7:0*/ Top__DOT__exu__DOT__div__DOT__delay;
        CData/*1:0*/ Top__DOT__exu__DOT__div__DOT__clear;
        CData/*0:0*/ Top__DOT__exu__DOT__div__DOT__quotient_sign;
        CData/*0:0*/ Top__DOT__exu__DOT__div__DOT__remainder_sign;
        CData/*7:0*/ Top__DOT__exu__DOT__div__DOT__cnt;
        CData/*7:0*/ Top__DOT__exu__DOT__div__DOT___delay_T_1;
        CData/*0:0*/ Top__DOT__exu__DOT__div__DOT___S_tmp_T_2;
        CData/*7:0*/ Top__DOT__exu__DOT__div__DOT___cnt_T_1;
        CData/*7:0*/ Top__DOT__exu__DOT__div__DOT__S_lo_lo_lo;
        CData/*7:0*/ Top__DOT__exu__DOT__div__DOT__S_lo_hi_lo;
        CData/*7:0*/ Top__DOT__exu__DOT__div__DOT__S_hi_lo_lo;
        CData/*7:0*/ Top__DOT__exu__DOT__div__DOT__S_hi_hi_lo;
        CData/*0:0*/ Top__DOT__exu__DOT__div__DOT___GEN_202;
        CData/*1:0*/ Top__DOT__exu__DOT__div__DOT___clear_T_1;
        CData/*0:0*/ Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0;
        CData/*0:0*/ Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0;
        CData/*0:0*/ Top__DOT__exu__DOT__div_1__DOT__start;
        CData/*7:0*/ Top__DOT__exu__DOT__div_1__DOT__delay;
        CData/*1:0*/ Top__DOT__exu__DOT__div_1__DOT__clear;
        CData/*0:0*/ Top__DOT__exu__DOT__div_1__DOT__quotient_sign;
        CData/*0:0*/ Top__DOT__exu__DOT__div_1__DOT__remainder_sign;
        CData/*7:0*/ Top__DOT__exu__DOT__div_1__DOT__cnt;
        CData/*7:0*/ Top__DOT__exu__DOT__div_1__DOT___delay_T_1;
        CData/*0:0*/ Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2;
        CData/*7:0*/ Top__DOT__exu__DOT__div_1__DOT___cnt_T_1;
        CData/*7:0*/ Top__DOT__exu__DOT__div_1__DOT__S_lo_lo;
        CData/*7:0*/ Top__DOT__exu__DOT__div_1__DOT__S_hi_lo;
        CData/*0:0*/ Top__DOT__exu__DOT__div_1__DOT___GEN_106;
        CData/*1:0*/ Top__DOT__exu__DOT__div_1__DOT___clear_T_1;
        CData/*0:0*/ Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0;
        CData/*0:0*/ Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0;
        CData/*0:0*/ Top__DOT__mem__DOT__ms_valid;
        CData/*0:0*/ Top__DOT__mem__DOT__em_bus_r_res_from_mem;
        CData/*0:0*/ Top__DOT__mem__DOT__em_bus_r_gr_we;
        CData/*4:0*/ Top__DOT__mem__DOT__em_bus_r_dest;
        CData/*2:0*/ Top__DOT__mem__DOT__em_bus_r_ld_type;
        CData/*0:0*/ Top__DOT__mem__DOT__em_bus_r_csr_wen;
        CData/*2:0*/ Top__DOT__mem__DOT__em_bus_r_csr_waddr1;
        CData/*2:0*/ Top__DOT__mem__DOT__em_bus_r_csr_waddr2;
    };
    struct {
        CData/*0:0*/ Top__DOT__mem__DOT__em_bus_r_eval;
        CData/*0:0*/ Top__DOT__mem__DOT__em_bus_r_MemWen;
        CData/*0:0*/ Top__DOT__mem__DOT__ms_ready_go;
        CData/*0:0*/ Top__DOT__wbu__DOT__ws_valid;
        CData/*0:0*/ Top__DOT__wbu__DOT__mw_bus_r_gr_we;
        CData/*4:0*/ Top__DOT__wbu__DOT__mw_bus_r_dest;
        CData/*0:0*/ Top__DOT__wbu__DOT__mw_bus_r_csr_wen;
        CData/*2:0*/ Top__DOT__wbu__DOT__mw_bus_r_csr_waddr1;
        CData/*2:0*/ Top__DOT__wbu__DOT__mw_bus_r_csr_waddr2;
        CData/*0:0*/ Top__DOT__wbu__DOT__mw_bus_r_eval;
        CData/*1:0*/ Top__DOT__axi__DOT__rstate;
        CData/*0:0*/ Top__DOT__axi__DOT__reading_inst_sram;
        CData/*0:0*/ Top__DOT__axi__DOT__reading_data_sram;
        CData/*1:0*/ Top__DOT__axi__DOT__wstate;
        CData/*1:0*/ Top__DOT__axi__DOT__writing_data_sram;
        CData/*0:0*/ Top__DOT__axi__DOT___T_16;
        CData/*0:0*/ Top__DOT__axi__DOT___GEN_7;
        CData/*0:0*/ Top__DOT__axi__DOT___GEN_9;
        CData/*1:0*/ Top__DOT__axi__DOT___GEN_14;
        CData/*1:0*/ Top__DOT__axi__DOT___writing_data_sram_T_1;
        CData/*0:0*/ Top__DOT__axi__DOT____VdfgTmp_h0ac213f2__0;
        CData/*2:0*/ Top__DOT__axi_mem__DOT__read_state;
        CData/*2:0*/ Top__DOT__axi_mem__DOT__read_next_state;
        CData/*2:0*/ Top__DOT__axi_mem__DOT__write_state;
        CData/*2:0*/ Top__DOT__axi_mem__DOT__write_next_state;
        CData/*0:0*/ __VdfgTmp_h68861839__0;
        CData/*4:0*/ __Vtableidx1;
        CData/*5:0*/ __Vtableidx2;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ Top__DOT__exu__DOT__div__DOT__S_lo_lo;
        SData/*15:0*/ Top__DOT__exu__DOT__div__DOT__S_hi_lo;
        SData/*15:0*/ Top__DOT__exu__DOT__div_1__DOT__S_lo;
        VL_OUT(io_fs_pc,31,0);
        VL_OUT(io_wb_pc,31,0);
        VL_OUT(io_wb_inst,31,0);
        VL_OUT(io_ds_pc,31,0);
        IData/*31:0*/ Top__DOT__ifu__DOT__fs_inst;
        IData/*31:0*/ Top__DOT__idu__DOT__fd_bus_r_inst;
        IData/*31:0*/ Top__DOT__idu__DOT__fd_bus_r_pc;
        VlWide<3>/*83:0*/ Top__DOT__idu__DOT___io_de_bus_imm_T_9;
        IData/*31:0*/ Top__DOT__exu__DOT__div_1_io_quotient;
        IData/*31:0*/ Top__DOT__exu__DOT__div_1_io_remainder;
        IData/*31:0*/ Top__DOT__exu__DOT__de_bus_r_ds_pc;
        IData/*31:0*/ Top__DOT__exu__DOT__de_bus_r_inst;
        IData/*31:0*/ Top__DOT__exu__DOT___result_T_5;
        IData/*31:0*/ Top__DOT__exu__DOT___result_T_16;
        IData/*31:0*/ Top__DOT__exu__DOT___result_T_61;
        IData/*31:0*/ Top__DOT__exu__DOT___result_T_71;
        IData/*31:0*/ Top__DOT__exu__DOT___result_T_130;
        IData/*31:0*/ Top__DOT__exu__DOT___result_T_153;
        VlWide<4>/*126:0*/ Top__DOT__exu__DOT___result_T_192;
        VlWide<4>/*126:0*/ Top__DOT__exu__DOT___result_T_208;
        VlWide<4>/*126:0*/ Top__DOT__exu__DOT___result_T_238;
        VlWide<4>/*126:0*/ Top__DOT__exu__DOT___result_T_256;
        VlWide<4>/*126:0*/ Top__DOT__exu__DOT___result_T_282;
        VlWide<5>/*131:0*/ Top__DOT__exu__DOT__mul__DOT__multiplicand_reg;
        VlWide<3>/*65:0*/ Top__DOT__exu__DOT__mul__DOT__multiplier_reg;
        VlWide<5>/*131:0*/ Top__DOT__exu__DOT__mul__DOT__result;
        VlWide<5>/*131:0*/ Top__DOT__exu__DOT__mul__DOT___result_T_4;
        VlWide<5>/*133:0*/ Top__DOT__exu__DOT__mul__DOT___GEN_6;
        VlWide<3>/*67:0*/ Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg;
        VlWide<3>/*67:0*/ Top__DOT__exu__DOT__mul_1__DOT__result;
        VlWide<5>/*131:0*/ Top__DOT__exu__DOT__mul_1__DOT___result_T_5;
    };
    struct {
        VlWide<3>/*69:0*/ Top__DOT__exu__DOT__mul_1__DOT___GEN_7;
        VlWide<4>/*127:0*/ Top__DOT__exu__DOT__div__DOT__A;
        IData/*31:0*/ Top__DOT__exu__DOT__div__DOT__S_lo;
        IData/*31:0*/ Top__DOT__exu__DOT__div__DOT__S_hi;
        VlWide<5>/*128:0*/ Top__DOT__exu__DOT__div__DOT___GEN_199;
        IData/*31:0*/ Top__DOT__exu__DOT__div_1__DOT__dividend_reg;
        IData/*31:0*/ Top__DOT__exu__DOT__div_1__DOT__divisor_reg;
        IData/*31:0*/ Top__DOT__exu__DOT__div_1__DOT__B;
        IData/*31:0*/ Top__DOT__exu__DOT__div_1__DOT__S;
        IData/*31:0*/ Top__DOT__exu__DOT__div_1__DOT___S_T_1;
        VlWide<3>/*64:0*/ Top__DOT__exu__DOT__div_1__DOT___GEN_103;
        IData/*31:0*/ Top__DOT__mem__DOT__em_bus_r_ex_pc;
        IData/*31:0*/ Top__DOT__mem__DOT__em_bus_r_inst;
        IData/*31:0*/ Top__DOT__wbu__DOT__mw_bus_r_mem_pc;
        IData/*31:0*/ Top__DOT__wbu__DOT__mw_bus_r_inst;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VL_OUT64(io_mem_result,63,0);
        QData/*63:0*/ Top__DOT__idu_io_ms_dest_valid_ms_forward_data;
        QData/*63:0*/ Top__DOT__axi_mem_rdata;
        QData/*63:0*/ Top__DOT__ifu__DOT__fs_pc;
        QData/*63:0*/ Top__DOT__ifu__DOT___nextpc_T_3;
        QData/*63:0*/ Top__DOT__idu__DOT__CSR_io_rdata;
        QData/*63:0*/ Top__DOT__idu__DOT__rf_rdata1;
        QData/*63:0*/ Top__DOT__idu__DOT__rf_rdata2;
        QData/*63:0*/ Top__DOT__idu__DOT__I;
        QData/*63:0*/ Top__DOT__idu__DOT___J_T_4;
        QData/*63:0*/ Top__DOT__idu__DOT___br_target_T_1;
        QData/*63:0*/ Top__DOT__idu__DOT__Registers__DOT__registers_MPORT_data;
        QData/*63:0*/ Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_data;
        QData/*63:0*/ Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_2_data;
        QData/*63:0*/ Top__DOT__exu__DOT__div_io_quotient;
        QData/*63:0*/ Top__DOT__exu__DOT__div_io_remainder;
        QData/*63:0*/ Top__DOT__exu__DOT__de_bus_r_imm;
        QData/*63:0*/ Top__DOT__exu__DOT__de_bus_r_rdata1;
        QData/*63:0*/ Top__DOT__exu__DOT__de_bus_r_rdata2;
        QData/*63:0*/ Top__DOT__exu__DOT__de_bus_r_csr_rdata;
        QData/*63:0*/ Top__DOT__exu__DOT___result_T_31;
        QData/*63:0*/ Top__DOT__exu__DOT___result_T_84;
        QData/*63:0*/ Top__DOT__exu__DOT___result_T_91;
        QData/*63:0*/ Top__DOT__exu__DOT___result_T_94;
        QData/*33:0*/ Top__DOT__exu__DOT__mul_1__DOT__multiplier_reg;
        QData/*63:0*/ Top__DOT__exu__DOT__div__DOT__dividend_reg;
        QData/*63:0*/ Top__DOT__exu__DOT__div__DOT__divisor_reg;
        QData/*63:0*/ Top__DOT__exu__DOT__div__DOT__B;
        QData/*63:0*/ Top__DOT__exu__DOT__div__DOT__S;
        QData/*63:0*/ Top__DOT__exu__DOT__div__DOT___S_T_1;
        QData/*63:0*/ Top__DOT__exu__DOT__div_1__DOT__A;
        QData/*63:0*/ Top__DOT__mem__DOT__em_bus_r_alu_result;
        QData/*63:0*/ Top__DOT__mem__DOT__em_bus_r_csr_wdata;
        QData/*63:0*/ Top__DOT__wbu__DOT__mw_bus_r_final_result;
        QData/*63:0*/ Top__DOT__wbu__DOT__mw_bus_r_csr_wdata;
        VlUnpacked<QData/*63:0*/, 32> Top__DOT__idu__DOT__Registers__DOT__registers;
        VlUnpacked<QData/*63:0*/, 5> Top__DOT__idu__DOT__CSR__DOT__csr;
        VlUnpacked<QData/*63:0*/, 36> Top__DOT__idu__DOT__dpi__DOT__rf;
        VlUnpacked<QData/*63:0*/, 36> Top__DOT__dpi__DOT__rf;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
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
