// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop_BOOTH_gen.h"

VL_ATTR_COLD void VTop_BOOTH_gen___ctor_var_reset(VTop_BOOTH_gen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_BOOTH_gen___ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(132, vlSelf->io_x);
    vlSelf->io_y = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(132, vlSelf->io_out);
    vlSelf->io_cout = VL_RAND_RESET_I(1);
    vlSelf->__PVT__RS_io_sel_positive = VL_RAND_RESET_I(1);
    vlSelf->__PVT__RS_io_sel_double_positive = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->__PVT__io_out_lo);
    VL_RAND_RESET_W(66, vlSelf->__PVT__io_out_hi);
    vlSelf->__PVT__BOOTH_S__DOT___io_sel_negative_T_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3 = VL_RAND_RESET_I(1);
}
