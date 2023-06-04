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

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->Top__DOT__dpi__DOT__rf[0U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[1U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[2U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[3U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[4U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[5U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[6U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[7U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[8U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[9U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0xaU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0xbU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0xcU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0xdU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0xeU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0xfU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x10U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x11U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x12U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x13U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x14U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x15U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x16U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x17U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x18U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x19U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x1aU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x1bU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x1cU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x1dU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x1eU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x1fU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x20U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x21U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x22U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x23U] = 0ULL;
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
                VL_FATAL_MT("vsrc/Top.v", 6638, "", "Settle region did not converge.");
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

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

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
    vlSelf->io_fs_pc = VL_RAND_RESET_I(32);
    vlSelf->io_op = VL_RAND_RESET_I(7);
    vlSelf->io_in_WB = VL_RAND_RESET_I(1);
    vlSelf->io_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->io_wb_inst = VL_RAND_RESET_I(32);
    vlSelf->io_ds_pc = VL_RAND_RESET_I(32);
    vlSelf->io_clock = VL_RAND_RESET_I(1);
    vlSelf->io_mem_result = VL_RAND_RESET_Q(64);
    vlSelf->io_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__ifu_io_ds_allowin = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu_io_es_allowin = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu_io_ds_to_es_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu_io_de_bus_OP = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__idu_io_de_bus_res_from_mem = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu_io_de_bus_gr_we = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu_io_ms_dest_valid_ms_forward_data = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu_io_es_to_ms_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__inst_mem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__data_sram_rdata = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__ifu__DOT__fs_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__ifu__DOT__fs_pc = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__ifu__DOT___nextpc_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__ifu__DOT__fs_allow_in = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__ifu__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT__Registers_io_wen = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT__CSR_io_rdata = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__idu__DOT__ds_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__idu__DOT__fd_bus_r_pc = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__idu__DOT___es_rawblock_T_1 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT___ms_rawblock_T_1 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT__rawblock = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT___br_taken_cancel_T = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT__rf_rdata1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__idu__DOT__rf_rdata2 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__idu__DOT__br_taken = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT__br_taken_cancel = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_147 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_162 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_177 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_192 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_242 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_279 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_294 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_309 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_324 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__idu__DOT__ImmType = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_421 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_438 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_505 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_555 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_572 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__idu__DOT__I = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__idu__DOT___J_T_4 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(84, vlSelf->Top__DOT__idu__DOT___io_de_bus_imm_T_9);
    vlSelf->Top__DOT__idu__DOT__csr_index = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__idu__DOT___br_target_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__idu__DOT____VdfgTmp_hfdb26f4c__0 = 0;
    vlSelf->Top__DOT__idu__DOT____VdfgTmp_h053f3f0d__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers_io_rdata1_MPORT_addr = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers_MPORT_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_io_rdata_MPORT_addr = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_3_addr = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_data = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_2_data = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Top__DOT__exu__DOT__mul_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__mul_1_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div_io_div_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div_io_div_signed = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div_io_quotient = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT__div_io_remainder = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT__div_1_io_div_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div_1_io_div_signed = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div_1_io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div_1_io_quotient = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT__div_1_io_remainder = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_OP = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_res_from_mem = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_gr_we = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_MemWen = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_wmask = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_ds_pc = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_dest = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_imm = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_inst = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_csr_rdata = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_csr_waddr1 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_csr_waddr2 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_eval = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__de_bus_r_is_ld = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__es_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__is_div_64 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__is_div_32 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__is_rem_64 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__is_rem_32 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT___result_T_5 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT___result_T_16 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT___result_T_31 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT___result_T_61 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT___result_T_71 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT___result_T_84 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT___result_T_91 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT___result_T_94 = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT___result_T_130 = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT___result_T_153 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(127, vlSelf->Top__DOT__exu__DOT___result_T_192);
    VL_RAND_RESET_W(127, vlSelf->Top__DOT__exu__DOT___result_T_208);
    VL_RAND_RESET_W(127, vlSelf->Top__DOT__exu__DOT___result_T_238);
    VL_RAND_RESET_W(127, vlSelf->Top__DOT__exu__DOT___result_T_256);
    VL_RAND_RESET_W(127, vlSelf->Top__DOT__exu__DOT___result_T_282);
    vlSelf->Top__DOT__exu__DOT__es_ready_go = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg);
    VL_RAND_RESET_W(66, vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplier_reg);
    VL_RAND_RESET_W(132, vlSelf->Top__DOT__exu__DOT__mul__DOT__result);
    vlSelf->Top__DOT__exu__DOT__mul__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->Top__DOT__exu__DOT__mul__DOT___result_T_4);
    VL_RAND_RESET_W(134, vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6);
    VL_RAND_RESET_W(68, vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg);
    vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplier_reg = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(68, vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result);
    vlSelf->Top__DOT__exu__DOT__mul_1__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5);
    vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result_sign = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(70, vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7);
    vlSelf->Top__DOT__exu__DOT__div__DOT__dividend_reg = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT__div__DOT__divisor_reg = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT__div__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div__DOT__delay = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div__DOT__clear = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__exu__DOT__div__DOT__quotient_sign = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div__DOT__remainder_sign = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->Top__DOT__exu__DOT__div__DOT__A);
    vlSelf->Top__DOT__exu__DOT__div__DOT__B = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT__div__DOT__S = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT__div__DOT__cnt = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div__DOT___delay_T_1 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div__DOT___cnt_T_1 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_lo_lo_lo = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_lo_lo = VL_RAND_RESET_I(16);
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_lo_hi_lo = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_lo = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_hi_lo_lo = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_hi_lo = VL_RAND_RESET_I(16);
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_hi_hi_lo = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_hi = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT__div__DOT___S_T_1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(129, vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199);
    vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_202 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div__DOT___clear_T_1 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0 = 0;
    vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0 = 0;
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__dividend_reg = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__divisor_reg = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__delay = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__clear = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__quotient_sign = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__remainder_sign = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__A = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__S = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT___delay_T_1 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT___cnt_T_1 = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__S_lo_lo = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__S_lo = VL_RAND_RESET_I(16);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__S_hi_lo = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_T_1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->Top__DOT__exu__DOT__div_1__DOT___GEN_103);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT___GEN_106 = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT___clear_T_1 = VL_RAND_RESET_I(2);
    vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0 = 0;
    vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0 = 0;
    vlSelf->Top__DOT__mem__DOT__ms_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_res_from_mem = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_gr_we = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_dest = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_alu_result = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_ex_pc = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_ld_type = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_inst = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_csr_waddr1 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_csr_waddr2 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_eval = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_data_sram_en = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_data_sram_we = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_data_sram_addr = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_data_sram_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__mem__DOT__em_bus_r_data_sram_wmask = VL_RAND_RESET_I(8);
    vlSelf->Top__DOT__wbu__DOT__ws_valid = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__wbu__DOT__mw_bus_r_gr_we = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__wbu__DOT__mw_bus_r_dest = VL_RAND_RESET_I(5);
    vlSelf->Top__DOT__wbu__DOT__mw_bus_r_final_result = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__wbu__DOT__mw_bus_r_mem_pc = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__wbu__DOT__mw_bus_r_inst = VL_RAND_RESET_I(32);
    vlSelf->Top__DOT__wbu__DOT__mw_bus_r_csr_wdata = VL_RAND_RESET_Q(64);
    vlSelf->Top__DOT__wbu__DOT__mw_bus_r_csr_wen = VL_RAND_RESET_I(1);
    vlSelf->Top__DOT__wbu__DOT__mw_bus_r_csr_waddr1 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__wbu__DOT__mw_bus_r_csr_waddr2 = VL_RAND_RESET_I(3);
    vlSelf->Top__DOT__wbu__DOT__mw_bus_r_eval = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 36; ++__Vi0) {
        vlSelf->Top__DOT__dpi__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__VdfgTmp_h68861839__0 = 0;
    vlSelf->__Vtask_pmem_read__9__rdata = 0;
    vlSelf->__Vtask_pmem_read__10__rdata = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
