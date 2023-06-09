// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop___024root.h"

VL_INLINE_OPT void VTop___024root___ico_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[0U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[1U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[3U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[4U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[0U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[1U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[2U] = 0U;
    } else {
        if (((~ (IData)(vlSelf->Top__DOT__exu__DOT__mul__DOT__start)) 
             & (4U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)))) {
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[0U] 
                = ((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                   << 1U);
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[1U] 
                = (((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                    >> 0x1fU) | ((IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[2U] 
                = ((2U & ((IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                   >> 0x3fU)) << 1U)) 
                   | ((IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                               >> 0x20U)) >> 0x1fU));
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[3U] = 0U;
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[4U] = 0U;
        } else {
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[0U] 
                = (vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[0U] 
                   << 2U);
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[1U] 
                = ((vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[0U] 
                    >> 0x1eU) | (vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[1U] 
                                 << 2U));
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[2U] 
                = ((vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[1U] 
                    >> 0x1eU) | (vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[2U] 
                                 << 2U));
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[3U] 
                = ((vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[2U] 
                    >> 0x1eU) | (vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[3U] 
                                 << 2U));
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[4U] 
                = ((vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[3U] 
                    >> 0x1eU) | (vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[4U] 
                                 << 2U));
        }
        if (((~ (IData)(vlSelf->Top__DOT__exu__DOT__mul_1__DOT__start)) 
             & (5U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)))) {
            vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[0U] 
                = (IData)(((QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1)) 
                           << 1U));
            vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[1U] 
                = (IData)((((QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1)) 
                            << 1U) >> 0x20U));
            vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[2U] = 0U;
        } else {
            vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[0U] 
                = (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                   << 2U);
            vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[1U] 
                = ((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                    >> 0x1eU) | (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                 << 2U));
            vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[2U] 
                = ((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                    >> 0x1eU) | (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                 << 2U));
        }
    }
    vlSelf->Top__DOT__ifu_io_inst_sram_req = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ 
                                                  ((IData)(vlSelf->Top__DOT__idu__DOT__rawblock) 
                                                   | (IData)(vlSelf->Top__DOT__ifu__DOT__mid_handshake_inst))) 
                                                 & (IData)(vlSelf->Top__DOT__ifu__DOT__fs_allow_in)));
    vlSelf->Top__DOT__ifu__DOT___GEN_4 = (((IData)(vlSelf->Top__DOT__ifu_io_inst_sram_addr_ok) 
                                           & ((~ (IData)(vlSelf->Top__DOT__ifu__DOT__fs_allow_in)) 
                                              & (IData)(vlSelf->Top__DOT__ifu_io_inst_sram_req))) 
                                          | ((~ (IData)(vlSelf->Top__DOT__ifu__DOT__fs_allow_in)) 
                                             & (IData)(vlSelf->Top__DOT__ifu__DOT__mid_handshake_inst)));
    vlSelf->Top__DOT__axi__DOT___GEN_7 = (((~ (IData)(vlSelf->Top__DOT__exu_io_data_sram_req)) 
                                           & ((IData)(vlSelf->Top__DOT__ifu_io_inst_sram_req) 
                                              & (IData)(vlSelf->Top__DOT__axi__DOT____VdfgTmp_h0ac213f2__0))) 
                                          | ((~ (IData)(vlSelf->Top__DOT__axi__DOT___T_16)) 
                                             & (IData)(vlSelf->Top__DOT__axi__DOT__reading_inst_sram)));
}

void VTop___024root___eval_ico(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VTop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VTop___024root___eval_act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_act\n"); );
}

void VTop___024root___eval_triggers__ico(VTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf);
#endif  // VL_DEBUG
void VTop___024root___eval_triggers__act(VTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf);
#endif  // VL_DEBUG
void VTop___024root___eval_nba(VTop___024root* vlSelf);

void VTop___024root___eval(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VTop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Top.v", 6832, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VTop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VTop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VTop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/Top.v", 6832, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VTop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Top.v", 6832, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VTop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
