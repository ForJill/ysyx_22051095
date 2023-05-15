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
    tracep->declBit(c+176,"clock", false,-1);
    tracep->declBit(c+177,"reset", false,-1);
    tracep->declQuad(c+178,"io_pc", false,-1, 63,0);
    tracep->declBit(c+180,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+181,"io_ctrl_OP", false,-1, 7,0);
    tracep->declBit(c+182,"io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+183,"io_ctrl_MemWen", false,-1);
    tracep->declBus(c+184,"io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+185,"io_ctrl_MemLoad", false,-1);
    tracep->declBit(c+186,"io_ctrl_csr_wen", false,-1);
    tracep->declBit(c+187,"io_ctrl_E_JUMP", false,-1);
    tracep->declQuad(c+188,"io_resultALU", false,-1, 63,0);
    tracep->declQuad(c+190,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+192,"io_rs2", false,-1, 63,0);
    tracep->declBus(c+194,"io_rd", false,-1, 4,0);
    tracep->declQuad(c+195,"io_imm", false,-1, 63,0);
    tracep->declBus(c+197,"io_op", false,-1, 7,0);
    tracep->declBit(c+198,"io_MemWen", false,-1);
    tracep->declBit(c+199,"io_MemLoad", false,-1);
    tracep->declBus(c+200,"io_inst", false,-1, 31,0);
    tracep->declBit(c+201,"io_is_b", false,-1);
    tracep->declBus(c+202,"io_wmask", false,-1, 7,0);
    tracep->declQuad(c+203,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+205,"io_fmemwdata", false,-1, 63,0);
    tracep->declBit(c+207,"io_is_e", false,-1);
    tracep->declBit(c+208,"io_is_csr", false,-1);
    tracep->declQuad(c+209,"io_reg17", false,-1, 63,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+176,"clock", false,-1);
    tracep->declBit(c+177,"reset", false,-1);
    tracep->declQuad(c+178,"io_pc", false,-1, 63,0);
    tracep->declBit(c+180,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+181,"io_ctrl_OP", false,-1, 7,0);
    tracep->declBit(c+182,"io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+183,"io_ctrl_MemWen", false,-1);
    tracep->declBus(c+184,"io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+185,"io_ctrl_MemLoad", false,-1);
    tracep->declBit(c+186,"io_ctrl_csr_wen", false,-1);
    tracep->declBit(c+187,"io_ctrl_E_JUMP", false,-1);
    tracep->declQuad(c+188,"io_resultALU", false,-1, 63,0);
    tracep->declQuad(c+190,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+192,"io_rs2", false,-1, 63,0);
    tracep->declBus(c+194,"io_rd", false,-1, 4,0);
    tracep->declQuad(c+195,"io_imm", false,-1, 63,0);
    tracep->declBus(c+181,"io_op", false,-1, 7,0);
    tracep->declBit(c+183,"io_MemWen", false,-1);
    tracep->declBit(c+185,"io_MemLoad", false,-1);
    tracep->declBus(c+200,"io_inst", false,-1, 31,0);
    tracep->declBit(c+201,"io_is_b", false,-1);
    tracep->declBus(c+184,"io_wmask", false,-1, 7,0);
    tracep->declQuad(c+203,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+205,"io_fmemwdata", false,-1, 63,0);
    tracep->declBit(c+187,"io_is_e", false,-1);
    tracep->declBit(c+186,"io_is_csr", false,-1);
    tracep->declQuad(c+209,"io_reg17", false,-1, 63,0);
    tracep->declBit(c+176,"PC_clock", false,-1);
    tracep->declBit(c+177,"PC_reset", false,-1);
    tracep->declQuad(c+178,"PC_io_pc", false,-1, 63,0);
    tracep->declQuad(c+1,"PC_io_pc4", false,-1, 63,0);
    tracep->declBit(c+182,"PC_io_is_j", false,-1);
    tracep->declBit(c+201,"PC_io_is_b", false,-1);
    tracep->declBit(c+187,"PC_io_is_e", false,-1);
    tracep->declQuad(c+211,"PC_io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+188,"PC_io_b_branch", false,-1, 63,0);
    tracep->declQuad(c+213,"PC_io_e_branch", false,-1, 63,0);
    tracep->declBit(c+176,"alu_clock", false,-1);
    tracep->declBus(c+181,"alu_io_ctrl_alu_op", false,-1, 7,0);
    tracep->declBit(c+186,"alu_io_ctrl_csr_wen", false,-1);
    tracep->declQuad(c+190,"alu_io_in1", false,-1, 63,0);
    tracep->declQuad(c+192,"alu_io_in2", false,-1, 63,0);
    tracep->declQuad(c+195,"alu_io_imm", false,-1, 63,0);
    tracep->declQuad(c+188,"alu_io_out", false,-1, 63,0);
    tracep->declQuad(c+178,"alu_io_pc", false,-1, 63,0);
    tracep->declQuad(c+211,"alu_io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+213,"alu_io_e_branch", false,-1, 63,0);
    tracep->declQuad(c+215,"alu_io_is_b", false,-1, 63,0);
    tracep->declBus(c+3,"alu_io_csr_index", false,-1, 2,0);
    tracep->declQuad(c+209,"alu_io_reg17", false,-1, 63,0);
    tracep->declQuad(c+4,"alu_io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+6,"alu_io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+8,"alu_io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+10,"alu_io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+12,"alu_io_csr_regs_4", false,-1, 63,0);
    tracep->declBus(c+200,"decoder_io_inst", false,-1, 31,0);
    tracep->declBit(c+180,"decoder_io_ctrl_RegWen", false,-1);
    tracep->declBus(c+181,"decoder_io_ctrl_OP", false,-1, 7,0);
    tracep->declBit(c+182,"decoder_io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+183,"decoder_io_ctrl_MemWen", false,-1);
    tracep->declBus(c+184,"decoder_io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+185,"decoder_io_ctrl_MemLoad", false,-1);
    tracep->declBit(c+186,"decoder_io_ctrl_csr_wen", false,-1);
    tracep->declBit(c+187,"decoder_io_ctrl_E_JUMP", false,-1);
    tracep->declBus(c+14,"decoder_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+15,"decoder_io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+194,"decoder_io_reg_rd", false,-1, 4,0);
    tracep->declBus(c+3,"decoder_io_reg_csr_index", false,-1, 2,0);
    tracep->declQuad(c+195,"decoder_io_imm", false,-1, 63,0);
    tracep->declBit(c+217,"decoder_io_eval", false,-1);
    tracep->declBit(c+176,"registers_clock", false,-1);
    tracep->declBit(c+180,"registers_io_wen", false,-1);
    tracep->declQuad(c+205,"registers_io_wdata", false,-1, 63,0);
    tracep->declQuad(c+190,"registers_io_rdata1", false,-1, 63,0);
    tracep->declQuad(c+192,"registers_io_rdata2", false,-1, 63,0);
    tracep->declBus(c+14,"registers_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+15,"registers_io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+194,"registers_io_reg_rd", false,-1, 4,0);
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
    tracep->declQuad(c+209,"registers_io_regs_17", false,-1, 63,0);
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
    tracep->declQuad(c+209,"registers_io_reg17", false,-1, 63,0);
    tracep->declBus(c+218,"dpi_flag", false,-1, 31,0);
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
    tracep->declQuad(c+209,"dpi_rf_17", false,-1, 63,0);
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
    tracep->declBus(c+200,"dpi_inst", false,-1, 31,0);
    tracep->declQuad(c+178,"dpi_pc", false,-1, 63,0);
    tracep->declBus(c+219,"dpi_eval", false,-1, 31,0);
    tracep->declQuad(c+178,"ifu_io_pc", false,-1, 63,0);
    tracep->declBus(c+200,"ifu_io_inst", false,-1, 31,0);
    tracep->declQuad(c+188,"lsu_io_raddr", false,-1, 63,0);
    tracep->declQuad(c+203,"lsu_io_rdata", false,-1, 63,0);
    tracep->declQuad(c+188,"lsu_io_waddr", false,-1, 63,0);
    tracep->declQuad(c+192,"lsu_io_wdata", false,-1, 63,0);
    tracep->declBus(c+184,"lsu_io_wmask", false,-1, 7,0);
    tracep->declBit(c+183,"lsu_io_wen", false,-1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+176,"clock", false,-1);
    tracep->declBit(c+177,"reset", false,-1);
    tracep->declQuad(c+178,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+1,"io_pc4", false,-1, 63,0);
    tracep->declBit(c+182,"io_is_j", false,-1);
    tracep->declBit(c+201,"io_is_b", false,-1);
    tracep->declBit(c+187,"io_is_e", false,-1);
    tracep->declQuad(c+211,"io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+188,"io_b_branch", false,-1, 63,0);
    tracep->declQuad(c+213,"io_e_branch", false,-1, 63,0);
    tracep->declQuad(c+78,"init", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+176,"clock", false,-1);
    tracep->declBus(c+181,"io_ctrl_alu_op", false,-1, 7,0);
    tracep->declBit(c+186,"io_ctrl_csr_wen", false,-1);
    tracep->declQuad(c+190,"io_in1", false,-1, 63,0);
    tracep->declQuad(c+192,"io_in2", false,-1, 63,0);
    tracep->declQuad(c+195,"io_imm", false,-1, 63,0);
    tracep->declQuad(c+188,"io_out", false,-1, 63,0);
    tracep->declQuad(c+178,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+211,"io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+213,"io_e_branch", false,-1, 63,0);
    tracep->declQuad(c+215,"io_is_b", false,-1, 63,0);
    tracep->declBus(c+3,"io_csr_index", false,-1, 2,0);
    tracep->declQuad(c+209,"io_reg17", false,-1, 63,0);
    tracep->declQuad(c+4,"io_csr_regs_0", false,-1, 63,0);
    tracep->declQuad(c+6,"io_csr_regs_1", false,-1, 63,0);
    tracep->declQuad(c+8,"io_csr_regs_2", false,-1, 63,0);
    tracep->declQuad(c+10,"io_csr_regs_3", false,-1, 63,0);
    tracep->declQuad(c+12,"io_csr_regs_4", false,-1, 63,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+80+i*2,"CSR", true,(i+0), 63,0);
    }
    tracep->declBit(c+237,"CSR_result_MPORT_en", false,-1);
    tracep->declBus(c+3,"CSR_result_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+90,"CSR_result_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_result_MPORT_1_en", false,-1);
    tracep->declBus(c+3,"CSR_result_MPORT_1_addr", false,-1, 2,0);
    tracep->declQuad(c+90,"CSR_result_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_result_MPORT_2_en", false,-1);
    tracep->declBus(c+3,"CSR_result_MPORT_2_addr", false,-1, 2,0);
    tracep->declQuad(c+90,"CSR_result_MPORT_2_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_csr_wdata_MPORT_en", false,-1);
    tracep->declBus(c+3,"CSR_csr_wdata_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+90,"CSR_csr_wdata_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_csr_wdata_MPORT_1_en", false,-1);
    tracep->declBus(c+3,"CSR_csr_wdata_MPORT_1_addr", false,-1, 2,0);
    tracep->declQuad(c+90,"CSR_csr_wdata_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_MPORT_1_en", false,-1);
    tracep->declBus(c+238,"CSR_MPORT_1_addr", false,-1, 2,0);
    tracep->declQuad(c+6,"CSR_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_MPORT_3_en", false,-1);
    tracep->declBus(c+239,"CSR_MPORT_3_addr", false,-1, 2,0);
    tracep->declQuad(c+8,"CSR_MPORT_3_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_MPORT_5_en", false,-1);
    tracep->declBus(c+3,"CSR_MPORT_5_addr", false,-1, 2,0);
    tracep->declQuad(c+90,"CSR_MPORT_5_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_io_e_branch_MPORT_en", false,-1);
    tracep->declBus(c+240,"CSR_io_e_branch_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+12,"CSR_io_e_branch_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_io_e_branch_MPORT_1_en", false,-1);
    tracep->declBus(c+239,"CSR_io_e_branch_MPORT_1_addr", false,-1, 2,0);
    tracep->declQuad(c+8,"CSR_io_e_branch_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_io_csr_regs_0_MPORT_en", false,-1);
    tracep->declBus(c+241,"CSR_io_csr_regs_0_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+4,"CSR_io_csr_regs_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_io_csr_regs_1_MPORT_en", false,-1);
    tracep->declBus(c+238,"CSR_io_csr_regs_1_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+6,"CSR_io_csr_regs_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_io_csr_regs_2_MPORT_en", false,-1);
    tracep->declBus(c+239,"CSR_io_csr_regs_2_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+8,"CSR_io_csr_regs_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_io_csr_regs_3_MPORT_en", false,-1);
    tracep->declBus(c+242,"CSR_io_csr_regs_3_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+10,"CSR_io_csr_regs_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"CSR_io_csr_regs_4_MPORT_en", false,-1);
    tracep->declBus(c+240,"CSR_io_csr_regs_4_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+12,"CSR_io_csr_regs_4_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+220,"CSR_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+238,"CSR_MPORT_addr", false,-1, 2,0);
    tracep->declBit(c+237,"CSR_MPORT_mask", false,-1);
    tracep->declBit(c+237,"CSR_MPORT_en", false,-1);
    tracep->declQuad(c+222,"CSR_MPORT_2_data", false,-1, 63,0);
    tracep->declBus(c+239,"CSR_MPORT_2_addr", false,-1, 2,0);
    tracep->declBit(c+237,"CSR_MPORT_2_mask", false,-1);
    tracep->declBit(c+237,"CSR_MPORT_2_en", false,-1);
    tracep->declQuad(c+224,"CSR_MPORT_4_data", false,-1, 63,0);
    tracep->declBus(c+3,"CSR_MPORT_4_addr", false,-1, 2,0);
    tracep->declBit(c+237,"CSR_MPORT_4_mask", false,-1);
    tracep->declBit(c+237,"CSR_MPORT_4_en", false,-1);
    tracep->declQuad(c+226,"csr_wdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+200,"io_inst", false,-1, 31,0);
    tracep->declBit(c+180,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+181,"io_ctrl_OP", false,-1, 7,0);
    tracep->declBit(c+182,"io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+183,"io_ctrl_MemWen", false,-1);
    tracep->declBus(c+184,"io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+185,"io_ctrl_MemLoad", false,-1);
    tracep->declBit(c+186,"io_ctrl_csr_wen", false,-1);
    tracep->declBit(c+187,"io_ctrl_E_JUMP", false,-1);
    tracep->declBus(c+14,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+15,"io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+194,"io_reg_rd", false,-1, 4,0);
    tracep->declBus(c+3,"io_reg_csr_index", false,-1, 2,0);
    tracep->declQuad(c+195,"io_imm", false,-1, 63,0);
    tracep->declBit(c+217,"io_eval", false,-1);
    tracep->declBus(c+92,"ImmType", false,-1, 2,0);
    tracep->declQuad(c+93,"I", false,-1, 63,0);
    tracep->declArray(c+95,"U", false,-1, 75,0);
    tracep->declArray(c+228,"S", false,-1, 68,0);
    tracep->declArray(c+98,"J", false,-1, 83,0);
    tracep->declArray(c+101,"B", false,-1, 75,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi ");
    tracep->declBus(c+218,"flag", false,-1, 31,0);
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
    tracep->declQuad(c+209,"rf_17", false,-1, 63,0);
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
    tracep->declQuad(c+231,"inst", false,-1, 63,0);
    tracep->declQuad(c+178,"pc", false,-1, 63,0);
    tracep->declBit(c+217,"eval", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declQuad(c+178,"io_pc", false,-1, 63,0);
    tracep->declBus(c+200,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+178,"inst_mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+243,"inst_mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+243,"inst_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+245,"inst_mem_wmask", false,-1, 7,0);
    tracep->declQuad(c+104,"inst_mem_rdata", false,-1, 63,0);
    tracep->declBit(c+246,"inst_mem_wen", false,-1);
    tracep->pushNamePrefix("inst_mem ");
    tracep->declQuad(c+178,"raddr", false,-1, 63,0);
    tracep->declQuad(c+243,"waddr", false,-1, 63,0);
    tracep->declQuad(c+243,"wdata", false,-1, 63,0);
    tracep->declBus(c+245,"wmask", false,-1, 7,0);
    tracep->declBit(c+246,"wen", false,-1);
    tracep->declQuad(c+104,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declQuad(c+188,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+203,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+188,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+192,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+184,"io_wmask", false,-1, 7,0);
    tracep->declBit(c+183,"io_wen", false,-1);
    tracep->declQuad(c+188,"data_mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+188,"data_mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+192,"data_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+184,"data_mem_wmask", false,-1, 7,0);
    tracep->declQuad(c+106,"data_mem_rdata", false,-1, 63,0);
    tracep->declBit(c+183,"data_mem_wen", false,-1);
    tracep->pushNamePrefix("data_mem ");
    tracep->declQuad(c+188,"raddr", false,-1, 63,0);
    tracep->declQuad(c+188,"waddr", false,-1, 63,0);
    tracep->declQuad(c+192,"wdata", false,-1, 63,0);
    tracep->declBus(c+184,"wmask", false,-1, 7,0);
    tracep->declBit(c+183,"wen", false,-1);
    tracep->declQuad(c+106,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("registers ");
    tracep->declBit(c+176,"clock", false,-1);
    tracep->declBit(c+180,"io_wen", false,-1);
    tracep->declQuad(c+205,"io_wdata", false,-1, 63,0);
    tracep->declQuad(c+190,"io_rdata1", false,-1, 63,0);
    tracep->declQuad(c+192,"io_rdata2", false,-1, 63,0);
    tracep->declBus(c+14,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+15,"io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+194,"io_reg_rd", false,-1, 4,0);
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
    tracep->declQuad(c+209,"io_regs_17", false,-1, 63,0);
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
    tracep->declQuad(c+209,"io_reg17", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+108+i*2,"registers", true,(i+0), 63,0);
    }
    tracep->declBit(c+237,"registers_io_rdata1_MPORT_en", false,-1);
    tracep->declBus(c+14,"registers_io_rdata1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+172,"registers_io_rdata1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_rdata2_MPORT_en", false,-1);
    tracep->declBus(c+15,"registers_io_rdata2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+174,"registers_io_rdata2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_reg17_MPORT_en", false,-1);
    tracep->declBus(c+247,"registers_io_reg17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+209,"registers_io_reg17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_MPORT_1_en", false,-1);
    tracep->declBus(c+194,"registers_MPORT_1_addr", false,-1, 4,0);
    tracep->declQuad(c+233,"registers_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_0_MPORT_en", false,-1);
    tracep->declBus(c+248,"registers_io_regs_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+16,"registers_io_regs_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_1_MPORT_en", false,-1);
    tracep->declBus(c+249,"registers_io_regs_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+18,"registers_io_regs_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_2_MPORT_en", false,-1);
    tracep->declBus(c+250,"registers_io_regs_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+20,"registers_io_regs_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_3_MPORT_en", false,-1);
    tracep->declBus(c+251,"registers_io_regs_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+22,"registers_io_regs_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_4_MPORT_en", false,-1);
    tracep->declBus(c+252,"registers_io_regs_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+24,"registers_io_regs_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_5_MPORT_en", false,-1);
    tracep->declBus(c+253,"registers_io_regs_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+26,"registers_io_regs_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_6_MPORT_en", false,-1);
    tracep->declBus(c+254,"registers_io_regs_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+28,"registers_io_regs_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_7_MPORT_en", false,-1);
    tracep->declBus(c+255,"registers_io_regs_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+30,"registers_io_regs_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_8_MPORT_en", false,-1);
    tracep->declBus(c+256,"registers_io_regs_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+32,"registers_io_regs_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_9_MPORT_en", false,-1);
    tracep->declBus(c+257,"registers_io_regs_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+34,"registers_io_regs_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_10_MPORT_en", false,-1);
    tracep->declBus(c+258,"registers_io_regs_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+36,"registers_io_regs_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_11_MPORT_en", false,-1);
    tracep->declBus(c+259,"registers_io_regs_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+38,"registers_io_regs_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_12_MPORT_en", false,-1);
    tracep->declBus(c+260,"registers_io_regs_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+40,"registers_io_regs_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_13_MPORT_en", false,-1);
    tracep->declBus(c+261,"registers_io_regs_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+42,"registers_io_regs_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_14_MPORT_en", false,-1);
    tracep->declBus(c+262,"registers_io_regs_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+44,"registers_io_regs_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_15_MPORT_en", false,-1);
    tracep->declBus(c+263,"registers_io_regs_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+46,"registers_io_regs_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_16_MPORT_en", false,-1);
    tracep->declBus(c+264,"registers_io_regs_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+48,"registers_io_regs_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_17_MPORT_en", false,-1);
    tracep->declBus(c+247,"registers_io_regs_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+209,"registers_io_regs_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_18_MPORT_en", false,-1);
    tracep->declBus(c+265,"registers_io_regs_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+50,"registers_io_regs_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_19_MPORT_en", false,-1);
    tracep->declBus(c+266,"registers_io_regs_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+52,"registers_io_regs_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_20_MPORT_en", false,-1);
    tracep->declBus(c+267,"registers_io_regs_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+54,"registers_io_regs_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_21_MPORT_en", false,-1);
    tracep->declBus(c+268,"registers_io_regs_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+56,"registers_io_regs_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_22_MPORT_en", false,-1);
    tracep->declBus(c+269,"registers_io_regs_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+58,"registers_io_regs_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_23_MPORT_en", false,-1);
    tracep->declBus(c+270,"registers_io_regs_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+60,"registers_io_regs_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_24_MPORT_en", false,-1);
    tracep->declBus(c+271,"registers_io_regs_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+62,"registers_io_regs_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_25_MPORT_en", false,-1);
    tracep->declBus(c+272,"registers_io_regs_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+64,"registers_io_regs_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_26_MPORT_en", false,-1);
    tracep->declBus(c+273,"registers_io_regs_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+66,"registers_io_regs_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_27_MPORT_en", false,-1);
    tracep->declBus(c+274,"registers_io_regs_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+68,"registers_io_regs_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_28_MPORT_en", false,-1);
    tracep->declBus(c+275,"registers_io_regs_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+70,"registers_io_regs_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_29_MPORT_en", false,-1);
    tracep->declBus(c+276,"registers_io_regs_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+72,"registers_io_regs_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_30_MPORT_en", false,-1);
    tracep->declBus(c+277,"registers_io_regs_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+74,"registers_io_regs_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+237,"registers_io_regs_31_MPORT_en", false,-1);
    tracep->declBus(c+278,"registers_io_regs_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"registers_io_regs_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+235,"registers_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+194,"registers_MPORT_addr", false,-1, 4,0);
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
    bufp->fullCData(oldp+92,(vlSelf->Top__DOT__decoder__DOT__ImmType),3);
    bufp->fullQData(oldp+93,(vlSelf->Top__DOT__decoder__DOT__I),64);
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
    bufp->fullWData(oldp+95,(__Vtemp_h554601a6__0),76);
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
    bufp->fullWData(oldp+98,(__Vtemp_ha10d091d__0),84);
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
    bufp->fullWData(oldp+101,(__Vtemp_h9ebd919b__0),76);
    bufp->fullQData(oldp+104,(vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata),64);
    bufp->fullQData(oldp+106,(vlSelf->Top__DOT__lsu__DOT__data_mem_rdata),64);
    bufp->fullQData(oldp+108,(vlSelf->Top__DOT__registers__DOT__registers[0]),64);
    bufp->fullQData(oldp+110,(vlSelf->Top__DOT__registers__DOT__registers[1]),64);
    bufp->fullQData(oldp+112,(vlSelf->Top__DOT__registers__DOT__registers[2]),64);
    bufp->fullQData(oldp+114,(vlSelf->Top__DOT__registers__DOT__registers[3]),64);
    bufp->fullQData(oldp+116,(vlSelf->Top__DOT__registers__DOT__registers[4]),64);
    bufp->fullQData(oldp+118,(vlSelf->Top__DOT__registers__DOT__registers[5]),64);
    bufp->fullQData(oldp+120,(vlSelf->Top__DOT__registers__DOT__registers[6]),64);
    bufp->fullQData(oldp+122,(vlSelf->Top__DOT__registers__DOT__registers[7]),64);
    bufp->fullQData(oldp+124,(vlSelf->Top__DOT__registers__DOT__registers[8]),64);
    bufp->fullQData(oldp+126,(vlSelf->Top__DOT__registers__DOT__registers[9]),64);
    bufp->fullQData(oldp+128,(vlSelf->Top__DOT__registers__DOT__registers[10]),64);
    bufp->fullQData(oldp+130,(vlSelf->Top__DOT__registers__DOT__registers[11]),64);
    bufp->fullQData(oldp+132,(vlSelf->Top__DOT__registers__DOT__registers[12]),64);
    bufp->fullQData(oldp+134,(vlSelf->Top__DOT__registers__DOT__registers[13]),64);
    bufp->fullQData(oldp+136,(vlSelf->Top__DOT__registers__DOT__registers[14]),64);
    bufp->fullQData(oldp+138,(vlSelf->Top__DOT__registers__DOT__registers[15]),64);
    bufp->fullQData(oldp+140,(vlSelf->Top__DOT__registers__DOT__registers[16]),64);
    bufp->fullQData(oldp+142,(vlSelf->Top__DOT__registers__DOT__registers[17]),64);
    bufp->fullQData(oldp+144,(vlSelf->Top__DOT__registers__DOT__registers[18]),64);
    bufp->fullQData(oldp+146,(vlSelf->Top__DOT__registers__DOT__registers[19]),64);
    bufp->fullQData(oldp+148,(vlSelf->Top__DOT__registers__DOT__registers[20]),64);
    bufp->fullQData(oldp+150,(vlSelf->Top__DOT__registers__DOT__registers[21]),64);
    bufp->fullQData(oldp+152,(vlSelf->Top__DOT__registers__DOT__registers[22]),64);
    bufp->fullQData(oldp+154,(vlSelf->Top__DOT__registers__DOT__registers[23]),64);
    bufp->fullQData(oldp+156,(vlSelf->Top__DOT__registers__DOT__registers[24]),64);
    bufp->fullQData(oldp+158,(vlSelf->Top__DOT__registers__DOT__registers[25]),64);
    bufp->fullQData(oldp+160,(vlSelf->Top__DOT__registers__DOT__registers[26]),64);
    bufp->fullQData(oldp+162,(vlSelf->Top__DOT__registers__DOT__registers[27]),64);
    bufp->fullQData(oldp+164,(vlSelf->Top__DOT__registers__DOT__registers[28]),64);
    bufp->fullQData(oldp+166,(vlSelf->Top__DOT__registers__DOT__registers[29]),64);
    bufp->fullQData(oldp+168,(vlSelf->Top__DOT__registers__DOT__registers[30]),64);
    bufp->fullQData(oldp+170,(vlSelf->Top__DOT__registers__DOT__registers[31]),64);
    bufp->fullQData(oldp+172,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data),64);
    bufp->fullQData(oldp+174,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data),64);
    bufp->fullBit(oldp+176,(vlSelf->clock));
    bufp->fullBit(oldp+177,(vlSelf->reset));
    bufp->fullQData(oldp+178,(vlSelf->io_pc),64);
    bufp->fullBit(oldp+180,(vlSelf->io_ctrl_RegWen));
    bufp->fullCData(oldp+181,(vlSelf->io_ctrl_OP),8);
    bufp->fullBit(oldp+182,(vlSelf->io_ctrl_J_JUMP));
    bufp->fullBit(oldp+183,(vlSelf->io_ctrl_MemWen));
    bufp->fullCData(oldp+184,(vlSelf->io_ctrl_wmask),8);
    bufp->fullBit(oldp+185,(vlSelf->io_ctrl_MemLoad));
    bufp->fullBit(oldp+186,(vlSelf->io_ctrl_csr_wen));
    bufp->fullBit(oldp+187,(vlSelf->io_ctrl_E_JUMP));
    bufp->fullQData(oldp+188,(vlSelf->io_resultALU),64);
    bufp->fullQData(oldp+190,(vlSelf->io_rs1),64);
    bufp->fullQData(oldp+192,(vlSelf->io_rs2),64);
    bufp->fullCData(oldp+194,(vlSelf->io_rd),5);
    bufp->fullQData(oldp+195,(vlSelf->io_imm),64);
    bufp->fullCData(oldp+197,(vlSelf->io_op),8);
    bufp->fullBit(oldp+198,(vlSelf->io_MemWen));
    bufp->fullBit(oldp+199,(vlSelf->io_MemLoad));
    bufp->fullIData(oldp+200,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+201,(vlSelf->io_is_b));
    bufp->fullCData(oldp+202,(vlSelf->io_wmask),8);
    bufp->fullQData(oldp+203,(vlSelf->io_rdata),64);
    bufp->fullQData(oldp+205,(vlSelf->io_fmemwdata),64);
    bufp->fullBit(oldp+207,(vlSelf->io_is_e));
    bufp->fullBit(oldp+208,(vlSelf->io_is_csr));
    bufp->fullQData(oldp+209,(vlSelf->io_reg17),64);
    bufp->fullQData(oldp+211,(((0x1bU == (IData)(vlSelf->io_ctrl_OP))
                                ? (0xfffffffffffffffeULL 
                                   & vlSelf->Top__DOT__alu__DOT___result_T_128)
                                : ((0x3aU == (IData)(vlSelf->io_ctrl_OP))
                                    ? vlSelf->Top__DOT__alu__DOT___result_T_205
                                    : 0ULL))),64);
    bufp->fullQData(oldp+213,(((0x40U == (IData)(vlSelf->io_ctrl_OP))
                                ? (4ULL + vlSelf->Top__DOT__alu__DOT__CSR
                                   [2U]) : ((0x3fU 
                                             == (IData)(vlSelf->io_ctrl_OP))
                                             ? vlSelf->Top__DOT__alu__DOT__CSR
                                            [4U] : 0ULL))),64);
    bufp->fullQData(oldp+215,((QData)((IData)(vlSelf->io_is_b))),64);
    bufp->fullBit(oldp+217,((0x3fU == (IData)(vlSelf->io_ctrl_OP))));
    bufp->fullIData(oldp+218,(((0x3bU == (IData)(vlSelf->io_ctrl_OP))
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+219,((0x3fU == (IData)(vlSelf->io_ctrl_OP))),32);
    bufp->fullQData(oldp+220,(((0x3fU == (IData)(vlSelf->io_ctrl_OP))
                                ? vlSelf->Top__DOT__registers__DOT__registers
                               [0x11U] : vlSelf->Top__DOT__alu__DOT__CSR
                               [1U])),64);
    bufp->fullQData(oldp+222,(((0x3fU == (IData)(vlSelf->io_ctrl_OP))
                                ? vlSelf->Top__DOT__PC__DOT__init
                                : vlSelf->Top__DOT__alu__DOT__CSR
                               [2U])),64);
    bufp->fullQData(oldp+224,(((IData)(vlSelf->io_ctrl_csr_wen)
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
    bufp->fullQData(oldp+226,(((0x3eU == (IData)(vlSelf->io_ctrl_OP))
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
    bufp->fullWData(oldp+228,(__Vtemp_h67e2dbbd__0),69);
    bufp->fullQData(oldp+231,((QData)((IData)(vlSelf->io_inst))),64);
    bufp->fullQData(oldp+233,(vlSelf->Top__DOT__registers__DOT__registers
                              [vlSelf->io_rd]),64);
    bufp->fullQData(oldp+235,((((IData)(vlSelf->io_ctrl_RegWen) 
                                & (0U != (IData)(vlSelf->io_rd)))
                                ? vlSelf->io_fmemwdata
                                : vlSelf->Top__DOT__registers__DOT__registers
                               [vlSelf->io_rd])),64);
    bufp->fullBit(oldp+237,(1U));
    bufp->fullCData(oldp+238,(1U),3);
    bufp->fullCData(oldp+239,(2U),3);
    bufp->fullCData(oldp+240,(4U),3);
    bufp->fullCData(oldp+241,(0U),3);
    bufp->fullCData(oldp+242,(3U),3);
    bufp->fullQData(oldp+243,(0ULL),64);
    bufp->fullCData(oldp+245,(0U),8);
    bufp->fullBit(oldp+246,(0U));
    bufp->fullCData(oldp+247,(0x11U),5);
    bufp->fullCData(oldp+248,(0U),5);
    bufp->fullCData(oldp+249,(1U),5);
    bufp->fullCData(oldp+250,(2U),5);
    bufp->fullCData(oldp+251,(3U),5);
    bufp->fullCData(oldp+252,(4U),5);
    bufp->fullCData(oldp+253,(5U),5);
    bufp->fullCData(oldp+254,(6U),5);
    bufp->fullCData(oldp+255,(7U),5);
    bufp->fullCData(oldp+256,(8U),5);
    bufp->fullCData(oldp+257,(9U),5);
    bufp->fullCData(oldp+258,(0xaU),5);
    bufp->fullCData(oldp+259,(0xbU),5);
    bufp->fullCData(oldp+260,(0xcU),5);
    bufp->fullCData(oldp+261,(0xdU),5);
    bufp->fullCData(oldp+262,(0xeU),5);
    bufp->fullCData(oldp+263,(0xfU),5);
    bufp->fullCData(oldp+264,(0x10U),5);
    bufp->fullCData(oldp+265,(0x12U),5);
    bufp->fullCData(oldp+266,(0x13U),5);
    bufp->fullCData(oldp+267,(0x14U),5);
    bufp->fullCData(oldp+268,(0x15U),5);
    bufp->fullCData(oldp+269,(0x16U),5);
    bufp->fullCData(oldp+270,(0x17U),5);
    bufp->fullCData(oldp+271,(0x18U),5);
    bufp->fullCData(oldp+272,(0x19U),5);
    bufp->fullCData(oldp+273,(0x1aU),5);
    bufp->fullCData(oldp+274,(0x1bU),5);
    bufp->fullCData(oldp+275,(0x1cU),5);
    bufp->fullCData(oldp+276,(0x1dU),5);
    bufp->fullCData(oldp+277,(0x1eU),5);
    bufp->fullCData(oldp+278,(0x1fU),5);
}
