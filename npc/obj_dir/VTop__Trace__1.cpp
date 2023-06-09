// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__trace_chg_sub_1(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 998);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                    >> 0x1bU))));
        bufp->chgBit(oldp+1,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                              >> 0x1aU))) 
                                       & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                 >> 0x1bU))) 
                                          & ((~ ((~ 
                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                   >> 0x1bU)) 
                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                             & (~ (
                                                   (~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                     >> 0x1aU)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+2,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                    >> 0x1cU))));
        bufp->chgBit(oldp+3,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                              >> 0x1bU))) 
                                       & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                 >> 0x1cU))) 
                                          & ((~ ((~ 
                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                   >> 0x1cU)) 
                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                             & (~ (
                                                   (~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                     >> 0x1bU)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+4,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                    >> 0x1dU))));
        bufp->chgBit(oldp+5,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                              >> 0x1cU))) 
                                       & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                 >> 0x1dU))) 
                                          & ((~ ((~ 
                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                   >> 0x1dU)) 
                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                             & (~ (
                                                   (~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                     >> 0x1cU)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+6,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                    >> 0x1eU))));
        bufp->chgBit(oldp+7,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                              >> 0x1dU))) 
                                       & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                 >> 0x1eU))) 
                                          & ((~ ((~ 
                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                   >> 0x1eU)) 
                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                             & (~ (
                                                   (~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                     >> 0x1dU)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+8,((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                              >> 0x1fU)));
        bufp->chgBit(oldp+9,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                              >> 0x1eU))) 
                                       & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                 >> 0x1fU))) 
                                          & ((~ ((~ 
                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                   >> 0x1fU)) 
                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                             & (~ (
                                                   (~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                     >> 0x1eU)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+10,((1U & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U])));
        bufp->chgBit(oldp+11,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x1fU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U])) 
                                           & ((~ ((~ 
                                                   vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U]) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1fU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+12,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 1U))));
        bufp->chgBit(oldp+13,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U])) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                  >> 1U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                    >> 1U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U]) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+14,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 2U))));
        bufp->chgBit(oldp+15,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                               >> 1U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                  >> 2U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                    >> 2U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                    >> 1U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+16,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 3U))));
        bufp->chgBit(oldp+17,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                               >> 2U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                  >> 3U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                    >> 3U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                    >> 2U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+18,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 4U))));
        bufp->chgBit(oldp+19,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                               >> 3U))) 
                                        & ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                           & (~ ((~ 
                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                   >> 3U)) 
                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))))));
        bufp->chgBit(oldp+20,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 5U))));
        bufp->chgBit(oldp+21,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+22,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 6U))));
        bufp->chgBit(oldp+23,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+24,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 7U))));
        bufp->chgBit(oldp+25,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+26,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 8U))));
        bufp->chgBit(oldp+27,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+28,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 9U))));
        bufp->chgBit(oldp+29,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+30,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+31,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+32,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+33,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+34,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+35,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+36,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0xdU))));
        bufp->chgBit(oldp+37,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+38,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0xeU))));
        bufp->chgBit(oldp+39,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+40,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0xfU))));
        bufp->chgBit(oldp+41,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+42,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+43,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+44,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+45,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+46,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+47,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+48,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x13U))));
        bufp->chgBit(oldp+49,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+50,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x14U))));
        bufp->chgBit(oldp+51,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+52,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+53,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+54,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x16U))));
        bufp->chgBit(oldp+55,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+56,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x17U))));
        bufp->chgBit(oldp+57,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+58,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x18U))));
        bufp->chgBit(oldp+59,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+60,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x19U))));
        bufp->chgBit(oldp+61,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+62,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+63,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+64,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+65,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+66,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+67,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+68,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+69,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+70,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+71,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+72,((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                               >> 0x1fU)));
        bufp->chgBit(oldp+73,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+74,(0U));
        bufp->chgBit(oldp+75,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+76,(0U));
        bufp->chgBit(oldp+77,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+78,(0U));
        bufp->chgBit(oldp+79,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+80,(0U));
        bufp->chgBit(oldp+81,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+82,(0U));
        bufp->chgBit(oldp+83,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+84,(0U));
        bufp->chgBit(oldp+85,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+86,(0U));
        bufp->chgBit(oldp+87,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+88,(0U));
        bufp->chgBit(oldp+89,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+90,(0U));
        bufp->chgBit(oldp+91,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+92,(0U));
        bufp->chgBit(oldp+93,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+94,(0U));
        bufp->chgBit(oldp+95,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+96,(0U));
        bufp->chgBit(oldp+97,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+98,(0U));
        bufp->chgBit(oldp+99,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                        & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+100,(0U));
        bufp->chgBit(oldp+101,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+102,(0U));
        bufp->chgBit(oldp+103,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+104,(0U));
        bufp->chgBit(oldp+105,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+106,(0U));
        bufp->chgBit(oldp+107,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+108,(0U));
        bufp->chgBit(oldp+109,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+110,(0U));
        bufp->chgBit(oldp+111,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+112,(0U));
        bufp->chgBit(oldp+113,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+114,(0U));
        bufp->chgBit(oldp+115,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+116,(0U));
        bufp->chgBit(oldp+117,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+118,(0U));
        bufp->chgBit(oldp+119,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+120,(0U));
        bufp->chgBit(oldp+121,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+122,(0U));
        bufp->chgBit(oldp+123,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+124,(0U));
        bufp->chgBit(oldp+125,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+126,(0U));
        bufp->chgBit(oldp+127,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+128,(0U));
        bufp->chgBit(oldp+129,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+130,(0U));
        bufp->chgBit(oldp+131,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+132,(0U));
        bufp->chgBit(oldp+133,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+134,(0U));
        bufp->chgBit(oldp+135,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+136,(0U));
        bufp->chgBit(oldp+137,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+138,(0U));
        bufp->chgBit(oldp+139,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+140,(0U));
        bufp->chgBit(oldp+141,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+142,(0U));
        bufp->chgBit(oldp+143,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+144,(0U));
        bufp->chgBit(oldp+145,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgCData(oldp+146,(((0x80U & ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                  & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                     >> 6U))) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                        >> 7U))) 
                                                   & ((~ 
                                                       ((~ 
                                                         (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                          >> 7U)) 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                            >> 6U)) 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                            << 7U)) 
                                  | ((0x40U & ((~ (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                        >> 5U))) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                           >> 6U))) 
                                                      & ((~ 
                                                          ((~ 
                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                             >> 6U)) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                         & (~ 
                                                            ((~ 
                                                              (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                               >> 5U)) 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                               << 6U)) 
                                     | ((0x20U & ((~ 
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                      & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                         >> 4U))) 
                                                    & ((~ 
                                                        ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                         & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                            >> 5U))) 
                                                       & ((~ 
                                                           ((~ 
                                                             (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                              >> 5U)) 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                          & (~ 
                                                             ((~ 
                                                               (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                >> 4U)) 
                                                              & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((~ ((~ 
                                                  ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                   & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                      >> 3U))) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                      & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                         >> 4U))) 
                                                    & ((~ 
                                                        ((~ 
                                                          (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                           >> 4U)) 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                       & (~ 
                                                          ((~ 
                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                             >> 3U)) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                             << 4U)) 
                                           | ((8U & 
                                               ((~ 
                                                 ((~ 
                                                   ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                    & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                       >> 2U))) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                       & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                          >> 3U))) 
                                                     & ((~ 
                                                         ((~ 
                                                           (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                            >> 3U)) 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                        & (~ 
                                                           ((~ 
                                                             (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                              >> 2U)) 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((~ 
                                                      ((~ 
                                                        ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                         & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                            >> 1U))) 
                                                       & ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                               >> 2U))) 
                                                          & ((~ 
                                                              ((~ 
                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                 >> 2U)) 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                             & (~ 
                                                                ((~ 
                                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                   >> 1U)) 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ 
                                                         ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                            & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U])) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                  >> 1U))) 
                                                             & ((~ 
                                                                 ((~ 
                                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                    >> 1U)) 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                & (~ 
                                                                   ((~ 
                                                                     vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U]) 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          ((~ 
                                                            ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                             & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U])) 
                                                           & ((~ 
                                                               ((~ 
                                                                 vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U]) 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                              & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))))))))))),8);
        bufp->chgCData(oldp+147,(((0x80U & ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                  & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                     >> 0x16U))) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                        >> 0x17U))) 
                                                   & ((~ 
                                                       ((~ 
                                                         (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                          >> 0x17U)) 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                            >> 0x16U)) 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                            << 7U)) 
                                  | ((0x40U & ((~ (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                        >> 0x15U))) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                           >> 0x16U))) 
                                                      & ((~ 
                                                          ((~ 
                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                             >> 0x16U)) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                         & (~ 
                                                            ((~ 
                                                              (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                               >> 0x15U)) 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                               << 6U)) 
                                     | ((0x20U & ((~ 
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                      & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                         >> 0x14U))) 
                                                    & ((~ 
                                                        ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                         & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                            >> 0x15U))) 
                                                       & ((~ 
                                                           ((~ 
                                                             (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                              >> 0x15U)) 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                          & (~ 
                                                             ((~ 
                                                               (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                >> 0x14U)) 
                                                              & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((~ ((~ 
                                                  ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                   & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                      >> 0x13U))) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                      & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                         >> 0x14U))) 
                                                    & ((~ 
                                                        ((~ 
                                                          (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                           >> 0x14U)) 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                       & (~ 
                                                          ((~ 
                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                             >> 0x13U)) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                             << 4U)) 
                                           | ((8U & 
                                               ((~ 
                                                 ((~ 
                                                   ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                    & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                       >> 0x12U))) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                       & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                          >> 0x13U))) 
                                                     & ((~ 
                                                         ((~ 
                                                           (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                            >> 0x13U)) 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                        & (~ 
                                                           ((~ 
                                                             (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                              >> 0x12U)) 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((~ 
                                                      ((~ 
                                                        ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                         & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                            >> 0x11U))) 
                                                       & ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                               >> 0x12U))) 
                                                          & ((~ 
                                                              ((~ 
                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                 >> 0x12U)) 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                             & (~ 
                                                                ((~ 
                                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                   >> 0x11U)) 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ 
                                                         ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                               >> 0x10U))) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                  >> 0x11U))) 
                                                             & ((~ 
                                                                 ((~ 
                                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                    >> 0x11U)) 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                & (~ 
                                                                   ((~ 
                                                                     (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                      >> 0x10U)) 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          ((~ 
                                                            ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                             & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                >> 0xfU))) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                   >> 0x10U))) 
                                                              & ((~ 
                                                                  ((~ 
                                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                     >> 0x10U)) 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                 & (~ 
                                                                    ((~ 
                                                                      (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                       >> 0xfU)) 
                                                                     & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))))))))))))),8);
        bufp->chgIData(oldp+148,(((0x10000U & ((~ (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                        >> 0x1fU))) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                        & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U])) 
                                                      & ((~ 
                                                          ((~ 
                                                            vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U]) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                         & (~ 
                                                            ((~ 
                                                              (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                               >> 0x1fU)) 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                               << 0x10U)) 
                                  | ((0x8000U & ((~ 
                                                  ((~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                        >> 0x1eU))) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                           >> 0x1fU))) 
                                                      & ((~ 
                                                          ((~ 
                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                             >> 0x1fU)) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                         & (~ 
                                                            ((~ 
                                                              (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                               >> 0x1eU)) 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                 << 0xfU)) 
                                     | ((0x4000U & 
                                         ((~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                  & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                     >> 0x1dU))) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                   & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                      >> 0x1eU))) 
                                                 & ((~ 
                                                     ((~ 
                                                       (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                        >> 0x1eU)) 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                    & (~ 
                                                       ((~ 
                                                         (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                          >> 0x1dU)) 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                          << 0xeU)) 
                                        | ((0x2000U 
                                            & ((~ (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                        >> 0x1cU))) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                           >> 0x1dU))) 
                                                      & ((~ 
                                                          ((~ 
                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                             >> 0x1dU)) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                         & (~ 
                                                            ((~ 
                                                              (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                               >> 0x1cU)) 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                               << 0xdU)) 
                                           | ((0x1000U 
                                               & ((~ 
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                      & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                         >> 0x1bU))) 
                                                    & ((~ 
                                                        ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                         & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                            >> 0x1cU))) 
                                                       & ((~ 
                                                           ((~ 
                                                             (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                              >> 0x1cU)) 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                          & (~ 
                                                             ((~ 
                                                               (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                >> 0x1bU)) 
                                                              & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                  << 0xcU)) 
                                              | ((0x800U 
                                                  & ((~ 
                                                      ((~ 
                                                        ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                         & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                            >> 0x1aU))) 
                                                       & ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                               >> 0x1bU))) 
                                                          & ((~ 
                                                              ((~ 
                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                 >> 0x1bU)) 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                             & (~ 
                                                                ((~ 
                                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                   >> 0x1aU)) 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                     << 0xbU)) 
                                                 | ((0x400U 
                                                     & ((~ 
                                                         ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                               >> 0x19U))) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                  >> 0x1aU))) 
                                                             & ((~ 
                                                                 ((~ 
                                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                    >> 0x1aU)) 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                & (~ 
                                                                   ((~ 
                                                                     (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                      >> 0x19U)) 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                        << 0xaU)) 
                                                    | ((0x200U 
                                                        & ((~ 
                                                            ((~ 
                                                              ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                  >> 0x18U))) 
                                                             & ((~ 
                                                                 ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                  & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                     >> 0x19U))) 
                                                                & ((~ 
                                                                    ((~ 
                                                                      (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                       >> 0x19U)) 
                                                                     & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                   & (~ 
                                                                      ((~ 
                                                                        (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                         >> 0x18U)) 
                                                                       & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                           << 9U)) 
                                                       | ((0x100U 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                  & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                     >> 0x17U))) 
                                                                & ((~ 
                                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                        >> 0x18U))) 
                                                                   & ((~ 
                                                                       ((~ 
                                                                         (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                          >> 0x18U)) 
                                                                        & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                      & (~ 
                                                                         ((~ 
                                                                           (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                            >> 0x17U)) 
                                                                          & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                              << 8U)) 
                                                          | ((0x80U 
                                                              & ((~ 
                                                                  ((~ 
                                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                        >> 0x16U))) 
                                                                   & ((~ 
                                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                           >> 0x17U))) 
                                                                      & ((~ 
                                                                          ((~ 
                                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                             >> 0x17U)) 
                                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                         & (~ 
                                                                            ((~ 
                                                                              (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                               >> 0x16U)) 
                                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                 << 7U)) 
                                                             | ((0x40U 
                                                                 & ((~ 
                                                                     ((~ 
                                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                           >> 0x15U))) 
                                                                      & ((~ 
                                                                          ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                              >> 0x16U))) 
                                                                         & ((~ 
                                                                             ((~ 
                                                                               (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x16U)) 
                                                                              & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                            & (~ 
                                                                               ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x15U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                    << 6U)) 
                                                                | ((0x20U 
                                                                    & ((~ 
                                                                        ((~ 
                                                                          ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                              >> 0x14U))) 
                                                                         & ((~ 
                                                                             ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x15U))) 
                                                                            & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x15U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                               & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x14U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                       << 5U)) 
                                                                   | ((0x10U 
                                                                       & ((~ 
                                                                           ((~ 
                                                                             ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x13U))) 
                                                                            & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x14U))) 
                                                                               & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x14U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x13U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                          << 4U)) 
                                                                      | ((8U 
                                                                          & ((~ 
                                                                              ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x12U))) 
                                                                               & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x13U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x13U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x12U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                             << 3U)) 
                                                                         | ((4U 
                                                                             & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x11U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x12U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x12U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x11U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 2U)) 
                                                                            | ((2U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x10U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x11U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x11U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x10U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & (~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xfU))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x10U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x10U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xfU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))))))))))))))))))),17);
        bufp->chgQData(oldp+149,((((QData)((IData)(
                                                   ((0x10000U 
                                                     & ((~ 
                                                         ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                               >> 0x1fU))) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                               & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U])) 
                                                             & ((~ 
                                                                 ((~ 
                                                                   vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U]) 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                & (~ 
                                                                   ((~ 
                                                                     (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                      >> 0x1fU)) 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                        << 0x10U)) 
                                                    | ((0x8000U 
                                                        & ((~ 
                                                            ((~ 
                                                              ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                  >> 0x1eU))) 
                                                             & ((~ 
                                                                 ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                  & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                     >> 0x1fU))) 
                                                                & ((~ 
                                                                    ((~ 
                                                                      (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                       >> 0x1fU)) 
                                                                     & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                   & (~ 
                                                                      ((~ 
                                                                        (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                         >> 0x1eU)) 
                                                                       & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                           << 0xfU)) 
                                                       | ((0x4000U 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                  & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                     >> 0x1dU))) 
                                                                & ((~ 
                                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                        >> 0x1eU))) 
                                                                   & ((~ 
                                                                       ((~ 
                                                                         (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                          >> 0x1eU)) 
                                                                        & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                      & (~ 
                                                                         ((~ 
                                                                           (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                            >> 0x1dU)) 
                                                                          & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                              << 0xeU)) 
                                                          | ((0x2000U 
                                                              & ((~ 
                                                                  ((~ 
                                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                        >> 0x1cU))) 
                                                                   & ((~ 
                                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                           >> 0x1dU))) 
                                                                      & ((~ 
                                                                          ((~ 
                                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                             >> 0x1dU)) 
                                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                         & (~ 
                                                                            ((~ 
                                                                              (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                               >> 0x1cU)) 
                                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                 << 0xdU)) 
                                                             | ((0x1000U 
                                                                 & ((~ 
                                                                     ((~ 
                                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                           >> 0x1bU))) 
                                                                      & ((~ 
                                                                          ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                              >> 0x1cU))) 
                                                                         & ((~ 
                                                                             ((~ 
                                                                               (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x1cU)) 
                                                                              & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                            & (~ 
                                                                               ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x1bU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                    << 0xcU)) 
                                                                | ((0x800U 
                                                                    & ((~ 
                                                                        ((~ 
                                                                          ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                              >> 0x1aU))) 
                                                                         & ((~ 
                                                                             ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x1bU))) 
                                                                            & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x1bU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                               & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x1aU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                       << 0xbU)) 
                                                                   | ((0x400U 
                                                                       & ((~ 
                                                                           ((~ 
                                                                             ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x19U))) 
                                                                            & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x1aU))) 
                                                                               & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x1aU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x19U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                          << 0xaU)) 
                                                                      | ((0x200U 
                                                                          & ((~ 
                                                                              ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x18U))) 
                                                                               & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x19U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x19U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x18U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                             << 9U)) 
                                                                         | ((0x100U 
                                                                             & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x17U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x18U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x18U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x17U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 8U)) 
                                                                            | ((0x80U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x16U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x17U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x17U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x16U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 7U)) 
                                                                               | ((0x40U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x15U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x16U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x16U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x15U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x14U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x15U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x15U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x14U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x13U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x14U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x14U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x13U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x12U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x13U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x13U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x12U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x11U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x12U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x12U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x11U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x10U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x11U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x11U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x10U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xfU))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x10U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0x10U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xfU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))))))))))))))))))))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               ((0x8000U 
                                                                 & ((~ 
                                                                     ((~ 
                                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                           >> 0xeU))) 
                                                                      & ((~ 
                                                                          ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                              >> 0xfU))) 
                                                                         & ((~ 
                                                                             ((~ 
                                                                               (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xfU)) 
                                                                              & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                            & (~ 
                                                                               ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xeU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                    << 0xfU)) 
                                                                | ((0x4000U 
                                                                    & ((~ 
                                                                        ((~ 
                                                                          ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                              >> 0xdU))) 
                                                                         & ((~ 
                                                                             ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xeU))) 
                                                                            & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xeU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                               & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xdU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                       << 0xeU)) 
                                                                   | ((0x2000U 
                                                                       & ((~ 
                                                                           ((~ 
                                                                             ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xcU))) 
                                                                            & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xdU))) 
                                                                               & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xdU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                          << 0xdU)) 
                                                                      | ((0x1000U 
                                                                          & ((~ 
                                                                              ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xbU))) 
                                                                               & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xcU))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xbU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                             << 0xcU)) 
                                                                         | ((0x800U 
                                                                             & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xaU))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xbU))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xbU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xaU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 0xbU)) 
                                                                            | ((0x400U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 9U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xaU))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 0xaU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 9U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 0xaU)) 
                                                                               | ((0x200U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 8U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 9U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 9U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 8U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 7U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 8U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 8U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 7U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 6U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 7U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 7U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 6U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 5U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 6U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 6U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 5U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 4U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 5U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 5U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 3U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 4U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 3U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 2U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 3U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 3U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 2U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 1U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 2U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 2U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 1U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U])) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 1U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                                                >> 1U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U]) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U])) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U]) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))))))))))))))))))),33);
        bufp->chgCData(oldp+151,(((0x80U & ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                  & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                     >> 7U))) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                        >> 8U))) 
                                                   & ((~ 
                                                       ((~ 
                                                         (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                          >> 8U)) 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                            >> 7U)) 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                            << 7U)) 
                                  | ((0x40U & ((~ (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                        >> 6U))) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                           >> 7U))) 
                                                      & ((~ 
                                                          ((~ 
                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                             >> 7U)) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                         & (~ 
                                                            ((~ 
                                                              (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                               >> 6U)) 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                               << 6U)) 
                                     | ((0x20U & ((~ 
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                      & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                         >> 5U))) 
                                                    & ((~ 
                                                        ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                         & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                            >> 6U))) 
                                                       & ((~ 
                                                           ((~ 
                                                             (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                              >> 6U)) 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                          & (~ 
                                                             ((~ 
                                                               (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                >> 5U)) 
                                                              & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((~ ((~ 
                                                  ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                   & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                      >> 4U))) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                      & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                         >> 5U))) 
                                                    & ((~ 
                                                        ((~ 
                                                          (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                           >> 5U)) 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                       & (~ 
                                                          ((~ 
                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                             >> 4U)) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                             << 4U)) 
                                           | ((8U & 
                                               ((~ 
                                                 ((~ 
                                                   ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                    & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                       >> 3U))) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                       & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                          >> 4U))) 
                                                     & ((~ 
                                                         ((~ 
                                                           (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                            >> 4U)) 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                        & (~ 
                                                           ((~ 
                                                             (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                              >> 3U)) 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((~ 
                                                      ((~ 
                                                        ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                         & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                            >> 2U))) 
                                                       & ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                               >> 3U))) 
                                                          & ((~ 
                                                              ((~ 
                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                 >> 3U)) 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                             & (~ 
                                                                ((~ 
                                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                   >> 2U)) 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ 
                                                         ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                               >> 1U))) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                  >> 2U))) 
                                                             & ((~ 
                                                                 ((~ 
                                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                    >> 2U)) 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                & (~ 
                                                                   ((~ 
                                                                     (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                      >> 1U)) 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          ((~ 
                                                            ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                             & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U])) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                   >> 1U))) 
                                                              & ((~ 
                                                                  ((~ 
                                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                     >> 1U)) 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                 & (~ 
                                                                    ((~ 
                                                                      vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U]) 
                                                                     & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))))))))))))),8);
        bufp->chgCData(oldp+152,(((0x80U & ((~ ((~ 
                                                 ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                  & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                     >> 0x17U))) 
                                                & ((~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                        >> 0x18U))) 
                                                   & ((~ 
                                                       ((~ 
                                                         (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                          >> 0x18U)) 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                      & (~ 
                                                         ((~ 
                                                           (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                            >> 0x17U)) 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                            << 7U)) 
                                  | ((0x40U & ((~ (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                        >> 0x16U))) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                           >> 0x17U))) 
                                                      & ((~ 
                                                          ((~ 
                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                             >> 0x17U)) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                         & (~ 
                                                            ((~ 
                                                              (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                               >> 0x16U)) 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                               << 6U)) 
                                     | ((0x20U & ((~ 
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                      & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                         >> 0x15U))) 
                                                    & ((~ 
                                                        ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                         & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                            >> 0x16U))) 
                                                       & ((~ 
                                                           ((~ 
                                                             (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                              >> 0x16U)) 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                          & (~ 
                                                             ((~ 
                                                               (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                >> 0x15U)) 
                                                              & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((~ ((~ 
                                                  ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                   & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                      >> 0x14U))) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                      & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                         >> 0x15U))) 
                                                    & ((~ 
                                                        ((~ 
                                                          (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                           >> 0x15U)) 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                       & (~ 
                                                          ((~ 
                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                             >> 0x14U)) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                             << 4U)) 
                                           | ((8U & 
                                               ((~ 
                                                 ((~ 
                                                   ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                    & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                       >> 0x13U))) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                       & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                          >> 0x14U))) 
                                                     & ((~ 
                                                         ((~ 
                                                           (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                            >> 0x14U)) 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                        & (~ 
                                                           ((~ 
                                                             (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                              >> 0x13U)) 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((~ 
                                                      ((~ 
                                                        ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                         & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                            >> 0x12U))) 
                                                       & ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                               >> 0x13U))) 
                                                          & ((~ 
                                                              ((~ 
                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                 >> 0x13U)) 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                             & (~ 
                                                                ((~ 
                                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                   >> 0x12U)) 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ 
                                                         ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                               >> 0x11U))) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                  >> 0x12U))) 
                                                             & ((~ 
                                                                 ((~ 
                                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                    >> 0x12U)) 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                & (~ 
                                                                   ((~ 
                                                                     (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                      >> 0x11U)) 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          ((~ 
                                                            ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                             & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                >> 0x10U))) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                   >> 0x11U))) 
                                                              & ((~ 
                                                                  ((~ 
                                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                     >> 0x11U)) 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                 & (~ 
                                                                    ((~ 
                                                                      (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                       >> 0x10U)) 
                                                                     & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))))))))))))),8);
        bufp->chgIData(oldp+153,(((0x10000U & ((~ (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                     & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U])) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                           >> 1U))) 
                                                      & ((~ 
                                                          ((~ 
                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                             >> 1U)) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                         & (~ 
                                                            ((~ 
                                                              vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U]) 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                               << 0x10U)) 
                                  | ((0x8000U & ((~ 
                                                  ((~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                        >> 0x1fU))) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                        & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U])) 
                                                      & ((~ 
                                                          ((~ 
                                                            vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U]) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                         & (~ 
                                                            ((~ 
                                                              (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                               >> 0x1fU)) 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                 << 0xfU)) 
                                     | ((0x4000U & 
                                         ((~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                  & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                     >> 0x1eU))) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                   & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                      >> 0x1fU))) 
                                                 & ((~ 
                                                     ((~ 
                                                       (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                        >> 0x1fU)) 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                    & (~ 
                                                       ((~ 
                                                         (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                          >> 0x1eU)) 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                          << 0xeU)) 
                                        | ((0x2000U 
                                            & ((~ (
                                                   (~ 
                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                        >> 0x1dU))) 
                                                   & ((~ 
                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                           >> 0x1eU))) 
                                                      & ((~ 
                                                          ((~ 
                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                             >> 0x1eU)) 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                         & (~ 
                                                            ((~ 
                                                              (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                               >> 0x1dU)) 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                               << 0xdU)) 
                                           | ((0x1000U 
                                               & ((~ 
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                      & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                         >> 0x1cU))) 
                                                    & ((~ 
                                                        ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                         & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                            >> 0x1dU))) 
                                                       & ((~ 
                                                           ((~ 
                                                             (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                              >> 0x1dU)) 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                          & (~ 
                                                             ((~ 
                                                               (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                >> 0x1cU)) 
                                                              & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                  << 0xcU)) 
                                              | ((0x800U 
                                                  & ((~ 
                                                      ((~ 
                                                        ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                         & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                            >> 0x1bU))) 
                                                       & ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                               >> 0x1cU))) 
                                                          & ((~ 
                                                              ((~ 
                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                 >> 0x1cU)) 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                             & (~ 
                                                                ((~ 
                                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                   >> 0x1bU)) 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                     << 0xbU)) 
                                                 | ((0x400U 
                                                     & ((~ 
                                                         ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                               >> 0x1aU))) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                  >> 0x1bU))) 
                                                             & ((~ 
                                                                 ((~ 
                                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                    >> 0x1bU)) 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                & (~ 
                                                                   ((~ 
                                                                     (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                      >> 0x1aU)) 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                        << 0xaU)) 
                                                    | ((0x200U 
                                                        & ((~ 
                                                            ((~ 
                                                              ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                  >> 0x19U))) 
                                                             & ((~ 
                                                                 ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                  & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                     >> 0x1aU))) 
                                                                & ((~ 
                                                                    ((~ 
                                                                      (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                       >> 0x1aU)) 
                                                                     & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                   & (~ 
                                                                      ((~ 
                                                                        (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                         >> 0x19U)) 
                                                                       & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                           << 9U)) 
                                                       | ((0x100U 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                  & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                     >> 0x18U))) 
                                                                & ((~ 
                                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                        >> 0x19U))) 
                                                                   & ((~ 
                                                                       ((~ 
                                                                         (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                          >> 0x19U)) 
                                                                        & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                      & (~ 
                                                                         ((~ 
                                                                           (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                            >> 0x18U)) 
                                                                          & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                              << 8U)) 
                                                          | ((0x80U 
                                                              & ((~ 
                                                                  ((~ 
                                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                        >> 0x17U))) 
                                                                   & ((~ 
                                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                           >> 0x18U))) 
                                                                      & ((~ 
                                                                          ((~ 
                                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                             >> 0x18U)) 
                                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                         & (~ 
                                                                            ((~ 
                                                                              (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                               >> 0x17U)) 
                                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                 << 7U)) 
                                                             | ((0x40U 
                                                                 & ((~ 
                                                                     ((~ 
                                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                           >> 0x16U))) 
                                                                      & ((~ 
                                                                          ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                              >> 0x17U))) 
                                                                         & ((~ 
                                                                             ((~ 
                                                                               (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x17U)) 
                                                                              & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                            & (~ 
                                                                               ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x16U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                    << 6U)) 
                                                                | ((0x20U 
                                                                    & ((~ 
                                                                        ((~ 
                                                                          ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                              >> 0x15U))) 
                                                                         & ((~ 
                                                                             ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x16U))) 
                                                                            & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x16U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                               & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x15U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                       << 5U)) 
                                                                   | ((0x10U 
                                                                       & ((~ 
                                                                           ((~ 
                                                                             ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x14U))) 
                                                                            & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x15U))) 
                                                                               & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x15U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x14U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                          << 4U)) 
                                                                      | ((8U 
                                                                          & ((~ 
                                                                              ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x13U))) 
                                                                               & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x14U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x14U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x13U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                             << 3U)) 
                                                                         | ((4U 
                                                                             & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x12U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x13U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x13U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x12U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 2U)) 
                                                                            | ((2U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x11U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x12U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x12U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x11U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & (~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x10U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x11U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x11U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x10U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))))))))))))))))))),17);
        bufp->chgQData(oldp+154,((((QData)((IData)(
                                                   ((0x10000U 
                                                     & ((~ 
                                                         ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                            & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U])) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                  >> 1U))) 
                                                             & ((~ 
                                                                 ((~ 
                                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                    >> 1U)) 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                & (~ 
                                                                   ((~ 
                                                                     vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U]) 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                        << 0x10U)) 
                                                    | ((0x8000U 
                                                        & ((~ 
                                                            ((~ 
                                                              ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                  >> 0x1fU))) 
                                                             & ((~ 
                                                                 ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                  & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U])) 
                                                                & ((~ 
                                                                    ((~ 
                                                                      vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U]) 
                                                                     & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                   & (~ 
                                                                      ((~ 
                                                                        (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                         >> 0x1fU)) 
                                                                       & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                           << 0xfU)) 
                                                       | ((0x4000U 
                                                           & ((~ 
                                                               ((~ 
                                                                 ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                  & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                     >> 0x1eU))) 
                                                                & ((~ 
                                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                        >> 0x1fU))) 
                                                                   & ((~ 
                                                                       ((~ 
                                                                         (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                          >> 0x1fU)) 
                                                                        & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                      & (~ 
                                                                         ((~ 
                                                                           (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                            >> 0x1eU)) 
                                                                          & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                              << 0xeU)) 
                                                          | ((0x2000U 
                                                              & ((~ 
                                                                  ((~ 
                                                                    ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                     & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                        >> 0x1dU))) 
                                                                   & ((~ 
                                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                           >> 0x1eU))) 
                                                                      & ((~ 
                                                                          ((~ 
                                                                            (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                             >> 0x1eU)) 
                                                                           & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                         & (~ 
                                                                            ((~ 
                                                                              (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                               >> 0x1dU)) 
                                                                             & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                 << 0xdU)) 
                                                             | ((0x1000U 
                                                                 & ((~ 
                                                                     ((~ 
                                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                           >> 0x1cU))) 
                                                                      & ((~ 
                                                                          ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                              >> 0x1dU))) 
                                                                         & ((~ 
                                                                             ((~ 
                                                                               (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x1dU)) 
                                                                              & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                            & (~ 
                                                                               ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x1cU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                    << 0xcU)) 
                                                                | ((0x800U 
                                                                    & ((~ 
                                                                        ((~ 
                                                                          ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                              >> 0x1bU))) 
                                                                         & ((~ 
                                                                             ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x1cU))) 
                                                                            & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x1cU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                               & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x1bU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                       << 0xbU)) 
                                                                   | ((0x400U 
                                                                       & ((~ 
                                                                           ((~ 
                                                                             ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x1aU))) 
                                                                            & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x1bU))) 
                                                                               & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x1bU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x1aU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                          << 0xaU)) 
                                                                      | ((0x200U 
                                                                          & ((~ 
                                                                              ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x19U))) 
                                                                               & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x1aU))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x1aU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x19U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                             << 9U)) 
                                                                         | ((0x100U 
                                                                             & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x18U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x19U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x19U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x18U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 8U)) 
                                                                            | ((0x80U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x17U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x18U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x18U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x17U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 7U)) 
                                                                               | ((0x40U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x16U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x17U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x17U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x16U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x15U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x16U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x16U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x15U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x14U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x15U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x15U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x14U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x13U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x14U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x14U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x13U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x12U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x13U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x13U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x12U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x11U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x12U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x12U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x11U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x10U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x11U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x11U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x10U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))))))))))))))))))))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               ((0x8000U 
                                                                 & ((~ 
                                                                     ((~ 
                                                                       ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                        & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                           >> 0xfU))) 
                                                                      & ((~ 
                                                                          ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                              >> 0x10U))) 
                                                                         & ((~ 
                                                                             ((~ 
                                                                               (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0x10U)) 
                                                                              & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                            & (~ 
                                                                               ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xfU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                    << 0xfU)) 
                                                                | ((0x4000U 
                                                                    & ((~ 
                                                                        ((~ 
                                                                          ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                              >> 0xeU))) 
                                                                         & ((~ 
                                                                             ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xfU))) 
                                                                            & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xfU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                               & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xeU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                       << 0xeU)) 
                                                                   | ((0x2000U 
                                                                       & ((~ 
                                                                           ((~ 
                                                                             ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xdU))) 
                                                                            & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xeU))) 
                                                                               & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xeU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xdU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                          << 0xdU)) 
                                                                      | ((0x1000U 
                                                                          & ((~ 
                                                                              ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xcU))) 
                                                                               & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xdU))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xdU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                             << 0xcU)) 
                                                                         | ((0x800U 
                                                                             & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xbU))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xcU))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xbU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 0xbU)) 
                                                                            | ((0x400U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xaU))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xbU))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xbU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xaU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 0xaU)) 
                                                                               | ((0x200U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 9U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xaU))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 0xaU)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 9U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 8U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 9U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 9U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 8U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 7U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 8U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 8U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 7U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 6U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 7U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 7U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 6U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 5U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 6U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 6U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 5U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 4U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 5U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 5U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 3U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 4U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 4U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 3U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 2U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 3U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 3U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 2U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 1U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 2U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 2U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 1U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U])) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 1U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                                                >> 1U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U]) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))))))))))))))))))))),33);
        bufp->chgWData(oldp+156,(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_lo),66);
        bufp->chgCData(oldp+159,(((0x80U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                            << 7U)) 
                                  | ((0x40U & ((~ (
                                                   (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                               << 6U)) 
                                     | ((0x20U & ((~ 
                                                   ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                    & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                 & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                             << 4U)) 
                                           | ((8U & 
                                               ((~ 
                                                 ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                  & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((~ 
                                                      ((~ 
                                                        ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                         & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                            >> 3U))) 
                                                       & ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                          & (~ 
                                                             ((~ 
                                                               (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                >> 3U)) 
                                                              & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ 
                                                         ((~ 
                                                           ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                               >> 2U))) 
                                                          & ((~ 
                                                              ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                  >> 3U))) 
                                                             & ((~ 
                                                                 ((~ 
                                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                    >> 3U)) 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                & (~ 
                                                                   ((~ 
                                                                     (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                      >> 2U)) 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          ((~ 
                                                            ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                             & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                >> 1U))) 
                                                           & ((~ 
                                                               ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                   >> 2U))) 
                                                              & ((~ 
                                                                  ((~ 
                                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                     >> 2U)) 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                 & (~ 
                                                                    ((~ 
                                                                      (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                       >> 1U)) 
                                                                     & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))))))))))))),8);
        bufp->chgCData(oldp+160,(((0x80U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                            << 7U)) 
                                  | ((0x40U & ((~ (
                                                   (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                               << 6U)) 
                                     | ((0x20U & ((~ 
                                                   ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                    & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                 & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                             << 4U)) 
                                           | ((8U & 
                                               ((~ 
                                                 ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                  & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((~ 
                                                      ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ 
                                                         ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                          & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                           & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))))))),8);
        bufp->chgIData(oldp+161,(((0x10000U & ((~ (
                                                   (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                               << 0x10U)) 
                                  | ((0x8000U & ((~ 
                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                 << 0xfU)) 
                                     | ((0x4000U & 
                                         ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                              & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                          << 0xeU)) 
                                        | ((0x2000U 
                                            & ((~ (
                                                   (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                               << 0xdU)) 
                                           | ((0x1000U 
                                               & ((~ 
                                                   ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                    & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                  << 0xcU)) 
                                              | ((0x800U 
                                                  & ((~ 
                                                      ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                     << 0xbU)) 
                                                 | ((0x400U 
                                                     & ((~ 
                                                         ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                          & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                        << 0xaU)) 
                                                    | ((0x200U 
                                                        & ((~ 
                                                            ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                             & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                           << 9U)) 
                                                       | ((0x100U 
                                                           & ((~ 
                                                               ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                              << 8U)) 
                                                          | ((0x80U 
                                                              & ((~ 
                                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                 << 7U)) 
                                                             | ((0x40U 
                                                                 & ((~ 
                                                                     ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                    << 6U)) 
                                                                | ((0x20U 
                                                                    & ((~ 
                                                                        ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                       << 5U)) 
                                                                   | ((0x10U 
                                                                       & ((~ 
                                                                           ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                            & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                          << 4U)) 
                                                                      | ((8U 
                                                                          & ((~ 
                                                                              ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                               & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                             << 3U)) 
                                                                         | ((4U 
                                                                             & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 2U)) 
                                                                            | ((2U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))))))))))))))))))),17);
        bufp->chgQData(oldp+162,((((QData)((IData)(
                                                   ((0x10000U 
                                                     & ((~ 
                                                         ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                          & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                        << 0x10U)) 
                                                    | ((0x8000U 
                                                        & ((~ 
                                                            ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                             & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                           << 0xfU)) 
                                                       | ((0x4000U 
                                                           & ((~ 
                                                               ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                              << 0xeU)) 
                                                          | ((0x2000U 
                                                              & ((~ 
                                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                 << 0xdU)) 
                                                             | ((0x1000U 
                                                                 & ((~ 
                                                                     ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                    << 0xcU)) 
                                                                | ((0x800U 
                                                                    & ((~ 
                                                                        ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                       << 0xbU)) 
                                                                   | ((0x400U 
                                                                       & ((~ 
                                                                           ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                            & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                          << 0xaU)) 
                                                                      | ((0x200U 
                                                                          & ((~ 
                                                                              ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                               & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                             << 9U)) 
                                                                         | ((0x100U 
                                                                             & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 8U)) 
                                                                            | ((0x80U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 7U)) 
                                                                               | ((0x40U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))))))))))))))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               ((0x8000U 
                                                                 & ((~ 
                                                                     ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                    << 0xfU)) 
                                                                | ((0x4000U 
                                                                    & ((~ 
                                                                        ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                       << 0xeU)) 
                                                                   | ((0x2000U 
                                                                       & ((~ 
                                                                           ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                            & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                          << 0xdU)) 
                                                                      | ((0x1000U 
                                                                          & ((~ 
                                                                              ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                               & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                             << 0xcU)) 
                                                                         | ((0x800U 
                                                                             & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 0xbU)) 
                                                                            | ((0x400U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 0xaU)) 
                                                                               | ((0x200U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                                >> 3U))) 
                                                                                & ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                                >> 3U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                                >> 2U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                                >> 3U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                                >> 3U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                                >> 2U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                                >> 1U))) 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                                >> 2U))) 
                                                                                & ((~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                                >> 2U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                                                                & (~ 
                                                                                ((~ 
                                                                                (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                                                >> 1U)) 
                                                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))))))))))))))))))))),33);
        bufp->chgCData(oldp+164,(((0x80U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                            << 7U)) 
                                  | ((0x40U & ((~ (
                                                   (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                               << 6U)) 
                                     | ((0x20U & ((~ 
                                                   ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                    & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                 & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                             << 4U)) 
                                           | ((8U & 
                                               ((~ 
                                                 ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                  & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((~ 
                                                      ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ 
                                                         ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                          & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                           & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))))))),8);
        bufp->chgCData(oldp+165,(((0x80U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                            << 7U)) 
                                  | ((0x40U & ((~ (
                                                   (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                               << 6U)) 
                                     | ((0x20U & ((~ 
                                                   ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                    & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                 & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                             << 4U)) 
                                           | ((8U & 
                                               ((~ 
                                                 ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                  & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                << 3U)) 
                                              | ((4U 
                                                  & ((~ 
                                                      ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & ((~ 
                                                         ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                          & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & (~ 
                                                          ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                           & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))))))),8);
        bufp->chgIData(oldp+166,(((0x10000U & ((~ (
                                                   (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                               << 0x10U)) 
                                  | ((0x8000U & ((~ 
                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                 << 0xfU)) 
                                     | ((0x4000U & 
                                         ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                              & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                          << 0xeU)) 
                                        | ((0x2000U 
                                            & ((~ (
                                                   (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                               << 0xdU)) 
                                           | ((0x1000U 
                                               & ((~ 
                                                   ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                    & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                  << 0xcU)) 
                                              | ((0x800U 
                                                  & ((~ 
                                                      ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                     << 0xbU)) 
                                                 | ((0x400U 
                                                     & ((~ 
                                                         ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                          & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                        << 0xaU)) 
                                                    | ((0x200U 
                                                        & ((~ 
                                                            ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                             & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                           << 9U)) 
                                                       | ((0x100U 
                                                           & ((~ 
                                                               ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                              << 8U)) 
                                                          | ((0x80U 
                                                              & ((~ 
                                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                 << 7U)) 
                                                             | ((0x40U 
                                                                 & ((~ 
                                                                     ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                    << 6U)) 
                                                                | ((0x20U 
                                                                    & ((~ 
                                                                        ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                       << 5U)) 
                                                                   | ((0x10U 
                                                                       & ((~ 
                                                                           ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                            & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                          << 4U)) 
                                                                      | ((8U 
                                                                          & ((~ 
                                                                              ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                               & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                             << 3U)) 
                                                                         | ((4U 
                                                                             & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 2U)) 
                                                                            | ((2U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))))))))))))))))))),17);
        bufp->chgQData(oldp+167,((((QData)((IData)(
                                                   ((0x10000U 
                                                     & ((~ 
                                                         ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                          & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                        << 0x10U)) 
                                                    | ((0x8000U 
                                                        & ((~ 
                                                            ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                             & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                           << 0xfU)) 
                                                       | ((0x4000U 
                                                           & ((~ 
                                                               ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                              << 0xeU)) 
                                                          | ((0x2000U 
                                                              & ((~ 
                                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                 << 0xdU)) 
                                                             | ((0x1000U 
                                                                 & ((~ 
                                                                     ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                    << 0xcU)) 
                                                                | ((0x800U 
                                                                    & ((~ 
                                                                        ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                       << 0xbU)) 
                                                                   | ((0x400U 
                                                                       & ((~ 
                                                                           ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                            & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                          << 0xaU)) 
                                                                      | ((0x200U 
                                                                          & ((~ 
                                                                              ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                               & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                             << 9U)) 
                                                                         | ((0x100U 
                                                                             & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 8U)) 
                                                                            | ((0x80U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 7U)) 
                                                                               | ((0x40U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))))))))))))))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               ((0x8000U 
                                                                 & ((~ 
                                                                     ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                    << 0xfU)) 
                                                                | ((0x4000U 
                                                                    & ((~ 
                                                                        ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                       << 0xeU)) 
                                                                   | ((0x2000U 
                                                                       & ((~ 
                                                                           ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                            & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                          << 0xdU)) 
                                                                      | ((0x1000U 
                                                                          & ((~ 
                                                                              ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                               & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                             << 0xcU)) 
                                                                         | ((0x800U 
                                                                             & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 0xbU)) 
                                                                            | ((0x400U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 0xaU)) 
                                                                               | ((0x200U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                                                & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))))))))))))))))))))),33);
        bufp->chgWData(oldp+169,(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_hi),66);
        bufp->chgBit(oldp+172,((1U & (IData)((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplier_reg 
                                              >> 2U)))));
        bufp->chgBit(oldp+173,((1U & (IData)((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplier_reg 
                                              >> 1U)))));
        bufp->chgBit(oldp+174,((1U & (IData)(vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplier_reg))));
    }
    bufp->chgBit(oldp+175,(vlSelf->clock));
    bufp->chgBit(oldp+176,(vlSelf->reset));
    bufp->chgIData(oldp+177,(vlSelf->io_fs_pc),32);
    bufp->chgCData(oldp+178,(vlSelf->io_op),7);
    bufp->chgBit(oldp+179,(vlSelf->io_in_WB));
    bufp->chgIData(oldp+180,(vlSelf->io_wb_pc),32);
    bufp->chgIData(oldp+181,(vlSelf->io_wb_inst),32);
    bufp->chgIData(oldp+182,(vlSelf->io_ds_pc),32);
    bufp->chgQData(oldp+183,(vlSelf->io_mem_result),64);
    bufp->chgCData(oldp+185,(vlSelf->io_ld_type),3);
    bufp->chgBit(oldp+186,(vlSelf->Top__DOT__ifu_io_inst_sram_req));
    bufp->chgBit(oldp+187,(((IData)(vlSelf->Top__DOT__ifu_io_inst_sram_req) 
                            & (IData)(vlSelf->Top__DOT__ifu_io_inst_sram_addr_ok))));
    bufp->chgBit(oldp+188,(((~ (IData)(vlSelf->reset)) 
                            & ((IData)(vlSelf->Top__DOT__ifu_io_inst_sram_req) 
                               & (IData)(vlSelf->Top__DOT__ifu_io_inst_sram_addr_ok)))));
}

void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_cleanup\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
