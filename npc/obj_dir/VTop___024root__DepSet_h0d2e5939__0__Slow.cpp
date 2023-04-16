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
                VL_FATAL_MT("vsrc/Top.v", 1034, "", "Settle region did not converge.");
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
    vlSelf->io_ctrl_OP = VL_RAND_RESET_I(6);
    vlSelf->io_ctrl_J_JUMP = VL_RAND_RESET_I(1);
    vlSelf->io_ctrl_MemWen = VL_RAND_RESET_I(1);
    vlSelf->io_ctrl_wmask = VL_RAND_RESET_I(8);
    vlSelf->io_ctrl_MemLoad = VL_RAND_RESET_I(1);
    vlSelf->io_resultALU = VL_RAND_RESET_Q(64);
    vlSelf->io_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->io_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->io_imm = VL_RAND_RESET_Q(64);
    vlSelf->io_op = VL_RAND_RESET_I(4);
    vlSelf->io_MemWen = VL_RAND_RESET_I(1);
    vlSelf->io_MemLoad = VL_RAND_RESET_I(1);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__PC__DOT__init = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__PC__DOT___init_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT___result_T_5 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_15 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_23 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT___result_T_38 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_40 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_42 = VL_RAND_RESET_Q(33);
    vlSelf->Top__DOT__alu__DOT___result_T_49 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_58 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT___result_T_59 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT___result_T_62 = VL_RAND_RESET_Q(63);
    vlSelf->Top__DOT__alu__DOT___result_T_84 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___GEN_6 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_102 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_109 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_115 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT___result_T_118 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__alu__DOT___result_T_129 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__alu__DOT___result_T_148 = VL_RAND_RESET_Q(63);
    vlSelf->Top__DOT__alu__DOT___result_T_157 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_174 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__alu__DOT___result_T_188 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->Top__DOT__alu__DOT___result_T_220);
    VL_RAND_RESET_W(128, vlSelf->Top__DOT__alu__DOT___result_T_244);
    VL_RAND_RESET_W(128, vlSelf->Top__DOT__alu__DOT___result_T_266);
    VL_RAND_RESET_W(128, vlSelf->Top__DOT__alu__DOT___result_T_290);
    vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0 = 0;
    vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0 = 0;
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_130 = VL_RAND_RESET_I(6);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_145 = VL_RAND_RESET_I(6);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_160 = VL_RAND_RESET_I(6);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_215 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_245 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_260 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_275 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__decoder__DOT__ImmType = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_305 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_322 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_339 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_370 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_387 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_441 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__decoder__DOT___J_T_4 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(84, vlSelf->Top__DOT__decoder__DOT___io_imm_T_9);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Top__DOT__registers__DOT__registers[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__registers__DOT__registers_MPORT_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Top__DOT__dpi__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__ifu__DOT__data_mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_pmem_read__4__rdata = 0;
    vlSelf->__Vtask_pmem_read__5__rdata = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
