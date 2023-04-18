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
    tracep->declBit(c+219,"clock", false,-1);
    tracep->declBit(c+220,"reset", false,-1);
    tracep->declQuad(c+221,"io_pc", false,-1, 63,0);
    tracep->declBit(c+223,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+224,"io_ctrl_OP", false,-1, 7,0);
    tracep->declBit(c+225,"io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+226,"io_ctrl_MemWen", false,-1);
    tracep->declBus(c+227,"io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+228,"io_ctrl_MemLoad", false,-1);
    tracep->declQuad(c+229,"io_resultALU", false,-1, 63,0);
    tracep->declQuad(c+231,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+233,"io_rs2", false,-1, 63,0);
    tracep->declBus(c+235,"io_rd", false,-1, 4,0);
    tracep->declQuad(c+236,"io_imm", false,-1, 63,0);
    tracep->declBus(c+238,"io_op", false,-1, 7,0);
    tracep->declBit(c+239,"io_MemWen", false,-1);
    tracep->declBit(c+240,"io_MemLoad", false,-1);
    tracep->declBus(c+241,"io_inst", false,-1, 31,0);
    tracep->declBit(c+242,"io_is_b", false,-1);
    tracep->declBus(c+243,"io_wmask", false,-1, 7,0);
    tracep->declQuad(c+244,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+246,"io_fmemwdata", false,-1, 63,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+219,"clock", false,-1);
    tracep->declBit(c+220,"reset", false,-1);
    tracep->declQuad(c+221,"io_pc", false,-1, 63,0);
    tracep->declBit(c+223,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+224,"io_ctrl_OP", false,-1, 7,0);
    tracep->declBit(c+225,"io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+226,"io_ctrl_MemWen", false,-1);
    tracep->declBus(c+227,"io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+228,"io_ctrl_MemLoad", false,-1);
    tracep->declQuad(c+229,"io_resultALU", false,-1, 63,0);
    tracep->declQuad(c+231,"io_rs1", false,-1, 63,0);
    tracep->declQuad(c+233,"io_rs2", false,-1, 63,0);
    tracep->declBus(c+235,"io_rd", false,-1, 4,0);
    tracep->declQuad(c+236,"io_imm", false,-1, 63,0);
    tracep->declBus(c+224,"io_op", false,-1, 7,0);
    tracep->declBit(c+226,"io_MemWen", false,-1);
    tracep->declBit(c+228,"io_MemLoad", false,-1);
    tracep->declBus(c+241,"io_inst", false,-1, 31,0);
    tracep->declBit(c+242,"io_is_b", false,-1);
    tracep->declBus(c+227,"io_wmask", false,-1, 7,0);
    tracep->declQuad(c+244,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+246,"io_fmemwdata", false,-1, 63,0);
    tracep->declBit(c+219,"PC_clock", false,-1);
    tracep->declBit(c+220,"PC_reset", false,-1);
    tracep->declQuad(c+221,"PC_io_pc", false,-1, 63,0);
    tracep->declQuad(c+1,"PC_io_pc4", false,-1, 63,0);
    tracep->declBit(c+225,"PC_io_is_j", false,-1);
    tracep->declBit(c+242,"PC_io_is_b", false,-1);
    tracep->declQuad(c+248,"PC_io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+229,"PC_io_b_branch", false,-1, 63,0);
    tracep->declBus(c+224,"alu_io_ctrl_alu_op", false,-1, 7,0);
    tracep->declQuad(c+231,"alu_io_in1", false,-1, 63,0);
    tracep->declQuad(c+233,"alu_io_in2", false,-1, 63,0);
    tracep->declQuad(c+236,"alu_io_imm", false,-1, 63,0);
    tracep->declQuad(c+229,"alu_io_out", false,-1, 63,0);
    tracep->declQuad(c+221,"alu_io_pc", false,-1, 63,0);
    tracep->declQuad(c+248,"alu_io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+250,"alu_io_is_b", false,-1, 63,0);
    tracep->declBus(c+241,"decoder_io_inst", false,-1, 31,0);
    tracep->declBit(c+223,"decoder_io_ctrl_RegWen", false,-1);
    tracep->declBus(c+224,"decoder_io_ctrl_OP", false,-1, 7,0);
    tracep->declBit(c+225,"decoder_io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+226,"decoder_io_ctrl_MemWen", false,-1);
    tracep->declBus(c+227,"decoder_io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+228,"decoder_io_ctrl_MemLoad", false,-1);
    tracep->declBus(c+3,"decoder_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+4,"decoder_io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+235,"decoder_io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+236,"decoder_io_imm", false,-1, 63,0);
    tracep->declBit(c+219,"registers_clock", false,-1);
    tracep->declBit(c+223,"registers_io_wen", false,-1);
    tracep->declQuad(c+246,"registers_io_wdata", false,-1, 63,0);
    tracep->declQuad(c+231,"registers_io_rdata1", false,-1, 63,0);
    tracep->declQuad(c+233,"registers_io_rdata2", false,-1, 63,0);
    tracep->declBus(c+3,"registers_io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+4,"registers_io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+235,"registers_io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+5,"registers_io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+7,"registers_io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+9,"registers_io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+11,"registers_io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+13,"registers_io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+15,"registers_io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+17,"registers_io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+19,"registers_io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+21,"registers_io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+23,"registers_io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+25,"registers_io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+27,"registers_io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+29,"registers_io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+31,"registers_io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+33,"registers_io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+35,"registers_io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+37,"registers_io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+39,"registers_io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+41,"registers_io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+43,"registers_io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+45,"registers_io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+47,"registers_io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+49,"registers_io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+51,"registers_io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+53,"registers_io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+55,"registers_io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+57,"registers_io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+59,"registers_io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+61,"registers_io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+63,"registers_io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+65,"registers_io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+67,"registers_io_regs_31", false,-1, 63,0);
    tracep->declBus(c+224,"Controller_io_ControlIO_In_OP", false,-1, 7,0);
    tracep->declBus(c+224,"Controller_io_AluCtrlIO_Out_alu_op", false,-1, 7,0);
    tracep->declBus(c+252,"dpi_flag", false,-1, 31,0);
    tracep->declQuad(c+5,"dpi_rf_0", false,-1, 63,0);
    tracep->declQuad(c+7,"dpi_rf_1", false,-1, 63,0);
    tracep->declQuad(c+9,"dpi_rf_2", false,-1, 63,0);
    tracep->declQuad(c+11,"dpi_rf_3", false,-1, 63,0);
    tracep->declQuad(c+13,"dpi_rf_4", false,-1, 63,0);
    tracep->declQuad(c+15,"dpi_rf_5", false,-1, 63,0);
    tracep->declQuad(c+17,"dpi_rf_6", false,-1, 63,0);
    tracep->declQuad(c+19,"dpi_rf_7", false,-1, 63,0);
    tracep->declQuad(c+21,"dpi_rf_8", false,-1, 63,0);
    tracep->declQuad(c+23,"dpi_rf_9", false,-1, 63,0);
    tracep->declQuad(c+25,"dpi_rf_10", false,-1, 63,0);
    tracep->declQuad(c+27,"dpi_rf_11", false,-1, 63,0);
    tracep->declQuad(c+29,"dpi_rf_12", false,-1, 63,0);
    tracep->declQuad(c+31,"dpi_rf_13", false,-1, 63,0);
    tracep->declQuad(c+33,"dpi_rf_14", false,-1, 63,0);
    tracep->declQuad(c+35,"dpi_rf_15", false,-1, 63,0);
    tracep->declQuad(c+37,"dpi_rf_16", false,-1, 63,0);
    tracep->declQuad(c+39,"dpi_rf_17", false,-1, 63,0);
    tracep->declQuad(c+41,"dpi_rf_18", false,-1, 63,0);
    tracep->declQuad(c+43,"dpi_rf_19", false,-1, 63,0);
    tracep->declQuad(c+45,"dpi_rf_20", false,-1, 63,0);
    tracep->declQuad(c+47,"dpi_rf_21", false,-1, 63,0);
    tracep->declQuad(c+49,"dpi_rf_22", false,-1, 63,0);
    tracep->declQuad(c+51,"dpi_rf_23", false,-1, 63,0);
    tracep->declQuad(c+53,"dpi_rf_24", false,-1, 63,0);
    tracep->declQuad(c+55,"dpi_rf_25", false,-1, 63,0);
    tracep->declQuad(c+57,"dpi_rf_26", false,-1, 63,0);
    tracep->declQuad(c+59,"dpi_rf_27", false,-1, 63,0);
    tracep->declQuad(c+61,"dpi_rf_28", false,-1, 63,0);
    tracep->declQuad(c+63,"dpi_rf_29", false,-1, 63,0);
    tracep->declQuad(c+65,"dpi_rf_30", false,-1, 63,0);
    tracep->declQuad(c+67,"dpi_rf_31", false,-1, 63,0);
    tracep->declBus(c+241,"dpi_inst", false,-1, 31,0);
    tracep->declQuad(c+221,"dpi_pc", false,-1, 63,0);
    tracep->declQuad(c+221,"ifu_io_pc", false,-1, 63,0);
    tracep->declBus(c+241,"ifu_io_inst", false,-1, 31,0);
    tracep->declQuad(c+229,"mem_io_raddr", false,-1, 63,0);
    tracep->declQuad(c+244,"mem_io_rdata", false,-1, 63,0);
    tracep->declQuad(c+229,"mem_io_waddr", false,-1, 63,0);
    tracep->declQuad(c+233,"mem_io_wdata", false,-1, 63,0);
    tracep->declBus(c+227,"mem_io_wmask", false,-1, 7,0);
    tracep->declBit(c+226,"mem_io_wen", false,-1);
    tracep->pushNamePrefix("Controller ");
    tracep->declBus(c+224,"io_ControlIO_In_OP", false,-1, 7,0);
    tracep->declBus(c+224,"io_AluCtrlIO_Out_alu_op", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+219,"clock", false,-1);
    tracep->declBit(c+220,"reset", false,-1);
    tracep->declQuad(c+221,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+1,"io_pc4", false,-1, 63,0);
    tracep->declBit(c+225,"io_is_j", false,-1);
    tracep->declBit(c+242,"io_is_b", false,-1);
    tracep->declQuad(c+248,"io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+229,"io_b_branch", false,-1, 63,0);
    tracep->declQuad(c+69,"init", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+224,"io_ctrl_alu_op", false,-1, 7,0);
    tracep->declQuad(c+231,"io_in1", false,-1, 63,0);
    tracep->declQuad(c+233,"io_in2", false,-1, 63,0);
    tracep->declQuad(c+236,"io_imm", false,-1, 63,0);
    tracep->declQuad(c+229,"io_out", false,-1, 63,0);
    tracep->declQuad(c+221,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+248,"io_j_branch", false,-1, 63,0);
    tracep->declQuad(c+250,"io_is_b", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+241,"io_inst", false,-1, 31,0);
    tracep->declBit(c+223,"io_ctrl_RegWen", false,-1);
    tracep->declBus(c+224,"io_ctrl_OP", false,-1, 7,0);
    tracep->declBit(c+225,"io_ctrl_J_JUMP", false,-1);
    tracep->declBit(c+226,"io_ctrl_MemWen", false,-1);
    tracep->declBus(c+227,"io_ctrl_wmask", false,-1, 7,0);
    tracep->declBit(c+228,"io_ctrl_MemLoad", false,-1);
    tracep->declBus(c+3,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+4,"io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+235,"io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+236,"io_imm", false,-1, 63,0);
    tracep->declBus(c+71,"ImmType", false,-1, 2,0);
    tracep->declQuad(c+72,"I", false,-1, 63,0);
    tracep->declArray(c+74,"U", false,-1, 75,0);
    tracep->declArray(c+253,"S", false,-1, 68,0);
    tracep->declArray(c+77,"J", false,-1, 83,0);
    tracep->declArray(c+80,"B", false,-1, 75,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi ");
    tracep->declBus(c+252,"flag", false,-1, 31,0);
    tracep->declQuad(c+5,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+7,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+9,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+11,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+13,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+15,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+17,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+19,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+21,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+23,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+25,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+27,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+29,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+31,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+33,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+35,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+37,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+39,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+41,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+43,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+45,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+47,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+49,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+51,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+53,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+55,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+57,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+59,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+61,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+63,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+65,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+67,"rf_31", false,-1, 63,0);
    tracep->declQuad(c+256,"inst", false,-1, 63,0);
    tracep->declQuad(c+221,"pc", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+83+i*2,"rf", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declQuad(c+221,"io_pc", false,-1, 63,0);
    tracep->declBus(c+241,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+221,"inst_mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+262,"inst_mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+262,"inst_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+264,"inst_mem_wmask", false,-1, 7,0);
    tracep->declQuad(c+147,"inst_mem_rdata", false,-1, 63,0);
    tracep->declBit(c+265,"inst_mem_wen", false,-1);
    tracep->pushNamePrefix("inst_mem ");
    tracep->declQuad(c+221,"raddr", false,-1, 63,0);
    tracep->declQuad(c+262,"waddr", false,-1, 63,0);
    tracep->declQuad(c+262,"wdata", false,-1, 63,0);
    tracep->declBus(c+264,"wmask", false,-1, 7,0);
    tracep->declBit(c+265,"wen", false,-1);
    tracep->declQuad(c+147,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+229,"io_raddr", false,-1, 63,0);
    tracep->declQuad(c+244,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+229,"io_waddr", false,-1, 63,0);
    tracep->declQuad(c+233,"io_wdata", false,-1, 63,0);
    tracep->declBus(c+227,"io_wmask", false,-1, 7,0);
    tracep->declBit(c+226,"io_wen", false,-1);
    tracep->declQuad(c+229,"data_mem_raddr", false,-1, 63,0);
    tracep->declQuad(c+229,"data_mem_waddr", false,-1, 63,0);
    tracep->declQuad(c+233,"data_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+227,"data_mem_wmask", false,-1, 7,0);
    tracep->declQuad(c+149,"data_mem_rdata", false,-1, 63,0);
    tracep->declBit(c+226,"data_mem_wen", false,-1);
    tracep->pushNamePrefix("data_mem ");
    tracep->declQuad(c+229,"raddr", false,-1, 63,0);
    tracep->declQuad(c+229,"waddr", false,-1, 63,0);
    tracep->declQuad(c+233,"wdata", false,-1, 63,0);
    tracep->declBus(c+227,"wmask", false,-1, 7,0);
    tracep->declBit(c+226,"wen", false,-1);
    tracep->declQuad(c+149,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("registers ");
    tracep->declBit(c+219,"clock", false,-1);
    tracep->declBit(c+223,"io_wen", false,-1);
    tracep->declQuad(c+246,"io_wdata", false,-1, 63,0);
    tracep->declQuad(c+231,"io_rdata1", false,-1, 63,0);
    tracep->declQuad(c+233,"io_rdata2", false,-1, 63,0);
    tracep->declBus(c+3,"io_reg_rs1", false,-1, 4,0);
    tracep->declBus(c+4,"io_reg_rs2", false,-1, 4,0);
    tracep->declBus(c+235,"io_reg_rd", false,-1, 4,0);
    tracep->declQuad(c+5,"io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+7,"io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+9,"io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+11,"io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+13,"io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+15,"io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+17,"io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+19,"io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+21,"io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+23,"io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+25,"io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+27,"io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+29,"io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+31,"io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+33,"io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+35,"io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+37,"io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+39,"io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+41,"io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+43,"io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+45,"io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+47,"io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+49,"io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+51,"io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+53,"io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+55,"io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+57,"io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+59,"io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+61,"io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+63,"io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+65,"io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+67,"io_regs_31", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+151+i*2,"registers", true,(i+0), 63,0);
    }
    tracep->declBit(c+266,"registers_io_rdata1_MPORT_en", false,-1);
    tracep->declBus(c+3,"registers_io_rdata1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+215,"registers_io_rdata1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_rdata2_MPORT_en", false,-1);
    tracep->declBus(c+4,"registers_io_rdata2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+217,"registers_io_rdata2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_MPORT_1_en", false,-1);
    tracep->declBus(c+235,"registers_MPORT_1_addr", false,-1, 4,0);
    tracep->declQuad(c+258,"registers_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_0_MPORT_en", false,-1);
    tracep->declBus(c+267,"registers_io_regs_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+5,"registers_io_regs_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_1_MPORT_en", false,-1);
    tracep->declBus(c+268,"registers_io_regs_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+7,"registers_io_regs_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_2_MPORT_en", false,-1);
    tracep->declBus(c+269,"registers_io_regs_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+9,"registers_io_regs_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_3_MPORT_en", false,-1);
    tracep->declBus(c+270,"registers_io_regs_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+11,"registers_io_regs_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_4_MPORT_en", false,-1);
    tracep->declBus(c+271,"registers_io_regs_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+13,"registers_io_regs_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_5_MPORT_en", false,-1);
    tracep->declBus(c+272,"registers_io_regs_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+15,"registers_io_regs_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_6_MPORT_en", false,-1);
    tracep->declBus(c+273,"registers_io_regs_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+17,"registers_io_regs_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_7_MPORT_en", false,-1);
    tracep->declBus(c+274,"registers_io_regs_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+19,"registers_io_regs_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_8_MPORT_en", false,-1);
    tracep->declBus(c+275,"registers_io_regs_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+21,"registers_io_regs_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_9_MPORT_en", false,-1);
    tracep->declBus(c+276,"registers_io_regs_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+23,"registers_io_regs_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_10_MPORT_en", false,-1);
    tracep->declBus(c+277,"registers_io_regs_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+25,"registers_io_regs_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_11_MPORT_en", false,-1);
    tracep->declBus(c+278,"registers_io_regs_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+27,"registers_io_regs_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_12_MPORT_en", false,-1);
    tracep->declBus(c+279,"registers_io_regs_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+29,"registers_io_regs_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_13_MPORT_en", false,-1);
    tracep->declBus(c+280,"registers_io_regs_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+31,"registers_io_regs_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_14_MPORT_en", false,-1);
    tracep->declBus(c+281,"registers_io_regs_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+33,"registers_io_regs_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_15_MPORT_en", false,-1);
    tracep->declBus(c+282,"registers_io_regs_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+35,"registers_io_regs_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_16_MPORT_en", false,-1);
    tracep->declBus(c+283,"registers_io_regs_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+37,"registers_io_regs_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_17_MPORT_en", false,-1);
    tracep->declBus(c+284,"registers_io_regs_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+39,"registers_io_regs_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_18_MPORT_en", false,-1);
    tracep->declBus(c+285,"registers_io_regs_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+41,"registers_io_regs_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_19_MPORT_en", false,-1);
    tracep->declBus(c+286,"registers_io_regs_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+43,"registers_io_regs_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_20_MPORT_en", false,-1);
    tracep->declBus(c+287,"registers_io_regs_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+45,"registers_io_regs_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_21_MPORT_en", false,-1);
    tracep->declBus(c+288,"registers_io_regs_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+47,"registers_io_regs_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_22_MPORT_en", false,-1);
    tracep->declBus(c+289,"registers_io_regs_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+49,"registers_io_regs_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_23_MPORT_en", false,-1);
    tracep->declBus(c+290,"registers_io_regs_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+51,"registers_io_regs_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_24_MPORT_en", false,-1);
    tracep->declBus(c+291,"registers_io_regs_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+53,"registers_io_regs_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_25_MPORT_en", false,-1);
    tracep->declBus(c+292,"registers_io_regs_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+55,"registers_io_regs_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_26_MPORT_en", false,-1);
    tracep->declBus(c+293,"registers_io_regs_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+57,"registers_io_regs_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_27_MPORT_en", false,-1);
    tracep->declBus(c+294,"registers_io_regs_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+59,"registers_io_regs_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_28_MPORT_en", false,-1);
    tracep->declBus(c+295,"registers_io_regs_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+61,"registers_io_regs_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_29_MPORT_en", false,-1);
    tracep->declBus(c+296,"registers_io_regs_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+63,"registers_io_regs_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_30_MPORT_en", false,-1);
    tracep->declBus(c+297,"registers_io_regs_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+65,"registers_io_regs_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+266,"registers_io_regs_31_MPORT_en", false,-1);
    tracep->declBus(c+298,"registers_io_regs_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+67,"registers_io_regs_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+260,"registers_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+235,"registers_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+266,"registers_MPORT_mask", false,-1);
    tracep->declBit(c+266,"registers_MPORT_en", false,-1);
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
    bufp->fullCData(oldp+3,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                              >> 0xfU)))),5);
    bufp->fullCData(oldp+4,((0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                              >> 0x14U)))),5);
    bufp->fullQData(oldp+5,(vlSelf->Top__DOT__registers__DOT__registers
                            [0U]),64);
    bufp->fullQData(oldp+7,(vlSelf->Top__DOT__registers__DOT__registers
                            [1U]),64);
    bufp->fullQData(oldp+9,(vlSelf->Top__DOT__registers__DOT__registers
                            [2U]),64);
    bufp->fullQData(oldp+11,(vlSelf->Top__DOT__registers__DOT__registers
                             [3U]),64);
    bufp->fullQData(oldp+13,(vlSelf->Top__DOT__registers__DOT__registers
                             [4U]),64);
    bufp->fullQData(oldp+15,(vlSelf->Top__DOT__registers__DOT__registers
                             [5U]),64);
    bufp->fullQData(oldp+17,(vlSelf->Top__DOT__registers__DOT__registers
                             [6U]),64);
    bufp->fullQData(oldp+19,(vlSelf->Top__DOT__registers__DOT__registers
                             [7U]),64);
    bufp->fullQData(oldp+21,(vlSelf->Top__DOT__registers__DOT__registers
                             [8U]),64);
    bufp->fullQData(oldp+23,(vlSelf->Top__DOT__registers__DOT__registers
                             [9U]),64);
    bufp->fullQData(oldp+25,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xaU]),64);
    bufp->fullQData(oldp+27,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xbU]),64);
    bufp->fullQData(oldp+29,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xcU]),64);
    bufp->fullQData(oldp+31,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xdU]),64);
    bufp->fullQData(oldp+33,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xeU]),64);
    bufp->fullQData(oldp+35,(vlSelf->Top__DOT__registers__DOT__registers
                             [0xfU]),64);
    bufp->fullQData(oldp+37,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x10U]),64);
    bufp->fullQData(oldp+39,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x11U]),64);
    bufp->fullQData(oldp+41,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x12U]),64);
    bufp->fullQData(oldp+43,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x13U]),64);
    bufp->fullQData(oldp+45,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x14U]),64);
    bufp->fullQData(oldp+47,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x15U]),64);
    bufp->fullQData(oldp+49,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x16U]),64);
    bufp->fullQData(oldp+51,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x17U]),64);
    bufp->fullQData(oldp+53,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x18U]),64);
    bufp->fullQData(oldp+55,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x19U]),64);
    bufp->fullQData(oldp+57,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1aU]),64);
    bufp->fullQData(oldp+59,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1bU]),64);
    bufp->fullQData(oldp+61,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1cU]),64);
    bufp->fullQData(oldp+63,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1dU]),64);
    bufp->fullQData(oldp+65,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1eU]),64);
    bufp->fullQData(oldp+67,(vlSelf->Top__DOT__registers__DOT__registers
                             [0x1fU]),64);
    bufp->fullQData(oldp+69,(vlSelf->Top__DOT__PC__DOT__init),64);
    bufp->fullCData(oldp+71,(vlSelf->Top__DOT__decoder__DOT__ImmType),3);
    bufp->fullQData(oldp+72,(((((1U & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
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
    bufp->fullWData(oldp+74,(__Vtemp_h554601a6__0),76);
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
    bufp->fullWData(oldp+77,(__Vtemp_ha10d091d__0),84);
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
    bufp->fullWData(oldp+80,(__Vtemp_h9ebd919b__0),76);
    bufp->fullQData(oldp+83,(vlSelf->Top__DOT__dpi__DOT__rf[0]),64);
    bufp->fullQData(oldp+85,(vlSelf->Top__DOT__dpi__DOT__rf[1]),64);
    bufp->fullQData(oldp+87,(vlSelf->Top__DOT__dpi__DOT__rf[2]),64);
    bufp->fullQData(oldp+89,(vlSelf->Top__DOT__dpi__DOT__rf[3]),64);
    bufp->fullQData(oldp+91,(vlSelf->Top__DOT__dpi__DOT__rf[4]),64);
    bufp->fullQData(oldp+93,(vlSelf->Top__DOT__dpi__DOT__rf[5]),64);
    bufp->fullQData(oldp+95,(vlSelf->Top__DOT__dpi__DOT__rf[6]),64);
    bufp->fullQData(oldp+97,(vlSelf->Top__DOT__dpi__DOT__rf[7]),64);
    bufp->fullQData(oldp+99,(vlSelf->Top__DOT__dpi__DOT__rf[8]),64);
    bufp->fullQData(oldp+101,(vlSelf->Top__DOT__dpi__DOT__rf[9]),64);
    bufp->fullQData(oldp+103,(vlSelf->Top__DOT__dpi__DOT__rf[10]),64);
    bufp->fullQData(oldp+105,(vlSelf->Top__DOT__dpi__DOT__rf[11]),64);
    bufp->fullQData(oldp+107,(vlSelf->Top__DOT__dpi__DOT__rf[12]),64);
    bufp->fullQData(oldp+109,(vlSelf->Top__DOT__dpi__DOT__rf[13]),64);
    bufp->fullQData(oldp+111,(vlSelf->Top__DOT__dpi__DOT__rf[14]),64);
    bufp->fullQData(oldp+113,(vlSelf->Top__DOT__dpi__DOT__rf[15]),64);
    bufp->fullQData(oldp+115,(vlSelf->Top__DOT__dpi__DOT__rf[16]),64);
    bufp->fullQData(oldp+117,(vlSelf->Top__DOT__dpi__DOT__rf[17]),64);
    bufp->fullQData(oldp+119,(vlSelf->Top__DOT__dpi__DOT__rf[18]),64);
    bufp->fullQData(oldp+121,(vlSelf->Top__DOT__dpi__DOT__rf[19]),64);
    bufp->fullQData(oldp+123,(vlSelf->Top__DOT__dpi__DOT__rf[20]),64);
    bufp->fullQData(oldp+125,(vlSelf->Top__DOT__dpi__DOT__rf[21]),64);
    bufp->fullQData(oldp+127,(vlSelf->Top__DOT__dpi__DOT__rf[22]),64);
    bufp->fullQData(oldp+129,(vlSelf->Top__DOT__dpi__DOT__rf[23]),64);
    bufp->fullQData(oldp+131,(vlSelf->Top__DOT__dpi__DOT__rf[24]),64);
    bufp->fullQData(oldp+133,(vlSelf->Top__DOT__dpi__DOT__rf[25]),64);
    bufp->fullQData(oldp+135,(vlSelf->Top__DOT__dpi__DOT__rf[26]),64);
    bufp->fullQData(oldp+137,(vlSelf->Top__DOT__dpi__DOT__rf[27]),64);
    bufp->fullQData(oldp+139,(vlSelf->Top__DOT__dpi__DOT__rf[28]),64);
    bufp->fullQData(oldp+141,(vlSelf->Top__DOT__dpi__DOT__rf[29]),64);
    bufp->fullQData(oldp+143,(vlSelf->Top__DOT__dpi__DOT__rf[30]),64);
    bufp->fullQData(oldp+145,(vlSelf->Top__DOT__dpi__DOT__rf[31]),64);
    bufp->fullQData(oldp+147,(vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata),64);
    bufp->fullQData(oldp+149,(vlSelf->Top__DOT__mem__DOT__data_mem_rdata),64);
    bufp->fullQData(oldp+151,(vlSelf->Top__DOT__registers__DOT__registers[0]),64);
    bufp->fullQData(oldp+153,(vlSelf->Top__DOT__registers__DOT__registers[1]),64);
    bufp->fullQData(oldp+155,(vlSelf->Top__DOT__registers__DOT__registers[2]),64);
    bufp->fullQData(oldp+157,(vlSelf->Top__DOT__registers__DOT__registers[3]),64);
    bufp->fullQData(oldp+159,(vlSelf->Top__DOT__registers__DOT__registers[4]),64);
    bufp->fullQData(oldp+161,(vlSelf->Top__DOT__registers__DOT__registers[5]),64);
    bufp->fullQData(oldp+163,(vlSelf->Top__DOT__registers__DOT__registers[6]),64);
    bufp->fullQData(oldp+165,(vlSelf->Top__DOT__registers__DOT__registers[7]),64);
    bufp->fullQData(oldp+167,(vlSelf->Top__DOT__registers__DOT__registers[8]),64);
    bufp->fullQData(oldp+169,(vlSelf->Top__DOT__registers__DOT__registers[9]),64);
    bufp->fullQData(oldp+171,(vlSelf->Top__DOT__registers__DOT__registers[10]),64);
    bufp->fullQData(oldp+173,(vlSelf->Top__DOT__registers__DOT__registers[11]),64);
    bufp->fullQData(oldp+175,(vlSelf->Top__DOT__registers__DOT__registers[12]),64);
    bufp->fullQData(oldp+177,(vlSelf->Top__DOT__registers__DOT__registers[13]),64);
    bufp->fullQData(oldp+179,(vlSelf->Top__DOT__registers__DOT__registers[14]),64);
    bufp->fullQData(oldp+181,(vlSelf->Top__DOT__registers__DOT__registers[15]),64);
    bufp->fullQData(oldp+183,(vlSelf->Top__DOT__registers__DOT__registers[16]),64);
    bufp->fullQData(oldp+185,(vlSelf->Top__DOT__registers__DOT__registers[17]),64);
    bufp->fullQData(oldp+187,(vlSelf->Top__DOT__registers__DOT__registers[18]),64);
    bufp->fullQData(oldp+189,(vlSelf->Top__DOT__registers__DOT__registers[19]),64);
    bufp->fullQData(oldp+191,(vlSelf->Top__DOT__registers__DOT__registers[20]),64);
    bufp->fullQData(oldp+193,(vlSelf->Top__DOT__registers__DOT__registers[21]),64);
    bufp->fullQData(oldp+195,(vlSelf->Top__DOT__registers__DOT__registers[22]),64);
    bufp->fullQData(oldp+197,(vlSelf->Top__DOT__registers__DOT__registers[23]),64);
    bufp->fullQData(oldp+199,(vlSelf->Top__DOT__registers__DOT__registers[24]),64);
    bufp->fullQData(oldp+201,(vlSelf->Top__DOT__registers__DOT__registers[25]),64);
    bufp->fullQData(oldp+203,(vlSelf->Top__DOT__registers__DOT__registers[26]),64);
    bufp->fullQData(oldp+205,(vlSelf->Top__DOT__registers__DOT__registers[27]),64);
    bufp->fullQData(oldp+207,(vlSelf->Top__DOT__registers__DOT__registers[28]),64);
    bufp->fullQData(oldp+209,(vlSelf->Top__DOT__registers__DOT__registers[29]),64);
    bufp->fullQData(oldp+211,(vlSelf->Top__DOT__registers__DOT__registers[30]),64);
    bufp->fullQData(oldp+213,(vlSelf->Top__DOT__registers__DOT__registers[31]),64);
    bufp->fullQData(oldp+215,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data),64);
    bufp->fullQData(oldp+217,(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data),64);
    bufp->fullBit(oldp+219,(vlSelf->clock));
    bufp->fullBit(oldp+220,(vlSelf->reset));
    bufp->fullQData(oldp+221,(vlSelf->io_pc),64);
    bufp->fullBit(oldp+223,(vlSelf->io_ctrl_RegWen));
    bufp->fullCData(oldp+224,(vlSelf->io_ctrl_OP),8);
    bufp->fullBit(oldp+225,(vlSelf->io_ctrl_J_JUMP));
    bufp->fullBit(oldp+226,(vlSelf->io_ctrl_MemWen));
    bufp->fullCData(oldp+227,(vlSelf->io_ctrl_wmask),8);
    bufp->fullBit(oldp+228,(vlSelf->io_ctrl_MemLoad));
    bufp->fullQData(oldp+229,(vlSelf->io_resultALU),64);
    bufp->fullQData(oldp+231,(vlSelf->io_rs1),64);
    bufp->fullQData(oldp+233,(vlSelf->io_rs2),64);
    bufp->fullCData(oldp+235,(vlSelf->io_rd),5);
    bufp->fullQData(oldp+236,(vlSelf->io_imm),64);
    bufp->fullCData(oldp+238,(vlSelf->io_op),8);
    bufp->fullBit(oldp+239,(vlSelf->io_MemWen));
    bufp->fullBit(oldp+240,(vlSelf->io_MemLoad));
    bufp->fullIData(oldp+241,(vlSelf->io_inst),32);
    bufp->fullBit(oldp+242,(vlSelf->io_is_b));
    bufp->fullCData(oldp+243,(vlSelf->io_wmask),8);
    bufp->fullQData(oldp+244,(vlSelf->io_rdata),64);
    bufp->fullQData(oldp+246,(vlSelf->io_fmemwdata),64);
    bufp->fullQData(oldp+248,(((0x1bU == (IData)(vlSelf->io_ctrl_OP))
                                ? (0xfffffffffffffffeULL 
                                   & vlSelf->Top__DOT__alu__DOT___result_T_128)
                                : ((0x3aU == (IData)(vlSelf->io_ctrl_OP))
                                    ? vlSelf->Top__DOT__alu__DOT___result_T_205
                                    : 0ULL))),64);
    bufp->fullQData(oldp+250,((QData)((IData)(vlSelf->io_is_b))),64);
    bufp->fullIData(oldp+252,(((0x3bU == (IData)(vlSelf->io_ctrl_OP))
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
    bufp->fullWData(oldp+253,(__Vtemp_h67e2dbbd__0),69);
    bufp->fullQData(oldp+256,((QData)((IData)(vlSelf->io_inst))),64);
    bufp->fullQData(oldp+258,(vlSelf->Top__DOT__registers__DOT__registers
                              [vlSelf->io_rd]),64);
    bufp->fullQData(oldp+260,((((IData)(vlSelf->io_ctrl_RegWen) 
                                & (0U != (IData)(vlSelf->io_rd)))
                                ? vlSelf->io_fmemwdata
                                : vlSelf->Top__DOT__registers__DOT__registers
                               [vlSelf->io_rd])),64);
    bufp->fullQData(oldp+262,(0ULL),64);
    bufp->fullCData(oldp+264,(0U),8);
    bufp->fullBit(oldp+265,(0U));
    bufp->fullBit(oldp+266,(1U));
    bufp->fullCData(oldp+267,(0U),5);
    bufp->fullCData(oldp+268,(1U),5);
    bufp->fullCData(oldp+269,(2U),5);
    bufp->fullCData(oldp+270,(3U),5);
    bufp->fullCData(oldp+271,(4U),5);
    bufp->fullCData(oldp+272,(5U),5);
    bufp->fullCData(oldp+273,(6U),5);
    bufp->fullCData(oldp+274,(7U),5);
    bufp->fullCData(oldp+275,(8U),5);
    bufp->fullCData(oldp+276,(9U),5);
    bufp->fullCData(oldp+277,(0xaU),5);
    bufp->fullCData(oldp+278,(0xbU),5);
    bufp->fullCData(oldp+279,(0xcU),5);
    bufp->fullCData(oldp+280,(0xdU),5);
    bufp->fullCData(oldp+281,(0xeU),5);
    bufp->fullCData(oldp+282,(0xfU),5);
    bufp->fullCData(oldp+283,(0x10U),5);
    bufp->fullCData(oldp+284,(0x11U),5);
    bufp->fullCData(oldp+285,(0x12U),5);
    bufp->fullCData(oldp+286,(0x13U),5);
    bufp->fullCData(oldp+287,(0x14U),5);
    bufp->fullCData(oldp+288,(0x15U),5);
    bufp->fullCData(oldp+289,(0x16U),5);
    bufp->fullCData(oldp+290,(0x17U),5);
    bufp->fullCData(oldp+291,(0x18U),5);
    bufp->fullCData(oldp+292,(0x19U),5);
    bufp->fullCData(oldp+293,(0x1aU),5);
    bufp->fullCData(oldp+294,(0x1bU),5);
    bufp->fullCData(oldp+295,(0x1cU),5);
    bufp->fullCData(oldp+296,(0x1dU),5);
    bufp->fullCData(oldp+297,(0x1eU),5);
    bufp->fullCData(oldp+298,(0x1fU),5);
}
