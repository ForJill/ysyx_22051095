// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop___024root.h"

void VTop___024root___ico_sequent__TOP__0(VTop___024root* vlSelf);

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

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__Top__DOT__registers__DOT__registers__v0;
    __Vdlyvdim0__Top__DOT__registers__DOT__registers__v0 = 0;
    QData/*63:0*/ __Vdlyvval__Top__DOT__registers__DOT__registers__v0;
    __Vdlyvval__Top__DOT__registers__DOT__registers__v0 = 0;
    // Body
    __Vdlyvval__Top__DOT__registers__DOT__registers__v0 
        = vlSelf->Top__DOT__registers__DOT__registers_MPORT_data;
    __Vdlyvdim0__Top__DOT__registers__DOT__registers__v0 
        = (0x1fU & (vlSelf->io_inst >> 7U));
    vlSelf->Top__DOT__PC__DOT__init = ((IData)(vlSelf->reset)
                                        ? 0x80000000ULL
                                        : ((IData)(vlSelf->io_ctrl_J_JUMP)
                                            ? ((6U 
                                                == (IData)(vlSelf->io_ctrl_OP))
                                                ? 0ULL
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? vlSelf->Top__DOT__alu__DOT___result_T_3
                                                    : 0ULL))
                                            : vlSelf->Top__DOT__PC__DOT___init_T_1));
    vlSelf->Top__DOT__registers__DOT__registers[__Vdlyvdim0__Top__DOT__registers__DOT__registers__v0] 
        = __Vdlyvval__Top__DOT__registers__DOT__registers__v0;
    vlSelf->io_rs2 = ((0U == (0x1fU & (vlSelf->io_inst 
                                       >> 0x14U))) ? 0ULL
                       : vlSelf->Top__DOT__registers__DOT__registers
                      [(0x1fU & (vlSelf->io_inst >> 0x14U))]);
    vlSelf->Top__DOT__dpi__DOT__rf[0U] = vlSelf->Top__DOT__registers__DOT__registers
        [0U];
    vlSelf->Top__DOT__dpi__DOT__rf[1U] = vlSelf->Top__DOT__registers__DOT__registers
        [1U];
    vlSelf->Top__DOT__dpi__DOT__rf[2U] = vlSelf->Top__DOT__registers__DOT__registers
        [2U];
    vlSelf->Top__DOT__dpi__DOT__rf[3U] = vlSelf->Top__DOT__registers__DOT__registers
        [3U];
    vlSelf->Top__DOT__dpi__DOT__rf[4U] = vlSelf->Top__DOT__registers__DOT__registers
        [4U];
    vlSelf->Top__DOT__dpi__DOT__rf[5U] = vlSelf->Top__DOT__registers__DOT__registers
        [5U];
    vlSelf->Top__DOT__dpi__DOT__rf[6U] = vlSelf->Top__DOT__registers__DOT__registers
        [6U];
    vlSelf->Top__DOT__dpi__DOT__rf[7U] = vlSelf->Top__DOT__registers__DOT__registers
        [7U];
    vlSelf->Top__DOT__dpi__DOT__rf[8U] = vlSelf->Top__DOT__registers__DOT__registers
        [8U];
    vlSelf->Top__DOT__dpi__DOT__rf[9U] = vlSelf->Top__DOT__registers__DOT__registers
        [9U];
    vlSelf->Top__DOT__dpi__DOT__rf[0xaU] = vlSelf->Top__DOT__registers__DOT__registers
        [0xaU];
    vlSelf->Top__DOT__dpi__DOT__rf[0xbU] = vlSelf->Top__DOT__registers__DOT__registers
        [0xbU];
    vlSelf->Top__DOT__dpi__DOT__rf[0xcU] = vlSelf->Top__DOT__registers__DOT__registers
        [0xcU];
    vlSelf->Top__DOT__dpi__DOT__rf[0xdU] = vlSelf->Top__DOT__registers__DOT__registers
        [0xdU];
    vlSelf->Top__DOT__dpi__DOT__rf[0xeU] = vlSelf->Top__DOT__registers__DOT__registers
        [0xeU];
    vlSelf->Top__DOT__dpi__DOT__rf[0xfU] = vlSelf->Top__DOT__registers__DOT__registers
        [0xfU];
    vlSelf->Top__DOT__dpi__DOT__rf[0x10U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x10U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x11U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x11U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x12U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x12U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x13U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x13U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x14U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x14U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x15U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x15U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x16U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x16U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x17U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x17U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x18U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x18U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x19U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x19U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x1aU] = vlSelf->Top__DOT__registers__DOT__registers
        [0x1aU];
    vlSelf->Top__DOT__dpi__DOT__rf[0x1bU] = vlSelf->Top__DOT__registers__DOT__registers
        [0x1bU];
    vlSelf->Top__DOT__dpi__DOT__rf[0x1cU] = vlSelf->Top__DOT__registers__DOT__registers
        [0x1cU];
    vlSelf->Top__DOT__dpi__DOT__rf[0x1dU] = vlSelf->Top__DOT__registers__DOT__registers
        [0x1dU];
    vlSelf->Top__DOT__dpi__DOT__rf[0x1eU] = vlSelf->Top__DOT__registers__DOT__registers
        [0x1eU];
    vlSelf->Top__DOT__dpi__DOT__rf[0x1fU] = vlSelf->Top__DOT__registers__DOT__registers
        [0x1fU];
    vlSelf->Top__DOT__PC__DOT___init_T_1 = (4ULL + vlSelf->Top__DOT__PC__DOT__init);
    vlSelf->io_pc = vlSelf->Top__DOT__PC__DOT__init;
}

void VTop___024root___nba_sequent__TOP__1(VTop___024root* vlSelf);

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VTop___024root___nba_sequent__TOP__1(vlSelf);
    }
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
                VL_FATAL_MT("vsrc/Top.v", 517, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("vsrc/Top.v", 517, "", "Active region did not converge.");
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
                VL_FATAL_MT("vsrc/Top.v", 517, "", "NBA region did not converge.");
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
