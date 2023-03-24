// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_init_sub__TOP__0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+68,"clock", false,-1);
    tracep->declBit(c+69,"reset", false,-1);
    tracep->declQuad(c+70,"io_pc", false,-1, 63,0);
    tracep->declBus(c+72,"io_inst", false,-1, 31,0);
    tracep->declBit(c+73,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+74,"io_ctrl_OP", false,-1, 3,0);
    tracep->declQuad(c+75,"io_resultALU", false,-1, 63,0);
    tracep->declQuad(c+77,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+79,"io_rs2", false,-1, 63,0);
    tracep->declQuad(c+81,"io_imm", false,-1, 63,0);
    tracep->declBus(c+83,"io_op", false,-1, 3,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+68,"clock", false,-1);
    tracep->declBit(c+69,"reset", false,-1);
    tracep->declQuad(c+70,"io_pc", false,-1, 63,0);
    tracep->declBus(c+72,"io_inst", false,-1, 31,0);
    tracep->declBit(c+73,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+74,"io_ctrl_OP", false,-1, 3,0);
    tracep->declQuad(c+75,"io_resultALU", false,-1, 63,0);
    tracep->declQuad(c+77,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+79,"io_rs2", false,-1, 63,0);
    tracep->declQuad(c+81,"io_imm", false,-1, 63,0);
    tracep->declBus(c+74,"io_op", false,-1, 3,0);
    tracep->declBit(c+68,"PC_clock", false,-1);
    tracep->declBit(c+69,"PC_reset", false,-1);
    tracep->declQuad(c+70,"PC_io_pc", false,-1, 63,0);
    tracep->declBus(c+74,"alu_io_ctrl_alu_op", false,-1, 3,0);
    tracep->declQuad(c+77,"alu_io_in1", false,-1, 63,0);
    tracep->declQuad(c+79,"alu_io_in2", false,-1, 63,0);
    tracep->declQuad(c+81,"alu_io_imm", false,-1, 63,0);
    tracep->declQuad(c+75,"alu_io_out", false,-1, 63,0);
    tracep->declBus(c+72,"decoder_io_inst", false,-1, 31,0);
    tracep->declBit(c+73,"decoder_io_ctrl_RegWen", false,-1);
    tracep->declBus(c+74,"decoder_io_ctrl_OP", false,-1, 3,0);
    tracep->declBus(c+84,"decoder_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+85,"decoder_io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+86,"decoder_io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+81,"decoder_io_imm", false,-1, 63,0);
    tracep->declBit(c+68,"instmem_clock", false,-1);
    tracep->declQuad(c+70,"instmem_io_addr", false,-1, 63,0);
    tracep->declBus(c+72,"instmem_io_inst", false,-1, 31,0);
    tracep->declBit(c+68,"registers_clock", false,-1);
    tracep->declBit(c+73,"registers_io_wen", false,-1);
    tracep->declQuad(c+75,"registers_io_wdata", false,-1, 63,0);
    tracep->declQuad(c+77,"registers_io_rdata1", false,-1, 63,0);
    tracep->declQuad(c+79,"registers_io_rdata2", false,-1, 63,0);
    tracep->declBus(c+84,"registers_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+85,"registers_io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+86,"registers_io_reg_rd", false,-1, 4,0);
    tracep->declBus(c+74,"Controller_io_ControlIO_In_OP", false,-1, 3,0);
    tracep->declBus(c+74,"Controller_io_AluCtrlIO_Out_alu_op", false,-1, 3,0);
    tracep->declBit(c+87,"dpi_flag", false,-1);
    tracep->pushNamePrefix("Controller ");
    tracep->declBus(c+74,"io_ControlIO_In_OP", false,-1, 3,0);
    tracep->declBus(c+74,"io_AluCtrlIO_Out_alu_op", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+68,"clock", false,-1);
    tracep->declBit(c+69,"reset", false,-1);
    tracep->declQuad(c+70,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+1,"init", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+74,"io_ctrl_alu_op", false,-1, 3,0);
    tracep->declQuad(c+77,"io_in1", false,-1, 63,0);
    tracep->declQuad(c+79,"io_in2", false,-1, 63,0);
    tracep->declQuad(c+81,"io_imm", false,-1, 63,0);
    tracep->declQuad(c+75,"io_out", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+72,"io_inst", false,-1, 31,0);
    tracep->declBit(c+73,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+74,"io_ctrl_OP", false,-1, 3,0);
    tracep->declBus(c+84,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+85,"io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+86,"io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+81,"io_imm", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi ");
    tracep->declBit(c+87,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instmem ");
    tracep->declBit(c+68,"clock", false,-1);
    tracep->declQuad(c+70,"io_addr", false,-1, 63,0);
    tracep->declBus(c+72,"io_inst", false,-1, 31,0);
    tracep->declBit(c+96,"mem_io_inst_MPORT_en", false,-1);
    tracep->declBus(c+3,"mem_io_inst_MPORT_addr", false,-1, 9,0);
    tracep->declBus(c+72,"mem_io_inst_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+97,"mem_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+98,"mem_MPORT_addr", false,-1, 9,0);
    tracep->declBit(c+96,"mem_MPORT_mask", false,-1);
    tracep->declBit(c+96,"mem_MPORT_en", false,-1);
    tracep->declBus(c+99,"mem_MPORT_1_data", false,-1, 31,0);
    tracep->declBus(c+100,"mem_MPORT_1_addr", false,-1, 9,0);
    tracep->declBit(c+96,"mem_MPORT_1_mask", false,-1);
    tracep->declBit(c+96,"mem_MPORT_1_en", false,-1);
    tracep->declBus(c+101,"mem_MPORT_2_data", false,-1, 31,0);
    tracep->declBus(c+102,"mem_MPORT_2_addr", false,-1, 9,0);
    tracep->declBit(c+96,"mem_MPORT_2_mask", false,-1);
    tracep->declBit(c+96,"mem_MPORT_2_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("registers ");
    tracep->declBit(c+68,"clock", false,-1);
    tracep->declBit(c+73,"io_wen", false,-1);
    tracep->declQuad(c+75,"io_wdata", false,-1, 63,0);
    tracep->declQuad(c+77,"io_rdata1", false,-1, 63,0);
    tracep->declQuad(c+79,"io_rdata2", false,-1, 63,0);
    tracep->declBus(c+84,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+85,"io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+86,"io_reg_rd", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+4+i*2,"registers", true,(i+0), 63,0);
    }
    tracep->declBit(c+96,"registers_io_rdata1_MPORT_en", false,-1);
    tracep->declBus(c+84,"registers_io_rdata1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+88,"registers_io_rdata1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+96,"registers_io_rdata2_MPORT_en", false,-1);
    tracep->declBus(c+85,"registers_io_rdata2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+90,"registers_io_rdata2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+96,"registers_MPORT_1_en", false,-1);
    tracep->declBus(c+86,"registers_MPORT_1_addr", false,-1, 4,0);
    tracep->declQuad(c+92,"registers_MPORT_1_data", false,-1, 63,0);
    tracep->declQuad(c+94,"registers_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+86,"registers_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+96,"registers_MPORT_mask", false,-1);
    tracep->declBit(c+96,"registers_MPORT_en", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_top\n"); );
    // Body
    VTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_top_0\n"); );
    // Init
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTop___024root__trace_full_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->Top__DOT__PC__DOT__init),64);
    bufp->fullSData(oldp+3,((0x3ffU & (IData)(vlSelf->Top__DOT__PC__DOT__init))),10);
    bufp->fullQData(oldp+4,(vlSelf->Top__DOT__registers__DOT__registers[0]),64);
    bufp->fullQData(oldp+6,(vlSelf->Top__DOT__registers__DOT__registers[1]),64);
    bufp->fullQData(oldp+8,(vlSelf->Top__DOT__registers__DOT__registers[2]),64);
    bufp->fullQData(oldp+10,(vlSelf->Top__DOT__registers__DOT__registers[3]),64);
    bufp->fullQData(oldp+12,(vlSelf->Top__DOT__registers__DOT__registers[4]),64);
    bufp->fullQData(oldp+14,(vlSelf->Top__DOT__registers__DOT__registers[5]),64);
    bufp->fullQData(oldp+16,(vlSelf->Top__DOT__registers__DOT__registers[6]),64);
    bufp->fullQData(oldp+18,(vlSelf->Top__DOT__registers__DOT__registers[7]),64);
    bufp->fullQData(oldp+20,(vlSelf->Top__DOT__registers__DOT__registers[8]),64);
    bufp->fullQData(oldp+22,(vlSelf->Top__DOT__registers__DOT__registers[9]),64);
    bufp->fullQData(oldp+24,(vlSelf->Top__DOT__registers__DOT__registers[10]),64);
    bufp->fullQData(oldp+26,(vlSelf->Top__DOT__registers__DOT__registers[11]),64);
    bufp->fullQData(oldp+28,(vlSelf->Top__DOT__registers__DOT__registers[12]),64);
    bufp->fullQData(oldp+30,(vlSelf->Top__DOT__registers__DOT__registers[13]),64);
    bufp->fullQData(oldp+32,(vlSelf->Top__DOT__registers__DOT__registers[14]),64);
    bufp->fullQData(oldp+34,(vlSelf->Top__DOT__registers__DOT__registers[15]),64);
    bufp->fullQData(oldp+36,(vlSelf->Top__DOT__registers__DOT__registers[16]),64);
    bufp->fullQData(oldp+38,(vlSelf->Top__DOT__registers__DOT__registers[17]),64);
    bufp->fullQData(oldp+40,(vlSelf->Top__DOT__registers__DOT__registers[18]),64);
    bufp->fullQData(oldp+42,(vlSelf->Top__DOT__registers__DOT__registers[19]),64);
    bufp->fullQData(oldp+44,(vlSelf->Top__DOT__registers__DOT__registers[20]),64);
    bufp->fullQData(oldp+46,(vlSelf->Top__DOT__registers__DOT__registers[21]),64);
    bufp->fullQData(oldp+48,(vlSelf->Top__DOT__registers__DOT__registers[22]),64);
    bufp->fullQData(oldp+50,(vlSelf->Top__DOT__registers__DOT__registers[23]),64);
    bufp->fullQData(oldp+52,(vlSelf->Top__DOT__registers__DOT__registers[24]),64);
    bufp->fullQData(oldp+54,(vlSelf->Top__DOT__registers__DOT__registers[25]),64);
    bufp->fullQData(oldp+56,(vlSelf->Top__DOT__registers__DOT__registers[26]),64);
    bufp->fullQData(oldp+58,(vlSelf->Top__DOT__registers__DOT__registers[27]),64);
    bufp->fullQData(oldp+60,(vlSelf->Top__DOT__registers__DOT__registers[28]),64);
    bufp->fullQData(oldp+62,(vlSelf->Top__DOT__registers__DOT__registers[29]),64);
    bufp->fullQData(oldp+64,(vlSelf->Top__DOT__registers__DOT__registers[30]),64);
    bufp->fullQData(oldp+66,(vlSelf->Top__DOT__registers__DOT__registers[31]),64);
    bufp->fullBit(oldp+68,(vlSelf->clock));
    bufp->fullBit(oldp+69,(vlSelf->reset));
    bufp->fullQData(oldp+70,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+72,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+73,(vlSelf->io_ctrl_RegWen));
    bufp->fullCData(oldp+74,(vlSelf->io_ctrl_OP),4);
    bufp->fullQData(oldp+75,(vlSelf->io_resultALU),64);
    bufp->fullQData(oldp+77,(vlSelf->io_rs1),64);
    bufp->fullQData(oldp+79,(vlSelf->io_rs2),64);
    bufp->fullQData(oldp+81,(vlSelf->io_imm),64);
    bufp->fullCData(oldp+83,(vlSelf->io_op),4);
    bufp->fullCData(oldp+84,((0x1fU & (vlSelf->io_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+85,((0x1fU & (vlSelf->io_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+86,((0x1fU & (vlSelf->io_inst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+87,((2U == (IData)(vlSelf->io_ctrl_OP))));
    bufp->fullQData(oldp+88,(vlSelf->Top__DOT__registers__DOT__registers
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 0xfU))]),64);
    bufp->fullQData(oldp+90,(vlSelf->Top__DOT__registers__DOT__registers
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 0x14U))]),64);
    bufp->fullQData(oldp+92,(vlSelf->Top__DOT__registers__DOT__registers
                             [(0x1fU & (vlSelf->io_inst 
                                        >> 7U))]),64);
    bufp->fullQData(oldp+94,(((IData)(vlSelf->io_ctrl_RegWen)
                               ? vlSelf->io_resultALU
                               : vlSelf->Top__DOT__registers__DOT__registers
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 7U))])),64);
    bufp->fullBit(oldp+96,(1U));
    bufp->fullIData(oldp+97,(0x10400b3U),32);
    bufp->fullSData(oldp+98,(0U),10);
    bufp->fullIData(oldp+99,(0x100093U),32);
    bufp->fullSData(oldp+100,(4U),10);
    bufp->fullIData(oldp+101,(0x100073U),32);
    bufp->fullSData(oldp+102,(8U),10);
}
