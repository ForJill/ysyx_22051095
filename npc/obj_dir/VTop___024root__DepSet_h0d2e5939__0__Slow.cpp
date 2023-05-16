// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop___024root.h"

VL_ATTR_COLD void VTop___024root___eval_static(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    // Body
    VTop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VTop___024root___eval_final(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_final\n"); );
}

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VTop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Top.v", 2037, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VTop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VTop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pc = VL_RAND_RESET_Q(64);
    vlSelf->io_ctrl_RegWen = VL_RAND_RESET_I(1);
    vlSelf->io_ctrl_OP = VL_RAND_RESET_I(8);
    vlSelf->io_ctrl_J_JUMP = VL_RAND_RESET_I(1);
    vlSelf->io_ctrl_MemWen = VL_RAND_RESET_I(1);
    vlSelf->io_ctrl_wmask = VL_RAND_RESET_I(8);
    vlSelf->io_ctrl_MemLoad = VL_RAND_RESET_I(1);
    vlSelf->io_ctrl_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->io_ctrl_E_JUMP = VL_RAND_RESET_I(1);
    vlSelf->io_resultALU = VL_RAND_RESET_Q(64);
    vlSelf->io_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->io_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->io_rd = VL_RAND_RESET_I(5);
    vlSelf->io_imm = VL_RAND_RESET_Q(64);
    vlSelf->io_op = VL_RAND_RESET_I(8);
    vlSelf->io_MemWen = VL_RAND_RESET_I(1);
    vlSelf->io_MemLoad = VL_RAND_RESET_I(1);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_is_b = VL_RAND_RESET_I(1);
    vlSelf->io_wmask = VL_RAND_RESET_I(8);
    vlSelf->io_rdata = VL_RAND_RESET_Q(64);
    vlSelf->io_fmemwdata = VL_RAND_RESET_Q(64);
    vlSelf->io_is_e = VL_RAND_RESET_I(1);
    vlSelf->io_is_csr = VL_RAND_RESET_I(1);
    vlSelf->io_reg17 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__PC__DOT__init = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->Top__DOT__alu__DOT__CSR[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_addr = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT__CSR_MPORT_data = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT__CSR_MPORT_2_data = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT__div_io_div_signed = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT__div_io_quotient = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT__div_io_remainder = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT__div_1_io_dividend = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT__div_1_io_divisor = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT__div_1_io_div_signed = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT__div_1_io_quotient = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT__div_1_io_remainder = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_5 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_16 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_26 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT___result_T_36 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT___result_T_46 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT___result_T_48 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT___result_T_66 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_76 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_86 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT___result_T_89 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT___result_T_96 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT___result_T_125 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_148 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_163 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(127, vlSelf->Top__DOT__alu__DOT___result_T_201);
    VL_RAND_RESET_W(127, vlSelf->Top__DOT__alu__DOT___result_T_223);
    VL_RAND_RESET_W(127, vlSelf->Top__DOT__alu__DOT___result_T_251);
    VL_RAND_RESET_W(127, vlSelf->Top__DOT__alu__DOT___result_T_273);
    vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0 = 0;
    vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0 = 0;
    vlSelf->Top__DOT__alu__DOT__div__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT__div__DOT__end_ = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT__div__DOT___dividend_T_1 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT__div__DOT___dividend_T_3 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->Top__DOT__alu__DOT__div__DOT__A);
    vlSelf->Top__DOT__alu__DOT__div__DOT__B = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT__div__DOT__S = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT__div__DOT__R = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT__div__DOT__cnt = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->Top__DOT__alu__DOT__div__DOT___A_T_12);
    vlSelf->Top__DOT__alu__DOT__div__DOT___cnt_T_1 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__alu__DOT__div__DOT__S_lo_lo = VL_RAND_RESET_I(16);
    vlSelf->Top__DOT__alu__DOT__div__DOT__S_lo = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT__div__DOT__S_hi_lo = VL_RAND_RESET_I(16);
    vlSelf->Top__DOT__alu__DOT__div__DOT__S_hi = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT__div__DOT___S_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT__div__DOT___GEN_131 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT__div__DOT___GEN_134 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_heac6e062__0 = 0;
    vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0 = 0;
    vlSelf->Top__DOT__alu__DOT__div_1__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT__end_ = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___dividend_T_1 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT__A = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT__S = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT__R = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___A_T_12 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___cnt_T_1 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT__S_lo = VL_RAND_RESET_I(16);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_T_1 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___GEN_67 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___GEN_70 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_hea47ad50__0 = 0;
    vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0 = 0;
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_147 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_162 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_177 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_192 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_242 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_279 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_294 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_309 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_324 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__decoder__DOT__ImmType = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_347 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_364 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_381 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_421 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_438 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_505 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_556 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_573 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_606 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_623 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_640 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT__I = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__decoder__DOT___J_T_4 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(84, vlSelf->Top__DOT__decoder__DOT___io_imm_T_9);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Top__DOT__registers__DOT__registers[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__registers__DOT__registers_MPORT_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->Top__DOT__dpi__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__lsu__DOT__data_mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_pmem_read__5__rdata = 0;
    vlSelf->__Vtask_pmem_read__6__rdata = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
