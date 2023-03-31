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
    VlWide<3>/*95:0*/ __Vtemp_hbb658cd2__0;
    VlWide<3>/*95:0*/ __Vtemp_h50dbeaa2__0;
    VlWide<3>/*95:0*/ __Vtemp_h9ebd919b__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                 >> 0xfU)))),5);
        bufp->chgCData(oldp+1,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                 >> 0x14U)))),5);
        bufp->chgCData(oldp+2,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                 >> 7U)))),5);
        bufp->chgQData(oldp+3,(vlSelf->Top__DOT__registers__DOT__registers
                               [0U]),64);
        bufp->chgQData(oldp+5,(vlSelf->Top__DOT__registers__DOT__registers
                               [1U]),64);
        bufp->chgQData(oldp+7,(vlSelf->Top__DOT__registers__DOT__registers
                               [2U]),64);
        bufp->chgQData(oldp+9,(vlSelf->Top__DOT__registers__DOT__registers
                               [3U]),64);
        bufp->chgQData(oldp+11,(vlSelf->Top__DOT__registers__DOT__registers
                                [4U]),64);
        bufp->chgQData(oldp+13,(vlSelf->Top__DOT__registers__DOT__registers
                                [5U]),64);
        bufp->chgQData(oldp+15,(vlSelf->Top__DOT__registers__DOT__registers
                                [6U]),64);
        bufp->chgQData(oldp+17,(vlSelf->Top__DOT__registers__DOT__registers
                                [7U]),64);
        bufp->chgQData(oldp+19,(vlSelf->Top__DOT__registers__DOT__registers
                                [8U]),64);
        bufp->chgQData(oldp+21,(vlSelf->Top__DOT__registers__DOT__registers
                                [9U]),64);
        bufp->chgQData(oldp+23,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xaU]),64);
        bufp->chgQData(oldp+25,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xbU]),64);
        bufp->chgQData(oldp+27,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xcU]),64);
        bufp->chgQData(oldp+29,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xdU]),64);
        bufp->chgQData(oldp+31,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xeU]),64);
        bufp->chgQData(oldp+33,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xfU]),64);
        bufp->chgQData(oldp+35,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x10U]),64);
        bufp->chgQData(oldp+37,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x11U]),64);
        bufp->chgQData(oldp+39,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x12U]),64);
        bufp->chgQData(oldp+41,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x13U]),64);
        bufp->chgQData(oldp+43,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x14U]),64);
        bufp->chgQData(oldp+45,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x15U]),64);
        bufp->chgQData(oldp+47,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x16U]),64);
        bufp->chgQData(oldp+49,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x17U]),64);
        bufp->chgQData(oldp+51,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x18U]),64);
        bufp->chgQData(oldp+53,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x19U]),64);
        bufp->chgQData(oldp+55,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1aU]),64);
        bufp->chgQData(oldp+57,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1bU]),64);
        bufp->chgQData(oldp+59,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1cU]),64);
        bufp->chgQData(oldp+61,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1dU]),64);
        bufp->chgQData(oldp+63,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1eU]),64);
        bufp->chgQData(oldp+65,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1fU]),64);
        bufp->chgQData(oldp+67,(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata),64);
        bufp->chgQData(oldp+69,(vlSelf->Top__DOT__PC__DOT__init),64);
        bufp->chgCData(oldp+71,(vlSelf->Top__DOT__decoder__DOT__ImmType),3);
        bufp->chgQData(oldp+72,(((((1U & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                  >> 0x1fU)))
                                    ? 0xfffffffffffffULL
                                    : 0ULL) << 0xcU) 
                                 | (QData)((IData)(
                                                   (0xfffU 
                                                    & (IData)(
                                                              (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                               >> 0x14U))))))),64);
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
        bufp->chgWData(oldp+74,(__Vtemp_h554601a6__0),76);
        __Vtemp_hbb658cd2__0[0U] = (((IData)(((((1U 
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
                                                                            >> 0x19U))))))) 
                                     << 5U) | (0x1fU 
                                               & (IData)(
                                                         (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                          >> 7U))));
        __Vtemp_hbb658cd2__0[1U] = (((IData)(((((1U 
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
        __Vtemp_hbb658cd2__0[2U] = ((IData)((((((1U 
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
                                    >> 0x1bU);
        bufp->chgWData(oldp+77,(__Vtemp_hbb658cd2__0),69);
        __Vtemp_h50dbeaa2__0[0U] = (((((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                                       << 0x14U) | 
                                      (0xff000U & ((IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                            >> 0xcU)) 
                                                   << 0xcU))) 
                                     | (0x800U & ((IData)(
                                                          (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                           >> 0x14U)) 
                                                  << 0xbU))) 
                                    | (0x7feU & ((IData)(
                                                         (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                          >> 0x15U)) 
                                                 << 1U)));
        __Vtemp_h50dbeaa2__0[1U] = (((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                                     >> 0xcU) | ((IData)(
                                                         (vlSelf->Top__DOT__decoder__DOT___J_T_4 
                                                          >> 0x20U)) 
                                                 << 0x14U));
        __Vtemp_h50dbeaa2__0[2U] = ((IData)((vlSelf->Top__DOT__decoder__DOT___J_T_4 
                                             >> 0x20U)) 
                                    >> 0xcU);
        bufp->chgWData(oldp+80,(__Vtemp_h50dbeaa2__0),84);
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
        bufp->chgWData(oldp+83,(__Vtemp_h9ebd919b__0),76);
        bufp->chgQData(oldp+86,(vlSelf->Top__DOT__dpi__DOT__rf[0]),64);
        bufp->chgQData(oldp+88,(vlSelf->Top__DOT__dpi__DOT__rf[1]),64);
        bufp->chgQData(oldp+90,(vlSelf->Top__DOT__dpi__DOT__rf[2]),64);
        bufp->chgQData(oldp+92,(vlSelf->Top__DOT__dpi__DOT__rf[3]),64);
        bufp->chgQData(oldp+94,(vlSelf->Top__DOT__dpi__DOT__rf[4]),64);
        bufp->chgQData(oldp+96,(vlSelf->Top__DOT__dpi__DOT__rf[5]),64);
        bufp->chgQData(oldp+98,(vlSelf->Top__DOT__dpi__DOT__rf[6]),64);
        bufp->chgQData(oldp+100,(vlSelf->Top__DOT__dpi__DOT__rf[7]),64);
        bufp->chgQData(oldp+102,(vlSelf->Top__DOT__dpi__DOT__rf[8]),64);
        bufp->chgQData(oldp+104,(vlSelf->Top__DOT__dpi__DOT__rf[9]),64);
        bufp->chgQData(oldp+106,(vlSelf->Top__DOT__dpi__DOT__rf[10]),64);
        bufp->chgQData(oldp+108,(vlSelf->Top__DOT__dpi__DOT__rf[11]),64);
        bufp->chgQData(oldp+110,(vlSelf->Top__DOT__dpi__DOT__rf[12]),64);
        bufp->chgQData(oldp+112,(vlSelf->Top__DOT__dpi__DOT__rf[13]),64);
        bufp->chgQData(oldp+114,(vlSelf->Top__DOT__dpi__DOT__rf[14]),64);
        bufp->chgQData(oldp+116,(vlSelf->Top__DOT__dpi__DOT__rf[15]),64);
        bufp->chgQData(oldp+118,(vlSelf->Top__DOT__dpi__DOT__rf[16]),64);
        bufp->chgQData(oldp+120,(vlSelf->Top__DOT__dpi__DOT__rf[17]),64);
        bufp->chgQData(oldp+122,(vlSelf->Top__DOT__dpi__DOT__rf[18]),64);
        bufp->chgQData(oldp+124,(vlSelf->Top__DOT__dpi__DOT__rf[19]),64);
        bufp->chgQData(oldp+126,(vlSelf->Top__DOT__dpi__DOT__rf[20]),64);
        bufp->chgQData(oldp+128,(vlSelf->Top__DOT__dpi__DOT__rf[21]),64);
        bufp->chgQData(oldp+130,(vlSelf->Top__DOT__dpi__DOT__rf[22]),64);
        bufp->chgQData(oldp+132,(vlSelf->Top__DOT__dpi__DOT__rf[23]),64);
        bufp->chgQData(oldp+134,(vlSelf->Top__DOT__dpi__DOT__rf[24]),64);
        bufp->chgQData(oldp+136,(vlSelf->Top__DOT__dpi__DOT__rf[25]),64);
        bufp->chgQData(oldp+138,(vlSelf->Top__DOT__dpi__DOT__rf[26]),64);
        bufp->chgQData(oldp+140,(vlSelf->Top__DOT__dpi__DOT__rf[27]),64);
        bufp->chgQData(oldp+142,(vlSelf->Top__DOT__dpi__DOT__rf[28]),64);
        bufp->chgQData(oldp+144,(vlSelf->Top__DOT__dpi__DOT__rf[29]),64);
        bufp->chgQData(oldp+146,(vlSelf->Top__DOT__dpi__DOT__rf[30]),64);
        bufp->chgQData(oldp+148,(vlSelf->Top__DOT__dpi__DOT__rf[31]),64);
        bufp->chgQData(oldp+150,(vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata),64);
        bufp->chgQData(oldp+152,(vlSelf->Top__DOT__registers__DOT__registers[0]),64);
        bufp->chgQData(oldp+154,(vlSelf->Top__DOT__registers__DOT__registers[1]),64);
        bufp->chgQData(oldp+156,(vlSelf->Top__DOT__registers__DOT__registers[2]),64);
        bufp->chgQData(oldp+158,(vlSelf->Top__DOT__registers__DOT__registers[3]),64);
        bufp->chgQData(oldp+160,(vlSelf->Top__DOT__registers__DOT__registers[4]),64);
        bufp->chgQData(oldp+162,(vlSelf->Top__DOT__registers__DOT__registers[5]),64);
        bufp->chgQData(oldp+164,(vlSelf->Top__DOT__registers__DOT__registers[6]),64);
        bufp->chgQData(oldp+166,(vlSelf->Top__DOT__registers__DOT__registers[7]),64);
        bufp->chgQData(oldp+168,(vlSelf->Top__DOT__registers__DOT__registers[8]),64);
        bufp->chgQData(oldp+170,(vlSelf->Top__DOT__registers__DOT__registers[9]),64);
        bufp->chgQData(oldp+172,(vlSelf->Top__DOT__registers__DOT__registers[10]),64);
        bufp->chgQData(oldp+174,(vlSelf->Top__DOT__registers__DOT__registers[11]),64);
        bufp->chgQData(oldp+176,(vlSelf->Top__DOT__registers__DOT__registers[12]),64);
        bufp->chgQData(oldp+178,(vlSelf->Top__DOT__registers__DOT__registers[13]),64);
        bufp->chgQData(oldp+180,(vlSelf->Top__DOT__registers__DOT__registers[14]),64);
        bufp->chgQData(oldp+182,(vlSelf->Top__DOT__registers__DOT__registers[15]),64);
        bufp->chgQData(oldp+184,(vlSelf->Top__DOT__registers__DOT__registers[16]),64);
        bufp->chgQData(oldp+186,(vlSelf->Top__DOT__registers__DOT__registers[17]),64);
        bufp->chgQData(oldp+188,(vlSelf->Top__DOT__registers__DOT__registers[18]),64);
        bufp->chgQData(oldp+190,(vlSelf->Top__DOT__registers__DOT__registers[19]),64);
        bufp->chgQData(oldp+192,(vlSelf->Top__DOT__registers__DOT__registers[20]),64);
        bufp->chgQData(oldp+194,(vlSelf->Top__DOT__registers__DOT__registers[21]),64);
        bufp->chgQData(oldp+196,(vlSelf->Top__DOT__registers__DOT__registers[22]),64);
        bufp->chgQData(oldp+198,(vlSelf->Top__DOT__registers__DOT__registers[23]),64);
        bufp->chgQData(oldp+200,(vlSelf->Top__DOT__registers__DOT__registers[24]),64);
        bufp->chgQData(oldp+202,(vlSelf->Top__DOT__registers__DOT__registers[25]),64);
        bufp->chgQData(oldp+204,(vlSelf->Top__DOT__registers__DOT__registers[26]),64);
        bufp->chgQData(oldp+206,(vlSelf->Top__DOT__registers__DOT__registers[27]),64);
        bufp->chgQData(oldp+208,(vlSelf->Top__DOT__registers__DOT__registers[28]),64);
        bufp->chgQData(oldp+210,(vlSelf->Top__DOT__registers__DOT__registers[29]),64);
        bufp->chgQData(oldp+212,(vlSelf->Top__DOT__registers__DOT__registers[30]),64);
        bufp->chgQData(oldp+214,(vlSelf->Top__DOT__registers__DOT__registers[31]),64);
        bufp->chgQData(oldp+216,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data),64);
        bufp->chgQData(oldp+218,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data),64);
        bufp->chgQData(oldp+220,(vlSelf->Top__DOT__registers__DOT__registers
                                 [(0x1fU & (IData)(
                                                   (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                    >> 7U)))]),64);
    }
    bufp->chgBit(oldp+222,(vlSelf->clock));
    bufp->chgBit(oldp+223,(vlSelf->reset));
    bufp->chgQData(oldp+224,(vlSelf->io_pc),64);
    bufp->chgBit(oldp+226,(vlSelf->io_ctrl_RegWen));
    bufp->chgCData(oldp+227,(vlSelf->io_ctrl_OP),6);
    bufp->chgBit(oldp+228,(vlSelf->io_ctrl_J_JUMP));
    bufp->chgBit(oldp+229,(vlSelf->io_ctrl_MemWen));
    bufp->chgCData(oldp+230,(vlSelf->io_ctrl_wmask),8);
    bufp->chgBit(oldp+231,(vlSelf->io_ctrl_MemLoad));
    bufp->chgQData(oldp+232,(vlSelf->io_resultALU),64);
    bufp->chgQData(oldp+234,(vlSelf->io_rs1),64);
    bufp->chgQData(oldp+236,(vlSelf->io_rs2),64);
    bufp->chgQData(oldp+238,(vlSelf->io_imm),64);
    bufp->chgCData(oldp+240,(vlSelf->io_op),4);
    bufp->chgBit(oldp+241,(vlSelf->io_MemWen));
    bufp->chgBit(oldp+242,(vlSelf->io_MemLoad));
    bufp->chgIData(oldp+243,(vlSelf->io_inst),32);
    bufp->chgBit(oldp+244,(((0x2cU == (IData)(vlSelf->io_ctrl_OP))
                             ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_41)
                             : ((0x2aU == (IData)(vlSelf->io_ctrl_OP))
                                 ? VL_GTES_IQQ(64, vlSelf->io_rs1, vlSelf->io_rs2)
                                 : ((0x2bU == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_40)
                                     : ((0x29U == (IData)(vlSelf->io_ctrl_OP))
                                         ? (vlSelf->io_rs1 
                                            != vlSelf->io_rs2)
                                         : ((0x28U 
                                             == (IData)(vlSelf->io_ctrl_OP)) 
                                            & (vlSelf->io_rs1 
                                               == vlSelf->io_rs2))))))));
    bufp->chgQData(oldp+245,(((0x14U == (IData)(vlSelf->io_ctrl_OP))
                               ? (QData)((IData)(((IData)(
                                                          (vlSelf->Top__DOT__alu__DOT___result_T_80 
                                                           >> 1U)) 
                                                  << 1U)))
                               : ((0x2fU == (IData)(vlSelf->io_ctrl_OP))
                                   ? vlSelf->Top__DOT__alu__DOT___result_T_143
                                   : 0ULL))),64);
    bufp->chgQData(oldp+247,((QData)((IData)(((0x2cU 
                                               == (IData)(vlSelf->io_ctrl_OP))
                                               ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_41)
                                               : ((0x2aU 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? 
                                                  VL_GTES_IQQ(64, vlSelf->io_rs1, vlSelf->io_rs2)
                                                   : 
                                                  ((0x2bU 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_40)
                                                    : 
                                                   ((0x29U 
                                                     == (IData)(vlSelf->io_ctrl_OP))
                                                     ? 
                                                    (vlSelf->io_rs1 
                                                     != vlSelf->io_rs2)
                                                     : 
                                                    ((0x28U 
                                                      == (IData)(vlSelf->io_ctrl_OP)) 
                                                     & (vlSelf->io_rs1 
                                                        == vlSelf->io_rs2))))))))),64);
    bufp->chgQData(oldp+249,(((IData)(vlSelf->io_ctrl_MemLoad)
                               ? ((0x15U == (IData)(vlSelf->io_ctrl_OP))
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata))))
                                   : ((0x16U == (IData)(vlSelf->io_ctrl_OP))
                                       ? ((((1U & (IData)(
                                                          (vlSelf->Top__DOT__ifu__DOT__data_mem_rdata 
                                                           >> 0xfU)))
                                             ? 0xffffffffffffULL
                                             : 0ULL) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata)))))
                                       : ((0x17U == (IData)(vlSelf->io_ctrl_OP))
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata))))
                                           : ((0x18U 
                                               == (IData)(vlSelf->io_ctrl_OP))
                                               ? vlSelf->Top__DOT__ifu__DOT__data_mem_rdata
                                               : ((0x19U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->Top__DOT__ifu__DOT__data_mem_rdata 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata)))
                                                   : vlSelf->io_resultALU)))))
                               : vlSelf->io_resultALU)),64);
    bufp->chgIData(oldp+251,((((0x30U == (IData)(vlSelf->io_ctrl_OP)) 
                               | (IData)(((0x14U == (IData)(vlSelf->io_ctrl_OP)) 
                                          & (0ULL == 
                                             (0xf80ULL 
                                              & vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata)))))
                               ? 1U : 0U)),32);
    bufp->chgQData(oldp+252,((QData)((IData)(vlSelf->io_inst))),64);
    bufp->chgQData(oldp+254,(((IData)(vlSelf->io_ctrl_RegWen)
                               ? ((IData)(vlSelf->io_ctrl_MemLoad)
                                   ? ((0x15U == (IData)(vlSelf->io_ctrl_OP))
                                       ? (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata))))
                                       : ((0x16U == (IData)(vlSelf->io_ctrl_OP))
                                           ? ((((1U 
                                                 & (IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__data_mem_rdata 
                                                            >> 0xfU)))
                                                 ? 0xffffffffffffULL
                                                 : 0ULL) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata)))))
                                           : ((0x17U 
                                               == (IData)(vlSelf->io_ctrl_OP))
                                               ? (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata))))
                                               : ((0x18U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? vlSelf->Top__DOT__ifu__DOT__data_mem_rdata
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->Top__DOT__ifu__DOT__data_mem_rdata 
                                                                                >> 0x1fU)))
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata)))
                                                    : vlSelf->io_resultALU)))))
                                   : vlSelf->io_resultALU)
                               : vlSelf->Top__DOT__registers__DOT__registers
                              [(0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                 >> 7U)))])),64);
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
