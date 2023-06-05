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
        bufp->chgQData(oldp+0,(vlSelf->Top__DOT__axi_mem_rdata),64);
        bufp->chgBit(oldp+2,((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))));
        bufp->chgBit(oldp+3,((3U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))));
        bufp->chgBit(oldp+4,((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))));
        bufp->chgBit(oldp+5,((4U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))));
        bufp->chgCData(oldp+6,(vlSelf->Top__DOT__axi_mem__DOT__read_state),3);
        bufp->chgCData(oldp+7,(((1U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
                                 ? 1U : ((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
                                          ? ((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
                                              ? 3U : 2U)
                                          : ((3U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
                                              ? 3U : 1U)))),3);
        bufp->chgBit(oldp+8,((1U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))));
        bufp->chgCData(oldp+9,(vlSelf->Top__DOT__axi_mem__DOT__write_state),3);
        bufp->chgCData(oldp+10,(vlSelf->Top__DOT__axi_mem__DOT__write_next_state),3);
        bufp->chgBit(oldp+11,((1U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))));
        bufp->chgBit(oldp+12,((3U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+13,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0U]),64);
        bufp->chgQData(oldp+15,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [1U]),64);
        bufp->chgQData(oldp+17,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [2U]),64);
        bufp->chgQData(oldp+19,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [3U]),64);
        bufp->chgQData(oldp+21,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [4U]),64);
        bufp->chgQData(oldp+23,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [5U]),64);
        bufp->chgQData(oldp+25,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [6U]),64);
        bufp->chgQData(oldp+27,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [7U]),64);
        bufp->chgQData(oldp+29,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [8U]),64);
        bufp->chgQData(oldp+31,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [9U]),64);
        bufp->chgQData(oldp+33,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0xaU]),64);
        bufp->chgQData(oldp+35,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0xbU]),64);
        bufp->chgQData(oldp+37,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0xcU]),64);
        bufp->chgQData(oldp+39,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0xdU]),64);
        bufp->chgQData(oldp+41,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0xeU]),64);
        bufp->chgQData(oldp+43,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0xfU]),64);
        bufp->chgQData(oldp+45,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x10U]),64);
        bufp->chgQData(oldp+47,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x11U]),64);
        bufp->chgQData(oldp+49,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x12U]),64);
        bufp->chgQData(oldp+51,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x13U]),64);
        bufp->chgQData(oldp+53,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x14U]),64);
        bufp->chgQData(oldp+55,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x15U]),64);
        bufp->chgQData(oldp+57,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x16U]),64);
        bufp->chgQData(oldp+59,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x17U]),64);
        bufp->chgQData(oldp+61,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x18U]),64);
        bufp->chgQData(oldp+63,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x19U]),64);
        bufp->chgQData(oldp+65,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x1aU]),64);
        bufp->chgQData(oldp+67,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x1bU]),64);
        bufp->chgQData(oldp+69,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x1cU]),64);
        bufp->chgQData(oldp+71,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x1dU]),64);
        bufp->chgQData(oldp+73,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x1eU]),64);
        bufp->chgQData(oldp+75,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x1fU]),64);
        bufp->chgQData(oldp+77,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                                [0U]),64);
        bufp->chgQData(oldp+79,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                                [1U]),64);
        bufp->chgQData(oldp+81,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                                [2U]),64);
        bufp->chgQData(oldp+83,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                                [3U]),64);
        bufp->chgQData(oldp+85,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                                [4U]),64);
        bufp->chgQData(oldp+87,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[0]),64);
        bufp->chgQData(oldp+89,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[1]),64);
        bufp->chgQData(oldp+91,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[2]),64);
        bufp->chgQData(oldp+93,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[3]),64);
        bufp->chgQData(oldp+95,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[4]),64);
        bufp->chgQData(oldp+97,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[0]),64);
        bufp->chgQData(oldp+99,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[1]),64);
        bufp->chgQData(oldp+101,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[2]),64);
        bufp->chgQData(oldp+103,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[3]),64);
        bufp->chgQData(oldp+105,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[4]),64);
        bufp->chgQData(oldp+107,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[5]),64);
        bufp->chgQData(oldp+109,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[6]),64);
        bufp->chgQData(oldp+111,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[7]),64);
        bufp->chgQData(oldp+113,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[8]),64);
        bufp->chgQData(oldp+115,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[9]),64);
        bufp->chgQData(oldp+117,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[10]),64);
        bufp->chgQData(oldp+119,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[11]),64);
        bufp->chgQData(oldp+121,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[12]),64);
        bufp->chgQData(oldp+123,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[13]),64);
        bufp->chgQData(oldp+125,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[14]),64);
        bufp->chgQData(oldp+127,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[15]),64);
        bufp->chgQData(oldp+129,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[16]),64);
        bufp->chgQData(oldp+131,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[17]),64);
        bufp->chgQData(oldp+133,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[18]),64);
        bufp->chgQData(oldp+135,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[19]),64);
        bufp->chgQData(oldp+137,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[20]),64);
        bufp->chgQData(oldp+139,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[21]),64);
        bufp->chgQData(oldp+141,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[22]),64);
        bufp->chgQData(oldp+143,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[23]),64);
        bufp->chgQData(oldp+145,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[24]),64);
        bufp->chgQData(oldp+147,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[25]),64);
        bufp->chgQData(oldp+149,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[26]),64);
        bufp->chgQData(oldp+151,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[27]),64);
        bufp->chgQData(oldp+153,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[28]),64);
        bufp->chgQData(oldp+155,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[29]),64);
        bufp->chgQData(oldp+157,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[30]),64);
        bufp->chgQData(oldp+159,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[31]),64);
        bufp->chgQData(oldp+161,(vlSelf->Top__DOT__ifu__DOT__fs_pc),64);
        bufp->chgIData(oldp+163,(((IData)(4U) + (IData)(vlSelf->Top__DOT__ifu__DOT__fs_pc))),32);
    }
    bufp->chgBit(oldp+164,(vlSelf->clock));
    bufp->chgBit(oldp+165,(vlSelf->reset));
    bufp->chgIData(oldp+166,(vlSelf->io_fs_pc),32);
    bufp->chgCData(oldp+167,(vlSelf->io_op),7);
    bufp->chgBit(oldp+168,(vlSelf->io_in_WB));
    bufp->chgIData(oldp+169,(vlSelf->io_wb_pc),32);
    bufp->chgIData(oldp+170,(vlSelf->io_wb_inst),32);
    bufp->chgIData(oldp+171,(vlSelf->io_ds_pc),32);
    bufp->chgBit(oldp+172,(vlSelf->io_clock));
    bufp->chgQData(oldp+173,(vlSelf->io_mem_result),64);
    bufp->chgCData(oldp+175,(vlSelf->io_ld_type),3);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
