// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__trace_chg_sub_1(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 7087);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                    >> 0xeU))));
        bufp->chgBit(oldp+1,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                              >> 0xdU))) 
                                       & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                 >> 0xeU))) 
                                          & ((~ ((~ 
                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                   >> 0xeU)) 
                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                             & (~ (
                                                   (~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                     >> 0xdU)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+2,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                    >> 0xfU))));
        bufp->chgBit(oldp+3,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                              >> 0xeU))) 
                                       & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                 >> 0xfU))) 
                                          & ((~ ((~ 
                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                   >> 0xfU)) 
                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                             & (~ (
                                                   (~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                     >> 0xeU)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+4,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                    >> 0x10U))));
        bufp->chgBit(oldp+5,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                              >> 0xfU))) 
                                       & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                 >> 0x10U))) 
                                          & ((~ ((~ 
                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                   >> 0x10U)) 
                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                             & (~ (
                                                   (~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                     >> 0xfU)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+6,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                    >> 0x11U))));
        bufp->chgBit(oldp+7,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                              >> 0x10U))) 
                                       & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                 >> 0x11U))) 
                                          & ((~ ((~ 
                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                   >> 0x11U)) 
                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                             & (~ (
                                                   (~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                     >> 0x10U)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+8,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                    >> 0x12U))));
        bufp->chgBit(oldp+9,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                           & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                              >> 0x11U))) 
                                       & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                              & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                 >> 0x12U))) 
                                          & ((~ ((~ 
                                                  (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                   >> 0x12U)) 
                                                 & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                             & (~ (
                                                   (~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                     >> 0x11U)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+10,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                     >> 0x13U))));
        bufp->chgBit(oldp+11,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x12U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                  >> 0x13U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x13U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x12U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+12,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                     >> 0x14U))));
        bufp->chgBit(oldp+13,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x13U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                  >> 0x14U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x14U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x13U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+14,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+15,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x14U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                  >> 0x15U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x15U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x14U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+16,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                     >> 0x16U))));
        bufp->chgBit(oldp+17,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x15U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                  >> 0x16U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x16U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x15U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+18,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                     >> 0x17U))));
        bufp->chgBit(oldp+19,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x16U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                  >> 0x17U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x17U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x16U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+20,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                     >> 0x18U))));
        bufp->chgBit(oldp+21,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x17U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                  >> 0x18U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x18U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x17U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+22,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                     >> 0x19U))));
        bufp->chgBit(oldp+23,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x18U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                  >> 0x19U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x19U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x18U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+24,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+25,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x19U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                  >> 0x1aU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x1aU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x19U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+26,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+27,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x1aU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                  >> 0x1bU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x1bU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x1aU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+28,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+29,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x1bU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                  >> 0x1cU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x1cU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x1bU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+30,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+31,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x1cU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                  >> 0x1dU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x1dU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x1cU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+32,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+33,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x1dU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                  >> 0x1eU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x1eU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x1dU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+34,((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                               >> 0x1fU)));
        bufp->chgBit(oldp+35,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x1eU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                  >> 0x1fU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x1fU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x1eU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+36,((1U & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U])));
        bufp->chgBit(oldp+37,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                               >> 0x1fU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U])) 
                                           & ((~ ((~ 
                                                   vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U]) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                                                    >> 0x1fU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+38,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 1U))));
        bufp->chgBit(oldp+39,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U])) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 1U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 1U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U]) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+40,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 2U))));
        bufp->chgBit(oldp+41,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 1U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 2U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 2U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 1U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+42,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 3U))));
        bufp->chgBit(oldp+43,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 2U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 3U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 3U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 2U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+44,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 4U))));
        bufp->chgBit(oldp+45,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 3U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 4U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 4U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 3U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+46,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 5U))));
        bufp->chgBit(oldp+47,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 4U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 5U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 5U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 4U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+48,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 6U))));
        bufp->chgBit(oldp+49,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 5U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 6U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 6U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 5U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+50,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 7U))));
        bufp->chgBit(oldp+51,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 6U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 7U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 7U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 6U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+52,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 8U))));
        bufp->chgBit(oldp+53,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 7U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 8U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 8U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 7U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+54,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 9U))));
        bufp->chgBit(oldp+55,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 8U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 9U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 9U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 8U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+56,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+57,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 9U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0xaU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 9U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+58,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+59,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0xaU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0xbU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0xbU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0xaU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+60,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0xcU))));
        bufp->chgBit(oldp+61,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0xbU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0xcU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0xcU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0xbU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+62,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0xdU))));
        bufp->chgBit(oldp+63,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0xcU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0xdU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0xdU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0xcU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+64,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0xeU))));
        bufp->chgBit(oldp+65,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0xdU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0xeU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0xeU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0xdU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+66,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0xfU))));
        bufp->chgBit(oldp+67,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0xeU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0xfU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0xfU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0xeU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+68,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x10U))));
        bufp->chgBit(oldp+69,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0xfU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x10U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x10U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0xfU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+70,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x11U))));
        bufp->chgBit(oldp+71,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x10U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x11U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x11U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x10U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+72,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x12U))));
        bufp->chgBit(oldp+73,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x11U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x12U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x12U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x11U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+74,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x13U))));
        bufp->chgBit(oldp+75,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x12U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x13U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x13U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x12U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+76,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x14U))));
        bufp->chgBit(oldp+77,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x13U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x14U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x14U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x13U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+78,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x15U))));
        bufp->chgBit(oldp+79,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x14U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x15U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x15U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x14U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+80,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x16U))));
        bufp->chgBit(oldp+81,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x15U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x16U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x16U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x15U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+82,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x17U))));
        bufp->chgBit(oldp+83,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x16U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x17U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x17U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x16U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+84,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x18U))));
        bufp->chgBit(oldp+85,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x17U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x18U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x18U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x17U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+86,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x19U))));
        bufp->chgBit(oldp+87,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x18U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x19U))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x19U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x18U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+88,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+89,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x19U))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x1aU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1aU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x19U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+90,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x1bU))));
        bufp->chgBit(oldp+91,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x1aU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x1bU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1bU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1aU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+92,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x1cU))));
        bufp->chgBit(oldp+93,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x1bU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x1cU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1cU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1bU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+94,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x1dU))));
        bufp->chgBit(oldp+95,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x1cU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x1dU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1dU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1cU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+96,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+97,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x1dU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x1eU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1eU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1dU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+98,((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                               >> 0x1fU)));
        bufp->chgBit(oldp+99,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                            & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                               >> 0x1eU))) 
                                        & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                               & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x1fU))) 
                                           & ((~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1fU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                              & (~ 
                                                 ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1eU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+100,((1U & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U])));
        bufp->chgBit(oldp+101,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                             & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                >> 0x1fU))) 
                                         & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U])) 
                                            & ((~ (
                                                   (~ 
                                                    vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U]) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                               & (~ 
                                                  ((~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                     >> 0x1fU)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+102,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 1U))));
        bufp->chgBit(oldp+103,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                             & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U])) 
                                         & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                   >> 1U))) 
                                            & ((~ (
                                                   (~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                     >> 1U)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                               & (~ 
                                                  ((~ 
                                                    vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U]) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+104,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 2U))));
        bufp->chgBit(oldp+105,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                             & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                >> 1U))) 
                                         & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                   >> 2U))) 
                                            & ((~ (
                                                   (~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                     >> 2U)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                               & (~ 
                                                  ((~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                     >> 1U)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+106,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 3U))));
        bufp->chgBit(oldp+107,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                             & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                >> 2U))) 
                                         & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                                & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                   >> 3U))) 
                                            & ((~ (
                                                   (~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                     >> 3U)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                               & (~ 
                                                  ((~ 
                                                    (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                     >> 2U)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
        bufp->chgBit(oldp+108,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 4U))));
        bufp->chgBit(oldp+109,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                             & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                >> 3U))) 
                                         & ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                            & (~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                    >> 3U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))))));
        bufp->chgBit(oldp+110,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 5U))));
        bufp->chgBit(oldp+111,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+112,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 6U))));
        bufp->chgBit(oldp+113,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+114,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 7U))));
        bufp->chgBit(oldp+115,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+116,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 8U))));
        bufp->chgBit(oldp+117,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+118,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 9U))));
        bufp->chgBit(oldp+119,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+120,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0xaU))));
        bufp->chgBit(oldp+121,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+122,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0xbU))));
        bufp->chgBit(oldp+123,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+124,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0xcU))));
        bufp->chgBit(oldp+125,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+126,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0xdU))));
        bufp->chgBit(oldp+127,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+128,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0xeU))));
        bufp->chgBit(oldp+129,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+130,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+131,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+132,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+133,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+134,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+135,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+136,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+137,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+138,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+139,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+140,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+141,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+142,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x15U))));
        bufp->chgBit(oldp+143,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+144,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x16U))));
        bufp->chgBit(oldp+145,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+146,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x17U))));
        bufp->chgBit(oldp+147,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+148,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x18U))));
        bufp->chgBit(oldp+149,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+150,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x19U))));
        bufp->chgBit(oldp+151,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+152,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+153,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+154,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+155,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+156,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+157,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+158,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+159,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+160,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+161,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+162,((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                >> 0x1fU)));
        bufp->chgBit(oldp+163,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+164,(0U));
        bufp->chgBit(oldp+165,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+166,(0U));
        bufp->chgBit(oldp+167,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+168,(0U));
        bufp->chgBit(oldp+169,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+170,(0U));
        bufp->chgBit(oldp+171,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+172,(0U));
        bufp->chgBit(oldp+173,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+174,(0U));
        bufp->chgBit(oldp+175,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+176,(0U));
        bufp->chgBit(oldp+177,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+178,(0U));
        bufp->chgBit(oldp+179,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+180,(0U));
        bufp->chgBit(oldp+181,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+182,(0U));
        bufp->chgBit(oldp+183,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+184,(0U));
        bufp->chgBit(oldp+185,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+186,(0U));
        bufp->chgBit(oldp+187,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+188,(0U));
        bufp->chgBit(oldp+189,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+190,(0U));
        bufp->chgBit(oldp+191,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+192,(0U));
        bufp->chgBit(oldp+193,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+194,(0U));
        bufp->chgBit(oldp+195,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+196,(0U));
        bufp->chgBit(oldp+197,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+198,(0U));
        bufp->chgBit(oldp+199,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+200,(0U));
        bufp->chgBit(oldp+201,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+202,(0U));
        bufp->chgBit(oldp+203,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+204,(0U));
        bufp->chgBit(oldp+205,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+206,(0U));
        bufp->chgBit(oldp+207,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+208,(0U));
        bufp->chgBit(oldp+209,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+210,(0U));
        bufp->chgBit(oldp+211,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+212,(0U));
        bufp->chgBit(oldp+213,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+214,(0U));
        bufp->chgBit(oldp+215,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+216,(0U));
        bufp->chgBit(oldp+217,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+218,(0U));
        bufp->chgBit(oldp+219,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+220,(0U));
        bufp->chgBit(oldp+221,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+222,(0U));
        bufp->chgBit(oldp+223,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+224,(0U));
        bufp->chgBit(oldp+225,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+226,(0U));
        bufp->chgBit(oldp+227,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+228,(0U));
        bufp->chgBit(oldp+229,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+230,(0U));
        bufp->chgBit(oldp+231,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+232,(0U));
        bufp->chgBit(oldp+233,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgBit(oldp+234,(0U));
        bufp->chgBit(oldp+235,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
        bufp->chgCData(oldp+236,(((0x80U & ((~ ((~ 
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
        bufp->chgCData(oldp+237,(((0x80U & ((~ ((~ 
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
        bufp->chgIData(oldp+238,(((0x10000U & ((~ (
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
        bufp->chgQData(oldp+239,((((QData)((IData)(
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
        bufp->chgCData(oldp+241,(((0x80U & ((~ ((~ 
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
        bufp->chgCData(oldp+242,(((0x80U & ((~ ((~ 
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
        bufp->chgIData(oldp+243,(((0x10000U & ((~ (
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
        bufp->chgQData(oldp+244,((((QData)((IData)(
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
        bufp->chgWData(oldp+246,(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_lo),66);
        bufp->chgCData(oldp+249,(((0x80U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
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
        bufp->chgCData(oldp+250,(((0x80U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
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
        bufp->chgIData(oldp+251,(((0x10000U & ((~ (
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
        bufp->chgQData(oldp+252,((((QData)((IData)(
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
        bufp->chgCData(oldp+254,(((0x80U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
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
        bufp->chgCData(oldp+255,(((0x80U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
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
        bufp->chgIData(oldp+256,(((0x10000U & ((~ (
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
        bufp->chgQData(oldp+257,((((QData)((IData)(
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
        bufp->chgWData(oldp+259,(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_hi),66);
        bufp->chgBit(oldp+262,((1U & (IData)((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplier_reg 
                                              >> 2U)))));
        bufp->chgBit(oldp+263,((1U & (IData)((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplier_reg 
                                              >> 1U)))));
        bufp->chgBit(oldp+264,((1U & (IData)(vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplier_reg))));
    }
    bufp->chgBit(oldp+265,(vlSelf->clock));
    bufp->chgBit(oldp+266,(vlSelf->reset));
    bufp->chgIData(oldp+267,(vlSelf->io_fs_pc),32);
    bufp->chgCData(oldp+268,(vlSelf->io_op),7);
    bufp->chgBit(oldp+269,(vlSelf->io_in_WB));
    bufp->chgIData(oldp+270,(vlSelf->io_wb_pc),32);
    bufp->chgIData(oldp+271,(vlSelf->io_wb_inst),32);
    bufp->chgIData(oldp+272,(vlSelf->io_ds_pc),32);
    bufp->chgQData(oldp+273,(vlSelf->io_mem_result),64);
    bufp->chgCData(oldp+275,(vlSelf->io_ld_type),3);
    bufp->chgBit(oldp+276,(vlSelf->Top__DOT__ifu_io_inst_sram_req));
    bufp->chgBit(oldp+277,(vlSelf->Top__DOT__ifu__DOT__prefs_ready_go));
    bufp->chgBit(oldp+278,(((~ (IData)(vlSelf->reset)) 
                            & (IData)(vlSelf->Top__DOT__ifu__DOT__prefs_ready_go))));
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
