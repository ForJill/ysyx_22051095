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
    tracep->declBit(c+223,"clock", false,-1);
    tracep->declBit(c+224,"reset", false,-1);
    tracep->declQuad(c+225,"io_pc", false,-1, 63,0);
    tracep->declBit(c+227,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+228,"io_ctrl_OP", false,-1, 5,0);
    tracep->declBit(c+229,"io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+230,"io_ctrl_MemWen", false,-1);
    tracep->declBus(c+231,"io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+232,"io_ctrl_MemLoad", false,-1);
    tracep->declQuad(c+233,"io_resultALU", false,-1, 63,0);
    tracep->declQuad(c+235,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+237,"io_rs2", false,-1, 63,0);
    tracep->declQuad(c+239,"io_imm", false,-1, 63,0);
    tracep->declBus(c+241,"io_op", false,-1, 3,0);
    tracep->declBit(c+242,"io_MemWen", false,-1);
    tracep->declBit(c+243,"io_MemLoad", false,-1);
    tracep->declBus(c+244,"io_inst", false,-1, 31,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+223,"clock", false,-1);
    tracep->declBit(c+224,"reset", false,-1);
    tracep->declQuad(c+225,"io_pc", false,-1, 63,0);
    tracep->declBit(c+227,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+228,"io_ctrl_OP", false,-1, 5,0);
    tracep->declBit(c+229,"io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+230,"io_ctrl_MemWen", false,-1);
    tracep->declBus(c+231,"io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+232,"io_ctrl_MemLoad", false,-1);
    tracep->declQuad(c+233,"io_resultALU", false,-1, 63,0);
    tracep->declQuad(c+235,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+237,"io_rs2", false,-1, 63,0);
    tracep->declQuad(c+239,"io_imm", false,-1, 63,0);
    tracep->declBus(c+241,"io_op", false,-1, 3,0);
    tracep->declBit(c+230,"io_MemWen", false,-1);
    tracep->declBit(c+232,"io_MemLoad", false,-1);
    tracep->declBus(c+244,"io_inst", false,-1, 31,0);
    tracep->declBit(c+223,"PC_clock", false,-1);
    tracep->declBit(c+224,"PC_reset", false,-1);
    tracep->declQuad(c+225,"PC_io_pc", false,-1, 63,0);
    tracep->declBit(c+229,"PC_io_is_j", false,-1);
    tracep->declBit(c+245,"PC_io_is_b", false,-1);
    tracep->declQuad(c+246,"PC_io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+233,"PC_io_b_branch", false,-1, 63,0);
    tracep->declBus(c+228,"alu_io_ctrl_alu_op", false,-1, 5,0);
    tracep->declQuad(c+235,"alu_io_in1", false,-1, 63,0);
    tracep->declQuad(c+237,"alu_io_in2", false,-1, 63,0);
    tracep->declQuad(c+239,"alu_io_imm", false,-1, 63,0);
    tracep->declQuad(c+233,"alu_io_out", false,-1, 63,0);
    tracep->declQuad(c+225,"alu_io_pc", false,-1, 63,0);
    tracep->declQuad(c+246,"alu_io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+248,"alu_io_is_b", false,-1, 63,0);
    tracep->declBus(c+244,"decoder_io_inst", false,-1, 31,0);
    tracep->declBit(c+227,"decoder_io_ctrl_RegWen", false,-1);
    tracep->declBus(c+228,"decoder_io_ctrl_OP", false,-1, 5,0);
    tracep->declBit(c+229,"decoder_io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+230,"decoder_io_ctrl_MemWen", false,-1);
    tracep->declBus(c+231,"decoder_io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+232,"decoder_io_ctrl_MemLoad", false,-1);
    tracep->declBus(c+1,"decoder_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+2,"decoder_io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+3,"decoder_io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+239,"decoder_io_imm", false,-1, 63,0);
    tracep->declBit(c+223,"registers_clock", false,-1);
    tracep->declBit(c+227,"registers_io_wen", false,-1);
    tracep->declQuad(c+250,"registers_io_wdata", false,-1, 63,0);
    tracep->declQuad(c+235,"registers_io_rdata1", false,-1, 63,0);
    tracep->declQuad(c+237,"registers_io_rdata2", false,-1, 63,0);
    tracep->declBus(c+1,"registers_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+2,"registers_io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+3,"registers_io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+4,"registers_io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+6,"registers_io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+8,"registers_io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+10,"registers_io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+12,"registers_io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+14,"registers_io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+16,"registers_io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+18,"registers_io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+20,"registers_io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+22,"registers_io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+24,"registers_io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+26,"registers_io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+28,"registers_io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+30,"registers_io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+32,"registers_io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+34,"registers_io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+36,"registers_io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+38,"registers_io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+40,"registers_io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+42,"registers_io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+44,"registers_io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+46,"registers_io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+48,"registers_io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+50,"registers_io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+52,"registers_io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+54,"registers_io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+56,"registers_io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+58,"registers_io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+60,"registers_io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+62,"registers_io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+64,"registers_io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+66,"registers_io_regs_31", false,-1, 63,0);
    tracep->declBus(c+228,"Controller_io_ControlIO_In_OP", false,-1, 5,0);
    tracep->declBus(c+228,"Controller_io_AluCtrlIO_Out_alu_op", false,-1, 5,0);
    tracep->declBus(c+252,"dpi_flag", false,-1, 31,0);
    tracep->declQuad(c+4,"dpi_rf_0", false,-1, 63,0);
    tracep->declQuad(c+6,"dpi_rf_1", false,-1, 63,0);
    tracep->declQuad(c+8,"dpi_rf_2", false,-1, 63,0);
    tracep->declQuad(c+10,"dpi_rf_3", false,-1, 63,0);
    tracep->declQuad(c+12,"dpi_rf_4", false,-1, 63,0);
    tracep->declQuad(c+14,"dpi_rf_5", false,-1, 63,0);
    tracep->declQuad(c+16,"dpi_rf_6", false,-1, 63,0);
    tracep->declQuad(c+18,"dpi_rf_7", false,-1, 63,0);
    tracep->declQuad(c+20,"dpi_rf_8", false,-1, 63,0);
    tracep->declQuad(c+22,"dpi_rf_9", false,-1, 63,0);
    tracep->declQuad(c+24,"dpi_rf_10", false,-1, 63,0);
    tracep->declQuad(c+26,"dpi_rf_11", false,-1, 63,0);
    tracep->declQuad(c+28,"dpi_rf_12", false,-1, 63,0);
    tracep->declQuad(c+30,"dpi_rf_13", false,-1, 63,0);
    tracep->declQuad(c+32,"dpi_rf_14", false,-1, 63,0);
    tracep->declQuad(c+34,"dpi_rf_15", false,-1, 63,0);
    tracep->declQuad(c+36,"dpi_rf_16", false,-1, 63,0);
    tracep->declQuad(c+38,"dpi_rf_17", false,-1, 63,0);
    tracep->declQuad(c+40,"dpi_rf_18", false,-1, 63,0);
    tracep->declQuad(c+42,"dpi_rf_19", false,-1, 63,0);
    tracep->declQuad(c+44,"dpi_rf_20", false,-1, 63,0);
    tracep->declQuad(c+46,"dpi_rf_21", false,-1, 63,0);
    tracep->declQuad(c+48,"dpi_rf_22", false,-1, 63,0);
    tracep->declQuad(c+50,"dpi_rf_23", false,-1, 63,0);
    tracep->declQuad(c+52,"dpi_rf_24", false,-1, 63,0);
    tracep->declQuad(c+54,"dpi_rf_25", false,-1, 63,0);
    tracep->declQuad(c+56,"dpi_rf_26", false,-1, 63,0);
    tracep->declQuad(c+58,"dpi_rf_27", false,-1, 63,0);
    tracep->declQuad(c+60,"dpi_rf_28", false,-1, 63,0);
    tracep->declQuad(c+62,"dpi_rf_29", false,-1, 63,0);
    tracep->declQuad(c+64,"dpi_rf_30", false,-1, 63,0);
    tracep->declQuad(c+66,"dpi_rf_31", false,-1, 63,0);
    tracep->declBus(c+244,"dpi_inst", false,-1, 31,0);
    tracep->declQuad(c+225,"dpi_pc", false,-1, 63,0);
    tracep->declQuad(c+225,"ifu_io_pc", false,-1, 63,0);
    tracep->declBus(c+244,"ifu_io_inst", false,-1, 31,0);
    tracep->declQuad(c+233,"ifu_io_raddr", false,-1, 63,0);
    tracep->declQuad(c+68,"ifu_io_rdata", false,-1, 63,0);
    tracep->declQuad(c+233,"ifu_io_waddr", false,-1, 63,0);
    tracep->declQuad(c+237,"ifu_io_wdata", false,-1, 63,0);
    tracep->declBus(c+231,"ifu_io_wmask", false,-1, 7,0);
    tracep->declBit(c+230,"ifu_io_wen", false,-1);
    tracep->pushNamePrefix("Controller ");
    tracep->declBus(c+228,"io_ControlIO_In_OP", false,-1, 5,0);
    tracep->declBus(c+228,"io_AluCtrlIO_Out_alu_op", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+223,"clock", false,-1);
    tracep->declBit(c+224,"reset", false,-1);
    tracep->declQuad(c+225,"io_pc", false,-1, 63,0);
    tracep->declBit(c+229,"io_is_j", false,-1);
    tracep->declBit(c+245,"io_is_b", false,-1);
    tracep->declQuad(c+246,"io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+233,"io_b_branch", false,-1, 63,0);
    tracep->declQuad(c+70,"init", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+228,"io_ctrl_alu_op", false,-1, 5,0);
    tracep->declQuad(c+235,"io_in1", false,-1, 63,0);
    tracep->declQuad(c+237,"io_in2", false,-1, 63,0);
    tracep->declQuad(c+239,"io_imm", false,-1, 63,0);
    tracep->declQuad(c+233,"io_out", false,-1, 63,0);
    tracep->declQuad(c+225,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+246,"io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+248,"io_is_b", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+244,"io_inst", false,-1, 31,0);
    tracep->declBit(c+227,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+228,"io_ctrl_OP", false,-1, 5,0);
    tracep->declBit(c+229,"io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+230,"io_ctrl_MemWen", false,-1);
    tracep->declBus(c+231,"io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+232,"io_ctrl_MemLoad", false,-1);
    tracep->declBus(c+1,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+2,"io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+3,"io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+239,"io_imm", false,-1, 63,0);
    tracep->declBus(c+72,"ImmType", false,-1, 2,0);
    tracep->declQuad(c+73,"I", false,-1, 63,0);
    tracep->declArray(c+75,"U", false,-1, 75,0);
    tracep->declArray(c+78,"S", false,-1, 68,0);
    tracep->declArray(c+81,"J", false,-1, 83,0);
    tracep->declArray(c+84,"B", false,-1, 75,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi ");
    tracep->declBus(c+252,"flag", false,-1, 31,0);
    tracep->declQuad(c+4,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+6,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+8,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+10,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+12,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+14,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+16,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+18,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+20,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+22,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+24,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+26,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+28,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+30,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+32,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+34,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+36,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+38,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+40,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+42,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+44,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+46,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+48,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+50,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+52,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+54,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+56,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+58,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+60,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+62,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+64,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+66,"rf_31", false,-1, 63,0);
    tracep->declQuad(c+253,"inst", false,-1, 63,0);
    tracep->declQuad(c+225,"pc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+87+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declQuad(c+225,"io_pc", false,-1, 63,0);
    tracep->declBus(c+244,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+233,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+68,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+233,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+237,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+231,"io_wmask", false,-1, 7,0);
    tracep->declBit(c+230,"io_wen", false,-1);
    tracep->declQuad(c+225,"inst_mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+257,"inst_mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+257,"inst_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+259,"inst_mem_wmask", false,-1, 7,0);
    tracep->declQuad(c+151,"inst_mem_rdata", false,-1, 63,0);
    tracep->declBit(c+260,"inst_mem_wen", false,-1);
    tracep->declQuad(c+233,"data_mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+233,"data_mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+237,"data_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+231,"data_mem_wmask", false,-1, 7,0);
    tracep->declQuad(c+68,"data_mem_rdata", false,-1, 63,0);
    tracep->declBit(c+230,"data_mem_wen", false,-1);
    tracep->pushNamePrefix("data_mem ");
    tracep->declQuad(c+233,"raddr", false,-1, 63,0);
    tracep->declQuad(c+233,"waddr", false,-1, 63,0);
    tracep->declQuad(c+237,"wdata", false,-1, 63,0);
    tracep->declBus(c+231,"wmask", false,-1, 7,0);
    tracep->declBit(c+230,"wen", false,-1);
    tracep->declQuad(c+68,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_mem ");
    tracep->declQuad(c+225,"raddr", false,-1, 63,0);
    tracep->declQuad(c+257,"waddr", false,-1, 63,0);
    tracep->declQuad(c+257,"wdata", false,-1, 63,0);
    tracep->declBus(c+259,"wmask", false,-1, 7,0);
    tracep->declBit(c+260,"wen", false,-1);
    tracep->declQuad(c+151,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("registers ");
    tracep->declBit(c+223,"clock", false,-1);
    tracep->declBit(c+227,"io_wen", false,-1);
    tracep->declQuad(c+250,"io_wdata", false,-1, 63,0);
    tracep->declQuad(c+235,"io_rdata1", false,-1, 63,0);
    tracep->declQuad(c+237,"io_rdata2", false,-1, 63,0);
    tracep->declBus(c+1,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+2,"io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+3,"io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+4,"io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+6,"io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+8,"io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+10,"io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+12,"io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+14,"io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+16,"io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+18,"io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+20,"io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+22,"io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+24,"io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+26,"io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+28,"io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+30,"io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+32,"io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+34,"io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+36,"io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+38,"io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+40,"io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+42,"io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+44,"io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+46,"io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+48,"io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+50,"io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+52,"io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+54,"io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+56,"io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+58,"io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+60,"io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+62,"io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+64,"io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+66,"io_regs_31", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+153+i*2,"registers", true,(i+0), 63,0);
    }
    tracep->declBit(c+261,"registers_io_rdata1_MPORT_en", false,-1);
    tracep->declBus(c+1,"registers_io_rdata1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+217,"registers_io_rdata1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_rdata2_MPORT_en", false,-1);
    tracep->declBus(c+2,"registers_io_rdata2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+219,"registers_io_rdata2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_MPORT_1_en", false,-1);
    tracep->declBus(c+3,"registers_MPORT_1_addr", false,-1, 4,0);
    tracep->declQuad(c+221,"registers_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_0_MPORT_en", false,-1);
    tracep->declBus(c+262,"registers_io_regs_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+4,"registers_io_regs_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_1_MPORT_en", false,-1);
    tracep->declBus(c+263,"registers_io_regs_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+6,"registers_io_regs_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_2_MPORT_en", false,-1);
    tracep->declBus(c+264,"registers_io_regs_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+8,"registers_io_regs_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_3_MPORT_en", false,-1);
    tracep->declBus(c+265,"registers_io_regs_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+10,"registers_io_regs_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_4_MPORT_en", false,-1);
    tracep->declBus(c+266,"registers_io_regs_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+12,"registers_io_regs_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_5_MPORT_en", false,-1);
    tracep->declBus(c+267,"registers_io_regs_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+14,"registers_io_regs_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_6_MPORT_en", false,-1);
    tracep->declBus(c+268,"registers_io_regs_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+16,"registers_io_regs_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_7_MPORT_en", false,-1);
    tracep->declBus(c+269,"registers_io_regs_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+18,"registers_io_regs_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_8_MPORT_en", false,-1);
    tracep->declBus(c+270,"registers_io_regs_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+20,"registers_io_regs_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_9_MPORT_en", false,-1);
    tracep->declBus(c+271,"registers_io_regs_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+22,"registers_io_regs_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_10_MPORT_en", false,-1);
    tracep->declBus(c+272,"registers_io_regs_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+24,"registers_io_regs_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_11_MPORT_en", false,-1);
    tracep->declBus(c+273,"registers_io_regs_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+26,"registers_io_regs_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_12_MPORT_en", false,-1);
    tracep->declBus(c+274,"registers_io_regs_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+28,"registers_io_regs_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_13_MPORT_en", false,-1);
    tracep->declBus(c+275,"registers_io_regs_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+30,"registers_io_regs_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_14_MPORT_en", false,-1);
    tracep->declBus(c+276,"registers_io_regs_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+32,"registers_io_regs_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_15_MPORT_en", false,-1);
    tracep->declBus(c+277,"registers_io_regs_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+34,"registers_io_regs_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_16_MPORT_en", false,-1);
    tracep->declBus(c+278,"registers_io_regs_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+36,"registers_io_regs_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_17_MPORT_en", false,-1);
    tracep->declBus(c+279,"registers_io_regs_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+38,"registers_io_regs_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_18_MPORT_en", false,-1);
    tracep->declBus(c+280,"registers_io_regs_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+40,"registers_io_regs_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_19_MPORT_en", false,-1);
    tracep->declBus(c+281,"registers_io_regs_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+42,"registers_io_regs_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_20_MPORT_en", false,-1);
    tracep->declBus(c+282,"registers_io_regs_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+44,"registers_io_regs_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_21_MPORT_en", false,-1);
    tracep->declBus(c+283,"registers_io_regs_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+46,"registers_io_regs_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_22_MPORT_en", false,-1);
    tracep->declBus(c+284,"registers_io_regs_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+48,"registers_io_regs_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_23_MPORT_en", false,-1);
    tracep->declBus(c+285,"registers_io_regs_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+50,"registers_io_regs_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_24_MPORT_en", false,-1);
    tracep->declBus(c+286,"registers_io_regs_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+52,"registers_io_regs_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_25_MPORT_en", false,-1);
    tracep->declBus(c+287,"registers_io_regs_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+54,"registers_io_regs_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_26_MPORT_en", false,-1);
    tracep->declBus(c+288,"registers_io_regs_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+56,"registers_io_regs_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_27_MPORT_en", false,-1);
    tracep->declBus(c+289,"registers_io_regs_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+58,"registers_io_regs_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_28_MPORT_en", false,-1);
    tracep->declBus(c+290,"registers_io_regs_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+60,"registers_io_regs_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_29_MPORT_en", false,-1);
    tracep->declBus(c+291,"registers_io_regs_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+62,"registers_io_regs_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_30_MPORT_en", false,-1);
    tracep->declBus(c+292,"registers_io_regs_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+64,"registers_io_regs_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+261,"registers_io_regs_31_MPORT_en", false,-1);
    tracep->declBus(c+293,"registers_io_regs_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+66,"registers_io_regs_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+255,"registers_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+3,"registers_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+261,"registers_MPORT_mask", false,-1);
    tracep->declBit(c+261,"registers_MPORT_en", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp_hbb658cd2__0;
    VlWide<3>/*95:0*/ __Vtemp_h50dbeaa2__0;
    VlWide<3>/*95:0*/ __Vtemp_h9ebd919b__0;
    // Body
    bufp->fullCData(oldp+1,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                              >> 0xfU)))),5);
    bufp->fullCData(oldp+2,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                              >> 0x14U)))),5);
    bufp->fullCData(oldp+3,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                              >> 7U)))),5);
    bufp->fullQData(oldp+4,(vlSelf->Top__DOT__registers__DOT__registers
                            [0U]),64);
    bufp->fullQData(oldp+6,(vlSelf->Top__DOT__registers__DOT__registers
                            [1U]),64);
    bufp->fullQData(oldp+8,(vlSelf->Top__DOT__registers__DOT__registers
                            [2U]),64);
    bufp->fullQData(oldp+10,(vlSelf->Top__DOT__registers__DOT__registers
                             [3U]),64);
    bufp->fullQData(oldp+12,(vlSelf->Top__DOT__registers__DOT__registers
                             [4U]),64);
    bufp->fullQData(oldp+14,(vlSelf->Top__DOT__registers__DOT__registers
                             [5U]),64);
    bufp->fullQData(oldp+16,(vlSelf->Top__DOT__registers__DOT__registers
                             [6U]),64);
    bufp->fullQData(oldp+18,(vlSelf->Top__DOT__registers__DOT__registers
                             [7U]),64);
    bufp->fullQData(oldp+20,(vlSelf->Top__DOT__registers__DOT__registers
                             [8U]),64);
    bufp->fullQData(oldp+22,(vlSelf->Top__DOT__registers__DOT__registers
                             [9U]),64);
    bufp->fullQData(oldp+24,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xaU]),64);
    bufp->fullQData(oldp+26,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xbU]),64);
    bufp->fullQData(oldp+28,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xcU]),64);
    bufp->fullQData(oldp+30,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xdU]),64);
    bufp->fullQData(oldp+32,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xeU]),64);
    bufp->fullQData(oldp+34,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xfU]),64);
    bufp->fullQData(oldp+36,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x10U]),64);
    bufp->fullQData(oldp+38,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x11U]),64);
    bufp->fullQData(oldp+40,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x12U]),64);
    bufp->fullQData(oldp+42,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x13U]),64);
    bufp->fullQData(oldp+44,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x14U]),64);
    bufp->fullQData(oldp+46,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x15U]),64);
    bufp->fullQData(oldp+48,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x16U]),64);
    bufp->fullQData(oldp+50,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x17U]),64);
    bufp->fullQData(oldp+52,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x18U]),64);
    bufp->fullQData(oldp+54,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x19U]),64);
    bufp->fullQData(oldp+56,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1aU]),64);
    bufp->fullQData(oldp+58,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1bU]),64);
    bufp->fullQData(oldp+60,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1cU]),64);
    bufp->fullQData(oldp+62,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1dU]),64);
    bufp->fullQData(oldp+64,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1eU]),64);
    bufp->fullQData(oldp+66,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1fU]),64);
    bufp->fullQData(oldp+68,(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata),64);
    bufp->fullQData(oldp+70,(vlSelf->Top__DOT__PC__DOT__init),64);
    bufp->fullCData(oldp+72,(vlSelf->Top__DOT__decoder__DOT__ImmType),3);
    bufp->fullQData(oldp+73,(((((1U & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                               >> 0x1fU)))
                                 ? 0xfffffffffffffULL
                                 : 0ULL) << 0xcU) | (QData)((IData)(
                                                                    (0xfffU 
                                                                     & (IData)(
                                                                               (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                                >> 0x14U))))))),64);
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
    bufp->fullWData(oldp+75,(__Vtemp_h554601a6__0),76);
    __Vtemp_hbb658cd2__0[0U] = (((IData)(((((1U & (IData)(
                                                          (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                           >> 0x1fU)))
                                             ? 0x1ffffffffffffffULL
                                             : 0ULL) 
                                           << 7U) | (QData)((IData)(
                                                                    (0x7fU 
                                                                     & (IData)(
                                                                               (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                                >> 0x19U))))))) 
                                 << 5U) | (0x1fU & (IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                            >> 7U))));
    __Vtemp_hbb658cd2__0[1U] = (((IData)(((((1U & (IData)(
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
    __Vtemp_hbb658cd2__0[2U] = ((IData)((((((1U & (IData)(
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
    bufp->fullWData(oldp+78,(__Vtemp_hbb658cd2__0),69);
    __Vtemp_h50dbeaa2__0[0U] = (((((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                                   << 0x14U) | (0xff000U 
                                                & ((IData)(
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
    bufp->fullWData(oldp+81,(__Vtemp_h50dbeaa2__0),84);
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
    bufp->fullWData(oldp+84,(__Vtemp_h9ebd919b__0),76);
    bufp->fullQData(oldp+87,(vlSelf->Top__DOT__dpi__DOT__rf[0]),64);
    bufp->fullQData(oldp+89,(vlSelf->Top__DOT__dpi__DOT__rf[1]),64);
    bufp->fullQData(oldp+91,(vlSelf->Top__DOT__dpi__DOT__rf[2]),64);
    bufp->fullQData(oldp+93,(vlSelf->Top__DOT__dpi__DOT__rf[3]),64);
    bufp->fullQData(oldp+95,(vlSelf->Top__DOT__dpi__DOT__rf[4]),64);
    bufp->fullQData(oldp+97,(vlSelf->Top__DOT__dpi__DOT__rf[5]),64);
    bufp->fullQData(oldp+99,(vlSelf->Top__DOT__dpi__DOT__rf[6]),64);
    bufp->fullQData(oldp+101,(vlSelf->Top__DOT__dpi__DOT__rf[7]),64);
    bufp->fullQData(oldp+103,(vlSelf->Top__DOT__dpi__DOT__rf[8]),64);
    bufp->fullQData(oldp+105,(vlSelf->Top__DOT__dpi__DOT__rf[9]),64);
    bufp->fullQData(oldp+107,(vlSelf->Top__DOT__dpi__DOT__rf[10]),64);
    bufp->fullQData(oldp+109,(vlSelf->Top__DOT__dpi__DOT__rf[11]),64);
    bufp->fullQData(oldp+111,(vlSelf->Top__DOT__dpi__DOT__rf[12]),64);
    bufp->fullQData(oldp+113,(vlSelf->Top__DOT__dpi__DOT__rf[13]),64);
    bufp->fullQData(oldp+115,(vlSelf->Top__DOT__dpi__DOT__rf[14]),64);
    bufp->fullQData(oldp+117,(vlSelf->Top__DOT__dpi__DOT__rf[15]),64);
    bufp->fullQData(oldp+119,(vlSelf->Top__DOT__dpi__DOT__rf[16]),64);
    bufp->fullQData(oldp+121,(vlSelf->Top__DOT__dpi__DOT__rf[17]),64);
    bufp->fullQData(oldp+123,(vlSelf->Top__DOT__dpi__DOT__rf[18]),64);
    bufp->fullQData(oldp+125,(vlSelf->Top__DOT__dpi__DOT__rf[19]),64);
    bufp->fullQData(oldp+127,(vlSelf->Top__DOT__dpi__DOT__rf[20]),64);
    bufp->fullQData(oldp+129,(vlSelf->Top__DOT__dpi__DOT__rf[21]),64);
    bufp->fullQData(oldp+131,(vlSelf->Top__DOT__dpi__DOT__rf[22]),64);
    bufp->fullQData(oldp+133,(vlSelf->Top__DOT__dpi__DOT__rf[23]),64);
    bufp->fullQData(oldp+135,(vlSelf->Top__DOT__dpi__DOT__rf[24]),64);
    bufp->fullQData(oldp+137,(vlSelf->Top__DOT__dpi__DOT__rf[25]),64);
    bufp->fullQData(oldp+139,(vlSelf->Top__DOT__dpi__DOT__rf[26]),64);
    bufp->fullQData(oldp+141,(vlSelf->Top__DOT__dpi__DOT__rf[27]),64);
    bufp->fullQData(oldp+143,(vlSelf->Top__DOT__dpi__DOT__rf[28]),64);
    bufp->fullQData(oldp+145,(vlSelf->Top__DOT__dpi__DOT__rf[29]),64);
    bufp->fullQData(oldp+147,(vlSelf->Top__DOT__dpi__DOT__rf[30]),64);
    bufp->fullQData(oldp+149,(vlSelf->Top__DOT__dpi__DOT__rf[31]),64);
    bufp->fullQData(oldp+151,(vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata),64);
    bufp->fullQData(oldp+153,(vlSelf->Top__DOT__registers__DOT__registers[0]),64);
    bufp->fullQData(oldp+155,(vlSelf->Top__DOT__registers__DOT__registers[1]),64);
    bufp->fullQData(oldp+157,(vlSelf->Top__DOT__registers__DOT__registers[2]),64);
    bufp->fullQData(oldp+159,(vlSelf->Top__DOT__registers__DOT__registers[3]),64);
    bufp->fullQData(oldp+161,(vlSelf->Top__DOT__registers__DOT__registers[4]),64);
    bufp->fullQData(oldp+163,(vlSelf->Top__DOT__registers__DOT__registers[5]),64);
    bufp->fullQData(oldp+165,(vlSelf->Top__DOT__registers__DOT__registers[6]),64);
    bufp->fullQData(oldp+167,(vlSelf->Top__DOT__registers__DOT__registers[7]),64);
    bufp->fullQData(oldp+169,(vlSelf->Top__DOT__registers__DOT__registers[8]),64);
    bufp->fullQData(oldp+171,(vlSelf->Top__DOT__registers__DOT__registers[9]),64);
    bufp->fullQData(oldp+173,(vlSelf->Top__DOT__registers__DOT__registers[10]),64);
    bufp->fullQData(oldp+175,(vlSelf->Top__DOT__registers__DOT__registers[11]),64);
    bufp->fullQData(oldp+177,(vlSelf->Top__DOT__registers__DOT__registers[12]),64);
    bufp->fullQData(oldp+179,(vlSelf->Top__DOT__registers__DOT__registers[13]),64);
    bufp->fullQData(oldp+181,(vlSelf->Top__DOT__registers__DOT__registers[14]),64);
    bufp->fullQData(oldp+183,(vlSelf->Top__DOT__registers__DOT__registers[15]),64);
    bufp->fullQData(oldp+185,(vlSelf->Top__DOT__registers__DOT__registers[16]),64);
    bufp->fullQData(oldp+187,(vlSelf->Top__DOT__registers__DOT__registers[17]),64);
    bufp->fullQData(oldp+189,(vlSelf->Top__DOT__registers__DOT__registers[18]),64);
    bufp->fullQData(oldp+191,(vlSelf->Top__DOT__registers__DOT__registers[19]),64);
    bufp->fullQData(oldp+193,(vlSelf->Top__DOT__registers__DOT__registers[20]),64);
    bufp->fullQData(oldp+195,(vlSelf->Top__DOT__registers__DOT__registers[21]),64);
    bufp->fullQData(oldp+197,(vlSelf->Top__DOT__registers__DOT__registers[22]),64);
    bufp->fullQData(oldp+199,(vlSelf->Top__DOT__registers__DOT__registers[23]),64);
    bufp->fullQData(oldp+201,(vlSelf->Top__DOT__registers__DOT__registers[24]),64);
    bufp->fullQData(oldp+203,(vlSelf->Top__DOT__registers__DOT__registers[25]),64);
    bufp->fullQData(oldp+205,(vlSelf->Top__DOT__registers__DOT__registers[26]),64);
    bufp->fullQData(oldp+207,(vlSelf->Top__DOT__registers__DOT__registers[27]),64);
    bufp->fullQData(oldp+209,(vlSelf->Top__DOT__registers__DOT__registers[28]),64);
    bufp->fullQData(oldp+211,(vlSelf->Top__DOT__registers__DOT__registers[29]),64);
    bufp->fullQData(oldp+213,(vlSelf->Top__DOT__registers__DOT__registers[30]),64);
    bufp->fullQData(oldp+215,(vlSelf->Top__DOT__registers__DOT__registers[31]),64);
    bufp->fullQData(oldp+217,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data),64);
    bufp->fullQData(oldp+219,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data),64);
    bufp->fullQData(oldp+221,(vlSelf->Top__DOT__registers__DOT__registers
                              [(0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                 >> 7U)))]),64);
    bufp->fullBit(oldp+223,(vlSelf->clock));
    bufp->fullBit(oldp+224,(vlSelf->reset));
    bufp->fullQData(oldp+225,(vlSelf->io_pc),64);
    bufp->fullBit(oldp+227,(vlSelf->io_ctrl_RegWen));
    bufp->fullCData(oldp+228,(vlSelf->io_ctrl_OP),6);
    bufp->fullBit(oldp+229,(vlSelf->io_ctrl_J_JUMP));
    bufp->fullBit(oldp+230,(vlSelf->io_ctrl_MemWen));
    bufp->fullCData(oldp+231,(vlSelf->io_ctrl_wmask),8);
    bufp->fullBit(oldp+232,(vlSelf->io_ctrl_MemLoad));
    bufp->fullQData(oldp+233,(vlSelf->io_resultALU),64);
    bufp->fullQData(oldp+235,(vlSelf->io_rs1),64);
    bufp->fullQData(oldp+237,(vlSelf->io_rs2),64);
    bufp->fullQData(oldp+239,(vlSelf->io_imm),64);
    bufp->fullCData(oldp+241,(vlSelf->io_op),4);
    bufp->fullBit(oldp+242,(vlSelf->io_MemWen));
    bufp->fullBit(oldp+243,(vlSelf->io_MemLoad));
    bufp->fullIData(oldp+244,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+245,(((0x35U == (IData)(vlSelf->io_ctrl_OP))
                              ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_43)
                              : ((0x33U == (IData)(vlSelf->io_ctrl_OP))
                                  ? (vlSelf->io_rs1 
                                     >= vlSelf->io_rs2)
                                  : ((0x32U == (IData)(vlSelf->io_ctrl_OP))
                                      ? VL_GTES_IQQ(64, vlSelf->io_rs1, vlSelf->io_rs2)
                                      : ((0x34U == (IData)(vlSelf->io_ctrl_OP))
                                          ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_42)
                                          : ((0x31U 
                                              == (IData)(vlSelf->io_ctrl_OP))
                                              ? (vlSelf->io_rs1 
                                                 != vlSelf->io_rs2)
                                              : ((0x30U 
                                                  == (IData)(vlSelf->io_ctrl_OP)) 
                                                 & (vlSelf->io_rs1 
                                                    == vlSelf->io_rs2)))))))));
    bufp->fullQData(oldp+246,(((0x1aU == (IData)(vlSelf->io_ctrl_OP))
                                ? (QData)((IData)(((IData)(
                                                           (vlSelf->Top__DOT__alu__DOT___result_T_82 
                                                            >> 1U)) 
                                                   << 1U)))
                                : ((0x38U == (IData)(vlSelf->io_ctrl_OP))
                                    ? vlSelf->Top__DOT__alu__DOT___result_T_149
                                    : 0ULL))),64);
    bufp->fullQData(oldp+248,((QData)((IData)(((0x35U 
                                                == (IData)(vlSelf->io_ctrl_OP))
                                                ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_43)
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? 
                                                   (vlSelf->io_rs1 
                                                    >= vlSelf->io_rs2)
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->io_ctrl_OP))
                                                     ? 
                                                    VL_GTES_IQQ(64, vlSelf->io_rs1, vlSelf->io_rs2)
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->io_ctrl_OP))
                                                      ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_42)
                                                      : 
                                                     ((0x31U 
                                                       == (IData)(vlSelf->io_ctrl_OP))
                                                       ? 
                                                      (vlSelf->io_rs1 
                                                       != vlSelf->io_rs2)
                                                       : 
                                                      ((0x30U 
                                                        == (IData)(vlSelf->io_ctrl_OP)) 
                                                       & (vlSelf->io_rs1 
                                                          == vlSelf->io_rs2)))))))))),64);
    bufp->fullQData(oldp+250,(((IData)(vlSelf->io_ctrl_MemLoad)
                                ? ((0x1bU == (IData)(vlSelf->io_ctrl_OP))
                                    ? ((((1U & (IData)(
                                                       (vlSelf->Top__DOT__ifu__DOT__data_mem_rdata 
                                                        >> 7U)))
                                          ? 0xffffffffffffffULL
                                          : 0ULL) << 8U) 
                                       | (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata)))))
                                    : ((0x1cU == (IData)(vlSelf->io_ctrl_OP))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata))))
                                        : ((0x1dU == (IData)(vlSelf->io_ctrl_OP))
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
                                            : ((0x1eU 
                                                == (IData)(vlSelf->io_ctrl_OP))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata))))
                                                : (
                                                   (0x1fU 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? vlSelf->Top__DOT__ifu__DOT__data_mem_rdata
                                                    : 
                                                   ((0x21U 
                                                     == (IData)(vlSelf->io_ctrl_OP))
                                                     ? (QData)((IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata))
                                                     : 
                                                    ((0x20U 
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
                                                      : vlSelf->io_resultALU)))))))
                                : vlSelf->io_resultALU)),64);
    bufp->fullIData(oldp+252,(((0x39U == (IData)(vlSelf->io_ctrl_OP))
                                ? 1U : 0U)),32);
    bufp->fullQData(oldp+253,((QData)((IData)(vlSelf->io_inst))),64);
    bufp->fullQData(oldp+255,(((IData)(vlSelf->io_ctrl_RegWen)
                                ? ((IData)(vlSelf->io_ctrl_MemLoad)
                                    ? ((0x1bU == (IData)(vlSelf->io_ctrl_OP))
                                        ? ((((1U & (IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__data_mem_rdata 
                                                            >> 7U)))
                                              ? 0xffffffffffffffULL
                                              : 0ULL) 
                                            << 8U) 
                                           | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata)))))
                                        : ((0x1cU == (IData)(vlSelf->io_ctrl_OP))
                                            ? (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata))))
                                            : ((0x1dU 
                                                == (IData)(vlSelf->io_ctrl_OP))
                                                ? (
                                                   (((1U 
                                                      & (IData)(
                                                                (vlSelf->Top__DOT__ifu__DOT__data_mem_rdata 
                                                                 >> 0xfU)))
                                                      ? 0xffffffffffffULL
                                                      : 0ULL) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata)))))
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata))))
                                                    : 
                                                   ((0x1fU 
                                                     == (IData)(vlSelf->io_ctrl_OP))
                                                     ? vlSelf->Top__DOT__ifu__DOT__data_mem_rdata
                                                     : 
                                                    ((0x21U 
                                                      == (IData)(vlSelf->io_ctrl_OP))
                                                      ? (QData)((IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata))
                                                      : 
                                                     ((0x20U 
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
                                                       : vlSelf->io_resultALU)))))))
                                    : vlSelf->io_resultALU)
                                : vlSelf->Top__DOT__registers__DOT__registers
                               [(0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                  >> 7U)))])),64);
    bufp->fullQData(oldp+257,(0ULL),64);
    bufp->fullCData(oldp+259,(0U),8);
    bufp->fullBit(oldp+260,(0U));
    bufp->fullBit(oldp+261,(1U));
    bufp->fullCData(oldp+262,(0U),5);
    bufp->fullCData(oldp+263,(1U),5);
    bufp->fullCData(oldp+264,(2U),5);
    bufp->fullCData(oldp+265,(3U),5);
    bufp->fullCData(oldp+266,(4U),5);
    bufp->fullCData(oldp+267,(5U),5);
    bufp->fullCData(oldp+268,(6U),5);
    bufp->fullCData(oldp+269,(7U),5);
    bufp->fullCData(oldp+270,(8U),5);
    bufp->fullCData(oldp+271,(9U),5);
    bufp->fullCData(oldp+272,(0xaU),5);
    bufp->fullCData(oldp+273,(0xbU),5);
    bufp->fullCData(oldp+274,(0xcU),5);
    bufp->fullCData(oldp+275,(0xdU),5);
    bufp->fullCData(oldp+276,(0xeU),5);
    bufp->fullCData(oldp+277,(0xfU),5);
    bufp->fullCData(oldp+278,(0x10U),5);
    bufp->fullCData(oldp+279,(0x11U),5);
    bufp->fullCData(oldp+280,(0x12U),5);
    bufp->fullCData(oldp+281,(0x13U),5);
    bufp->fullCData(oldp+282,(0x14U),5);
    bufp->fullCData(oldp+283,(0x15U),5);
    bufp->fullCData(oldp+284,(0x16U),5);
    bufp->fullCData(oldp+285,(0x17U),5);
    bufp->fullCData(oldp+286,(0x18U),5);
    bufp->fullCData(oldp+287,(0x19U),5);
    bufp->fullCData(oldp+288,(0x1aU),5);
    bufp->fullCData(oldp+289,(0x1bU),5);
    bufp->fullCData(oldp+290,(0x1cU),5);
    bufp->fullCData(oldp+291,(0x1dU),5);
    bufp->fullCData(oldp+292,(0x1eU),5);
    bufp->fullCData(oldp+293,(0x1fU),5);
}
