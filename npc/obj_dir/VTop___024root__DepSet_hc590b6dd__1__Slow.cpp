// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop__Syms.h"
#include "VTop___024root.h"

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__3(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__3\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_ha14bfab8__0;
    VlWide<5>/*159:0*/ __Vtemp_he961893c__0;
    VlWide<5>/*159:0*/ __Vtemp_h69c4b881__0;
    VlWide<5>/*159:0*/ __Vtemp_h225ffbbd__0;
    VlWide<5>/*159:0*/ __Vtemp_hc77b0000__0;
    VlWide<5>/*159:0*/ __Vtemp_h73db1629__0;
    VlWide<5>/*159:0*/ __Vtemp_h938ee414__0;
    VlWide<5>/*159:0*/ __Vtemp_h96a87bbf__0;
    VlWide<5>/*159:0*/ __Vtemp_h40bdfb3a__0;
    // Body
    __Vtemp_ha14bfab8__0[0U] = vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_lo[0U];
    __Vtemp_ha14bfab8__0[1U] = vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_lo[1U];
    __Vtemp_ha14bfab8__0[2U] = ((vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_hi[0U] 
                                 << 2U) | vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_lo[2U]);
    __Vtemp_ha14bfab8__0[3U] = ((vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_hi[0U] 
                                 >> 0x1eU) | (vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_hi[1U] 
                                              << 2U));
    __Vtemp_ha14bfab8__0[4U] = ((vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_hi[1U] 
                                 >> 0x1eU) | (vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_hi[2U] 
                                              << 2U));
    VL_ADD_W(5, __Vtemp_he961893c__0, __Vtemp_ha14bfab8__0, vlSelf->Top__DOT__exu__DOT__mul__DOT__result);
    __Vtemp_h69c4b881__0[0U] = ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3) 
                                | (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5));
    __Vtemp_h69c4b881__0[1U] = 0U;
    __Vtemp_h69c4b881__0[2U] = 0U;
    __Vtemp_h69c4b881__0[3U] = 0U;
    __Vtemp_h69c4b881__0[4U] = 0U;
    VL_ADD_W(5, __Vtemp_h225ffbbd__0, __Vtemp_he961893c__0, __Vtemp_h69c4b881__0);
    vlSelf->Top__DOT__exu__DOT__mul__DOT___result_T_4[0U] 
        = __Vtemp_h225ffbbd__0[0U];
    vlSelf->Top__DOT__exu__DOT__mul__DOT___result_T_4[1U] 
        = __Vtemp_h225ffbbd__0[1U];
    vlSelf->Top__DOT__exu__DOT__mul__DOT___result_T_4[2U] 
        = __Vtemp_h225ffbbd__0[2U];
    vlSelf->Top__DOT__exu__DOT__mul__DOT___result_T_4[3U] 
        = __Vtemp_h225ffbbd__0[3U];
    vlSelf->Top__DOT__exu__DOT__mul__DOT___result_T_4[4U] 
        = (0xfU & __Vtemp_h225ffbbd__0[4U]);
    __Vtemp_hc77b0000__0[0U] = vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[0U];
    __Vtemp_hc77b0000__0[1U] = vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[1U];
    __Vtemp_hc77b0000__0[2U] = vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[2U];
    __Vtemp_hc77b0000__0[3U] = 0U;
    __Vtemp_hc77b0000__0[4U] = 0U;
    __Vtemp_h73db1629__0[0U] = vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_lo[0U];
    __Vtemp_h73db1629__0[1U] = vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_lo[1U];
    __Vtemp_h73db1629__0[2U] = ((vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_hi[0U] 
                                 << 2U) | vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_lo[2U]);
    __Vtemp_h73db1629__0[3U] = ((vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_hi[0U] 
                                 >> 0x1eU) | (vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_hi[1U] 
                                              << 2U));
    __Vtemp_h73db1629__0[4U] = ((vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_hi[1U] 
                                 >> 0x1eU) | (vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_hi[2U] 
                                              << 2U));
    VL_ADD_W(5, __Vtemp_h938ee414__0, __Vtemp_hc77b0000__0, __Vtemp_h73db1629__0);
    __Vtemp_h96a87bbf__0[0U] = ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3) 
                                | (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5));
    __Vtemp_h96a87bbf__0[1U] = 0U;
    __Vtemp_h96a87bbf__0[2U] = 0U;
    __Vtemp_h96a87bbf__0[3U] = 0U;
    __Vtemp_h96a87bbf__0[4U] = 0U;
    VL_ADD_W(5, __Vtemp_h40bdfb3a__0, __Vtemp_h938ee414__0, __Vtemp_h96a87bbf__0);
    if (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__start) {
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[0U] 
            = __Vtemp_h40bdfb3a__0[0U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[1U] 
            = __Vtemp_h40bdfb3a__0[1U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[2U] 
            = __Vtemp_h40bdfb3a__0[2U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[3U] 
            = __Vtemp_h40bdfb3a__0[3U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[4U] 
            = (0xfU & __Vtemp_h40bdfb3a__0[4U]);
    } else {
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[0U] 
            = vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[0U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[1U] 
            = vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[1U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[2U] 
            = vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[2U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[3U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[4U] = 0U;
    }
}

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf);
VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__1(VTop___024root* vlSelf);
VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__2(VTop___024root* vlSelf);
void VTop_BOOTH_gen___nba_sequent__TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen__0(VTop_BOOTH_gen* vlSelf);
void VTop_BOOTH_gen___nba_sequent__TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen__0(VTop_BOOTH_gen* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VTop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VTop___024root___stl_sequent__TOP__1(vlSelf);
        VTop___024root___stl_sequent__TOP__2(vlSelf);
        VTop_BOOTH_gen___nba_sequent__TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen__0((&vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen));
        VTop_BOOTH_gen___nba_sequent__TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen__0((&vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen));
        VTop___024root___stl_sequent__TOP__3(vlSelf);
    }
}
