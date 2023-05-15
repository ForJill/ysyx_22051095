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
        bufp->chgCData(oldp+91,(vlSelf->Top__DOT__decoder__DOT__ImmType),3);
        bufp->chgQData(oldp+92,(vlSelf->Top__DOT__decoder__DOT__I),64);
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
        bufp->chgWData(oldp+94,(__Vtemp_h554601a6__0),76);
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
        bufp->chgWData(oldp+97,(__Vtemp_ha10d091d__0),84);
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
        bufp->chgWData(oldp+100,(__Vtemp_h9ebd919b__0),76);
        bufp->chgQData(oldp+103,(vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata),64);
        bufp->chgQData(oldp+105,(vlSelf->Top__DOT__lsu__DOT__data_mem_rdata),64);
        bufp->chgQData(oldp+107,(vlSelf->Top__DOT__registers__DOT__registers[0]),64);
        bufp->chgQData(oldp+109,(vlSelf->Top__DOT__registers__DOT__registers[1]),64);
        bufp->chgQData(oldp+111,(vlSelf->Top__DOT__registers__DOT__registers[2]),64);
        bufp->chgQData(oldp+113,(vlSelf->Top__DOT__registers__DOT__registers[3]),64);
        bufp->chgQData(oldp+115,(vlSelf->Top__DOT__registers__DOT__registers[4]),64);
        bufp->chgQData(oldp+117,(vlSelf->Top__DOT__registers__DOT__registers[5]),64);
        bufp->chgQData(oldp+119,(vlSelf->Top__DOT__registers__DOT__registers[6]),64);
        bufp->chgQData(oldp+121,(vlSelf->Top__DOT__registers__DOT__registers[7]),64);
        bufp->chgQData(oldp+123,(vlSelf->Top__DOT__registers__DOT__registers[8]),64);
        bufp->chgQData(oldp+125,(vlSelf->Top__DOT__registers__DOT__registers[9]),64);
        bufp->chgQData(oldp+127,(vlSelf->Top__DOT__registers__DOT__registers[10]),64);
        bufp->chgQData(oldp+129,(vlSelf->Top__DOT__registers__DOT__registers[11]),64);
        bufp->chgQData(oldp+131,(vlSelf->Top__DOT__registers__DOT__registers[12]),64);
        bufp->chgQData(oldp+133,(vlSelf->Top__DOT__registers__DOT__registers[13]),64);
        bufp->chgQData(oldp+135,(vlSelf->Top__DOT__registers__DOT__registers[14]),64);
        bufp->chgQData(oldp+137,(vlSelf->Top__DOT__registers__DOT__registers[15]),64);
        bufp->chgQData(oldp+139,(vlSelf->Top__DOT__registers__DOT__registers[16]),64);
        bufp->chgQData(oldp+141,(vlSelf->Top__DOT__registers__DOT__registers[17]),64);
        bufp->chgQData(oldp+143,(vlSelf->Top__DOT__registers__DOT__registers[18]),64);
        bufp->chgQData(oldp+145,(vlSelf->Top__DOT__registers__DOT__registers[19]),64);
        bufp->chgQData(oldp+147,(vlSelf->Top__DOT__registers__DOT__registers[20]),64);
        bufp->chgQData(oldp+149,(vlSelf->Top__DOT__registers__DOT__registers[21]),64);
        bufp->chgQData(oldp+151,(vlSelf->Top__DOT__registers__DOT__registers[22]),64);
        bufp->chgQData(oldp+153,(vlSelf->Top__DOT__registers__DOT__registers[23]),64);
        bufp->chgQData(oldp+155,(vlSelf->Top__DOT__registers__DOT__registers[24]),64);
        bufp->chgQData(oldp+157,(vlSelf->Top__DOT__registers__DOT__registers[25]),64);
        bufp->chgQData(oldp+159,(vlSelf->Top__DOT__registers__DOT__registers[26]),64);
        bufp->chgQData(oldp+161,(vlSelf->Top__DOT__registers__DOT__registers[27]),64);
        bufp->chgQData(oldp+163,(vlSelf->Top__DOT__registers__DOT__registers[28]),64);
        bufp->chgQData(oldp+165,(vlSelf->Top__DOT__registers__DOT__registers[29]),64);
        bufp->chgQData(oldp+167,(vlSelf->Top__DOT__registers__DOT__registers[30]),64);
        bufp->chgQData(oldp+169,(vlSelf->Top__DOT__registers__DOT__registers[31]),64);
        bufp->chgQData(oldp+171,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data),64);
        bufp->chgQData(oldp+173,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data),64);
    }
    bufp->chgBit(oldp+175,(vlSelf->clock));
    bufp->chgBit(oldp+176,(vlSelf->reset));
    bufp->chgQData(oldp+177,(vlSelf->io_pc),64);
    bufp->chgBit(oldp+179,(vlSelf->io_ctrl_RegWen));
    bufp->chgCData(oldp+180,(vlSelf->io_ctrl_OP),8);
    bufp->chgBit(oldp+181,(vlSelf->io_ctrl_J_JUMP));
    bufp->chgBit(oldp+182,(vlSelf->io_ctrl_MemWen));
    bufp->chgCData(oldp+183,(vlSelf->io_ctrl_wmask),8);
    bufp->chgBit(oldp+184,(vlSelf->io_ctrl_MemLoad));
    bufp->chgBit(oldp+185,(vlSelf->io_ctrl_csr_wen));
    bufp->chgBit(oldp+186,(vlSelf->io_ctrl_E_JUMP));
    bufp->chgQData(oldp+187,(vlSelf->io_resultALU),64);
    bufp->chgQData(oldp+189,(vlSelf->io_rs1),64);
    bufp->chgQData(oldp+191,(vlSelf->io_rs2),64);
    bufp->chgCData(oldp+193,(vlSelf->io_rd),5);
    bufp->chgQData(oldp+194,(vlSelf->io_imm),64);
    bufp->chgCData(oldp+196,(vlSelf->io_op),8);
    bufp->chgBit(oldp+197,(vlSelf->io_MemWen));
    bufp->chgBit(oldp+198,(vlSelf->io_MemLoad));
    bufp->chgIData(oldp+199,(vlSelf->io_inst),32);
    bufp->chgBit(oldp+200,(vlSelf->io_is_b));
    bufp->chgCData(oldp+201,(vlSelf->io_wmask),8);
    bufp->chgQData(oldp+202,(vlSelf->io_rdata),64);
    bufp->chgQData(oldp+204,(vlSelf->io_fmemwdata),64);
    bufp->chgBit(oldp+206,(vlSelf->io_is_e));
    bufp->chgBit(oldp+207,(vlSelf->io_is_csr));
    bufp->chgQData(oldp+208,(vlSelf->io_reg17),64);
    bufp->chgQData(oldp+210,(((0x1bU == (IData)(vlSelf->io_ctrl_OP))
                               ? (0xfffffffffffffffeULL 
                                  & vlSelf->Top__DOT__alu__DOT___result_T_128)
                               : ((0x3aU == (IData)(vlSelf->io_ctrl_OP))
                                   ? vlSelf->Top__DOT__alu__DOT___result_T_205
                                   : 0ULL))),64);
    bufp->chgQData(oldp+212,(((0x40U == (IData)(vlSelf->io_ctrl_OP))
                               ? (4ULL + vlSelf->Top__DOT__alu__DOT__CSR
                                  [2U]) : ((0x3fU == (IData)(vlSelf->io_ctrl_OP))
                                            ? vlSelf->Top__DOT__alu__DOT__CSR
                                           [4U] : 0ULL))),64);
    bufp->chgQData(oldp+214,((QData)((IData)(vlSelf->io_is_b))),64);
    bufp->chgBit(oldp+216,((0x3fU == (IData)(vlSelf->io_ctrl_OP))));
    bufp->chgIData(oldp+217,(((0x3bU == (IData)(vlSelf->io_ctrl_OP))
                               ? 1U : 0U)),32);
    bufp->chgIData(oldp+218,((0x3fU == (IData)(vlSelf->io_ctrl_OP))),32);
    bufp->chgQData(oldp+219,(((0x3fU == (IData)(vlSelf->io_ctrl_OP))
                               ? vlSelf->Top__DOT__registers__DOT__registers
                              [0x11U] : vlSelf->Top__DOT__alu__DOT__CSR
                              [1U])),64);
    bufp->chgQData(oldp+221,(((0x3fU == (IData)(vlSelf->io_ctrl_OP))
                               ? vlSelf->Top__DOT__PC__DOT__init
                               : vlSelf->Top__DOT__alu__DOT__CSR
                              [2U])),64);
    bufp->chgQData(oldp+223,(((IData)(vlSelf->io_ctrl_csr_wen)
                               ? ((0x3eU == (IData)(vlSelf->io_ctrl_OP))
                                   ? (((0U == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                          >> 0xfU))))
                                        ? 0xffffffffffffffffULL
                                        : (~ vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data)) 
                                      & vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data)
                                   : ((0x3dU == (IData)(vlSelf->io_ctrl_OP))
                                       ? (vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data 
                                          | vlSelf->io_rs1)
                                       : ((0x3cU == (IData)(vlSelf->io_ctrl_OP))
                                           ? vlSelf->io_rs1
                                           : 0ULL)))
                               : vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data)),64);
    bufp->chgQData(oldp+225,(((0x3eU == (IData)(vlSelf->io_ctrl_OP))
                               ? (((0U == (0x1fU & (IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                            >> 0xfU))))
                                    ? 0xffffffffffffffffULL
                                    : (~ vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data)) 
                                  & vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data)
                               : ((0x3dU == (IData)(vlSelf->io_ctrl_OP))
                                   ? (vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data 
                                      | vlSelf->io_rs1)
                                   : ((0x3cU == (IData)(vlSelf->io_ctrl_OP))
                                       ? vlSelf->io_rs1
                                       : 0ULL)))),64);
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
    bufp->chgWData(oldp+227,(__Vtemp_h67e2dbbd__0),69);
    bufp->chgQData(oldp+230,((QData)((IData)(vlSelf->io_inst))),64);
    bufp->chgQData(oldp+232,(vlSelf->Top__DOT__registers__DOT__registers
                             [vlSelf->io_rd]),64);
    bufp->chgQData(oldp+234,((((IData)(vlSelf->io_ctrl_RegWen) 
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
