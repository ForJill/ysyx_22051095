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
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelf->Top__DOT__PC__DOT__init),64);
        bufp->chgSData(oldp+2,((0x3ffU & (IData)(vlSelf->Top__DOT__PC__DOT__init))),10);
        bufp->chgQData(oldp+3,(vlSelf->Top__DOT__registers__DOT__registers[0]),64);
        bufp->chgQData(oldp+5,(vlSelf->Top__DOT__registers__DOT__registers[1]),64);
        bufp->chgQData(oldp+7,(vlSelf->Top__DOT__registers__DOT__registers[2]),64);
        bufp->chgQData(oldp+9,(vlSelf->Top__DOT__registers__DOT__registers[3]),64);
        bufp->chgQData(oldp+11,(vlSelf->Top__DOT__registers__DOT__registers[4]),64);
        bufp->chgQData(oldp+13,(vlSelf->Top__DOT__registers__DOT__registers[5]),64);
        bufp->chgQData(oldp+15,(vlSelf->Top__DOT__registers__DOT__registers[6]),64);
        bufp->chgQData(oldp+17,(vlSelf->Top__DOT__registers__DOT__registers[7]),64);
        bufp->chgQData(oldp+19,(vlSelf->Top__DOT__registers__DOT__registers[8]),64);
        bufp->chgQData(oldp+21,(vlSelf->Top__DOT__registers__DOT__registers[9]),64);
        bufp->chgQData(oldp+23,(vlSelf->Top__DOT__registers__DOT__registers[10]),64);
        bufp->chgQData(oldp+25,(vlSelf->Top__DOT__registers__DOT__registers[11]),64);
        bufp->chgQData(oldp+27,(vlSelf->Top__DOT__registers__DOT__registers[12]),64);
        bufp->chgQData(oldp+29,(vlSelf->Top__DOT__registers__DOT__registers[13]),64);
        bufp->chgQData(oldp+31,(vlSelf->Top__DOT__registers__DOT__registers[14]),64);
        bufp->chgQData(oldp+33,(vlSelf->Top__DOT__registers__DOT__registers[15]),64);
        bufp->chgQData(oldp+35,(vlSelf->Top__DOT__registers__DOT__registers[16]),64);
        bufp->chgQData(oldp+37,(vlSelf->Top__DOT__registers__DOT__registers[17]),64);
        bufp->chgQData(oldp+39,(vlSelf->Top__DOT__registers__DOT__registers[18]),64);
        bufp->chgQData(oldp+41,(vlSelf->Top__DOT__registers__DOT__registers[19]),64);
        bufp->chgQData(oldp+43,(vlSelf->Top__DOT__registers__DOT__registers[20]),64);
        bufp->chgQData(oldp+45,(vlSelf->Top__DOT__registers__DOT__registers[21]),64);
        bufp->chgQData(oldp+47,(vlSelf->Top__DOT__registers__DOT__registers[22]),64);
        bufp->chgQData(oldp+49,(vlSelf->Top__DOT__registers__DOT__registers[23]),64);
        bufp->chgQData(oldp+51,(vlSelf->Top__DOT__registers__DOT__registers[24]),64);
        bufp->chgQData(oldp+53,(vlSelf->Top__DOT__registers__DOT__registers[25]),64);
        bufp->chgQData(oldp+55,(vlSelf->Top__DOT__registers__DOT__registers[26]),64);
        bufp->chgQData(oldp+57,(vlSelf->Top__DOT__registers__DOT__registers[27]),64);
        bufp->chgQData(oldp+59,(vlSelf->Top__DOT__registers__DOT__registers[28]),64);
        bufp->chgQData(oldp+61,(vlSelf->Top__DOT__registers__DOT__registers[29]),64);
        bufp->chgQData(oldp+63,(vlSelf->Top__DOT__registers__DOT__registers[30]),64);
        bufp->chgQData(oldp+65,(vlSelf->Top__DOT__registers__DOT__registers[31]),64);
    }
    bufp->chgBit(oldp+67,(vlSelf->clock));
    bufp->chgBit(oldp+68,(vlSelf->reset));
    bufp->chgQData(oldp+69,(vlSelf->io_pc),64);
    bufp->chgIData(oldp+71,(vlSelf->io_inst),32);
    bufp->chgBit(oldp+72,(vlSelf->io_ctrl_RegWen));
    bufp->chgCData(oldp+73,(vlSelf->io_ctrl_OP),4);
    bufp->chgQData(oldp+74,(vlSelf->io_resultALU),64);
    bufp->chgQData(oldp+76,(vlSelf->io_rs1),64);
    bufp->chgQData(oldp+78,(vlSelf->io_rs2),64);
    bufp->chgQData(oldp+80,(vlSelf->io_imm),64);
    bufp->chgCData(oldp+82,(vlSelf->io_op),4);
    bufp->chgCData(oldp+83,((0x1fU & (vlSelf->io_inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+84,((0x1fU & (vlSelf->io_inst 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+85,((0x1fU & (vlSelf->io_inst 
                                      >> 7U))),5);
    bufp->chgBit(oldp+86,((2U == (IData)(vlSelf->io_ctrl_OP))));
    bufp->chgQData(oldp+87,(vlSelf->Top__DOT__registers__DOT__registers
                            [(0x1fU & (vlSelf->io_inst 
                                       >> 0xfU))]),64);
    bufp->chgQData(oldp+89,(vlSelf->Top__DOT__registers__DOT__registers
                            [(0x1fU & (vlSelf->io_inst 
                                       >> 0x14U))]),64);
    bufp->chgQData(oldp+91,(vlSelf->Top__DOT__registers__DOT__registers
                            [(0x1fU & (vlSelf->io_inst 
                                       >> 7U))]),64);
    bufp->chgQData(oldp+93,(((IData)(vlSelf->io_ctrl_RegWen)
                              ? vlSelf->io_resultALU
                              : vlSelf->Top__DOT__registers__DOT__registers
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 7U))])),64);
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
