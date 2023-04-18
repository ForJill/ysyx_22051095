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
        bufp->chgCData(oldp+2,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                 >> 0xfU)))),5);
        bufp->chgCData(oldp+3,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                 >> 0x14U)))),5);
        bufp->chgQData(oldp+4,(vlSelf->Top__DOT__registers__DOT__registers
                               [0U]),64);
        bufp->chgQData(oldp+6,(vlSelf->Top__DOT__registers__DOT__registers
                               [1U]),64);
        bufp->chgQData(oldp+8,(vlSelf->Top__DOT__registers__DOT__registers
                               [2U]),64);
        bufp->chgQData(oldp+10,(vlSelf->Top__DOT__registers__DOT__registers
                                [3U]),64);
        bufp->chgQData(oldp+12,(vlSelf->Top__DOT__registers__DOT__registers
                                [4U]),64);
        bufp->chgQData(oldp+14,(vlSelf->Top__DOT__registers__DOT__registers
                                [5U]),64);
        bufp->chgQData(oldp+16,(vlSelf->Top__DOT__registers__DOT__registers
                                [6U]),64);
        bufp->chgQData(oldp+18,(vlSelf->Top__DOT__registers__DOT__registers
                                [7U]),64);
        bufp->chgQData(oldp+20,(vlSelf->Top__DOT__registers__DOT__registers
                                [8U]),64);
        bufp->chgQData(oldp+22,(vlSelf->Top__DOT__registers__DOT__registers
                                [9U]),64);
        bufp->chgQData(oldp+24,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xaU]),64);
        bufp->chgQData(oldp+26,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xbU]),64);
        bufp->chgQData(oldp+28,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xcU]),64);
        bufp->chgQData(oldp+30,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xdU]),64);
        bufp->chgQData(oldp+32,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xeU]),64);
        bufp->chgQData(oldp+34,(vlSelf->Top__DOT__registers__DOT__registers
                                [0xfU]),64);
        bufp->chgQData(oldp+36,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x10U]),64);
        bufp->chgQData(oldp+38,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x11U]),64);
        bufp->chgQData(oldp+40,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x12U]),64);
        bufp->chgQData(oldp+42,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x13U]),64);
        bufp->chgQData(oldp+44,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x14U]),64);
        bufp->chgQData(oldp+46,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x15U]),64);
        bufp->chgQData(oldp+48,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x16U]),64);
        bufp->chgQData(oldp+50,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x17U]),64);
        bufp->chgQData(oldp+52,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x18U]),64);
        bufp->chgQData(oldp+54,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x19U]),64);
        bufp->chgQData(oldp+56,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1aU]),64);
        bufp->chgQData(oldp+58,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1bU]),64);
        bufp->chgQData(oldp+60,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1cU]),64);
        bufp->chgQData(oldp+62,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1dU]),64);
        bufp->chgQData(oldp+64,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1eU]),64);
        bufp->chgQData(oldp+66,(vlSelf->Top__DOT__registers__DOT__registers
                                [0x1fU]),64);
        bufp->chgQData(oldp+68,(vlSelf->Top__DOT__PC__DOT__init),64);
        bufp->chgCData(oldp+70,(vlSelf->Top__DOT__decoder__DOT__ImmType),3);
        bufp->chgQData(oldp+71,(((((1U & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
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
        bufp->chgWData(oldp+73,(__Vtemp_h554601a6__0),76);
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
        bufp->chgWData(oldp+76,(__Vtemp_ha10d091d__0),84);
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
        bufp->chgWData(oldp+79,(__Vtemp_h9ebd919b__0),76);
        bufp->chgQData(oldp+82,(vlSelf->Top__DOT__dpi__DOT__rf[0]),64);
        bufp->chgQData(oldp+84,(vlSelf->Top__DOT__dpi__DOT__rf[1]),64);
        bufp->chgQData(oldp+86,(vlSelf->Top__DOT__dpi__DOT__rf[2]),64);
        bufp->chgQData(oldp+88,(vlSelf->Top__DOT__dpi__DOT__rf[3]),64);
        bufp->chgQData(oldp+90,(vlSelf->Top__DOT__dpi__DOT__rf[4]),64);
        bufp->chgQData(oldp+92,(vlSelf->Top__DOT__dpi__DOT__rf[5]),64);
        bufp->chgQData(oldp+94,(vlSelf->Top__DOT__dpi__DOT__rf[6]),64);
        bufp->chgQData(oldp+96,(vlSelf->Top__DOT__dpi__DOT__rf[7]),64);
        bufp->chgQData(oldp+98,(vlSelf->Top__DOT__dpi__DOT__rf[8]),64);
        bufp->chgQData(oldp+100,(vlSelf->Top__DOT__dpi__DOT__rf[9]),64);
        bufp->chgQData(oldp+102,(vlSelf->Top__DOT__dpi__DOT__rf[10]),64);
        bufp->chgQData(oldp+104,(vlSelf->Top__DOT__dpi__DOT__rf[11]),64);
        bufp->chgQData(oldp+106,(vlSelf->Top__DOT__dpi__DOT__rf[12]),64);
        bufp->chgQData(oldp+108,(vlSelf->Top__DOT__dpi__DOT__rf[13]),64);
        bufp->chgQData(oldp+110,(vlSelf->Top__DOT__dpi__DOT__rf[14]),64);
        bufp->chgQData(oldp+112,(vlSelf->Top__DOT__dpi__DOT__rf[15]),64);
        bufp->chgQData(oldp+114,(vlSelf->Top__DOT__dpi__DOT__rf[16]),64);
        bufp->chgQData(oldp+116,(vlSelf->Top__DOT__dpi__DOT__rf[17]),64);
        bufp->chgQData(oldp+118,(vlSelf->Top__DOT__dpi__DOT__rf[18]),64);
        bufp->chgQData(oldp+120,(vlSelf->Top__DOT__dpi__DOT__rf[19]),64);
        bufp->chgQData(oldp+122,(vlSelf->Top__DOT__dpi__DOT__rf[20]),64);
        bufp->chgQData(oldp+124,(vlSelf->Top__DOT__dpi__DOT__rf[21]),64);
        bufp->chgQData(oldp+126,(vlSelf->Top__DOT__dpi__DOT__rf[22]),64);
        bufp->chgQData(oldp+128,(vlSelf->Top__DOT__dpi__DOT__rf[23]),64);
        bufp->chgQData(oldp+130,(vlSelf->Top__DOT__dpi__DOT__rf[24]),64);
        bufp->chgQData(oldp+132,(vlSelf->Top__DOT__dpi__DOT__rf[25]),64);
        bufp->chgQData(oldp+134,(vlSelf->Top__DOT__dpi__DOT__rf[26]),64);
        bufp->chgQData(oldp+136,(vlSelf->Top__DOT__dpi__DOT__rf[27]),64);
        bufp->chgQData(oldp+138,(vlSelf->Top__DOT__dpi__DOT__rf[28]),64);
        bufp->chgQData(oldp+140,(vlSelf->Top__DOT__dpi__DOT__rf[29]),64);
        bufp->chgQData(oldp+142,(vlSelf->Top__DOT__dpi__DOT__rf[30]),64);
        bufp->chgQData(oldp+144,(vlSelf->Top__DOT__dpi__DOT__rf[31]),64);
        bufp->chgQData(oldp+146,(vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata),64);
        bufp->chgQData(oldp+148,(vlSelf->Top__DOT__mem__DOT__data_mem_rdata),64);
        bufp->chgQData(oldp+150,(vlSelf->Top__DOT__registers__DOT__registers[0]),64);
        bufp->chgQData(oldp+152,(vlSelf->Top__DOT__registers__DOT__registers[1]),64);
        bufp->chgQData(oldp+154,(vlSelf->Top__DOT__registers__DOT__registers[2]),64);
        bufp->chgQData(oldp+156,(vlSelf->Top__DOT__registers__DOT__registers[3]),64);
        bufp->chgQData(oldp+158,(vlSelf->Top__DOT__registers__DOT__registers[4]),64);
        bufp->chgQData(oldp+160,(vlSelf->Top__DOT__registers__DOT__registers[5]),64);
        bufp->chgQData(oldp+162,(vlSelf->Top__DOT__registers__DOT__registers[6]),64);
        bufp->chgQData(oldp+164,(vlSelf->Top__DOT__registers__DOT__registers[7]),64);
        bufp->chgQData(oldp+166,(vlSelf->Top__DOT__registers__DOT__registers[8]),64);
        bufp->chgQData(oldp+168,(vlSelf->Top__DOT__registers__DOT__registers[9]),64);
        bufp->chgQData(oldp+170,(vlSelf->Top__DOT__registers__DOT__registers[10]),64);
        bufp->chgQData(oldp+172,(vlSelf->Top__DOT__registers__DOT__registers[11]),64);
        bufp->chgQData(oldp+174,(vlSelf->Top__DOT__registers__DOT__registers[12]),64);
        bufp->chgQData(oldp+176,(vlSelf->Top__DOT__registers__DOT__registers[13]),64);
        bufp->chgQData(oldp+178,(vlSelf->Top__DOT__registers__DOT__registers[14]),64);
        bufp->chgQData(oldp+180,(vlSelf->Top__DOT__registers__DOT__registers[15]),64);
        bufp->chgQData(oldp+182,(vlSelf->Top__DOT__registers__DOT__registers[16]),64);
        bufp->chgQData(oldp+184,(vlSelf->Top__DOT__registers__DOT__registers[17]),64);
        bufp->chgQData(oldp+186,(vlSelf->Top__DOT__registers__DOT__registers[18]),64);
        bufp->chgQData(oldp+188,(vlSelf->Top__DOT__registers__DOT__registers[19]),64);
        bufp->chgQData(oldp+190,(vlSelf->Top__DOT__registers__DOT__registers[20]),64);
        bufp->chgQData(oldp+192,(vlSelf->Top__DOT__registers__DOT__registers[21]),64);
        bufp->chgQData(oldp+194,(vlSelf->Top__DOT__registers__DOT__registers[22]),64);
        bufp->chgQData(oldp+196,(vlSelf->Top__DOT__registers__DOT__registers[23]),64);
        bufp->chgQData(oldp+198,(vlSelf->Top__DOT__registers__DOT__registers[24]),64);
        bufp->chgQData(oldp+200,(vlSelf->Top__DOT__registers__DOT__registers[25]),64);
        bufp->chgQData(oldp+202,(vlSelf->Top__DOT__registers__DOT__registers[26]),64);
        bufp->chgQData(oldp+204,(vlSelf->Top__DOT__registers__DOT__registers[27]),64);
        bufp->chgQData(oldp+206,(vlSelf->Top__DOT__registers__DOT__registers[28]),64);
        bufp->chgQData(oldp+208,(vlSelf->Top__DOT__registers__DOT__registers[29]),64);
        bufp->chgQData(oldp+210,(vlSelf->Top__DOT__registers__DOT__registers[30]),64);
        bufp->chgQData(oldp+212,(vlSelf->Top__DOT__registers__DOT__registers[31]),64);
        bufp->chgQData(oldp+214,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data),64);
        bufp->chgQData(oldp+216,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data),64);
    }
    bufp->chgBit(oldp+218,(vlSelf->clock));
    bufp->chgBit(oldp+219,(vlSelf->reset));
    bufp->chgQData(oldp+220,(vlSelf->io_pc),64);
    bufp->chgBit(oldp+222,(vlSelf->io_ctrl_RegWen));
    bufp->chgCData(oldp+223,(vlSelf->io_ctrl_OP),8);
    bufp->chgBit(oldp+224,(vlSelf->io_ctrl_J_JUMP));
    bufp->chgBit(oldp+225,(vlSelf->io_ctrl_MemWen));
    bufp->chgCData(oldp+226,(vlSelf->io_ctrl_wmask),8);
    bufp->chgBit(oldp+227,(vlSelf->io_ctrl_MemLoad));
    bufp->chgQData(oldp+228,(vlSelf->io_resultALU),64);
    bufp->chgQData(oldp+230,(vlSelf->io_rs1),64);
    bufp->chgQData(oldp+232,(vlSelf->io_rs2),64);
    bufp->chgCData(oldp+234,(vlSelf->io_rd),5);
    bufp->chgQData(oldp+235,(vlSelf->io_imm),64);
    bufp->chgCData(oldp+237,(vlSelf->io_op),8);
    bufp->chgBit(oldp+238,(vlSelf->io_MemWen));
    bufp->chgBit(oldp+239,(vlSelf->io_MemLoad));
    bufp->chgIData(oldp+240,(vlSelf->io_inst),32);
    bufp->chgBit(oldp+241,(vlSelf->io_is_b));
    bufp->chgCData(oldp+242,(vlSelf->io_wmask),8);
    bufp->chgQData(oldp+243,(vlSelf->io_rdata),64);
    bufp->chgQData(oldp+245,(vlSelf->io_fmemwdata),64);
    bufp->chgQData(oldp+247,(((0x1bU == (IData)(vlSelf->io_ctrl_OP))
                               ? (0xfffffffffffffffeULL 
                                  & vlSelf->Top__DOT__alu__DOT___result_T_128)
                               : ((0x3aU == (IData)(vlSelf->io_ctrl_OP))
                                   ? vlSelf->Top__DOT__alu__DOT___result_T_205
                                   : 0ULL))),64);
    bufp->chgQData(oldp+249,((QData)((IData)(vlSelf->io_is_b))),64);
    bufp->chgIData(oldp+251,(((0x3bU == (IData)(vlSelf->io_ctrl_OP))
                               ? 1U : 0U)),32);
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
    bufp->chgWData(oldp+252,(__Vtemp_h67e2dbbd__0),69);
    bufp->chgQData(oldp+255,((QData)((IData)(vlSelf->io_inst))),64);
    bufp->chgQData(oldp+257,(vlSelf->Top__DOT__registers__DOT__registers
                             [vlSelf->io_rd]),64);
    bufp->chgQData(oldp+259,((((IData)(vlSelf->io_ctrl_RegWen) 
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
