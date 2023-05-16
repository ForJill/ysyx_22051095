// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__trace_chg_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTop___024root__trace_chg_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_h554601a6__0;
    VlWide<3>/*95:0*/ __Vtemp_ha10d091d__0;
    VlWide<3>/*95:0*/ __Vtemp_h9ebd919b__0;
    VlWide<3>/*95:0*/ __Vtemp_h67e2dbbd__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,((4ULL + vlSelf->Top__DOT__PC__DOT__init)),64);
        bufp->chgCData(oldp+2,(vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_addr),3);
        bufp->chgQData(oldp+3,(vlSelf->Top__DOT__alu__DOT__CSR
                               [0U]),64);
        bufp->chgQData(oldp+5,(vlSelf->Top__DOT__alu__DOT__CSR
                               [1U]),64);
        bufp->chgQData(oldp+7,(vlSelf->Top__DOT__alu__DOT__CSR
                               [2U]),64);
        bufp->chgQData(oldp+9,(vlSelf->Top__DOT__alu__DOT__CSR
                               [3U]),64);
        bufp->chgQData(oldp+11,(vlSelf->Top__DOT__alu__DOT__CSR
                                [4U]),64);
        bufp->chgCData(oldp+13,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                  >> 0xfU)))),5);
        bufp->chgCData(oldp+14,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                  >> 0x14U)))),5);
        bufp->chgQData(oldp+15,(vlSelf->Top__DOT__registers__DOT__registers
                                [0U]),64);
        bufp->chgQData(oldp+17,(vlSelf->Top__DOT__registers__DOT__registers
                                [1U]),64);
        bufp->chgQData(oldp+19,(vlSelf->Top__DOT__registers__DOT__registers
                                [2U]),64);
        bufp->chgQData(oldp+21,(vlSelf->Top__DOT__registers__DOT__registers
                                [3U]),64);
        bufp->chgQData(oldp+23,(vlSelf->Top__DOT__registers__DOT__registers
                                [4U]),64);
        bufp->chgQData(oldp+25,(vlSelf->Top__DOT__registers__DOT__registers
                                [5U]),64);
        bufp->chgQData(oldp+27,(vlSelf->Top__DOT__registers__DOT__registers
                                [6U]),64);
        bufp->chgQData(oldp+29,(vlSelf->Top__DOT__registers__DOT__registers
                                [7U]),64);
        bufp->chgQData(oldp+31,(vlSelf->Top__DOT__registers__DOT__registers
                                [8U]),64);
        bufp->chgQData(oldp+33,(vlSelf->Top__DOT__registers__DOT__registers
                                [9U]),64);
        bufp->chgQData(oldp+35,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xaU]),64);
        bufp->chgQData(oldp+37,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xbU]),64);
        bufp->chgQData(oldp+39,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xcU]),64);
        bufp->chgQData(oldp+41,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xdU]),64);
        bufp->chgQData(oldp+43,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xeU]),64);
        bufp->chgQData(oldp+45,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xfU]),64);
        bufp->chgQData(oldp+47,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x10U]),64);
        bufp->chgQData(oldp+49,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x12U]),64);
        bufp->chgQData(oldp+51,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x13U]),64);
        bufp->chgQData(oldp+53,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x14U]),64);
        bufp->chgQData(oldp+55,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x15U]),64);
        bufp->chgQData(oldp+57,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x16U]),64);
        bufp->chgQData(oldp+59,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x17U]),64);
        bufp->chgQData(oldp+61,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x18U]),64);
        bufp->chgQData(oldp+63,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x19U]),64);
        bufp->chgQData(oldp+65,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1aU]),64);
        bufp->chgQData(oldp+67,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1bU]),64);
        bufp->chgQData(oldp+69,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1cU]),64);
        bufp->chgQData(oldp+71,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1dU]),64);
        bufp->chgQData(oldp+73,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1eU]),64);
        bufp->chgQData(oldp+75,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1fU]),64);
        bufp->chgQData(oldp+77,(vlSelf->Top__DOT__PC__DOT__init),64);
        bufp->chgQData(oldp+79,(vlSelf->Top__DOT__alu__DOT__CSR[0]),64);
        bufp->chgQData(oldp+81,(vlSelf->Top__DOT__alu__DOT__CSR[1]),64);
        bufp->chgQData(oldp+83,(vlSelf->Top__DOT__alu__DOT__CSR[2]),64);
        bufp->chgQData(oldp+85,(vlSelf->Top__DOT__alu__DOT__CSR[3]),64);
        bufp->chgQData(oldp+87,(vlSelf->Top__DOT__alu__DOT__CSR[4]),64);
        bufp->chgQData(oldp+89,(vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data),64);
        bufp->chgBit(oldp+91,(vlSelf->Top__DOT__alu__DOT__div_io_div_signed));
        bufp->chgQData(oldp+92,(vlSelf->Top__DOT__alu__DOT__div_io_quotient),64);
        bufp->chgQData(oldp+94,(vlSelf->Top__DOT__alu__DOT__div_io_remainder),64);
        bufp->chgIData(oldp+96,(vlSelf->Top__DOT__alu__DOT__div_1_io_dividend),32);
        bufp->chgIData(oldp+97,(vlSelf->Top__DOT__alu__DOT__div_1_io_divisor),32);
        bufp->chgBit(oldp+98,(vlSelf->Top__DOT__alu__DOT__div_1_io_div_signed));
        bufp->chgIData(oldp+99,(vlSelf->Top__DOT__alu__DOT__div_1_io_quotient),32);
        bufp->chgIData(oldp+100,(vlSelf->Top__DOT__alu__DOT__div_1_io_remainder),32);
        bufp->chgBit(oldp+101,(vlSelf->Top__DOT__alu__DOT__div__DOT__start));
        bufp->chgBit(oldp+102,(vlSelf->Top__DOT__alu__DOT__div__DOT__end_));
        bufp->chgBit(oldp+103,(((IData)(vlSelf->Top__DOT__alu__DOT__div_io_div_signed) 
                                & ((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_heac6e062__0) 
                                   ^ ((0U != (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                         >> 0x14U)))) 
                                      & (IData)((vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data 
                                                 >> 0x3fU)))))));
        bufp->chgWData(oldp+104,(vlSelf->Top__DOT__alu__DOT__div__DOT__A),128);
        bufp->chgQData(oldp+108,(vlSelf->Top__DOT__alu__DOT__div__DOT__B),64);
        bufp->chgQData(oldp+110,(vlSelf->Top__DOT__alu__DOT__div__DOT__S),64);
        bufp->chgQData(oldp+112,(vlSelf->Top__DOT__alu__DOT__div__DOT__R),64);
        bufp->chgCData(oldp+114,(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt),8);
        bufp->chgBit(oldp+115,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x3eU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+116,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x3fU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+117,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x3cU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+118,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x3dU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+119,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x3aU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+120,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x3bU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+121,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x38U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+122,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x39U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgCData(oldp+123,(((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                    & ((0x38U == (0x3fU 
                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                   << 7U) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                               & ((0x39U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                              << 6U) 
                                             | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                  & ((0x3aU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                     & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                 << 5U) 
                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                     & ((0x3bU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                        & ((0x3cU 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                           & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                       << 3U) 
                                                      | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                           & ((0x3dU 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                              & ((0x3eU 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                               & ((0x3fU 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))))))))))),8);
        bufp->chgBit(oldp+124,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x36U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+125,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x37U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+126,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x34U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+127,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x35U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+128,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x32U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+129,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x33U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+130,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x30U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+131,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x31U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgSData(oldp+132,(vlSelf->Top__DOT__alu__DOT__div__DOT__S_lo_lo),16);
        bufp->chgBit(oldp+133,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x2eU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+134,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x2fU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+135,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x2cU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+136,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x2dU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+137,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x2aU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+138,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x2bU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+139,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x28U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+140,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x29U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgCData(oldp+141,(((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                    & ((0x28U == (0x3fU 
                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                   << 7U) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                               & ((0x29U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                              << 6U) 
                                             | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                  & ((0x2aU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                     & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                 << 5U) 
                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                     & ((0x2bU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                        & ((0x2cU 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                           & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                       << 3U) 
                                                      | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                           & ((0x2dU 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                              & ((0x2eU 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                               & ((0x2fU 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))))))))))),8);
        bufp->chgBit(oldp+142,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x26U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+143,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x27U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+144,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x24U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+145,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x25U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+146,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x22U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+147,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x23U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+148,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x20U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+149,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x21U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgIData(oldp+150,(vlSelf->Top__DOT__alu__DOT__div__DOT__S_lo),32);
        bufp->chgBit(oldp+151,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x1eU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+152,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x1fU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+153,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x1cU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+154,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x1dU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+155,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x1aU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+156,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x1bU == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+157,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x18U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+158,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x19U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgCData(oldp+159,(((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                    & ((0x18U == (0x3fU 
                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                   << 7U) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                               & ((0x19U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                              << 6U) 
                                             | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                  & ((0x1aU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                     & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                 << 5U) 
                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                     & ((0x1bU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                        & ((0x1cU 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                           & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                       << 3U) 
                                                      | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                           & ((0x1dU 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                              & ((0x1eU 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                               & ((0x1fU 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))))))))))),8);
        bufp->chgBit(oldp+160,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x16U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+161,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x17U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+162,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x14U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+163,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x15U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+164,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x12U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+165,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x13U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+166,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x10U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+167,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x11U == (0x3fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgSData(oldp+168,(vlSelf->Top__DOT__alu__DOT__div__DOT__S_hi_lo),16);
        bufp->chgBit(oldp+169,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0xeU == (0x3fU 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+170,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0xfU == (0x3fU 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+171,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0xcU == (0x3fU 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+172,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0xdU == (0x3fU 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+173,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0xaU == (0x3fU 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+174,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0xbU == (0x3fU 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+175,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((8U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+176,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((9U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgCData(oldp+177,(((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                    & ((8U == (0x3fU 
                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                   << 7U) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                               & ((9U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                              << 6U) 
                                             | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                  & ((0xaU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                     & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                 << 5U) 
                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                     & ((0xbU 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                        & ((0xcU 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                           & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                       << 3U) 
                                                      | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                           & ((0xdU 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                              & ((0xeU 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                               & ((0xfU 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))))))))))),8);
        bufp->chgBit(oldp+178,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((6U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+179,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((7U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+180,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((4U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+181,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((5U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+182,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((2U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+183,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((3U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+184,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+185,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((1U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
        bufp->chgIData(oldp+186,(vlSelf->Top__DOT__alu__DOT__div__DOT__S_hi),32);
        bufp->chgBit(oldp+187,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__start));
        bufp->chgBit(oldp+188,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__end_));
        bufp->chgIData(oldp+189,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___dividend_T_1)
                                   ? ((IData)(1U) + 
                                      (~ vlSelf->Top__DOT__alu__DOT__div_1_io_dividend))
                                   : vlSelf->Top__DOT__alu__DOT__div_1_io_dividend)),32);
        bufp->chgBit(oldp+190,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1_io_div_signed) 
                                & ((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_hea47ad50__0) 
                                   ^ ((0U != (0x1fU 
                                              & (IData)(
                                                        (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                         >> 0x14U)))) 
                                      & (IData)((vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data 
                                                 >> 0x1fU)))))));
        bufp->chgQData(oldp+191,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__A),64);
        bufp->chgIData(oldp+193,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__B),32);
        bufp->chgIData(oldp+194,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__S),32);
        bufp->chgIData(oldp+195,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__R),32);
        bufp->chgCData(oldp+196,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt),8);
        bufp->chgBit(oldp+197,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x1eU == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+198,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x1fU == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+199,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x1cU == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+200,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x1dU == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+201,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x1aU == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+202,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x1bU == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+203,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x18U == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+204,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x19U == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgCData(oldp+205,(((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                    & ((0x18U == (0x1fU 
                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                   << 7U) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                               & ((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                              << 6U) 
                                             | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                  & ((0x1aU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                     & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                 << 5U) 
                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                     & ((0x1bU 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                        & ((0x1cU 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                           & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                       << 3U) 
                                                      | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                           & ((0x1dU 
                                                               == 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                              & ((0x1eU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                               & ((0x1fU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))))))))))),8);
        bufp->chgBit(oldp+206,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x16U == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+207,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x17U == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+208,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x14U == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+209,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x15U == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+210,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x12U == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+211,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x13U == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+212,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x10U == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+213,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0x11U == (0x1fU 
                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgSData(oldp+214,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__S_lo),16);
        bufp->chgBit(oldp+215,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0xeU == (0x1fU 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+216,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0xfU == (0x1fU 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+217,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0xcU == (0x1fU 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+218,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0xdU == (0x1fU 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+219,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0xaU == (0x1fU 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+220,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0xbU == (0x1fU 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+221,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((8U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+222,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((9U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgCData(oldp+223,(((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                    & ((8U == (0x1fU 
                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                   << 7U) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                               & ((9U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                              << 6U) 
                                             | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                  & ((0xaU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                     & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                 << 5U) 
                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                     & ((0xbU 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                    << 4U) 
                                                   | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                        & ((0xcU 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                           & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                       << 3U) 
                                                      | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                           & ((0xdU 
                                                               == 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                              & ((0xeU 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                             << 1U) 
                                                            | ((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                               & ((0xfU 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))))))))))),8);
        bufp->chgBit(oldp+224,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((6U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+225,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((7U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+226,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((4U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+227,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((5U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+228,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((2U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+229,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((3U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+230,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((0U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgBit(oldp+231,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                & ((1U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
        bufp->chgCData(oldp+232,(vlSelf->Top__DOT__decoder__DOT__ImmType),3);
        bufp->chgQData(oldp+233,(vlSelf->Top__DOT__decoder__DOT__I),64);
        __Vtemp_h554601a6__0[0U] = ((IData)(((((1U 
                                                & (IData)(
                                                          (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                           >> 0x1fU)))
                                                ? 0xfffffffffffULL
                                                : 0ULL) 
                                              << 0x14U) 
                                             | (QData)((IData)(
                                                               (0xfffffU 
                                                                & (IData)(
                                                                          (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                           >> 0xcU))))))) 
                                    << 0xcU);
        __Vtemp_h554601a6__0[1U] = (((IData)(((((1U 
                                                 & (IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                            >> 0x1fU)))
                                                 ? 0xfffffffffffULL
                                                 : 0ULL) 
                                               << 0x14U) 
                                              | (QData)((IData)(
                                                                (0xfffffU 
                                                                 & (IData)(
                                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                            >> 0xcU))))))) 
                                     >> 0x14U) | ((IData)(
                                                          (((((1U 
                                                               & (IData)(
                                                                         (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                          >> 0x1fU)))
                                                               ? 0xfffffffffffULL
                                                               : 0ULL) 
                                                             << 0x14U) 
                                                            | (QData)((IData)(
                                                                              (0xfffffU 
                                                                               & (IData)(
                                                                                (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                                >> 0xcU)))))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h554601a6__0[2U] = ((IData)((((((1U 
                                                 & (IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                            >> 0x1fU)))
                                                 ? 0xfffffffffffULL
                                                 : 0ULL) 
                                               << 0x14U) 
                                              | (QData)((IData)(
                                                                (0xfffffU 
                                                                 & (IData)(
                                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                            >> 0xcU)))))) 
                                             >> 0x20U)) 
                                    >> 0x14U);
        bufp->chgWData(oldp+235,(__Vtemp_h554601a6__0),76);
        __Vtemp_ha10d091d__0[0U] = (((((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                                       << 0x14U) | 
                                      (0x800U & ((IData)(
                                                         (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                          >> 0x14U)) 
                                                 << 0xbU))) 
                                     | (0xff000U & 
                                        ((IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                  >> 0xcU)) 
                                         << 0xcU))) 
                                    | (0x7feU & ((IData)(
                                                         (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                          >> 0x15U)) 
                                                 << 1U)));
        __Vtemp_ha10d091d__0[1U] = (((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                                     >> 0xcU) | ((IData)(
                                                         (vlSelf->Top__DOT__decoder__DOT___J_T_4 
                                                          >> 0x20U)) 
                                                 << 0x14U));
        __Vtemp_ha10d091d__0[2U] = ((IData)((vlSelf->Top__DOT__decoder__DOT___J_T_4 
                                             >> 0x20U)) 
                                    >> 0xcU);
        bufp->chgWData(oldp+238,(__Vtemp_ha10d091d__0),84);
        __Vtemp_h9ebd919b__0[0U] = (((((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                                       << 0xcU) | (0x800U 
                                                   & ((IData)(
                                                              (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                               >> 7U)) 
                                                      << 0xbU))) 
                                     | (0x7e0U & ((IData)(
                                                          (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                           >> 0x19U)) 
                                                  << 5U))) 
                                    | (0x1eU & ((IData)(
                                                        (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                         >> 8U)) 
                                                << 1U)));
        __Vtemp_h9ebd919b__0[1U] = (((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                                     >> 0x14U) | ((IData)(
                                                          (vlSelf->Top__DOT__decoder__DOT___J_T_4 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h9ebd919b__0[2U] = ((IData)((vlSelf->Top__DOT__decoder__DOT___J_T_4 
                                             >> 0x20U)) 
                                    >> 0x14U);
        bufp->chgWData(oldp+241,(__Vtemp_h9ebd919b__0),76);
        bufp->chgQData(oldp+244,(vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata),64);
        bufp->chgQData(oldp+246,(vlSelf->Top__DOT__lsu__DOT__data_mem_rdata),64);
        bufp->chgQData(oldp+248,(vlSelf->Top__DOT__registers__DOT__registers[0]),64);
        bufp->chgQData(oldp+250,(vlSelf->Top__DOT__registers__DOT__registers[1]),64);
        bufp->chgQData(oldp+252,(vlSelf->Top__DOT__registers__DOT__registers[2]),64);
        bufp->chgQData(oldp+254,(vlSelf->Top__DOT__registers__DOT__registers[3]),64);
        bufp->chgQData(oldp+256,(vlSelf->Top__DOT__registers__DOT__registers[4]),64);
        bufp->chgQData(oldp+258,(vlSelf->Top__DOT__registers__DOT__registers[5]),64);
        bufp->chgQData(oldp+260,(vlSelf->Top__DOT__registers__DOT__registers[6]),64);
        bufp->chgQData(oldp+262,(vlSelf->Top__DOT__registers__DOT__registers[7]),64);
        bufp->chgQData(oldp+264,(vlSelf->Top__DOT__registers__DOT__registers[8]),64);
        bufp->chgQData(oldp+266,(vlSelf->Top__DOT__registers__DOT__registers[9]),64);
        bufp->chgQData(oldp+268,(vlSelf->Top__DOT__registers__DOT__registers[10]),64);
        bufp->chgQData(oldp+270,(vlSelf->Top__DOT__registers__DOT__registers[11]),64);
        bufp->chgQData(oldp+272,(vlSelf->Top__DOT__registers__DOT__registers[12]),64);
        bufp->chgQData(oldp+274,(vlSelf->Top__DOT__registers__DOT__registers[13]),64);
        bufp->chgQData(oldp+276,(vlSelf->Top__DOT__registers__DOT__registers[14]),64);
        bufp->chgQData(oldp+278,(vlSelf->Top__DOT__registers__DOT__registers[15]),64);
        bufp->chgQData(oldp+280,(vlSelf->Top__DOT__registers__DOT__registers[16]),64);
        bufp->chgQData(oldp+282,(vlSelf->Top__DOT__registers__DOT__registers[17]),64);
        bufp->chgQData(oldp+284,(vlSelf->Top__DOT__registers__DOT__registers[18]),64);
        bufp->chgQData(oldp+286,(vlSelf->Top__DOT__registers__DOT__registers[19]),64);
        bufp->chgQData(oldp+288,(vlSelf->Top__DOT__registers__DOT__registers[20]),64);
        bufp->chgQData(oldp+290,(vlSelf->Top__DOT__registers__DOT__registers[21]),64);
        bufp->chgQData(oldp+292,(vlSelf->Top__DOT__registers__DOT__registers[22]),64);
        bufp->chgQData(oldp+294,(vlSelf->Top__DOT__registers__DOT__registers[23]),64);
        bufp->chgQData(oldp+296,(vlSelf->Top__DOT__registers__DOT__registers[24]),64);
        bufp->chgQData(oldp+298,(vlSelf->Top__DOT__registers__DOT__registers[25]),64);
        bufp->chgQData(oldp+300,(vlSelf->Top__DOT__registers__DOT__registers[26]),64);
        bufp->chgQData(oldp+302,(vlSelf->Top__DOT__registers__DOT__registers[27]),64);
        bufp->chgQData(oldp+304,(vlSelf->Top__DOT__registers__DOT__registers[28]),64);
        bufp->chgQData(oldp+306,(vlSelf->Top__DOT__registers__DOT__registers[29]),64);
        bufp->chgQData(oldp+308,(vlSelf->Top__DOT__registers__DOT__registers[30]),64);
        bufp->chgQData(oldp+310,(vlSelf->Top__DOT__registers__DOT__registers[31]),64);
        bufp->chgQData(oldp+312,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data),64);
        bufp->chgQData(oldp+314,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data),64);
    }
    bufp->chgBit(oldp+316,(vlSelf->clock));
    bufp->chgBit(oldp+317,(vlSelf->reset));
    bufp->chgQData(oldp+318,(vlSelf->io_pc),64);
    bufp->chgBit(oldp+320,(vlSelf->io_ctrl_RegWen));
    bufp->chgCData(oldp+321,(vlSelf->io_ctrl_OP),8);
    bufp->chgBit(oldp+322,(vlSelf->io_ctrl_J_JUMP));
    bufp->chgBit(oldp+323,(vlSelf->io_ctrl_MemWen));
    bufp->chgCData(oldp+324,(vlSelf->io_ctrl_wmask),8);
    bufp->chgBit(oldp+325,(vlSelf->io_ctrl_MemLoad));
    bufp->chgBit(oldp+326,(vlSelf->io_ctrl_csr_wen));
    bufp->chgBit(oldp+327,(vlSelf->io_ctrl_E_JUMP));
    bufp->chgQData(oldp+328,(vlSelf->io_resultALU),64);
    bufp->chgQData(oldp+330,(vlSelf->io_rs1),64);
    bufp->chgQData(oldp+332,(vlSelf->io_rs2),64);
    bufp->chgCData(oldp+334,(vlSelf->io_rd),5);
    bufp->chgQData(oldp+335,(vlSelf->io_imm),64);
    bufp->chgCData(oldp+337,(vlSelf->io_op),8);
    bufp->chgBit(oldp+338,(vlSelf->io_MemWen));
    bufp->chgBit(oldp+339,(vlSelf->io_MemLoad));
    bufp->chgIData(oldp+340,(vlSelf->io_inst),32);
    bufp->chgBit(oldp+341,(vlSelf->io_is_b));
    bufp->chgCData(oldp+342,(vlSelf->io_wmask),8);
    bufp->chgQData(oldp+343,(vlSelf->io_rdata),64);
    bufp->chgQData(oldp+345,(vlSelf->io_fmemwdata),64);
    bufp->chgBit(oldp+347,(vlSelf->io_is_e));
    bufp->chgBit(oldp+348,(vlSelf->io_is_csr));
    bufp->chgQData(oldp+349,(vlSelf->io_reg17),64);
    bufp->chgQData(oldp+351,(((0x1bU == (IData)(vlSelf->io_ctrl_OP))
                               ? (0xfffffffffffffffeULL 
                                  & vlSelf->Top__DOT__alu__DOT___result_T_86)
                               : ((0x3aU == (IData)(vlSelf->io_ctrl_OP))
                                   ? vlSelf->Top__DOT__alu__DOT___result_T_163
                                   : 0ULL))),64);
    bufp->chgQData(oldp+353,(((0x40U == (IData)(vlSelf->io_ctrl_OP))
                               ? (4ULL + vlSelf->Top__DOT__alu__DOT__CSR
                                  [2U]) : ((0x3fU == (IData)(vlSelf->io_ctrl_OP))
                                            ? vlSelf->Top__DOT__alu__DOT__CSR
                                           [4U] : 0ULL))),64);
    bufp->chgQData(oldp+355,((QData)((IData)(vlSelf->io_is_b))),64);
    bufp->chgBit(oldp+357,((0x3fU == (IData)(vlSelf->io_ctrl_OP))));
    bufp->chgIData(oldp+358,(((0x3bU == (IData)(vlSelf->io_ctrl_OP))
                               ? 1U : 0U)),32);
    bufp->chgIData(oldp+359,((0x3fU == (IData)(vlSelf->io_ctrl_OP))),32);
    bufp->chgQData(oldp+360,(((0x3fU == (IData)(vlSelf->io_ctrl_OP))
                               ? vlSelf->Top__DOT__registers__DOT__registers
                              [0x11U] : vlSelf->Top__DOT__alu__DOT__CSR
                              [1U])),64);
    bufp->chgQData(oldp+362,(((0x3fU == (IData)(vlSelf->io_ctrl_OP))
                               ? vlSelf->Top__DOT__PC__DOT__init
                               : vlSelf->Top__DOT__alu__DOT__CSR
                              [2U])),64);
    bufp->chgQData(oldp+364,(((IData)(vlSelf->io_ctrl_csr_wen)
                               ? ((0x3eU == (IData)(vlSelf->io_ctrl_OP))
                                   ? (vlSelf->Top__DOT__alu__DOT__div__DOT___dividend_T_3 
                                      & vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data)
                                   : ((0x3dU == (IData)(vlSelf->io_ctrl_OP))
                                       ? (vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data 
                                          | vlSelf->io_rs1)
                                       : ((0x3cU == (IData)(vlSelf->io_ctrl_OP))
                                           ? vlSelf->io_rs1
                                           : 0ULL)))
                               : vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data)),64);
    bufp->chgBit(oldp+366,((((6U == (IData)(vlSelf->io_ctrl_OP)) 
                             | (7U == (IData)(vlSelf->io_ctrl_OP))) 
                            | ((0x15U == (IData)(vlSelf->io_ctrl_OP)) 
                               | (0x16U == (IData)(vlSelf->io_ctrl_OP))))));
    bufp->chgBit(oldp+367,((((8U == (IData)(vlSelf->io_ctrl_OP)) 
                             | (9U == (IData)(vlSelf->io_ctrl_OP))) 
                            | ((0x17U == (IData)(vlSelf->io_ctrl_OP)) 
                               | (0x18U == (IData)(vlSelf->io_ctrl_OP))))));
    bufp->chgBit(oldp+368,(((6U == (IData)(vlSelf->io_ctrl_OP)) 
                            | (7U == (IData)(vlSelf->io_ctrl_OP)))));
    bufp->chgBit(oldp+369,(((8U == (IData)(vlSelf->io_ctrl_OP)) 
                            | (9U == (IData)(vlSelf->io_ctrl_OP)))));
    bufp->chgBit(oldp+370,(((0x15U == (IData)(vlSelf->io_ctrl_OP)) 
                            | (0x16U == (IData)(vlSelf->io_ctrl_OP)))));
    bufp->chgBit(oldp+371,(((0x17U == (IData)(vlSelf->io_ctrl_OP)) 
                            | (0x18U == (IData)(vlSelf->io_ctrl_OP)))));
    bufp->chgQData(oldp+372,(((0x3eU == (IData)(vlSelf->io_ctrl_OP))
                               ? (vlSelf->Top__DOT__alu__DOT__div__DOT___dividend_T_3 
                                  & vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data)
                               : ((0x3dU == (IData)(vlSelf->io_ctrl_OP))
                                   ? (vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data 
                                      | vlSelf->io_rs1)
                                   : ((0x3cU == (IData)(vlSelf->io_ctrl_OP))
                                       ? vlSelf->io_rs1
                                       : 0ULL)))),64);
    bufp->chgQData(oldp+374,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___dividend_T_1)
                               ? (1ULL + vlSelf->Top__DOT__alu__DOT__div__DOT___dividend_T_3)
                               : vlSelf->io_rs1)),64);
    __Vtemp_h67e2dbbd__0[0U] = (((IData)(((((1U & (IData)(
                                                          (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                           >> 0x1fU)))
                                             ? 0x1ffffffffffffffULL
                                             : 0ULL) 
                                           << 7U) | (QData)((IData)(
                                                                    (0x7fU 
                                                                     & (IData)(
                                                                               (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                                >> 0x19U))))))) 
                                 << 5U) | (IData)(vlSelf->io_rd));
    __Vtemp_h67e2dbbd__0[1U] = (((IData)(((((1U & (IData)(
                                                          (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                           >> 0x1fU)))
                                             ? 0x1ffffffffffffffULL
                                             : 0ULL) 
                                           << 7U) | (QData)((IData)(
                                                                    (0x7fU 
                                                                     & (IData)(
                                                                               (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                                >> 0x19U))))))) 
                                 >> 0x1bU) | ((IData)(
                                                      (((((1U 
                                                           & (IData)(
                                                                     (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                      >> 0x1fU)))
                                                           ? 0x1ffffffffffffffULL
                                                           : 0ULL) 
                                                         << 7U) 
                                                        | (QData)((IData)(
                                                                          (0x7fU 
                                                                           & (IData)(
                                                                                (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                                >> 0x19U)))))) 
                                                       >> 0x20U)) 
                                              << 5U));
    __Vtemp_h67e2dbbd__0[2U] = ((IData)((((((1U & (IData)(
                                                          (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                           >> 0x1fU)))
                                             ? 0x1ffffffffffffffULL
                                             : 0ULL) 
                                           << 7U) | (QData)((IData)(
                                                                    (0x7fU 
                                                                     & (IData)(
                                                                               (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                                >> 0x19U)))))) 
                                         >> 0x20U)) 
                                >> 0x1bU);
    bufp->chgWData(oldp+376,(__Vtemp_h67e2dbbd__0),69);
    bufp->chgQData(oldp+379,((QData)((IData)(vlSelf->io_inst))),64);
    bufp->chgQData(oldp+381,(vlSelf->Top__DOT__registers__DOT__registers
                             [vlSelf->io_rd]),64);
    bufp->chgQData(oldp+383,((((IData)(vlSelf->io_ctrl_RegWen) 
                               & (0U != (IData)(vlSelf->io_rd)))
                               ? vlSelf->io_fmemwdata
                               : vlSelf->Top__DOT__registers__DOT__registers
                              [vlSelf->io_rd])),64);
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
