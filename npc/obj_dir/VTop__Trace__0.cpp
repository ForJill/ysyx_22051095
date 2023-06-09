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
        bufp->chgBit(oldp+0,((1U == (IData)(vlSelf->Top__DOT__axi__DOT__rstate))));
        bufp->chgBit(oldp+1,((2U == (IData)(vlSelf->Top__DOT__axi__DOT__rstate))));
        bufp->chgBit(oldp+2,((1U == (IData)(vlSelf->Top__DOT__axi__DOT__wstate))));
        bufp->chgBit(oldp+3,((2U == (IData)(vlSelf->Top__DOT__axi__DOT__wstate))));
        bufp->chgBit(oldp+4,((3U == (IData)(vlSelf->Top__DOT__axi__DOT__wstate))));
        bufp->chgCData(oldp+5,(vlSelf->Top__DOT__axi__DOT__rstate),2);
        bufp->chgCData(oldp+6,(vlSelf->Top__DOT__axi__DOT__wstate),2);
        bufp->chgBit(oldp+7,((0U == (IData)(vlSelf->Top__DOT__axi__DOT__wstate))));
        bufp->chgQData(oldp+8,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                               [0U]),64);
        bufp->chgQData(oldp+10,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [1U]),64);
        bufp->chgQData(oldp+12,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [2U]),64);
        bufp->chgQData(oldp+14,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [3U]),64);
        bufp->chgQData(oldp+16,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [4U]),64);
        bufp->chgQData(oldp+18,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [5U]),64);
        bufp->chgQData(oldp+20,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [6U]),64);
        bufp->chgQData(oldp+22,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [7U]),64);
        bufp->chgQData(oldp+24,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [8U]),64);
        bufp->chgQData(oldp+26,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [9U]),64);
        bufp->chgQData(oldp+28,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0xaU]),64);
        bufp->chgQData(oldp+30,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0xbU]),64);
        bufp->chgQData(oldp+32,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0xcU]),64);
        bufp->chgQData(oldp+34,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0xdU]),64);
        bufp->chgQData(oldp+36,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0xeU]),64);
        bufp->chgQData(oldp+38,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0xfU]),64);
        bufp->chgQData(oldp+40,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x10U]),64);
        bufp->chgQData(oldp+42,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x11U]),64);
        bufp->chgQData(oldp+44,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x12U]),64);
        bufp->chgQData(oldp+46,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x13U]),64);
        bufp->chgQData(oldp+48,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x14U]),64);
        bufp->chgQData(oldp+50,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x15U]),64);
        bufp->chgQData(oldp+52,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x16U]),64);
        bufp->chgQData(oldp+54,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x17U]),64);
        bufp->chgQData(oldp+56,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x18U]),64);
        bufp->chgQData(oldp+58,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x19U]),64);
        bufp->chgQData(oldp+60,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x1aU]),64);
        bufp->chgQData(oldp+62,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x1bU]),64);
        bufp->chgQData(oldp+64,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x1cU]),64);
        bufp->chgQData(oldp+66,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x1dU]),64);
        bufp->chgQData(oldp+68,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x1eU]),64);
        bufp->chgQData(oldp+70,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                [0x1fU]),64);
        bufp->chgQData(oldp+72,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                                [0U]),64);
        bufp->chgQData(oldp+74,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                                [1U]),64);
        bufp->chgQData(oldp+76,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                                [2U]),64);
        bufp->chgQData(oldp+78,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                                [3U]),64);
        bufp->chgQData(oldp+80,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                                [4U]),64);
        bufp->chgQData(oldp+82,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[0]),64);
        bufp->chgQData(oldp+84,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[1]),64);
        bufp->chgQData(oldp+86,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[2]),64);
        bufp->chgQData(oldp+88,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[3]),64);
        bufp->chgQData(oldp+90,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[4]),64);
        bufp->chgQData(oldp+92,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[0]),64);
        bufp->chgQData(oldp+94,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[1]),64);
        bufp->chgQData(oldp+96,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[2]),64);
        bufp->chgQData(oldp+98,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[3]),64);
        bufp->chgQData(oldp+100,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[4]),64);
        bufp->chgQData(oldp+102,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[5]),64);
        bufp->chgQData(oldp+104,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[6]),64);
        bufp->chgQData(oldp+106,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[7]),64);
        bufp->chgQData(oldp+108,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[8]),64);
        bufp->chgQData(oldp+110,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[9]),64);
        bufp->chgQData(oldp+112,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[10]),64);
        bufp->chgQData(oldp+114,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[11]),64);
        bufp->chgQData(oldp+116,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[12]),64);
        bufp->chgQData(oldp+118,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[13]),64);
        bufp->chgQData(oldp+120,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[14]),64);
        bufp->chgQData(oldp+122,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[15]),64);
        bufp->chgQData(oldp+124,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[16]),64);
        bufp->chgQData(oldp+126,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[17]),64);
        bufp->chgQData(oldp+128,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[18]),64);
        bufp->chgQData(oldp+130,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[19]),64);
        bufp->chgQData(oldp+132,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[20]),64);
        bufp->chgQData(oldp+134,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[21]),64);
        bufp->chgQData(oldp+136,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[22]),64);
        bufp->chgQData(oldp+138,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[23]),64);
        bufp->chgQData(oldp+140,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[24]),64);
        bufp->chgQData(oldp+142,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[25]),64);
        bufp->chgQData(oldp+144,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[26]),64);
        bufp->chgQData(oldp+146,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[27]),64);
        bufp->chgQData(oldp+148,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[28]),64);
        bufp->chgQData(oldp+150,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[29]),64);
        bufp->chgQData(oldp+152,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[30]),64);
        bufp->chgQData(oldp+154,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[31]),64);
        bufp->chgQData(oldp+156,(vlSelf->Top__DOT__ifu__DOT__fs_pc),64);
        bufp->chgIData(oldp+158,(((IData)(4U) + (IData)(vlSelf->Top__DOT__ifu__DOT__fs_pc))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+159,((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))));
        bufp->chgBit(oldp+160,((3U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))));
        bufp->chgBit(oldp+161,((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))));
        bufp->chgBit(oldp+162,((4U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))));
        bufp->chgCData(oldp+163,(vlSelf->Top__DOT__axi_mem__DOT__read_state),3);
        bufp->chgBit(oldp+164,((1U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))));
        bufp->chgCData(oldp+165,(vlSelf->Top__DOT__axi_mem__DOT__write_state),3);
        bufp->chgBit(oldp+166,((1U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))));
        bufp->chgBit(oldp+167,((3U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))));
    }
    bufp->chgBit(oldp+168,(vlSelf->clock));
    bufp->chgBit(oldp+169,(vlSelf->reset));
    bufp->chgIData(oldp+170,(vlSelf->io_fs_pc),32);
    bufp->chgCData(oldp+171,(vlSelf->io_op),7);
    bufp->chgBit(oldp+172,(vlSelf->io_in_WB));
    bufp->chgIData(oldp+173,(vlSelf->io_wb_pc),32);
    bufp->chgIData(oldp+174,(vlSelf->io_wb_inst),32);
    bufp->chgIData(oldp+175,(vlSelf->io_ds_pc),32);
    bufp->chgBit(oldp+176,(vlSelf->io_clock));
    bufp->chgQData(oldp+177,(vlSelf->io_mem_result),64);
    bufp->chgCData(oldp+179,(vlSelf->io_ld_type),3);
    bufp->chgQData(oldp+180,(vlSelf->Top__DOT__axi_mem_rdata),64);
    bufp->chgCData(oldp+182,(vlSelf->Top__DOT__axi_mem__DOT__read_next_state),3);
    bufp->chgCData(oldp+183,(vlSelf->Top__DOT__axi_mem__DOT__write_next_state),3);
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
