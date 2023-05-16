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
    tracep->declBit(c+317,"clock", false,-1);
    tracep->declBit(c+318,"reset", false,-1);
    tracep->declQuad(c+319,"io_pc", false,-1, 63,0);
    tracep->declBit(c+321,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+322,"io_ctrl_OP", false,-1, 7,0);
    tracep->declBit(c+323,"io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+324,"io_ctrl_MemWen", false,-1);
    tracep->declBus(c+325,"io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+326,"io_ctrl_MemLoad", false,-1);
    tracep->declBit(c+327,"io_ctrl_csr_wen", false,-1);
    tracep->declBit(c+328,"io_ctrl_E_JUMP", false,-1);
    tracep->declQuad(c+329,"io_resultALU", false,-1, 63,0);
    tracep->declQuad(c+331,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+333,"io_rs2", false,-1, 63,0);
    tracep->declBus(c+335,"io_rd", false,-1, 4,0);
    tracep->declQuad(c+336,"io_imm", false,-1, 63,0);
    tracep->declBus(c+338,"io_op", false,-1, 7,0);
    tracep->declBit(c+339,"io_MemWen", false,-1);
    tracep->declBit(c+340,"io_MemLoad", false,-1);
    tracep->declBus(c+341,"io_inst", false,-1, 31,0);
    tracep->declBit(c+342,"io_is_b", false,-1);
    tracep->declBus(c+343,"io_wmask", false,-1, 7,0);
    tracep->declQuad(c+344,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+346,"io_fmemwdata", false,-1, 63,0);
    tracep->declBit(c+348,"io_is_e", false,-1);
    tracep->declBit(c+349,"io_is_csr", false,-1);
    tracep->declQuad(c+350,"io_reg17", false,-1, 63,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+317,"clock", false,-1);
    tracep->declBit(c+318,"reset", false,-1);
    tracep->declQuad(c+319,"io_pc", false,-1, 63,0);
    tracep->declBit(c+321,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+322,"io_ctrl_OP", false,-1, 7,0);
    tracep->declBit(c+323,"io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+324,"io_ctrl_MemWen", false,-1);
    tracep->declBus(c+325,"io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+326,"io_ctrl_MemLoad", false,-1);
    tracep->declBit(c+327,"io_ctrl_csr_wen", false,-1);
    tracep->declBit(c+328,"io_ctrl_E_JUMP", false,-1);
    tracep->declQuad(c+329,"io_resultALU", false,-1, 63,0);
    tracep->declQuad(c+331,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+333,"io_rs2", false,-1, 63,0);
    tracep->declBus(c+335,"io_rd", false,-1, 4,0);
    tracep->declQuad(c+336,"io_imm", false,-1, 63,0);
    tracep->declBus(c+322,"io_op", false,-1, 7,0);
    tracep->declBit(c+324,"io_MemWen", false,-1);
    tracep->declBit(c+326,"io_MemLoad", false,-1);
    tracep->declBus(c+341,"io_inst", false,-1, 31,0);
    tracep->declBit(c+342,"io_is_b", false,-1);
    tracep->declBus(c+325,"io_wmask", false,-1, 7,0);
    tracep->declQuad(c+344,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+346,"io_fmemwdata", false,-1, 63,0);
    tracep->declBit(c+328,"io_is_e", false,-1);
    tracep->declBit(c+327,"io_is_csr", false,-1);
    tracep->declQuad(c+350,"io_reg17", false,-1, 63,0);
    tracep->declBit(c+317,"PC_clock", false,-1);
    tracep->declBit(c+318,"PC_reset", false,-1);
    tracep->declQuad(c+319,"PC_io_pc", false,-1, 63,0);
    tracep->declQuad(c+1,"PC_io_pc4", false,-1, 63,0);
    tracep->declBit(c+323,"PC_io_is_j", false,-1);
    tracep->declBit(c+342,"PC_io_is_b", false,-1);
    tracep->declBit(c+328,"PC_io_is_e", false,-1);
    tracep->declQuad(c+352,"PC_io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+329,"PC_io_b_branch", false,-1, 63,0);
    tracep->declQuad(c+354,"PC_io_e_branch", false,-1, 63,0);
    tracep->declBit(c+317,"alu_clock", false,-1);
    tracep->declBit(c+318,"alu_reset", false,-1);
    tracep->declBus(c+322,"alu_io_ctrl_alu_op", false,-1, 7,0);
    tracep->declBit(c+327,"alu_io_ctrl_csr_wen", false,-1);
    tracep->declQuad(c+331,"alu_io_in1", false,-1, 63,0);
    tracep->declQuad(c+333,"alu_io_in2", false,-1, 63,0);
    tracep->declQuad(c+336,"alu_io_imm", false,-1, 63,0);
    tracep->declQuad(c+329,"alu_io_out", false,-1, 63,0);
    tracep->declQuad(c+319,"alu_io_pc", false,-1, 63,0);
    tracep->declQuad(c+352,"alu_io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+354,"alu_io_e_branch", false,-1, 63,0);
    tracep->declQuad(c+356,"alu_io_is_b", false,-1, 63,0);
    tracep->declBus(c+3,"alu_io_csr_index", false,-1, 2,0);
    tracep->declQuad(c+350,"alu_io_reg17", false,-1, 63,0);
    tracep->declQuad(c+4,"alu_io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+6,"alu_io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+8,"alu_io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+10,"alu_io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+12,"alu_io_csr_regs_4", false,-1, 63,0);
    tracep->declBus(c+341,"decoder_io_inst", false,-1, 31,0);
    tracep->declBit(c+321,"decoder_io_ctrl_RegWen", false,-1);
    tracep->declBus(c+322,"decoder_io_ctrl_OP", false,-1, 7,0);
    tracep->declBit(c+323,"decoder_io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+324,"decoder_io_ctrl_MemWen", false,-1);
    tracep->declBus(c+325,"decoder_io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+326,"decoder_io_ctrl_MemLoad", false,-1);
    tracep->declBit(c+327,"decoder_io_ctrl_csr_wen", false,-1);
    tracep->declBit(c+328,"decoder_io_ctrl_E_JUMP", false,-1);
    tracep->declBus(c+14,"decoder_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+15,"decoder_io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+335,"decoder_io_reg_rd", false,-1, 4,0);
    tracep->declBus(c+3,"decoder_io_reg_csr_index", false,-1, 2,0);
    tracep->declQuad(c+336,"decoder_io_imm", false,-1, 63,0);
    tracep->declBit(c+358,"decoder_io_eval", false,-1);
    tracep->declBit(c+317,"registers_clock", false,-1);
    tracep->declBit(c+321,"registers_io_wen", false,-1);
    tracep->declQuad(c+346,"registers_io_wdata", false,-1, 63,0);
    tracep->declQuad(c+331,"registers_io_rdata1", false,-1, 63,0);
    tracep->declQuad(c+333,"registers_io_rdata2", false,-1, 63,0);
    tracep->declBus(c+14,"registers_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+15,"registers_io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+335,"registers_io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+16,"registers_io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+18,"registers_io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+20,"registers_io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+22,"registers_io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+24,"registers_io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+26,"registers_io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+28,"registers_io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+30,"registers_io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+32,"registers_io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+34,"registers_io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+36,"registers_io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+38,"registers_io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+40,"registers_io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+42,"registers_io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+44,"registers_io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+46,"registers_io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+48,"registers_io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+350,"registers_io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+50,"registers_io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+52,"registers_io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+54,"registers_io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+56,"registers_io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+58,"registers_io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+60,"registers_io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+62,"registers_io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+64,"registers_io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+66,"registers_io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+68,"registers_io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+70,"registers_io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+72,"registers_io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+74,"registers_io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+76,"registers_io_regs_31", false,-1, 63,0);
    tracep->declQuad(c+350,"registers_io_reg17", false,-1, 63,0);
    tracep->declBus(c+359,"dpi_flag", false,-1, 31,0);
    tracep->declQuad(c+16,"dpi_rf_0", false,-1, 63,0);
    tracep->declQuad(c+18,"dpi_rf_1", false,-1, 63,0);
    tracep->declQuad(c+20,"dpi_rf_2", false,-1, 63,0);
    tracep->declQuad(c+22,"dpi_rf_3", false,-1, 63,0);
    tracep->declQuad(c+24,"dpi_rf_4", false,-1, 63,0);
    tracep->declQuad(c+26,"dpi_rf_5", false,-1, 63,0);
    tracep->declQuad(c+28,"dpi_rf_6", false,-1, 63,0);
    tracep->declQuad(c+30,"dpi_rf_7", false,-1, 63,0);
    tracep->declQuad(c+32,"dpi_rf_8", false,-1, 63,0);
    tracep->declQuad(c+34,"dpi_rf_9", false,-1, 63,0);
    tracep->declQuad(c+36,"dpi_rf_10", false,-1, 63,0);
    tracep->declQuad(c+38,"dpi_rf_11", false,-1, 63,0);
    tracep->declQuad(c+40,"dpi_rf_12", false,-1, 63,0);
    tracep->declQuad(c+42,"dpi_rf_13", false,-1, 63,0);
    tracep->declQuad(c+44,"dpi_rf_14", false,-1, 63,0);
    tracep->declQuad(c+46,"dpi_rf_15", false,-1, 63,0);
    tracep->declQuad(c+48,"dpi_rf_16", false,-1, 63,0);
    tracep->declQuad(c+350,"dpi_rf_17", false,-1, 63,0);
    tracep->declQuad(c+50,"dpi_rf_18", false,-1, 63,0);
    tracep->declQuad(c+52,"dpi_rf_19", false,-1, 63,0);
    tracep->declQuad(c+54,"dpi_rf_20", false,-1, 63,0);
    tracep->declQuad(c+56,"dpi_rf_21", false,-1, 63,0);
    tracep->declQuad(c+58,"dpi_rf_22", false,-1, 63,0);
    tracep->declQuad(c+60,"dpi_rf_23", false,-1, 63,0);
    tracep->declQuad(c+62,"dpi_rf_24", false,-1, 63,0);
    tracep->declQuad(c+64,"dpi_rf_25", false,-1, 63,0);
    tracep->declQuad(c+66,"dpi_rf_26", false,-1, 63,0);
    tracep->declQuad(c+68,"dpi_rf_27", false,-1, 63,0);
    tracep->declQuad(c+70,"dpi_rf_28", false,-1, 63,0);
    tracep->declQuad(c+72,"dpi_rf_29", false,-1, 63,0);
    tracep->declQuad(c+74,"dpi_rf_30", false,-1, 63,0);
    tracep->declQuad(c+76,"dpi_rf_31", false,-1, 63,0);
    tracep->declQuad(c+4,"dpi_csr_0", false,-1, 63,0);
    tracep->declQuad(c+6,"dpi_csr_1", false,-1, 63,0);
    tracep->declQuad(c+8,"dpi_csr_2", false,-1, 63,0);
    tracep->declQuad(c+10,"dpi_csr_3", false,-1, 63,0);
    tracep->declQuad(c+12,"dpi_csr_4", false,-1, 63,0);
    tracep->declBus(c+341,"dpi_inst", false,-1, 31,0);
    tracep->declQuad(c+319,"dpi_pc", false,-1, 63,0);
    tracep->declBus(c+360,"dpi_eval", false,-1, 31,0);
    tracep->declQuad(c+319,"ifu_io_pc", false,-1, 63,0);
    tracep->declBus(c+341,"ifu_io_inst", false,-1, 31,0);
    tracep->declQuad(c+329,"lsu_io_raddr", false,-1, 63,0);
    tracep->declQuad(c+344,"lsu_io_rdata", false,-1, 63,0);
    tracep->declQuad(c+329,"lsu_io_waddr", false,-1, 63,0);
    tracep->declQuad(c+333,"lsu_io_wdata", false,-1, 63,0);
    tracep->declBus(c+325,"lsu_io_wmask", false,-1, 7,0);
    tracep->declBit(c+324,"lsu_io_wen", false,-1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+317,"clock", false,-1);
    tracep->declBit(c+318,"reset", false,-1);
    tracep->declQuad(c+319,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+1,"io_pc4", false,-1, 63,0);
    tracep->declBit(c+323,"io_is_j", false,-1);
    tracep->declBit(c+342,"io_is_b", false,-1);
    tracep->declBit(c+328,"io_is_e", false,-1);
    tracep->declQuad(c+352,"io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+329,"io_b_branch", false,-1, 63,0);
    tracep->declQuad(c+354,"io_e_branch", false,-1, 63,0);
    tracep->declQuad(c+78,"init", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+317,"clock", false,-1);
    tracep->declBit(c+318,"reset", false,-1);
    tracep->declBus(c+322,"io_ctrl_alu_op", false,-1, 7,0);
    tracep->declBit(c+327,"io_ctrl_csr_wen", false,-1);
    tracep->declQuad(c+331,"io_in1", false,-1, 63,0);
    tracep->declQuad(c+333,"io_in2", false,-1, 63,0);
    tracep->declQuad(c+336,"io_imm", false,-1, 63,0);
    tracep->declQuad(c+329,"io_out", false,-1, 63,0);
    tracep->declQuad(c+319,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+352,"io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+354,"io_e_branch", false,-1, 63,0);
    tracep->declQuad(c+356,"io_is_b", false,-1, 63,0);
    tracep->declBus(c+3,"io_csr_index", false,-1, 2,0);
    tracep->declQuad(c+350,"io_reg17", false,-1, 63,0);
    tracep->declQuad(c+4,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+6,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+8,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+10,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+12,"io_csr_regs_4", false,-1, 63,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+80+i*2,"CSR", true,(i+0), 63,0);
    }
    tracep->declBit(c+386,"CSR_result_MPORT_en", false,-1);
    tracep->declBus(c+3,"CSR_result_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+90,"CSR_result_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_result_MPORT_1_en", false,-1);
    tracep->declBus(c+3,"CSR_result_MPORT_1_addr", false,-1, 2,0);
    tracep->declQuad(c+90,"CSR_result_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_result_MPORT_2_en", false,-1);
    tracep->declBus(c+3,"CSR_result_MPORT_2_addr", false,-1, 2,0);
    tracep->declQuad(c+90,"CSR_result_MPORT_2_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_csr_wdata_MPORT_en", false,-1);
    tracep->declBus(c+3,"CSR_csr_wdata_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+90,"CSR_csr_wdata_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_csr_wdata_MPORT_1_en", false,-1);
    tracep->declBus(c+3,"CSR_csr_wdata_MPORT_1_addr", false,-1, 2,0);
    tracep->declQuad(c+90,"CSR_csr_wdata_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_MPORT_1_en", false,-1);
    tracep->declBus(c+387,"CSR_MPORT_1_addr", false,-1, 2,0);
    tracep->declQuad(c+6,"CSR_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_MPORT_3_en", false,-1);
    tracep->declBus(c+388,"CSR_MPORT_3_addr", false,-1, 2,0);
    tracep->declQuad(c+8,"CSR_MPORT_3_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_MPORT_5_en", false,-1);
    tracep->declBus(c+3,"CSR_MPORT_5_addr", false,-1, 2,0);
    tracep->declQuad(c+90,"CSR_MPORT_5_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_io_e_branch_MPORT_en", false,-1);
    tracep->declBus(c+389,"CSR_io_e_branch_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+12,"CSR_io_e_branch_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_io_e_branch_MPORT_1_en", false,-1);
    tracep->declBus(c+388,"CSR_io_e_branch_MPORT_1_addr", false,-1, 2,0);
    tracep->declQuad(c+8,"CSR_io_e_branch_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_io_csr_regs_0_MPORT_en", false,-1);
    tracep->declBus(c+390,"CSR_io_csr_regs_0_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+4,"CSR_io_csr_regs_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_io_csr_regs_1_MPORT_en", false,-1);
    tracep->declBus(c+387,"CSR_io_csr_regs_1_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+6,"CSR_io_csr_regs_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_io_csr_regs_2_MPORT_en", false,-1);
    tracep->declBus(c+388,"CSR_io_csr_regs_2_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+8,"CSR_io_csr_regs_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_io_csr_regs_3_MPORT_en", false,-1);
    tracep->declBus(c+391,"CSR_io_csr_regs_3_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+10,"CSR_io_csr_regs_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"CSR_io_csr_regs_4_MPORT_en", false,-1);
    tracep->declBus(c+389,"CSR_io_csr_regs_4_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+12,"CSR_io_csr_regs_4_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+361,"CSR_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+387,"CSR_MPORT_addr", false,-1, 2,0);
    tracep->declBit(c+386,"CSR_MPORT_mask", false,-1);
    tracep->declBit(c+386,"CSR_MPORT_en", false,-1);
    tracep->declQuad(c+363,"CSR_MPORT_2_data", false,-1, 63,0);
    tracep->declBus(c+388,"CSR_MPORT_2_addr", false,-1, 2,0);
    tracep->declBit(c+386,"CSR_MPORT_2_mask", false,-1);
    tracep->declBit(c+386,"CSR_MPORT_2_en", false,-1);
    tracep->declQuad(c+365,"CSR_MPORT_4_data", false,-1, 63,0);
    tracep->declBus(c+3,"CSR_MPORT_4_addr", false,-1, 2,0);
    tracep->declBit(c+386,"CSR_MPORT_4_mask", false,-1);
    tracep->declBit(c+386,"CSR_MPORT_4_en", false,-1);
    tracep->declBit(c+317,"div_clock", false,-1);
    tracep->declBit(c+318,"div_reset", false,-1);
    tracep->declQuad(c+331,"div_io_dividend", false,-1, 63,0);
    tracep->declQuad(c+333,"div_io_divisor", false,-1, 63,0);
    tracep->declBit(c+367,"div_io_div_valid", false,-1);
    tracep->declBit(c+92,"div_io_div_signed", false,-1);
    tracep->declQuad(c+93,"div_io_quotient", false,-1, 63,0);
    tracep->declQuad(c+95,"div_io_remainder", false,-1, 63,0);
    tracep->declBit(c+317,"div_1_clock", false,-1);
    tracep->declBit(c+318,"div_1_reset", false,-1);
    tracep->declBus(c+97,"div_1_io_dividend", false,-1, 31,0);
    tracep->declBus(c+98,"div_1_io_divisor", false,-1, 31,0);
    tracep->declBit(c+368,"div_1_io_div_valid", false,-1);
    tracep->declBit(c+99,"div_1_io_div_signed", false,-1);
    tracep->declBus(c+100,"div_1_io_quotient", false,-1, 31,0);
    tracep->declBus(c+101,"div_1_io_remainder", false,-1, 31,0);
    tracep->declBit(c+369,"is_div_64", false,-1);
    tracep->declBit(c+370,"is_div_32", false,-1);
    tracep->declBit(c+371,"is_rem_64", false,-1);
    tracep->declBit(c+372,"is_rem_32", false,-1);
    tracep->declQuad(c+373,"csr_wdata", false,-1, 63,0);
    tracep->pushNamePrefix("div ");
    tracep->declBit(c+317,"clock", false,-1);
    tracep->declBit(c+318,"reset", false,-1);
    tracep->declQuad(c+331,"io_dividend", false,-1, 63,0);
    tracep->declQuad(c+333,"io_divisor", false,-1, 63,0);
    tracep->declBit(c+367,"io_div_valid", false,-1);
    tracep->declBit(c+92,"io_div_signed", false,-1);
    tracep->declQuad(c+93,"io_quotient", false,-1, 63,0);
    tracep->declQuad(c+95,"io_remainder", false,-1, 63,0);
    tracep->declBit(c+102,"start", false,-1);
    tracep->declBit(c+103,"end_", false,-1);
    tracep->declQuad(c+375,"dividend", false,-1, 63,0);
    tracep->declBit(c+104,"quotient_sign", false,-1);
    tracep->declArray(c+105,"A", false,-1, 127,0);
    tracep->declQuad(c+109,"B", false,-1, 63,0);
    tracep->declQuad(c+111,"S", false,-1, 63,0);
    tracep->declQuad(c+113,"R", false,-1, 63,0);
    tracep->declBus(c+115,"cnt", false,-1, 7,0);
    tracep->declBit(c+116,"S_tmp_62", false,-1);
    tracep->declBit(c+117,"S_tmp_63", false,-1);
    tracep->declBit(c+118,"S_tmp_60", false,-1);
    tracep->declBit(c+119,"S_tmp_61", false,-1);
    tracep->declBit(c+120,"S_tmp_58", false,-1);
    tracep->declBit(c+121,"S_tmp_59", false,-1);
    tracep->declBit(c+122,"S_tmp_56", false,-1);
    tracep->declBit(c+123,"S_tmp_57", false,-1);
    tracep->declBus(c+124,"S_lo_lo_lo", false,-1, 7,0);
    tracep->declBit(c+125,"S_tmp_54", false,-1);
    tracep->declBit(c+126,"S_tmp_55", false,-1);
    tracep->declBit(c+127,"S_tmp_52", false,-1);
    tracep->declBit(c+128,"S_tmp_53", false,-1);
    tracep->declBit(c+129,"S_tmp_50", false,-1);
    tracep->declBit(c+130,"S_tmp_51", false,-1);
    tracep->declBit(c+131,"S_tmp_48", false,-1);
    tracep->declBit(c+132,"S_tmp_49", false,-1);
    tracep->declBus(c+133,"S_lo_lo", false,-1, 15,0);
    tracep->declBit(c+134,"S_tmp_46", false,-1);
    tracep->declBit(c+135,"S_tmp_47", false,-1);
    tracep->declBit(c+136,"S_tmp_44", false,-1);
    tracep->declBit(c+137,"S_tmp_45", false,-1);
    tracep->declBit(c+138,"S_tmp_42", false,-1);
    tracep->declBit(c+139,"S_tmp_43", false,-1);
    tracep->declBit(c+140,"S_tmp_40", false,-1);
    tracep->declBit(c+141,"S_tmp_41", false,-1);
    tracep->declBus(c+142,"S_lo_hi_lo", false,-1, 7,0);
    tracep->declBit(c+143,"S_tmp_38", false,-1);
    tracep->declBit(c+144,"S_tmp_39", false,-1);
    tracep->declBit(c+145,"S_tmp_36", false,-1);
    tracep->declBit(c+146,"S_tmp_37", false,-1);
    tracep->declBit(c+147,"S_tmp_34", false,-1);
    tracep->declBit(c+148,"S_tmp_35", false,-1);
    tracep->declBit(c+149,"S_tmp_32", false,-1);
    tracep->declBit(c+150,"S_tmp_33", false,-1);
    tracep->declBus(c+151,"S_lo", false,-1, 31,0);
    tracep->declBit(c+152,"S_tmp_30", false,-1);
    tracep->declBit(c+153,"S_tmp_31", false,-1);
    tracep->declBit(c+154,"S_tmp_28", false,-1);
    tracep->declBit(c+155,"S_tmp_29", false,-1);
    tracep->declBit(c+156,"S_tmp_26", false,-1);
    tracep->declBit(c+157,"S_tmp_27", false,-1);
    tracep->declBit(c+158,"S_tmp_24", false,-1);
    tracep->declBit(c+159,"S_tmp_25", false,-1);
    tracep->declBus(c+160,"S_hi_lo_lo", false,-1, 7,0);
    tracep->declBit(c+161,"S_tmp_22", false,-1);
    tracep->declBit(c+162,"S_tmp_23", false,-1);
    tracep->declBit(c+163,"S_tmp_20", false,-1);
    tracep->declBit(c+164,"S_tmp_21", false,-1);
    tracep->declBit(c+165,"S_tmp_18", false,-1);
    tracep->declBit(c+166,"S_tmp_19", false,-1);
    tracep->declBit(c+167,"S_tmp_16", false,-1);
    tracep->declBit(c+168,"S_tmp_17", false,-1);
    tracep->declBus(c+169,"S_hi_lo", false,-1, 15,0);
    tracep->declBit(c+170,"S_tmp_14", false,-1);
    tracep->declBit(c+171,"S_tmp_15", false,-1);
    tracep->declBit(c+172,"S_tmp_12", false,-1);
    tracep->declBit(c+173,"S_tmp_13", false,-1);
    tracep->declBit(c+174,"S_tmp_10", false,-1);
    tracep->declBit(c+175,"S_tmp_11", false,-1);
    tracep->declBit(c+176,"S_tmp_8", false,-1);
    tracep->declBit(c+177,"S_tmp_9", false,-1);
    tracep->declBus(c+178,"S_hi_hi_lo", false,-1, 7,0);
    tracep->declBit(c+179,"S_tmp_6", false,-1);
    tracep->declBit(c+180,"S_tmp_7", false,-1);
    tracep->declBit(c+181,"S_tmp_4", false,-1);
    tracep->declBit(c+182,"S_tmp_5", false,-1);
    tracep->declBit(c+183,"S_tmp_2", false,-1);
    tracep->declBit(c+184,"S_tmp_3", false,-1);
    tracep->declBit(c+185,"S_tmp_0", false,-1);
    tracep->declBit(c+186,"S_tmp_1", false,-1);
    tracep->declBus(c+187,"S_hi", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div_1 ");
    tracep->declBit(c+317,"clock", false,-1);
    tracep->declBit(c+318,"reset", false,-1);
    tracep->declBus(c+97,"io_dividend", false,-1, 31,0);
    tracep->declBus(c+98,"io_divisor", false,-1, 31,0);
    tracep->declBit(c+368,"io_div_valid", false,-1);
    tracep->declBit(c+99,"io_div_signed", false,-1);
    tracep->declBus(c+100,"io_quotient", false,-1, 31,0);
    tracep->declBus(c+101,"io_remainder", false,-1, 31,0);
    tracep->declBit(c+188,"start", false,-1);
    tracep->declBit(c+189,"end_", false,-1);
    tracep->declBus(c+190,"dividend", false,-1, 31,0);
    tracep->declBit(c+191,"quotient_sign", false,-1);
    tracep->declQuad(c+192,"A", false,-1, 63,0);
    tracep->declBus(c+194,"B", false,-1, 31,0);
    tracep->declBus(c+195,"S", false,-1, 31,0);
    tracep->declBus(c+196,"R", false,-1, 31,0);
    tracep->declBus(c+197,"cnt", false,-1, 7,0);
    tracep->declBit(c+198,"S_tmp_30", false,-1);
    tracep->declBit(c+199,"S_tmp_31", false,-1);
    tracep->declBit(c+200,"S_tmp_28", false,-1);
    tracep->declBit(c+201,"S_tmp_29", false,-1);
    tracep->declBit(c+202,"S_tmp_26", false,-1);
    tracep->declBit(c+203,"S_tmp_27", false,-1);
    tracep->declBit(c+204,"S_tmp_24", false,-1);
    tracep->declBit(c+205,"S_tmp_25", false,-1);
    tracep->declBus(c+206,"S_lo_lo", false,-1, 7,0);
    tracep->declBit(c+207,"S_tmp_22", false,-1);
    tracep->declBit(c+208,"S_tmp_23", false,-1);
    tracep->declBit(c+209,"S_tmp_20", false,-1);
    tracep->declBit(c+210,"S_tmp_21", false,-1);
    tracep->declBit(c+211,"S_tmp_18", false,-1);
    tracep->declBit(c+212,"S_tmp_19", false,-1);
    tracep->declBit(c+213,"S_tmp_16", false,-1);
    tracep->declBit(c+214,"S_tmp_17", false,-1);
    tracep->declBus(c+215,"S_lo", false,-1, 15,0);
    tracep->declBit(c+216,"S_tmp_14", false,-1);
    tracep->declBit(c+217,"S_tmp_15", false,-1);
    tracep->declBit(c+218,"S_tmp_12", false,-1);
    tracep->declBit(c+219,"S_tmp_13", false,-1);
    tracep->declBit(c+220,"S_tmp_10", false,-1);
    tracep->declBit(c+221,"S_tmp_11", false,-1);
    tracep->declBit(c+222,"S_tmp_8", false,-1);
    tracep->declBit(c+223,"S_tmp_9", false,-1);
    tracep->declBus(c+224,"S_hi_lo", false,-1, 7,0);
    tracep->declBit(c+225,"S_tmp_6", false,-1);
    tracep->declBit(c+226,"S_tmp_7", false,-1);
    tracep->declBit(c+227,"S_tmp_4", false,-1);
    tracep->declBit(c+228,"S_tmp_5", false,-1);
    tracep->declBit(c+229,"S_tmp_2", false,-1);
    tracep->declBit(c+230,"S_tmp_3", false,-1);
    tracep->declBit(c+231,"S_tmp_0", false,-1);
    tracep->declBit(c+232,"S_tmp_1", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+341,"io_inst", false,-1, 31,0);
    tracep->declBit(c+321,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+322,"io_ctrl_OP", false,-1, 7,0);
    tracep->declBit(c+323,"io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+324,"io_ctrl_MemWen", false,-1);
    tracep->declBus(c+325,"io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+326,"io_ctrl_MemLoad", false,-1);
    tracep->declBit(c+327,"io_ctrl_csr_wen", false,-1);
    tracep->declBit(c+328,"io_ctrl_E_JUMP", false,-1);
    tracep->declBus(c+14,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+15,"io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+335,"io_reg_rd", false,-1, 4,0);
    tracep->declBus(c+3,"io_reg_csr_index", false,-1, 2,0);
    tracep->declQuad(c+336,"io_imm", false,-1, 63,0);
    tracep->declBit(c+358,"io_eval", false,-1);
    tracep->declBus(c+233,"ImmType", false,-1, 2,0);
    tracep->declQuad(c+234,"I", false,-1, 63,0);
    tracep->declArray(c+236,"U", false,-1, 75,0);
    tracep->declArray(c+377,"S", false,-1, 68,0);
    tracep->declArray(c+239,"J", false,-1, 83,0);
    tracep->declArray(c+242,"B", false,-1, 75,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi ");
    tracep->declBus(c+359,"flag", false,-1, 31,0);
    tracep->declQuad(c+16,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+18,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+20,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+22,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+24,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+26,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+28,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+30,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+32,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+34,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+36,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+38,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+40,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+42,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+44,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+46,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+48,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+350,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+50,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+52,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+54,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+56,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+58,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+60,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+62,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+64,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+66,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+68,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+70,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+72,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+74,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+76,"rf_31", false,-1, 63,0);
    tracep->declQuad(c+4,"csr_0", false,-1, 63,0);
    tracep->declQuad(c+6,"csr_1", false,-1, 63,0);
    tracep->declQuad(c+8,"csr_2", false,-1, 63,0);
    tracep->declQuad(c+10,"csr_3", false,-1, 63,0);
    tracep->declQuad(c+12,"csr_4", false,-1, 63,0);
    tracep->declQuad(c+380,"inst", false,-1, 63,0);
    tracep->declQuad(c+319,"pc", false,-1, 63,0);
    tracep->declBit(c+358,"eval", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declQuad(c+319,"io_pc", false,-1, 63,0);
    tracep->declBus(c+341,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+319,"inst_mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+392,"inst_mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+392,"inst_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+394,"inst_mem_wmask", false,-1, 7,0);
    tracep->declQuad(c+245,"inst_mem_rdata", false,-1, 63,0);
    tracep->declBit(c+395,"inst_mem_wen", false,-1);
    tracep->pushNamePrefix("inst_mem ");
    tracep->declQuad(c+319,"raddr", false,-1, 63,0);
    tracep->declQuad(c+392,"waddr", false,-1, 63,0);
    tracep->declQuad(c+392,"wdata", false,-1, 63,0);
    tracep->declBus(c+394,"wmask", false,-1, 7,0);
    tracep->declBit(c+395,"wen", false,-1);
    tracep->declQuad(c+245,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declQuad(c+329,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+344,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+329,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+333,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+325,"io_wmask", false,-1, 7,0);
    tracep->declBit(c+324,"io_wen", false,-1);
    tracep->declQuad(c+329,"data_mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+329,"data_mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+333,"data_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+325,"data_mem_wmask", false,-1, 7,0);
    tracep->declQuad(c+247,"data_mem_rdata", false,-1, 63,0);
    tracep->declBit(c+324,"data_mem_wen", false,-1);
    tracep->pushNamePrefix("data_mem ");
    tracep->declQuad(c+329,"raddr", false,-1, 63,0);
    tracep->declQuad(c+329,"waddr", false,-1, 63,0);
    tracep->declQuad(c+333,"wdata", false,-1, 63,0);
    tracep->declBus(c+325,"wmask", false,-1, 7,0);
    tracep->declBit(c+324,"wen", false,-1);
    tracep->declQuad(c+247,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("registers ");
    tracep->declBit(c+317,"clock", false,-1);
    tracep->declBit(c+321,"io_wen", false,-1);
    tracep->declQuad(c+346,"io_wdata", false,-1, 63,0);
    tracep->declQuad(c+331,"io_rdata1", false,-1, 63,0);
    tracep->declQuad(c+333,"io_rdata2", false,-1, 63,0);
    tracep->declBus(c+14,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+15,"io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+335,"io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+16,"io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+18,"io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+20,"io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+22,"io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+24,"io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+26,"io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+28,"io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+30,"io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+32,"io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+34,"io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+36,"io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+38,"io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+40,"io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+42,"io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+44,"io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+46,"io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+48,"io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+350,"io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+50,"io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+52,"io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+54,"io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+56,"io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+58,"io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+60,"io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+62,"io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+64,"io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+66,"io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+68,"io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+70,"io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+72,"io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+74,"io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+76,"io_regs_31", false,-1, 63,0);
    tracep->declQuad(c+350,"io_reg17", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+249+i*2,"registers", true,(i+0), 63,0);
    }
    tracep->declBit(c+386,"registers_io_rdata1_MPORT_en", false,-1);
    tracep->declBus(c+14,"registers_io_rdata1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+313,"registers_io_rdata1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_rdata2_MPORT_en", false,-1);
    tracep->declBus(c+15,"registers_io_rdata2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+315,"registers_io_rdata2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_reg17_MPORT_en", false,-1);
    tracep->declBus(c+396,"registers_io_reg17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+350,"registers_io_reg17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_MPORT_1_en", false,-1);
    tracep->declBus(c+335,"registers_MPORT_1_addr", false,-1, 4,0);
    tracep->declQuad(c+382,"registers_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_0_MPORT_en", false,-1);
    tracep->declBus(c+397,"registers_io_regs_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+16,"registers_io_regs_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_1_MPORT_en", false,-1);
    tracep->declBus(c+398,"registers_io_regs_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+18,"registers_io_regs_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_2_MPORT_en", false,-1);
    tracep->declBus(c+399,"registers_io_regs_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+20,"registers_io_regs_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_3_MPORT_en", false,-1);
    tracep->declBus(c+400,"registers_io_regs_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+22,"registers_io_regs_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_4_MPORT_en", false,-1);
    tracep->declBus(c+401,"registers_io_regs_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+24,"registers_io_regs_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_5_MPORT_en", false,-1);
    tracep->declBus(c+402,"registers_io_regs_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+26,"registers_io_regs_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_6_MPORT_en", false,-1);
    tracep->declBus(c+403,"registers_io_regs_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+28,"registers_io_regs_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_7_MPORT_en", false,-1);
    tracep->declBus(c+404,"registers_io_regs_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+30,"registers_io_regs_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_8_MPORT_en", false,-1);
    tracep->declBus(c+405,"registers_io_regs_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+32,"registers_io_regs_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_9_MPORT_en", false,-1);
    tracep->declBus(c+406,"registers_io_regs_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+34,"registers_io_regs_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_10_MPORT_en", false,-1);
    tracep->declBus(c+407,"registers_io_regs_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+36,"registers_io_regs_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_11_MPORT_en", false,-1);
    tracep->declBus(c+408,"registers_io_regs_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+38,"registers_io_regs_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_12_MPORT_en", false,-1);
    tracep->declBus(c+409,"registers_io_regs_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+40,"registers_io_regs_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_13_MPORT_en", false,-1);
    tracep->declBus(c+410,"registers_io_regs_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+42,"registers_io_regs_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_14_MPORT_en", false,-1);
    tracep->declBus(c+411,"registers_io_regs_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+44,"registers_io_regs_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_15_MPORT_en", false,-1);
    tracep->declBus(c+412,"registers_io_regs_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+46,"registers_io_regs_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_16_MPORT_en", false,-1);
    tracep->declBus(c+413,"registers_io_regs_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+48,"registers_io_regs_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_17_MPORT_en", false,-1);
    tracep->declBus(c+396,"registers_io_regs_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+350,"registers_io_regs_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_18_MPORT_en", false,-1);
    tracep->declBus(c+414,"registers_io_regs_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+50,"registers_io_regs_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_19_MPORT_en", false,-1);
    tracep->declBus(c+415,"registers_io_regs_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+52,"registers_io_regs_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_20_MPORT_en", false,-1);
    tracep->declBus(c+416,"registers_io_regs_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+54,"registers_io_regs_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_21_MPORT_en", false,-1);
    tracep->declBus(c+417,"registers_io_regs_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+56,"registers_io_regs_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_22_MPORT_en", false,-1);
    tracep->declBus(c+418,"registers_io_regs_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+58,"registers_io_regs_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_23_MPORT_en", false,-1);
    tracep->declBus(c+419,"registers_io_regs_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+60,"registers_io_regs_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_24_MPORT_en", false,-1);
    tracep->declBus(c+420,"registers_io_regs_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+62,"registers_io_regs_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_25_MPORT_en", false,-1);
    tracep->declBus(c+421,"registers_io_regs_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+64,"registers_io_regs_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_26_MPORT_en", false,-1);
    tracep->declBus(c+422,"registers_io_regs_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+66,"registers_io_regs_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_27_MPORT_en", false,-1);
    tracep->declBus(c+423,"registers_io_regs_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+68,"registers_io_regs_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_28_MPORT_en", false,-1);
    tracep->declBus(c+424,"registers_io_regs_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+70,"registers_io_regs_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_29_MPORT_en", false,-1);
    tracep->declBus(c+425,"registers_io_regs_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+72,"registers_io_regs_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_30_MPORT_en", false,-1);
    tracep->declBus(c+426,"registers_io_regs_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+74,"registers_io_regs_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+386,"registers_io_regs_31_MPORT_en", false,-1);
    tracep->declBus(c+427,"registers_io_regs_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"registers_io_regs_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+384,"registers_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+335,"registers_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+386,"registers_MPORT_mask", false,-1);
    tracep->declBit(c+386,"registers_MPORT_en", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp_h554601a6__0;
    VlWide<3>/*95:0*/ __Vtemp_ha10d091d__0;
    VlWide<3>/*95:0*/ __Vtemp_h9ebd919b__0;
    VlWide<3>/*95:0*/ __Vtemp_h67e2dbbd__0;
    // Body
    bufp->fullQData(oldp+1,((4ULL + vlSelf->Top__DOT__PC__DOT__init)),64);
    bufp->fullCData(oldp+3,(vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_addr),3);
    bufp->fullQData(oldp+4,(vlSelf->Top__DOT__alu__DOT__CSR
                            [0U]),64);
    bufp->fullQData(oldp+6,(vlSelf->Top__DOT__alu__DOT__CSR
                            [1U]),64);
    bufp->fullQData(oldp+8,(vlSelf->Top__DOT__alu__DOT__CSR
                            [2U]),64);
    bufp->fullQData(oldp+10,(vlSelf->Top__DOT__alu__DOT__CSR
                             [3U]),64);
    bufp->fullQData(oldp+12,(vlSelf->Top__DOT__alu__DOT__CSR
                             [4U]),64);
    bufp->fullCData(oldp+14,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                               >> 0xfU)))),5);
    bufp->fullCData(oldp+15,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                               >> 0x14U)))),5);
    bufp->fullQData(oldp+16,(vlSelf->Top__DOT__registers__DOT__registers
                             [0U]),64);
    bufp->fullQData(oldp+18,(vlSelf->Top__DOT__registers__DOT__registers
                             [1U]),64);
    bufp->fullQData(oldp+20,(vlSelf->Top__DOT__registers__DOT__registers
                             [2U]),64);
    bufp->fullQData(oldp+22,(vlSelf->Top__DOT__registers__DOT__registers
                             [3U]),64);
    bufp->fullQData(oldp+24,(vlSelf->Top__DOT__registers__DOT__registers
                             [4U]),64);
    bufp->fullQData(oldp+26,(vlSelf->Top__DOT__registers__DOT__registers
                             [5U]),64);
    bufp->fullQData(oldp+28,(vlSelf->Top__DOT__registers__DOT__registers
                             [6U]),64);
    bufp->fullQData(oldp+30,(vlSelf->Top__DOT__registers__DOT__registers
                             [7U]),64);
    bufp->fullQData(oldp+32,(vlSelf->Top__DOT__registers__DOT__registers
                             [8U]),64);
    bufp->fullQData(oldp+34,(vlSelf->Top__DOT__registers__DOT__registers
                             [9U]),64);
    bufp->fullQData(oldp+36,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xaU]),64);
    bufp->fullQData(oldp+38,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xbU]),64);
    bufp->fullQData(oldp+40,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xcU]),64);
    bufp->fullQData(oldp+42,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xdU]),64);
    bufp->fullQData(oldp+44,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xeU]),64);
    bufp->fullQData(oldp+46,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xfU]),64);
    bufp->fullQData(oldp+48,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x10U]),64);
    bufp->fullQData(oldp+50,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x12U]),64);
    bufp->fullQData(oldp+52,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x13U]),64);
    bufp->fullQData(oldp+54,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x14U]),64);
    bufp->fullQData(oldp+56,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x15U]),64);
    bufp->fullQData(oldp+58,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x16U]),64);
    bufp->fullQData(oldp+60,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x17U]),64);
    bufp->fullQData(oldp+62,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x18U]),64);
    bufp->fullQData(oldp+64,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x19U]),64);
    bufp->fullQData(oldp+66,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1aU]),64);
    bufp->fullQData(oldp+68,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1bU]),64);
    bufp->fullQData(oldp+70,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1cU]),64);
    bufp->fullQData(oldp+72,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1dU]),64);
    bufp->fullQData(oldp+74,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1eU]),64);
    bufp->fullQData(oldp+76,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1fU]),64);
    bufp->fullQData(oldp+78,(vlSelf->Top__DOT__PC__DOT__init),64);
    bufp->fullQData(oldp+80,(vlSelf->Top__DOT__alu__DOT__CSR[0]),64);
    bufp->fullQData(oldp+82,(vlSelf->Top__DOT__alu__DOT__CSR[1]),64);
    bufp->fullQData(oldp+84,(vlSelf->Top__DOT__alu__DOT__CSR[2]),64);
    bufp->fullQData(oldp+86,(vlSelf->Top__DOT__alu__DOT__CSR[3]),64);
    bufp->fullQData(oldp+88,(vlSelf->Top__DOT__alu__DOT__CSR[4]),64);
    bufp->fullQData(oldp+90,(vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data),64);
    bufp->fullBit(oldp+92,(vlSelf->Top__DOT__alu__DOT__div_io_div_signed));
    bufp->fullQData(oldp+93,(vlSelf->Top__DOT__alu__DOT__div_io_quotient),64);
    bufp->fullQData(oldp+95,(vlSelf->Top__DOT__alu__DOT__div_io_remainder),64);
    bufp->fullIData(oldp+97,(vlSelf->Top__DOT__alu__DOT__div_1_io_dividend),32);
    bufp->fullIData(oldp+98,(vlSelf->Top__DOT__alu__DOT__div_1_io_divisor),32);
    bufp->fullBit(oldp+99,(vlSelf->Top__DOT__alu__DOT__div_1_io_div_signed));
    bufp->fullIData(oldp+100,(vlSelf->Top__DOT__alu__DOT__div_1_io_quotient),32);
    bufp->fullIData(oldp+101,(vlSelf->Top__DOT__alu__DOT__div_1_io_remainder),32);
    bufp->fullBit(oldp+102,(vlSelf->Top__DOT__alu__DOT__div__DOT__start));
    bufp->fullBit(oldp+103,(vlSelf->Top__DOT__alu__DOT__div__DOT__end_));
    bufp->fullBit(oldp+104,(((IData)(vlSelf->Top__DOT__alu__DOT__div_io_div_signed) 
                             & ((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_heac6e062__0) 
                                ^ ((0U != (0x1fU & (IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                            >> 0x14U)))) 
                                   & (IData)((vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data 
                                              >> 0x3fU)))))));
    bufp->fullWData(oldp+105,(vlSelf->Top__DOT__alu__DOT__div__DOT__A),128);
    bufp->fullQData(oldp+109,(vlSelf->Top__DOT__alu__DOT__div__DOT__B),64);
    bufp->fullQData(oldp+111,(vlSelf->Top__DOT__alu__DOT__div__DOT__S),64);
    bufp->fullQData(oldp+113,(vlSelf->Top__DOT__alu__DOT__div__DOT__R),64);
    bufp->fullCData(oldp+115,(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt),8);
    bufp->fullBit(oldp+116,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x3eU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+117,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x3fU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+118,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x3cU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x3dU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x3aU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x3bU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x38U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+123,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x39U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullCData(oldp+124,(((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                 & ((0x38U == (0x3fU 
                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                << 7U) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                            & ((0x39U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
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
    bufp->fullBit(oldp+125,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x36U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+126,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x37U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x34U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x35U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x32U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+130,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x33U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+131,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x30U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x31U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullSData(oldp+133,(vlSelf->Top__DOT__alu__DOT__div__DOT__S_lo_lo),16);
    bufp->fullBit(oldp+134,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x2eU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+135,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x2fU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+136,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x2cU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+137,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x2dU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+138,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x2aU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+139,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x2bU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+140,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x28U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+141,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x29U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullCData(oldp+142,(((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                 & ((0x28U == (0x3fU 
                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                << 7U) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                            & ((0x29U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
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
    bufp->fullBit(oldp+143,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x26U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+144,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x27U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+145,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x24U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+146,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x25U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+147,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x22U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+148,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x23U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+149,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x20U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+150,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x21U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullIData(oldp+151,(vlSelf->Top__DOT__alu__DOT__div__DOT__S_lo),32);
    bufp->fullBit(oldp+152,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x1eU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+153,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x1fU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+154,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x1cU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+155,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x1dU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+156,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x1aU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+157,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x1bU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+158,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x18U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+159,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x19U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullCData(oldp+160,(((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                 & ((0x18U == (0x3fU 
                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                << 7U) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                            & ((0x19U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
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
    bufp->fullBit(oldp+161,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x16U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+162,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x17U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+163,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x14U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+164,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x15U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+165,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x12U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+166,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x13U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+167,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x10U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+168,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x11U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullSData(oldp+169,(vlSelf->Top__DOT__alu__DOT__div__DOT__S_hi_lo),16);
    bufp->fullBit(oldp+170,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0xeU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+171,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0xfU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+172,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0xcU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+173,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0xdU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+174,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0xaU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+175,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0xbU == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+176,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((8U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+177,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((9U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullCData(oldp+178,(((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                 & ((8U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                << 7U) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                            & ((9U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
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
    bufp->fullBit(oldp+179,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((6U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+180,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((7U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+181,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((4U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+182,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((5U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+183,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((2U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+184,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((3U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+185,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+186,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((1U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2)))));
    bufp->fullIData(oldp+187,(vlSelf->Top__DOT__alu__DOT__div__DOT__S_hi),32);
    bufp->fullBit(oldp+188,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__start));
    bufp->fullBit(oldp+189,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__end_));
    bufp->fullIData(oldp+190,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___dividend_T_1)
                                ? ((IData)(1U) + (~ vlSelf->Top__DOT__alu__DOT__div_1_io_dividend))
                                : vlSelf->Top__DOT__alu__DOT__div_1_io_dividend)),32);
    bufp->fullBit(oldp+191,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1_io_div_signed) 
                             & ((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_hea47ad50__0) 
                                ^ ((0U != (0x1fU & (IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                            >> 0x14U)))) 
                                   & (IData)((vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data 
                                              >> 0x1fU)))))));
    bufp->fullQData(oldp+192,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__A),64);
    bufp->fullIData(oldp+194,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__B),32);
    bufp->fullIData(oldp+195,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__S),32);
    bufp->fullIData(oldp+196,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__R),32);
    bufp->fullCData(oldp+197,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt),8);
    bufp->fullBit(oldp+198,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x1eU == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+199,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x1fU == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+200,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x1cU == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+201,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x1dU == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+202,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x1aU == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+203,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x1bU == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+204,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x18U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+205,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x19U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullCData(oldp+206,(((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                 & ((0x18U == (0x1fU 
                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                << 7U) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                            & ((0x19U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
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
    bufp->fullBit(oldp+207,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x16U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+208,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x17U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+209,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x14U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+210,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x15U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+211,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x12U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+212,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x13U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+213,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x10U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+214,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0x11U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullSData(oldp+215,(vlSelf->Top__DOT__alu__DOT__div_1__DOT__S_lo),16);
    bufp->fullBit(oldp+216,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0xeU == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+217,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0xfU == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+218,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0xcU == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+219,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0xdU == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+220,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0xaU == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+221,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0xbU == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+222,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((8U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+223,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((9U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullCData(oldp+224,(((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                 & ((8U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                << 7U) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                            & ((9U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                           << 6U) | 
                                          ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
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
    bufp->fullBit(oldp+225,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((6U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+226,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((7U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+227,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((4U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+228,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((5U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+229,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((2U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+230,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((3U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+231,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((0U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullBit(oldp+232,(((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                             & ((1U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)))));
    bufp->fullCData(oldp+233,(vlSelf->Top__DOT__decoder__DOT__ImmType),3);
    bufp->fullQData(oldp+234,(vlSelf->Top__DOT__decoder__DOT__I),64);
    __Vtemp_h554601a6__0[0U] = ((IData)(((((1U & (IData)(
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
    __Vtemp_h554601a6__0[1U] = (((IData)(((((1U & (IData)(
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
    __Vtemp_h554601a6__0[2U] = ((IData)((((((1U & (IData)(
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
    bufp->fullWData(oldp+236,(__Vtemp_h554601a6__0),76);
    __Vtemp_ha10d091d__0[0U] = (((((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                                   << 0x14U) | (0x800U 
                                                & ((IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                            >> 0x14U)) 
                                                   << 0xbU))) 
                                 | (0xff000U & ((IData)(
                                                        (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
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
    bufp->fullWData(oldp+239,(__Vtemp_ha10d091d__0),84);
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
    bufp->fullWData(oldp+242,(__Vtemp_h9ebd919b__0),76);
    bufp->fullQData(oldp+245,(vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata),64);
    bufp->fullQData(oldp+247,(vlSelf->Top__DOT__lsu__DOT__data_mem_rdata),64);
    bufp->fullQData(oldp+249,(vlSelf->Top__DOT__registers__DOT__registers[0]),64);
    bufp->fullQData(oldp+251,(vlSelf->Top__DOT__registers__DOT__registers[1]),64);
    bufp->fullQData(oldp+253,(vlSelf->Top__DOT__registers__DOT__registers[2]),64);
    bufp->fullQData(oldp+255,(vlSelf->Top__DOT__registers__DOT__registers[3]),64);
    bufp->fullQData(oldp+257,(vlSelf->Top__DOT__registers__DOT__registers[4]),64);
    bufp->fullQData(oldp+259,(vlSelf->Top__DOT__registers__DOT__registers[5]),64);
    bufp->fullQData(oldp+261,(vlSelf->Top__DOT__registers__DOT__registers[6]),64);
    bufp->fullQData(oldp+263,(vlSelf->Top__DOT__registers__DOT__registers[7]),64);
    bufp->fullQData(oldp+265,(vlSelf->Top__DOT__registers__DOT__registers[8]),64);
    bufp->fullQData(oldp+267,(vlSelf->Top__DOT__registers__DOT__registers[9]),64);
    bufp->fullQData(oldp+269,(vlSelf->Top__DOT__registers__DOT__registers[10]),64);
    bufp->fullQData(oldp+271,(vlSelf->Top__DOT__registers__DOT__registers[11]),64);
    bufp->fullQData(oldp+273,(vlSelf->Top__DOT__registers__DOT__registers[12]),64);
    bufp->fullQData(oldp+275,(vlSelf->Top__DOT__registers__DOT__registers[13]),64);
    bufp->fullQData(oldp+277,(vlSelf->Top__DOT__registers__DOT__registers[14]),64);
    bufp->fullQData(oldp+279,(vlSelf->Top__DOT__registers__DOT__registers[15]),64);
    bufp->fullQData(oldp+281,(vlSelf->Top__DOT__registers__DOT__registers[16]),64);
    bufp->fullQData(oldp+283,(vlSelf->Top__DOT__registers__DOT__registers[17]),64);
    bufp->fullQData(oldp+285,(vlSelf->Top__DOT__registers__DOT__registers[18]),64);
    bufp->fullQData(oldp+287,(vlSelf->Top__DOT__registers__DOT__registers[19]),64);
    bufp->fullQData(oldp+289,(vlSelf->Top__DOT__registers__DOT__registers[20]),64);
    bufp->fullQData(oldp+291,(vlSelf->Top__DOT__registers__DOT__registers[21]),64);
    bufp->fullQData(oldp+293,(vlSelf->Top__DOT__registers__DOT__registers[22]),64);
    bufp->fullQData(oldp+295,(vlSelf->Top__DOT__registers__DOT__registers[23]),64);
    bufp->fullQData(oldp+297,(vlSelf->Top__DOT__registers__DOT__registers[24]),64);
    bufp->fullQData(oldp+299,(vlSelf->Top__DOT__registers__DOT__registers[25]),64);
    bufp->fullQData(oldp+301,(vlSelf->Top__DOT__registers__DOT__registers[26]),64);
    bufp->fullQData(oldp+303,(vlSelf->Top__DOT__registers__DOT__registers[27]),64);
    bufp->fullQData(oldp+305,(vlSelf->Top__DOT__registers__DOT__registers[28]),64);
    bufp->fullQData(oldp+307,(vlSelf->Top__DOT__registers__DOT__registers[29]),64);
    bufp->fullQData(oldp+309,(vlSelf->Top__DOT__registers__DOT__registers[30]),64);
    bufp->fullQData(oldp+311,(vlSelf->Top__DOT__registers__DOT__registers[31]),64);
    bufp->fullQData(oldp+313,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data),64);
    bufp->fullQData(oldp+315,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data),64);
    bufp->fullBit(oldp+317,(vlSelf->clock));
    bufp->fullBit(oldp+318,(vlSelf->reset));
    bufp->fullQData(oldp+319,(vlSelf->io_pc),64);
    bufp->fullBit(oldp+321,(vlSelf->io_ctrl_RegWen));
    bufp->fullCData(oldp+322,(vlSelf->io_ctrl_OP),8);
    bufp->fullBit(oldp+323,(vlSelf->io_ctrl_J_JUMP));
    bufp->fullBit(oldp+324,(vlSelf->io_ctrl_MemWen));
    bufp->fullCData(oldp+325,(vlSelf->io_ctrl_wmask),8);
    bufp->fullBit(oldp+326,(vlSelf->io_ctrl_MemLoad));
    bufp->fullBit(oldp+327,(vlSelf->io_ctrl_csr_wen));
    bufp->fullBit(oldp+328,(vlSelf->io_ctrl_E_JUMP));
    bufp->fullQData(oldp+329,(vlSelf->io_resultALU),64);
    bufp->fullQData(oldp+331,(vlSelf->io_rs1),64);
    bufp->fullQData(oldp+333,(vlSelf->io_rs2),64);
    bufp->fullCData(oldp+335,(vlSelf->io_rd),5);
    bufp->fullQData(oldp+336,(vlSelf->io_imm),64);
    bufp->fullCData(oldp+338,(vlSelf->io_op),8);
    bufp->fullBit(oldp+339,(vlSelf->io_MemWen));
    bufp->fullBit(oldp+340,(vlSelf->io_MemLoad));
    bufp->fullIData(oldp+341,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+342,(vlSelf->io_is_b));
    bufp->fullCData(oldp+343,(vlSelf->io_wmask),8);
    bufp->fullQData(oldp+344,(vlSelf->io_rdata),64);
    bufp->fullQData(oldp+346,(vlSelf->io_fmemwdata),64);
    bufp->fullBit(oldp+348,(vlSelf->io_is_e));
    bufp->fullBit(oldp+349,(vlSelf->io_is_csr));
    bufp->fullQData(oldp+350,(vlSelf->io_reg17),64);
    bufp->fullQData(oldp+352,(((0x1bU == (IData)(vlSelf->io_ctrl_OP))
                                ? (0xfffffffffffffffeULL 
                                   & vlSelf->Top__DOT__alu__DOT___result_T_86)
                                : ((0x3aU == (IData)(vlSelf->io_ctrl_OP))
                                    ? vlSelf->Top__DOT__alu__DOT___result_T_163
                                    : 0ULL))),64);
    bufp->fullQData(oldp+354,(((0x40U == (IData)(vlSelf->io_ctrl_OP))
                                ? (4ULL + vlSelf->Top__DOT__alu__DOT__CSR
                                   [2U]) : ((0x3fU 
                                             == (IData)(vlSelf->io_ctrl_OP))
                                             ? vlSelf->Top__DOT__alu__DOT__CSR
                                            [4U] : 0ULL))),64);
    bufp->fullQData(oldp+356,((QData)((IData)(vlSelf->io_is_b))),64);
    bufp->fullBit(oldp+358,((0x3fU == (IData)(vlSelf->io_ctrl_OP))));
    bufp->fullIData(oldp+359,(((0x3bU == (IData)(vlSelf->io_ctrl_OP))
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+360,((0x3fU == (IData)(vlSelf->io_ctrl_OP))),32);
    bufp->fullQData(oldp+361,(((0x3fU == (IData)(vlSelf->io_ctrl_OP))
                                ? vlSelf->Top__DOT__registers__DOT__registers
                               [0x11U] : vlSelf->Top__DOT__alu__DOT__CSR
                               [1U])),64);
    bufp->fullQData(oldp+363,(((0x3fU == (IData)(vlSelf->io_ctrl_OP))
                                ? vlSelf->Top__DOT__PC__DOT__init
                                : vlSelf->Top__DOT__alu__DOT__CSR
                               [2U])),64);
    bufp->fullQData(oldp+365,(((IData)(vlSelf->io_ctrl_csr_wen)
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
    bufp->fullBit(oldp+367,((((6U == (IData)(vlSelf->io_ctrl_OP)) 
                              | (7U == (IData)(vlSelf->io_ctrl_OP))) 
                             | ((0x15U == (IData)(vlSelf->io_ctrl_OP)) 
                                | (0x16U == (IData)(vlSelf->io_ctrl_OP))))));
    bufp->fullBit(oldp+368,((((8U == (IData)(vlSelf->io_ctrl_OP)) 
                              | (9U == (IData)(vlSelf->io_ctrl_OP))) 
                             | ((0x17U == (IData)(vlSelf->io_ctrl_OP)) 
                                | (0x18U == (IData)(vlSelf->io_ctrl_OP))))));
    bufp->fullBit(oldp+369,(((6U == (IData)(vlSelf->io_ctrl_OP)) 
                             | (7U == (IData)(vlSelf->io_ctrl_OP)))));
    bufp->fullBit(oldp+370,(((8U == (IData)(vlSelf->io_ctrl_OP)) 
                             | (9U == (IData)(vlSelf->io_ctrl_OP)))));
    bufp->fullBit(oldp+371,(((0x15U == (IData)(vlSelf->io_ctrl_OP)) 
                             | (0x16U == (IData)(vlSelf->io_ctrl_OP)))));
    bufp->fullBit(oldp+372,(((0x17U == (IData)(vlSelf->io_ctrl_OP)) 
                             | (0x18U == (IData)(vlSelf->io_ctrl_OP)))));
    bufp->fullQData(oldp+373,(((0x3eU == (IData)(vlSelf->io_ctrl_OP))
                                ? (vlSelf->Top__DOT__alu__DOT__div__DOT___dividend_T_3 
                                   & vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data)
                                : ((0x3dU == (IData)(vlSelf->io_ctrl_OP))
                                    ? (vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data 
                                       | vlSelf->io_rs1)
                                    : ((0x3cU == (IData)(vlSelf->io_ctrl_OP))
                                        ? vlSelf->io_rs1
                                        : 0ULL)))),64);
    bufp->fullQData(oldp+375,(((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___dividend_T_1)
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
    bufp->fullWData(oldp+377,(__Vtemp_h67e2dbbd__0),69);
    bufp->fullQData(oldp+380,((QData)((IData)(vlSelf->io_inst))),64);
    bufp->fullQData(oldp+382,(vlSelf->Top__DOT__registers__DOT__registers
                              [vlSelf->io_rd]),64);
    bufp->fullQData(oldp+384,((((IData)(vlSelf->io_ctrl_RegWen) 
                                & (0U != (IData)(vlSelf->io_rd)))
                                ? vlSelf->io_fmemwdata
                                : vlSelf->Top__DOT__registers__DOT__registers
                               [vlSelf->io_rd])),64);
    bufp->fullBit(oldp+386,(1U));
    bufp->fullCData(oldp+387,(1U),3);
    bufp->fullCData(oldp+388,(2U),3);
    bufp->fullCData(oldp+389,(4U),3);
    bufp->fullCData(oldp+390,(0U),3);
    bufp->fullCData(oldp+391,(3U),3);
    bufp->fullQData(oldp+392,(0ULL),64);
    bufp->fullCData(oldp+394,(0U),8);
    bufp->fullBit(oldp+395,(0U));
    bufp->fullCData(oldp+396,(0x11U),5);
    bufp->fullCData(oldp+397,(0U),5);
    bufp->fullCData(oldp+398,(1U),5);
    bufp->fullCData(oldp+399,(2U),5);
    bufp->fullCData(oldp+400,(3U),5);
    bufp->fullCData(oldp+401,(4U),5);
    bufp->fullCData(oldp+402,(5U),5);
    bufp->fullCData(oldp+403,(6U),5);
    bufp->fullCData(oldp+404,(7U),5);
    bufp->fullCData(oldp+405,(8U),5);
    bufp->fullCData(oldp+406,(9U),5);
    bufp->fullCData(oldp+407,(0xaU),5);
    bufp->fullCData(oldp+408,(0xbU),5);
    bufp->fullCData(oldp+409,(0xcU),5);
    bufp->fullCData(oldp+410,(0xdU),5);
    bufp->fullCData(oldp+411,(0xeU),5);
    bufp->fullCData(oldp+412,(0xfU),5);
    bufp->fullCData(oldp+413,(0x10U),5);
    bufp->fullCData(oldp+414,(0x12U),5);
    bufp->fullCData(oldp+415,(0x13U),5);
    bufp->fullCData(oldp+416,(0x14U),5);
    bufp->fullCData(oldp+417,(0x15U),5);
    bufp->fullCData(oldp+418,(0x16U),5);
    bufp->fullCData(oldp+419,(0x17U),5);
    bufp->fullCData(oldp+420,(0x18U),5);
    bufp->fullCData(oldp+421,(0x19U),5);
    bufp->fullCData(oldp+422,(0x1aU),5);
    bufp->fullCData(oldp+423,(0x1bU),5);
    bufp->fullCData(oldp+424,(0x1cU),5);
    bufp->fullCData(oldp+425,(0x1dU),5);
    bufp->fullCData(oldp+426,(0x1eU),5);
    bufp->fullCData(oldp+427,(0x1fU),5);
}
