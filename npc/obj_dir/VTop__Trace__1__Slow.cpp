// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_full_sub_1(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+971,((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+972,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                          & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                             >> 0x1eU))) 
                                      & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                             & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                >> 0x1fU))) 
                                         & ((~ ((~ 
                                                 (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                  >> 0x1fU)) 
                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                            & (~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1eU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
    bufp->fullBit(oldp+973,((1U & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U])));
    bufp->fullBit(oldp+974,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                          & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                             >> 0x1fU))) 
                                      & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                             & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U])) 
                                         & ((~ ((~ 
                                                 vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U]) 
                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                            & (~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                                    >> 0x1fU)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
    bufp->fullBit(oldp+975,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                   >> 1U))));
    bufp->fullBit(oldp+976,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                          & vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U])) 
                                      & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                             & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                >> 1U))) 
                                         & ((~ ((~ 
                                                 (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                  >> 1U)) 
                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                            & (~ ((~ 
                                                   vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U]) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
    bufp->fullBit(oldp+977,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                   >> 2U))));
    bufp->fullBit(oldp+978,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                          & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                             >> 1U))) 
                                      & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                             & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                >> 2U))) 
                                         & ((~ ((~ 
                                                 (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                  >> 2U)) 
                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                            & (~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                    >> 1U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
    bufp->fullBit(oldp+979,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                   >> 3U))));
    bufp->fullBit(oldp+980,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                          & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                             >> 2U))) 
                                      & ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_positive) 
                                             & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                >> 3U))) 
                                         & ((~ ((~ 
                                                 (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                  >> 3U)) 
                                                & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5))) 
                                            & (~ ((~ 
                                                   (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                    >> 2U)) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3))))))))));
    bufp->fullBit(oldp+981,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                   >> 4U))));
    bufp->fullBit(oldp+982,((1U & (~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
                                          & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                             >> 3U))) 
                                      & ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                         & (~ ((~ (
                                                   vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                                   >> 3U)) 
                                               & (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))))));
    bufp->fullBit(oldp+983,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                   >> 5U))));
    bufp->fullBit(oldp+984,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+985,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                   >> 6U))));
    bufp->fullBit(oldp+986,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+987,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                   >> 7U))));
    bufp->fullBit(oldp+988,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+989,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                   >> 8U))));
    bufp->fullBit(oldp+990,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+991,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                   >> 9U))));
    bufp->fullBit(oldp+992,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+993,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+994,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+995,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+996,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+997,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+998,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                      & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+999,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+1000,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1001,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1002,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1003,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1004,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1005,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1006,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1007,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1008,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1009,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1010,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1011,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1012,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1013,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1014,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1015,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1016,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1017,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1018,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1019,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1020,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1021,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1022,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1023,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1024,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1025,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1026,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1027,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1028,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1029,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1030,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1031,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1032,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1033,((1U & (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1034,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1035,((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1036,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1037,(0U));
    bufp->fullBit(oldp+1038,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1039,(0U));
    bufp->fullBit(oldp+1040,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1041,(0U));
    bufp->fullBit(oldp+1042,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1043,(0U));
    bufp->fullBit(oldp+1044,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1045,(0U));
    bufp->fullBit(oldp+1046,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1047,(0U));
    bufp->fullBit(oldp+1048,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1049,(0U));
    bufp->fullBit(oldp+1050,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1051,(0U));
    bufp->fullBit(oldp+1052,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1053,(0U));
    bufp->fullBit(oldp+1054,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1055,(0U));
    bufp->fullBit(oldp+1056,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1057,(0U));
    bufp->fullBit(oldp+1058,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1059,(0U));
    bufp->fullBit(oldp+1060,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1061,(0U));
    bufp->fullBit(oldp+1062,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1063,(0U));
    bufp->fullBit(oldp+1064,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1065,(0U));
    bufp->fullBit(oldp+1066,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1067,(0U));
    bufp->fullBit(oldp+1068,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1069,(0U));
    bufp->fullBit(oldp+1070,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1071,(0U));
    bufp->fullBit(oldp+1072,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1073,(0U));
    bufp->fullBit(oldp+1074,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1075,(0U));
    bufp->fullBit(oldp+1076,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1077,(0U));
    bufp->fullBit(oldp+1078,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1079,(0U));
    bufp->fullBit(oldp+1080,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1081,(0U));
    bufp->fullBit(oldp+1082,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1083,(0U));
    bufp->fullBit(oldp+1084,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1085,(0U));
    bufp->fullBit(oldp+1086,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1087,(0U));
    bufp->fullBit(oldp+1088,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1089,(0U));
    bufp->fullBit(oldp+1090,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1091,(0U));
    bufp->fullBit(oldp+1092,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1093,(0U));
    bufp->fullBit(oldp+1094,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1095,(0U));
    bufp->fullBit(oldp+1096,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1097,(0U));
    bufp->fullBit(oldp+1098,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1099,(0U));
    bufp->fullBit(oldp+1100,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1101,(0U));
    bufp->fullBit(oldp+1102,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1103,(0U));
    bufp->fullBit(oldp+1104,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1105,(0U));
    bufp->fullBit(oldp+1106,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullBit(oldp+1107,(0U));
    bufp->fullBit(oldp+1108,((1U & (~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                       & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))))));
    bufp->fullCData(oldp+1109,(((0x80U & ((~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
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
                                          << 7U)) | 
                                ((0x40U & ((~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
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
                                 | ((0x20U & ((~ ((~ 
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
                                    | ((0x10U & ((~ 
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
                                       | ((8U & ((~ 
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
                                          | ((4U & 
                                              ((~ (
                                                   (~ 
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
    bufp->fullCData(oldp+1110,(((0x80U & ((~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
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
                                          << 7U)) | 
                                ((0x40U & ((~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
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
                                 | ((0x20U & ((~ ((~ 
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
                                    | ((0x10U & ((~ 
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
                                       | ((8U & ((~ 
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
                                          | ((4U & 
                                              ((~ (
                                                   (~ 
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
    bufp->fullIData(oldp+1111,(((0x10000U & ((~ ((~ 
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
                                | ((0x8000U & ((~ (
                                                   (~ 
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
                                   | ((0x4000U & ((~ 
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
                                      | ((0x2000U & 
                                          ((~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
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
    bufp->fullQData(oldp+1112,((((QData)((IData)(((0x10000U 
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
    bufp->fullCData(oldp+1114,(((0x80U & ((~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
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
                                          << 7U)) | 
                                ((0x40U & ((~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
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
                                 | ((0x20U & ((~ ((~ 
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
                                    | ((0x10U & ((~ 
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
                                       | ((8U & ((~ 
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
                                          | ((4U & 
                                              ((~ (
                                                   (~ 
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
    bufp->fullCData(oldp+1115,(((0x80U & ((~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
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
                                          << 7U)) | 
                                ((0x40U & ((~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
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
                                 | ((0x20U & ((~ ((~ 
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
                                    | ((0x10U & ((~ 
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
                                       | ((8U & ((~ 
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
                                          | ((4U & 
                                              ((~ (
                                                   (~ 
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
    bufp->fullIData(oldp+1116,(((0x10000U & ((~ ((~ 
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
                                | ((0x8000U & ((~ (
                                                   (~ 
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
                                   | ((0x4000U & ((~ 
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
                                      | ((0x2000U & 
                                          ((~ ((~ ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__RS_io_sel_double_positive) 
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
    bufp->fullQData(oldp+1117,((((QData)((IData)(((0x10000U 
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
    bufp->fullWData(oldp+1119,(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_lo),66);
    bufp->fullCData(oldp+1122,(((0x80U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                              & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                          << 7U)) | 
                                ((0x40U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                               & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                           << 6U)) 
                                 | ((0x20U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                  & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                              << 5U)) 
                                    | ((0x10U & ((~ 
                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                 << 4U)) 
                                       | ((8U & ((~ 
                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((~ (
                                                   (~ 
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
    bufp->fullCData(oldp+1123,(((0x80U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                              & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                          << 7U)) | 
                                ((0x40U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                               & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                           << 6U)) 
                                 | ((0x20U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                  & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                              << 5U)) 
                                    | ((0x10U & ((~ 
                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                 << 4U)) 
                                       | ((8U & ((~ 
                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((~ (
                                                   (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
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
    bufp->fullIData(oldp+1124,(((0x10000U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                 & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                             << 0x10U)) 
                                | ((0x8000U & ((~ (
                                                   (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                               << 0xfU)) 
                                   | ((0x4000U & ((~ 
                                                   ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                    & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                  << 0xeU)) 
                                      | ((0x2000U & 
                                          ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
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
    bufp->fullQData(oldp+1125,((((QData)((IData)(((0x10000U 
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
    bufp->fullCData(oldp+1127,(((0x80U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                              & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                          << 7U)) | 
                                ((0x40U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                               & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                           << 6U)) 
                                 | ((0x20U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                  & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                              << 5U)) 
                                    | ((0x10U & ((~ 
                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                 << 4U)) 
                                       | ((8U & ((~ 
                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((~ (
                                                   (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
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
    bufp->fullCData(oldp+1128,(((0x80U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                              & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                          << 7U)) | 
                                ((0x40U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                               & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                           << 6U)) 
                                 | ((0x20U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                  & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                              << 5U)) 
                                    | ((0x10U & ((~ 
                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                 << 4U)) 
                                       | ((8U & ((~ 
                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((~ (
                                                   (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
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
    bufp->fullIData(oldp+1129,(((0x10000U & ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                 & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                             << 0x10U)) 
                                | ((0x8000U & ((~ (
                                                   (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                   & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                               << 0xfU)) 
                                   | ((0x4000U & ((~ 
                                                   ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
                                                    & (~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3)))) 
                                                  << 0xeU)) 
                                      | ((0x2000U & 
                                          ((~ ((~ (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5)) 
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
    bufp->fullQData(oldp+1130,((((QData)((IData)(((0x10000U 
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
    bufp->fullWData(oldp+1132,(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_hi),66);
    bufp->fullBit(oldp+1135,((1U & (IData)((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplier_reg 
                                            >> 2U)))));
    bufp->fullBit(oldp+1136,((1U & (IData)((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplier_reg 
                                            >> 1U)))));
    bufp->fullBit(oldp+1137,((1U & (IData)(vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplier_reg))));
    bufp->fullBit(oldp+1138,(vlSelf->clock));
    bufp->fullBit(oldp+1139,(vlSelf->reset));
    bufp->fullIData(oldp+1140,(vlSelf->io_fs_pc),32);
    bufp->fullCData(oldp+1141,(vlSelf->io_op),7);
    bufp->fullBit(oldp+1142,(vlSelf->io_in_WB));
    bufp->fullIData(oldp+1143,(vlSelf->io_wb_pc),32);
    bufp->fullIData(oldp+1144,(vlSelf->io_wb_inst),32);
    bufp->fullIData(oldp+1145,(vlSelf->io_ds_pc),32);
    bufp->fullBit(oldp+1146,(vlSelf->io_clock));
    bufp->fullQData(oldp+1147,(vlSelf->io_mem_result),64);
    bufp->fullCData(oldp+1149,(vlSelf->io_ld_type),3);
    bufp->fullBit(oldp+1150,(1U));
    bufp->fullQData(oldp+1151,(0ULL),64);
    bufp->fullIData(oldp+1153,(0U),32);
    bufp->fullCData(oldp+1154,(0U),8);
    bufp->fullBit(oldp+1155,(0U));
    bufp->fullCData(oldp+1156,(0U),3);
    bufp->fullCData(oldp+1157,(1U),3);
    bufp->fullCData(oldp+1158,(2U),3);
    bufp->fullCData(oldp+1159,(3U),3);
    bufp->fullCData(oldp+1160,(4U),3);
    bufp->fullCData(oldp+1161,(0x11U),5);
    bufp->fullCData(oldp+1162,(0U),5);
    bufp->fullCData(oldp+1163,(1U),5);
    bufp->fullCData(oldp+1164,(2U),5);
    bufp->fullCData(oldp+1165,(3U),5);
    bufp->fullCData(oldp+1166,(4U),5);
    bufp->fullCData(oldp+1167,(5U),5);
    bufp->fullCData(oldp+1168,(6U),5);
    bufp->fullCData(oldp+1169,(7U),5);
    bufp->fullCData(oldp+1170,(8U),5);
    bufp->fullCData(oldp+1171,(9U),5);
    bufp->fullCData(oldp+1172,(0xaU),5);
    bufp->fullCData(oldp+1173,(0xbU),5);
    bufp->fullCData(oldp+1174,(0xcU),5);
    bufp->fullCData(oldp+1175,(0xdU),5);
    bufp->fullCData(oldp+1176,(0xeU),5);
    bufp->fullCData(oldp+1177,(0xfU),5);
    bufp->fullCData(oldp+1178,(0x10U),5);
    bufp->fullCData(oldp+1179,(0x12U),5);
    bufp->fullCData(oldp+1180,(0x13U),5);
    bufp->fullCData(oldp+1181,(0x14U),5);
    bufp->fullCData(oldp+1182,(0x15U),5);
    bufp->fullCData(oldp+1183,(0x16U),5);
    bufp->fullCData(oldp+1184,(0x17U),5);
    bufp->fullCData(oldp+1185,(0x18U),5);
    bufp->fullCData(oldp+1186,(0x19U),5);
    bufp->fullCData(oldp+1187,(0x1aU),5);
    bufp->fullCData(oldp+1188,(0x1bU),5);
    bufp->fullCData(oldp+1189,(0x1cU),5);
    bufp->fullCData(oldp+1190,(0x1dU),5);
    bufp->fullCData(oldp+1191,(0x1eU),5);
    bufp->fullCData(oldp+1192,(0x1fU),5);
}
