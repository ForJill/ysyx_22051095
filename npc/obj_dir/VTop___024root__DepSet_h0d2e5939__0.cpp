// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop___024root.h"

void VTop___024root___eval_act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_act\n"); );
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__2(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->Top__DOT__axi_mem__DOT__write_state = vlSelf->Top__DOT__axi_mem__DOT__write_next_state;
    vlSelf->Top__DOT__axi_mem__DOT__read_state = vlSelf->Top__DOT__axi_mem__DOT__read_next_state;
}

extern const VlUnpacked<CData/*2:0*/, 128> VTop__ConstPool__TABLE_h6a5d14e0_0;
extern const VlUnpacked<CData/*2:0*/, 64> VTop__ConstPool__TABLE_h3ceec7af_0;

VL_INLINE_OPT void VTop___024root___nba_comb__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->Top__DOT__axi__DOT___GEN_15 = ((3U == (IData)(vlSelf->Top__DOT__axi__DOT__wstate))
                                            ? ((4U 
                                                == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))
                                                ? 0U
                                                : (IData)(vlSelf->Top__DOT__axi__DOT__wstate))
                                            : (IData)(vlSelf->Top__DOT__axi__DOT__wstate));
    vlSelf->__Vtableidx2 = (((1U == (IData)(vlSelf->Top__DOT__axi__DOT__wstate)) 
                             << 6U) | (((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state)) 
                                        << 5U) | ((
                                                   (2U 
                                                    == (IData)(vlSelf->Top__DOT__axi__DOT__wstate)) 
                                                   << 4U) 
                                                  | (((3U 
                                                       == (IData)(vlSelf->Top__DOT__axi__DOT__wstate)) 
                                                      << 3U) 
                                                     | (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state)))));
    vlSelf->Top__DOT__axi_mem__DOT__write_next_state 
        = VTop__ConstPool__TABLE_h6a5d14e0_0[vlSelf->__Vtableidx2];
    vlSelf->Top__DOT__axi__DOT___GEN_2 = ((3U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
                                           ? 0U : (IData)(vlSelf->Top__DOT__axi__DOT__rstate));
    vlSelf->__Vtableidx1 = (((2U == (IData)(vlSelf->Top__DOT__axi__DOT__rstate)) 
                             << 5U) | (((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state)) 
                                        << 4U) | ((
                                                   (1U 
                                                    == (IData)(vlSelf->Top__DOT__axi__DOT__rstate)) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))));
    vlSelf->Top__DOT__axi_mem__DOT__read_next_state 
        = VTop__ConstPool__TABLE_h3ceec7af_0[vlSelf->__Vtableidx1];
}

void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf);
void VTop___024root___nba_sequent__TOP__1(VTop___024root* vlSelf);

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VTop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VTop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VTop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VTop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
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
                    VL_FATAL_MT("vsrc/Top.v", 990, "", "Active region did not converge.");
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
                VL_FATAL_MT("vsrc/Top.v", 990, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->io_clock & 0xfeU))) {
        Verilated::overWidthError("io_clock");}
}
#endif  // VL_DEBUG
