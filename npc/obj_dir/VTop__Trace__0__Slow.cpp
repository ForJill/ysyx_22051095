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
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declQuad(c+197,"io_pc", false,-1, 63,0);
    tracep->declBus(c+199,"io_inst", false,-1, 31,0);
    tracep->declBit(c+200,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+201,"io_ctrl_OP", false,-1, 3,0);
    tracep->declBit(c+202,"io_ctrl_J_JUMP", false,-1);
    tracep->declQuad(c+203,"io_resultALU", false,-1, 63,0);
    tracep->declQuad(c+205,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+207,"io_rs2", false,-1, 63,0);
    tracep->declQuad(c+209,"io_imm", false,-1, 63,0);
    tracep->declBus(c+211,"io_op", false,-1, 3,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declQuad(c+197,"io_pc", false,-1, 63,0);
    tracep->declBus(c+199,"io_inst", false,-1, 31,0);
    tracep->declBit(c+200,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+201,"io_ctrl_OP", false,-1, 3,0);
    tracep->declBit(c+202,"io_ctrl_J_JUMP", false,-1);
    tracep->declQuad(c+203,"io_resultALU", false,-1, 63,0);
    tracep->declQuad(c+205,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+207,"io_rs2", false,-1, 63,0);
    tracep->declQuad(c+209,"io_imm", false,-1, 63,0);
    tracep->declBus(c+201,"io_op", false,-1, 3,0);
    tracep->declBit(c+195,"PC_clock", false,-1);
    tracep->declBit(c+196,"PC_reset", false,-1);
    tracep->declQuad(c+197,"PC_io_pc", false,-1, 63,0);
    tracep->declBit(c+202,"PC_io_is_j", false,-1);
    tracep->declQuad(c+212,"PC_io_j_branch", false,-1, 63,0);
    tracep->declBus(c+201,"alu_io_ctrl_alu_op", false,-1, 3,0);
    tracep->declQuad(c+205,"alu_io_in1", false,-1, 63,0);
    tracep->declQuad(c+207,"alu_io_in2", false,-1, 63,0);
    tracep->declQuad(c+209,"alu_io_imm", false,-1, 63,0);
    tracep->declQuad(c+203,"alu_io_out", false,-1, 63,0);
    tracep->declQuad(c+197,"alu_io_pc", false,-1, 63,0);
    tracep->declQuad(c+212,"alu_io_j_branch", false,-1, 63,0);
    tracep->declBus(c+199,"decoder_io_inst", false,-1, 31,0);
    tracep->declBit(c+200,"decoder_io_ctrl_RegWen", false,-1);
    tracep->declBus(c+201,"decoder_io_ctrl_OP", false,-1, 3,0);
    tracep->declBit(c+202,"decoder_io_ctrl_J_JUMP", false,-1);
    tracep->declBus(c+214,"decoder_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+215,"decoder_io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+216,"decoder_io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+209,"decoder_io_imm", false,-1, 63,0);
    tracep->declBit(c+195,"registers_clock", false,-1);
    tracep->declBit(c+200,"registers_io_wen", false,-1);
    tracep->declQuad(c+203,"registers_io_wdata", false,-1, 63,0);
    tracep->declQuad(c+205,"registers_io_rdata1", false,-1, 63,0);
    tracep->declQuad(c+207,"registers_io_rdata2", false,-1, 63,0);
    tracep->declBus(c+214,"registers_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+215,"registers_io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+216,"registers_io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+1,"registers_io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+3,"registers_io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+5,"registers_io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+7,"registers_io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+9,"registers_io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+11,"registers_io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+13,"registers_io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+15,"registers_io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+17,"registers_io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+19,"registers_io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+21,"registers_io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+23,"registers_io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+25,"registers_io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+27,"registers_io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+29,"registers_io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+31,"registers_io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+33,"registers_io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+35,"registers_io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+37,"registers_io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+39,"registers_io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+41,"registers_io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+43,"registers_io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+45,"registers_io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+47,"registers_io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+49,"registers_io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+51,"registers_io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+53,"registers_io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+55,"registers_io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+57,"registers_io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+59,"registers_io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+61,"registers_io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+63,"registers_io_regs_31", false,-1, 63,0);
    tracep->declBus(c+201,"Controller_io_ControlIO_In_OP", false,-1, 3,0);
    tracep->declBus(c+201,"Controller_io_AluCtrlIO_Out_alu_op", false,-1, 3,0);
    tracep->declBus(c+217,"dpi_flag", false,-1, 31,0);
    tracep->declQuad(c+1,"dpi_rf_0", false,-1, 63,0);
    tracep->declQuad(c+3,"dpi_rf_1", false,-1, 63,0);
    tracep->declQuad(c+5,"dpi_rf_2", false,-1, 63,0);
    tracep->declQuad(c+7,"dpi_rf_3", false,-1, 63,0);
    tracep->declQuad(c+9,"dpi_rf_4", false,-1, 63,0);
    tracep->declQuad(c+11,"dpi_rf_5", false,-1, 63,0);
    tracep->declQuad(c+13,"dpi_rf_6", false,-1, 63,0);
    tracep->declQuad(c+15,"dpi_rf_7", false,-1, 63,0);
    tracep->declQuad(c+17,"dpi_rf_8", false,-1, 63,0);
    tracep->declQuad(c+19,"dpi_rf_9", false,-1, 63,0);
    tracep->declQuad(c+21,"dpi_rf_10", false,-1, 63,0);
    tracep->declQuad(c+23,"dpi_rf_11", false,-1, 63,0);
    tracep->declQuad(c+25,"dpi_rf_12", false,-1, 63,0);
    tracep->declQuad(c+27,"dpi_rf_13", false,-1, 63,0);
    tracep->declQuad(c+29,"dpi_rf_14", false,-1, 63,0);
    tracep->declQuad(c+31,"dpi_rf_15", false,-1, 63,0);
    tracep->declQuad(c+33,"dpi_rf_16", false,-1, 63,0);
    tracep->declQuad(c+35,"dpi_rf_17", false,-1, 63,0);
    tracep->declQuad(c+37,"dpi_rf_18", false,-1, 63,0);
    tracep->declQuad(c+39,"dpi_rf_19", false,-1, 63,0);
    tracep->declQuad(c+41,"dpi_rf_20", false,-1, 63,0);
    tracep->declQuad(c+43,"dpi_rf_21", false,-1, 63,0);
    tracep->declQuad(c+45,"dpi_rf_22", false,-1, 63,0);
    tracep->declQuad(c+47,"dpi_rf_23", false,-1, 63,0);
    tracep->declQuad(c+49,"dpi_rf_24", false,-1, 63,0);
    tracep->declQuad(c+51,"dpi_rf_25", false,-1, 63,0);
    tracep->declQuad(c+53,"dpi_rf_26", false,-1, 63,0);
    tracep->declQuad(c+55,"dpi_rf_27", false,-1, 63,0);
    tracep->declQuad(c+57,"dpi_rf_28", false,-1, 63,0);
    tracep->declQuad(c+59,"dpi_rf_29", false,-1, 63,0);
    tracep->declQuad(c+61,"dpi_rf_30", false,-1, 63,0);
    tracep->declQuad(c+63,"dpi_rf_31", false,-1, 63,0);
    tracep->declBus(c+199,"dpi_inst", false,-1, 31,0);
    tracep->declQuad(c+197,"dpi_pc", false,-1, 63,0);
    tracep->pushNamePrefix("Controller ");
    tracep->declBus(c+201,"io_ControlIO_In_OP", false,-1, 3,0);
    tracep->declBus(c+201,"io_AluCtrlIO_Out_alu_op", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+196,"reset", false,-1);
    tracep->declQuad(c+197,"io_pc", false,-1, 63,0);
    tracep->declBit(c+202,"io_is_j", false,-1);
    tracep->declQuad(c+212,"io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+65,"init", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+201,"io_ctrl_alu_op", false,-1, 3,0);
    tracep->declQuad(c+205,"io_in1", false,-1, 63,0);
    tracep->declQuad(c+207,"io_in2", false,-1, 63,0);
    tracep->declQuad(c+209,"io_imm", false,-1, 63,0);
    tracep->declQuad(c+203,"io_out", false,-1, 63,0);
    tracep->declQuad(c+197,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+212,"io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+218,"op1", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+199,"io_inst", false,-1, 31,0);
    tracep->declBit(c+200,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+201,"io_ctrl_OP", false,-1, 3,0);
    tracep->declBit(c+202,"io_ctrl_J_JUMP", false,-1);
    tracep->declBus(c+214,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+215,"io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+216,"io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+209,"io_imm", false,-1, 63,0);
    tracep->declBus(c+220,"ImmType", false,-1, 1,0);
    tracep->declQuad(c+221,"I", false,-1, 63,0);
    tracep->declArray(c+223,"U", false,-1, 75,0);
    tracep->declArray(c+226,"J", false,-1, 83,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi ");
    tracep->declBus(c+217,"flag", false,-1, 31,0);
    tracep->declQuad(c+1,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+3,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+5,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+7,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+9,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+11,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+13,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+15,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+17,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+19,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+21,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+23,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+25,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+27,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+29,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+31,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+33,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+35,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+37,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+39,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+41,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+43,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+45,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+47,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+49,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+51,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+53,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+55,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+57,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+59,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+61,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+63,"rf_31", false,-1, 63,0);
    tracep->declBus(c+199,"inst", false,-1, 31,0);
    tracep->declQuad(c+197,"pc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+67+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("registers ");
    tracep->declBit(c+195,"clock", false,-1);
    tracep->declBit(c+200,"io_wen", false,-1);
    tracep->declQuad(c+203,"io_wdata", false,-1, 63,0);
    tracep->declQuad(c+205,"io_rdata1", false,-1, 63,0);
    tracep->declQuad(c+207,"io_rdata2", false,-1, 63,0);
    tracep->declBus(c+214,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+215,"io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+216,"io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+1,"io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+3,"io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+5,"io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+7,"io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+9,"io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+11,"io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+13,"io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+15,"io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+17,"io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+19,"io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+21,"io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+23,"io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+25,"io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+27,"io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+29,"io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+31,"io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+33,"io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+35,"io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+37,"io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+39,"io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+41,"io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+43,"io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+45,"io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+47,"io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+49,"io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+51,"io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+53,"io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+55,"io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+57,"io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+59,"io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+61,"io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+63,"io_regs_31", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+131+i*2,"registers", true,(i+0), 63,0);
    }
    tracep->declBit(c+237,"registers_io_rdata1_MPORT_en", false,-1);
    tracep->declBus(c+214,"registers_io_rdata1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+229,"registers_io_rdata1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_rdata2_MPORT_en", false,-1);
    tracep->declBus(c+215,"registers_io_rdata2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+231,"registers_io_rdata2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_MPORT_1_en", false,-1);
    tracep->declBus(c+216,"registers_MPORT_1_addr", false,-1, 4,0);
    tracep->declQuad(c+233,"registers_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_0_MPORT_en", false,-1);
    tracep->declBus(c+238,"registers_io_regs_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+1,"registers_io_regs_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_1_MPORT_en", false,-1);
    tracep->declBus(c+239,"registers_io_regs_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+3,"registers_io_regs_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_2_MPORT_en", false,-1);
    tracep->declBus(c+240,"registers_io_regs_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+5,"registers_io_regs_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_3_MPORT_en", false,-1);
    tracep->declBus(c+241,"registers_io_regs_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+7,"registers_io_regs_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_4_MPORT_en", false,-1);
    tracep->declBus(c+242,"registers_io_regs_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+9,"registers_io_regs_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_5_MPORT_en", false,-1);
    tracep->declBus(c+243,"registers_io_regs_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+11,"registers_io_regs_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_6_MPORT_en", false,-1);
    tracep->declBus(c+244,"registers_io_regs_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+13,"registers_io_regs_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_7_MPORT_en", false,-1);
    tracep->declBus(c+245,"registers_io_regs_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+15,"registers_io_regs_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_8_MPORT_en", false,-1);
    tracep->declBus(c+246,"registers_io_regs_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+17,"registers_io_regs_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_9_MPORT_en", false,-1);
    tracep->declBus(c+247,"registers_io_regs_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+19,"registers_io_regs_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_10_MPORT_en", false,-1);
    tracep->declBus(c+248,"registers_io_regs_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+21,"registers_io_regs_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_11_MPORT_en", false,-1);
    tracep->declBus(c+249,"registers_io_regs_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+23,"registers_io_regs_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_12_MPORT_en", false,-1);
    tracep->declBus(c+250,"registers_io_regs_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+25,"registers_io_regs_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_13_MPORT_en", false,-1);
    tracep->declBus(c+251,"registers_io_regs_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+27,"registers_io_regs_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_14_MPORT_en", false,-1);
    tracep->declBus(c+252,"registers_io_regs_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+29,"registers_io_regs_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_15_MPORT_en", false,-1);
    tracep->declBus(c+253,"registers_io_regs_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+31,"registers_io_regs_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_16_MPORT_en", false,-1);
    tracep->declBus(c+254,"registers_io_regs_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+33,"registers_io_regs_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_17_MPORT_en", false,-1);
    tracep->declBus(c+255,"registers_io_regs_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+35,"registers_io_regs_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_18_MPORT_en", false,-1);
    tracep->declBus(c+256,"registers_io_regs_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+37,"registers_io_regs_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_19_MPORT_en", false,-1);
    tracep->declBus(c+257,"registers_io_regs_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+39,"registers_io_regs_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_20_MPORT_en", false,-1);
    tracep->declBus(c+258,"registers_io_regs_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+41,"registers_io_regs_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_21_MPORT_en", false,-1);
    tracep->declBus(c+259,"registers_io_regs_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+43,"registers_io_regs_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_22_MPORT_en", false,-1);
    tracep->declBus(c+260,"registers_io_regs_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+45,"registers_io_regs_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_23_MPORT_en", false,-1);
    tracep->declBus(c+261,"registers_io_regs_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+47,"registers_io_regs_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_24_MPORT_en", false,-1);
    tracep->declBus(c+262,"registers_io_regs_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"registers_io_regs_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_25_MPORT_en", false,-1);
    tracep->declBus(c+263,"registers_io_regs_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"registers_io_regs_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_26_MPORT_en", false,-1);
    tracep->declBus(c+264,"registers_io_regs_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+53,"registers_io_regs_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_27_MPORT_en", false,-1);
    tracep->declBus(c+265,"registers_io_regs_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+55,"registers_io_regs_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_28_MPORT_en", false,-1);
    tracep->declBus(c+266,"registers_io_regs_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+57,"registers_io_regs_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_29_MPORT_en", false,-1);
    tracep->declBus(c+267,"registers_io_regs_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+59,"registers_io_regs_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_30_MPORT_en", false,-1);
    tracep->declBus(c+268,"registers_io_regs_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+61,"registers_io_regs_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_31_MPORT_en", false,-1);
    tracep->declBus(c+269,"registers_io_regs_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+63,"registers_io_regs_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+235,"registers_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+216,"registers_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+237,"registers_MPORT_mask", false,-1);
    tracep->declBit(c+237,"registers_MPORT_en", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp_h65c22f99__0;
    VlWide<3>/*95:0*/ __Vtemp_h218b0470__0;
    // Body
    bufp->fullQData(oldp+1,(vlSelf->Top__DOT__registers__DOT__registers
                            [0U]),64);
    bufp->fullQData(oldp+3,(vlSelf->Top__DOT__registers__DOT__registers
                            [1U]),64);
    bufp->fullQData(oldp+5,(vlSelf->Top__DOT__registers__DOT__registers
                            [2U]),64);
    bufp->fullQData(oldp+7,(vlSelf->Top__DOT__registers__DOT__registers
                            [3U]),64);
    bufp->fullQData(oldp+9,(vlSelf->Top__DOT__registers__DOT__registers
                            [4U]),64);
    bufp->fullQData(oldp+11,(vlSelf->Top__DOT__registers__DOT__registers
                             [5U]),64);
    bufp->fullQData(oldp+13,(vlSelf->Top__DOT__registers__DOT__registers
                             [6U]),64);
    bufp->fullQData(oldp+15,(vlSelf->Top__DOT__registers__DOT__registers
                             [7U]),64);
    bufp->fullQData(oldp+17,(vlSelf->Top__DOT__registers__DOT__registers
                             [8U]),64);
    bufp->fullQData(oldp+19,(vlSelf->Top__DOT__registers__DOT__registers
                             [9U]),64);
    bufp->fullQData(oldp+21,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xaU]),64);
    bufp->fullQData(oldp+23,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xbU]),64);
    bufp->fullQData(oldp+25,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xcU]),64);
    bufp->fullQData(oldp+27,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xdU]),64);
    bufp->fullQData(oldp+29,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xeU]),64);
    bufp->fullQData(oldp+31,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xfU]),64);
    bufp->fullQData(oldp+33,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x10U]),64);
    bufp->fullQData(oldp+35,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x11U]),64);
    bufp->fullQData(oldp+37,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x12U]),64);
    bufp->fullQData(oldp+39,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x13U]),64);
    bufp->fullQData(oldp+41,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x14U]),64);
    bufp->fullQData(oldp+43,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x15U]),64);
    bufp->fullQData(oldp+45,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x16U]),64);
    bufp->fullQData(oldp+47,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x17U]),64);
    bufp->fullQData(oldp+49,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x18U]),64);
    bufp->fullQData(oldp+51,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x19U]),64);
    bufp->fullQData(oldp+53,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1aU]),64);
    bufp->fullQData(oldp+55,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1bU]),64);
    bufp->fullQData(oldp+57,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1cU]),64);
    bufp->fullQData(oldp+59,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1dU]),64);
    bufp->fullQData(oldp+61,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1eU]),64);
    bufp->fullQData(oldp+63,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1fU]),64);
    bufp->fullQData(oldp+65,(vlSelf->Top__DOT__PC__DOT__init),64);
    bufp->fullQData(oldp+67,(vlSelf->Top__DOT__dpi__DOT__rf[0]),64);
    bufp->fullQData(oldp+69,(vlSelf->Top__DOT__dpi__DOT__rf[1]),64);
    bufp->fullQData(oldp+71,(vlSelf->Top__DOT__dpi__DOT__rf[2]),64);
    bufp->fullQData(oldp+73,(vlSelf->Top__DOT__dpi__DOT__rf[3]),64);
    bufp->fullQData(oldp+75,(vlSelf->Top__DOT__dpi__DOT__rf[4]),64);
    bufp->fullQData(oldp+77,(vlSelf->Top__DOT__dpi__DOT__rf[5]),64);
    bufp->fullQData(oldp+79,(vlSelf->Top__DOT__dpi__DOT__rf[6]),64);
    bufp->fullQData(oldp+81,(vlSelf->Top__DOT__dpi__DOT__rf[7]),64);
    bufp->fullQData(oldp+83,(vlSelf->Top__DOT__dpi__DOT__rf[8]),64);
    bufp->fullQData(oldp+85,(vlSelf->Top__DOT__dpi__DOT__rf[9]),64);
    bufp->fullQData(oldp+87,(vlSelf->Top__DOT__dpi__DOT__rf[10]),64);
    bufp->fullQData(oldp+89,(vlSelf->Top__DOT__dpi__DOT__rf[11]),64);
    bufp->fullQData(oldp+91,(vlSelf->Top__DOT__dpi__DOT__rf[12]),64);
    bufp->fullQData(oldp+93,(vlSelf->Top__DOT__dpi__DOT__rf[13]),64);
    bufp->fullQData(oldp+95,(vlSelf->Top__DOT__dpi__DOT__rf[14]),64);
    bufp->fullQData(oldp+97,(vlSelf->Top__DOT__dpi__DOT__rf[15]),64);
    bufp->fullQData(oldp+99,(vlSelf->Top__DOT__dpi__DOT__rf[16]),64);
    bufp->fullQData(oldp+101,(vlSelf->Top__DOT__dpi__DOT__rf[17]),64);
    bufp->fullQData(oldp+103,(vlSelf->Top__DOT__dpi__DOT__rf[18]),64);
    bufp->fullQData(oldp+105,(vlSelf->Top__DOT__dpi__DOT__rf[19]),64);
    bufp->fullQData(oldp+107,(vlSelf->Top__DOT__dpi__DOT__rf[20]),64);
    bufp->fullQData(oldp+109,(vlSelf->Top__DOT__dpi__DOT__rf[21]),64);
    bufp->fullQData(oldp+111,(vlSelf->Top__DOT__dpi__DOT__rf[22]),64);
    bufp->fullQData(oldp+113,(vlSelf->Top__DOT__dpi__DOT__rf[23]),64);
    bufp->fullQData(oldp+115,(vlSelf->Top__DOT__dpi__DOT__rf[24]),64);
    bufp->fullQData(oldp+117,(vlSelf->Top__DOT__dpi__DOT__rf[25]),64);
    bufp->fullQData(oldp+119,(vlSelf->Top__DOT__dpi__DOT__rf[26]),64);
    bufp->fullQData(oldp+121,(vlSelf->Top__DOT__dpi__DOT__rf[27]),64);
    bufp->fullQData(oldp+123,(vlSelf->Top__DOT__dpi__DOT__rf[28]),64);
    bufp->fullQData(oldp+125,(vlSelf->Top__DOT__dpi__DOT__rf[29]),64);
    bufp->fullQData(oldp+127,(vlSelf->Top__DOT__dpi__DOT__rf[30]),64);
    bufp->fullQData(oldp+129,(vlSelf->Top__DOT__dpi__DOT__rf[31]),64);
    bufp->fullQData(oldp+131,(vlSelf->Top__DOT__registers__DOT__registers[0]),64);
    bufp->fullQData(oldp+133,(vlSelf->Top__DOT__registers__DOT__registers[1]),64);
    bufp->fullQData(oldp+135,(vlSelf->Top__DOT__registers__DOT__registers[2]),64);
    bufp->fullQData(oldp+137,(vlSelf->Top__DOT__registers__DOT__registers[3]),64);
    bufp->fullQData(oldp+139,(vlSelf->Top__DOT__registers__DOT__registers[4]),64);
    bufp->fullQData(oldp+141,(vlSelf->Top__DOT__registers__DOT__registers[5]),64);
    bufp->fullQData(oldp+143,(vlSelf->Top__DOT__registers__DOT__registers[6]),64);
    bufp->fullQData(oldp+145,(vlSelf->Top__DOT__registers__DOT__registers[7]),64);
    bufp->fullQData(oldp+147,(vlSelf->Top__DOT__registers__DOT__registers[8]),64);
    bufp->fullQData(oldp+149,(vlSelf->Top__DOT__registers__DOT__registers[9]),64);
    bufp->fullQData(oldp+151,(vlSelf->Top__DOT__registers__DOT__registers[10]),64);
    bufp->fullQData(oldp+153,(vlSelf->Top__DOT__registers__DOT__registers[11]),64);
    bufp->fullQData(oldp+155,(vlSelf->Top__DOT__registers__DOT__registers[12]),64);
    bufp->fullQData(oldp+157,(vlSelf->Top__DOT__registers__DOT__registers[13]),64);
    bufp->fullQData(oldp+159,(vlSelf->Top__DOT__registers__DOT__registers[14]),64);
    bufp->fullQData(oldp+161,(vlSelf->Top__DOT__registers__DOT__registers[15]),64);
    bufp->fullQData(oldp+163,(vlSelf->Top__DOT__registers__DOT__registers[16]),64);
    bufp->fullQData(oldp+165,(vlSelf->Top__DOT__registers__DOT__registers[17]),64);
    bufp->fullQData(oldp+167,(vlSelf->Top__DOT__registers__DOT__registers[18]),64);
    bufp->fullQData(oldp+169,(vlSelf->Top__DOT__registers__DOT__registers[19]),64);
    bufp->fullQData(oldp+171,(vlSelf->Top__DOT__registers__DOT__registers[20]),64);
    bufp->fullQData(oldp+173,(vlSelf->Top__DOT__registers__DOT__registers[21]),64);
    bufp->fullQData(oldp+175,(vlSelf->Top__DOT__registers__DOT__registers[22]),64);
    bufp->fullQData(oldp+177,(vlSelf->Top__DOT__registers__DOT__registers[23]),64);
    bufp->fullQData(oldp+179,(vlSelf->Top__DOT__registers__DOT__registers[24]),64);
    bufp->fullQData(oldp+181,(vlSelf->Top__DOT__registers__DOT__registers[25]),64);
    bufp->fullQData(oldp+183,(vlSelf->Top__DOT__registers__DOT__registers[26]),64);
    bufp->fullQData(oldp+185,(vlSelf->Top__DOT__registers__DOT__registers[27]),64);
    bufp->fullQData(oldp+187,(vlSelf->Top__DOT__registers__DOT__registers[28]),64);
    bufp->fullQData(oldp+189,(vlSelf->Top__DOT__registers__DOT__registers[29]),64);
    bufp->fullQData(oldp+191,(vlSelf->Top__DOT__registers__DOT__registers[30]),64);
    bufp->fullQData(oldp+193,(vlSelf->Top__DOT__registers__DOT__registers[31]),64);
    bufp->fullBit(oldp+195,(vlSelf->clock));
    bufp->fullBit(oldp+196,(vlSelf->reset));
    bufp->fullQData(oldp+197,(vlSelf->io_pc),64);
    bufp->fullIData(oldp+199,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+200,(vlSelf->io_ctrl_RegWen));
    bufp->fullCData(oldp+201,(vlSelf->io_ctrl_OP),4);
    bufp->fullBit(oldp+202,(vlSelf->io_ctrl_J_JUMP));
    bufp->fullQData(oldp+203,(vlSelf->io_resultALU),64);
    bufp->fullQData(oldp+205,(vlSelf->io_rs1),64);
    bufp->fullQData(oldp+207,(vlSelf->io_rs2),64);
    bufp->fullQData(oldp+209,(vlSelf->io_imm),64);
    bufp->fullCData(oldp+211,(vlSelf->io_op),4);
    bufp->fullQData(oldp+212,(((6U == (IData)(vlSelf->io_ctrl_OP))
                                ? 0ULL : ((5U == (IData)(vlSelf->io_ctrl_OP))
                                           ? vlSelf->Top__DOT__alu__DOT___result_T_3
                                           : 0ULL))),64);
    bufp->fullCData(oldp+214,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_addr),5);
    bufp->fullCData(oldp+215,((0x1fU & (vlSelf->io_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+216,((0x1fU & (vlSelf->io_inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+217,((((4U == (IData)(vlSelf->io_ctrl_OP)) 
                                | (IData)(((6U == (IData)(vlSelf->io_ctrl_OP)) 
                                           & (0U == 
                                              (0xf80U 
                                               & vlSelf->io_inst)))))
                                ? 1U : 0U)),32);
    bufp->fullQData(oldp+218,(vlSelf->Top__DOT__alu__DOT__op1),64);
    bufp->fullCData(oldp+220,(vlSelf->Top__DOT__decoder__DOT__ImmType),2);
    bufp->fullQData(oldp+221,(((((vlSelf->io_inst >> 0x1fU)
                                  ? 0xfffffffffffffULL
                                  : 0ULL) << 0xcU) 
                               | (QData)((IData)((vlSelf->io_inst 
                                                  >> 0x14U))))),64);
    __Vtemp_h65c22f99__0[0U] = ((IData)(((((vlSelf->io_inst 
                                            >> 0x1fU)
                                            ? 0xfffffffffffULL
                                            : 0ULL) 
                                          << 0x14U) 
                                         | (QData)((IData)(
                                                           (vlSelf->io_inst 
                                                            >> 0xcU))))) 
                                << 0xcU);
    __Vtemp_h65c22f99__0[1U] = (((IData)(((((vlSelf->io_inst 
                                             >> 0x1fU)
                                             ? 0xfffffffffffULL
                                             : 0ULL) 
                                           << 0x14U) 
                                          | (QData)((IData)(
                                                            (vlSelf->io_inst 
                                                             >> 0xcU))))) 
                                 >> 0x14U) | ((IData)(
                                                      (((((vlSelf->io_inst 
                                                           >> 0x1fU)
                                                           ? 0xfffffffffffULL
                                                           : 0ULL) 
                                                         << 0x14U) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->io_inst 
                                                                           >> 0xcU)))) 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h65c22f99__0[2U] = ((IData)((((((vlSelf->io_inst 
                                             >> 0x1fU)
                                             ? 0xfffffffffffULL
                                             : 0ULL) 
                                           << 0x14U) 
                                          | (QData)((IData)(
                                                            (vlSelf->io_inst 
                                                             >> 0xcU)))) 
                                         >> 0x20U)) 
                                >> 0x14U);
    bufp->fullWData(oldp+223,(__Vtemp_h65c22f99__0),76);
    __Vtemp_h218b0470__0[0U] = (((((IData)(((((vlSelf->io_inst 
                                               >> 0x1fU)
                                               ? 0x7fffffffffffffffULL
                                               : 0ULL) 
                                             << 1U) 
                                            | (QData)((IData)(
                                                              (vlSelf->io_inst 
                                                               >> 0x1fU))))) 
                                   << 0x14U) | (0xff000U 
                                                & vlSelf->io_inst)) 
                                 | (0x800U & (vlSelf->io_inst 
                                              >> 9U))) 
                                | (0x7feU & (vlSelf->io_inst 
                                             >> 0x14U)));
    __Vtemp_h218b0470__0[1U] = (((IData)(((((vlSelf->io_inst 
                                             >> 0x1fU)
                                             ? 0x7fffffffffffffffULL
                                             : 0ULL) 
                                           << 1U) | (QData)((IData)(
                                                                    (vlSelf->io_inst 
                                                                     >> 0x1fU))))) 
                                 >> 0xcU) | ((IData)(
                                                     (((((vlSelf->io_inst 
                                                          >> 0x1fU)
                                                          ? 0x7fffffffffffffffULL
                                                          : 0ULL) 
                                                        << 1U) 
                                                       | (QData)((IData)(
                                                                         (vlSelf->io_inst 
                                                                          >> 0x1fU)))) 
                                                      >> 0x20U)) 
                                             << 0x14U));
    __Vtemp_h218b0470__0[2U] = ((IData)((((((vlSelf->io_inst 
                                             >> 0x1fU)
                                             ? 0x7fffffffffffffffULL
                                             : 0ULL) 
                                           << 1U) | (QData)((IData)(
                                                                    (vlSelf->io_inst 
                                                                     >> 0x1fU)))) 
                                         >> 0x20U)) 
                                >> 0xcU);
    bufp->fullWData(oldp+226,(__Vtemp_h218b0470__0),84);
    bufp->fullQData(oldp+229,(vlSelf->Top__DOT__registers__DOT__registers
                              [vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_addr]),64);
    bufp->fullQData(oldp+231,(vlSelf->Top__DOT__registers__DOT__registers
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 0x14U))]),64);
    bufp->fullQData(oldp+233,(vlSelf->Top__DOT__registers__DOT__registers
                              [(0x1fU & (vlSelf->io_inst 
                                         >> 7U))]),64);
    bufp->fullQData(oldp+235,(((IData)(vlSelf->io_ctrl_RegWen)
                                ? vlSelf->io_resultALU
                                : vlSelf->Top__DOT__registers__DOT__registers
                               [(0x1fU & (vlSelf->io_inst 
                                          >> 7U))])),64);
    bufp->fullBit(oldp+237,(1U));
    bufp->fullCData(oldp+238,(0U),5);
    bufp->fullCData(oldp+239,(1U),5);
    bufp->fullCData(oldp+240,(2U),5);
    bufp->fullCData(oldp+241,(3U),5);
    bufp->fullCData(oldp+242,(4U),5);
    bufp->fullCData(oldp+243,(5U),5);
    bufp->fullCData(oldp+244,(6U),5);
    bufp->fullCData(oldp+245,(7U),5);
    bufp->fullCData(oldp+246,(8U),5);
    bufp->fullCData(oldp+247,(9U),5);
    bufp->fullCData(oldp+248,(0xaU),5);
    bufp->fullCData(oldp+249,(0xbU),5);
    bufp->fullCData(oldp+250,(0xcU),5);
    bufp->fullCData(oldp+251,(0xdU),5);
    bufp->fullCData(oldp+252,(0xeU),5);
    bufp->fullCData(oldp+253,(0xfU),5);
    bufp->fullCData(oldp+254,(0x10U),5);
    bufp->fullCData(oldp+255,(0x11U),5);
    bufp->fullCData(oldp+256,(0x12U),5);
    bufp->fullCData(oldp+257,(0x13U),5);
    bufp->fullCData(oldp+258,(0x14U),5);
    bufp->fullCData(oldp+259,(0x15U),5);
    bufp->fullCData(oldp+260,(0x16U),5);
    bufp->fullCData(oldp+261,(0x17U),5);
    bufp->fullCData(oldp+262,(0x18U),5);
    bufp->fullCData(oldp+263,(0x19U),5);
    bufp->fullCData(oldp+264,(0x1aU),5);
    bufp->fullCData(oldp+265,(0x1bU),5);
    bufp->fullCData(oldp+266,(0x1cU),5);
    bufp->fullCData(oldp+267,(0x1dU),5);
    bufp->fullCData(oldp+268,(0x1eU),5);
    bufp->fullCData(oldp+269,(0x1fU),5);
}
