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
    tracep->declBit(c+165,"clock", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBus(c+167,"io_fs_pc", false,-1, 31,0);
    tracep->declBus(c+168,"io_op", false,-1, 6,0);
    tracep->declBit(c+169,"io_in_WB", false,-1);
    tracep->declBus(c+170,"io_wb_pc", false,-1, 31,0);
    tracep->declBus(c+171,"io_wb_inst", false,-1, 31,0);
    tracep->declBus(c+172,"io_ds_pc", false,-1, 31,0);
    tracep->declBit(c+173,"io_clock", false,-1);
    tracep->declQuad(c+174,"io_mem_result", false,-1, 63,0);
    tracep->declBus(c+176,"io_ld_type", false,-1, 2,0);
    tracep->pushNamePrefix("Top ");
    tracep->declBit(c+165,"clock", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBus(c+167,"io_fs_pc", false,-1, 31,0);
    tracep->declBus(c+168,"io_op", false,-1, 6,0);
    tracep->declBit(c+169,"io_in_WB", false,-1);
    tracep->declBus(c+170,"io_wb_pc", false,-1, 31,0);
    tracep->declBus(c+171,"io_wb_inst", false,-1, 31,0);
    tracep->declBus(c+172,"io_ds_pc", false,-1, 31,0);
    tracep->declBit(c+173,"io_clock", false,-1);
    tracep->declQuad(c+174,"io_mem_result", false,-1, 63,0);
    tracep->declBus(c+176,"io_ld_type", false,-1, 2,0);
    tracep->declBit(c+165,"ifu_clock", false,-1);
    tracep->declBit(c+166,"ifu_reset", false,-1);
    tracep->declBus(c+167,"ifu_io_fd_bus_pc", false,-1, 31,0);
    tracep->declQuad(c+177,"ifu_io_br_bus_csr_rdata", false,-1, 63,0);
    tracep->declBit(c+179,"ifu_io_br_bus_eval", false,-1);
    tracep->declBit(c+179,"ifu_io_br_bus_mret", false,-1);
    tracep->declBit(c+165,"idu_clock", false,-1);
    tracep->declBus(c+180,"idu_io_de_bus_OP", false,-1, 7,0);
    tracep->declBus(c+181,"idu_io_de_bus_csr_raddr", false,-1, 2,0);
    tracep->declBit(c+179,"idu_io_de_bus_csr_ren", false,-1);
    tracep->declQuad(c+177,"idu_io_br_bus_csr_rdata", false,-1, 63,0);
    tracep->declBit(c+179,"idu_io_br_bus_eval", false,-1);
    tracep->declBit(c+179,"idu_io_br_bus_mret", false,-1);
    tracep->declQuad(c+1,"mem_io_data_sram_rdata", false,-1, 63,0);
    tracep->declQuad(c+174,"mem_io_mem_result", false,-1, 63,0);
    tracep->declBus(c+181,"mem_io_ld_type", false,-1, 2,0);
    tracep->declQuad(c+177,"dpi_rf_0", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_1", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_2", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_3", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_4", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_5", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_6", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_7", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_8", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_9", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_10", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_11", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_12", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_13", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_14", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_15", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_16", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_17", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_18", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_19", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_20", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_21", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_22", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_23", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_24", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_25", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_26", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_27", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_28", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_29", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_30", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_rf_31", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_csr_0", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_csr_1", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_csr_2", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_csr_3", false,-1, 63,0);
    tracep->declQuad(c+177,"dpi_csr_4", false,-1, 63,0);
    tracep->declBus(c+182,"dpi_inst", false,-1, 31,0);
    tracep->declQuad(c+177,"dpi_pc", false,-1, 63,0);
    tracep->declBus(c+182,"dpi_eval", false,-1, 31,0);
    tracep->declQuad(c+1,"axi_io_rdata", false,-1, 63,0);
    tracep->declQuad(c+1,"axi_io_data_sram_rdata", false,-1, 63,0);
    tracep->declBit(c+173,"axi_mem_clock", false,-1);
    tracep->declBus(c+183,"axi_mem_arid", false,-1, 3,0);
    tracep->declQuad(c+177,"axi_mem_araddr", false,-1, 63,0);
    tracep->declBit(c+179,"axi_mem_arvalid", false,-1);
    tracep->declBit(c+3,"axi_mem_arready", false,-1);
    tracep->declQuad(c+1,"axi_mem_rdata", false,-1, 63,0);
    tracep->declBit(c+4,"axi_mem_rvalid", false,-1);
    tracep->declBit(c+179,"axi_mem_rready", false,-1);
    tracep->declBus(c+184,"axi_mem_awid", false,-1, 3,0);
    tracep->declQuad(c+177,"axi_mem_awaddr", false,-1, 63,0);
    tracep->declBit(c+179,"axi_mem_awvalid", false,-1);
    tracep->declBit(c+5,"axi_mem_awready", false,-1);
    tracep->declQuad(c+177,"axi_mem_wdata", false,-1, 63,0);
    tracep->declBus(c+185,"axi_mem_wstrb", false,-1, 7,0);
    tracep->declBit(c+179,"axi_mem_wvalid", false,-1);
    tracep->declBit(c+6,"axi_mem_wready", false,-1);
    tracep->declBit(c+6,"axi_mem_bvalid", false,-1);
    tracep->declBit(c+179,"axi_mem_bready", false,-1);
    tracep->pushNamePrefix("axi ");
    tracep->declQuad(c+1,"io_rdata", false,-1, 63,0);
    tracep->declQuad(c+1,"io_data_sram_rdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_mem ");
    tracep->declBit(c+173,"clock", false,-1);
    tracep->declBus(c+183,"arid", false,-1, 3,0);
    tracep->declQuad(c+177,"araddr", false,-1, 63,0);
    tracep->declBit(c+179,"arvalid", false,-1);
    tracep->declBit(c+3,"arready", false,-1);
    tracep->declQuad(c+1,"rdata", false,-1, 63,0);
    tracep->declBit(c+4,"rvalid", false,-1);
    tracep->declBit(c+179,"rready", false,-1);
    tracep->declBus(c+184,"awid", false,-1, 3,0);
    tracep->declQuad(c+177,"awaddr", false,-1, 63,0);
    tracep->declBit(c+179,"awvalid", false,-1);
    tracep->declBit(c+5,"awready", false,-1);
    tracep->declQuad(c+177,"wdata", false,-1, 63,0);
    tracep->declBus(c+185,"wstrb", false,-1, 7,0);
    tracep->declBit(c+179,"wvalid", false,-1);
    tracep->declBit(c+6,"wready", false,-1);
    tracep->declBit(c+6,"bvalid", false,-1);
    tracep->declBit(c+179,"bready", false,-1);
    tracep->declBus(c+186,"READ_AINIT", false,-1, 2,0);
    tracep->declBus(c+187,"READ_ARADDR", false,-1, 2,0);
    tracep->declBus(c+188,"READ_RDATA", false,-1, 2,0);
    tracep->declBus(c+7,"read_state", false,-1, 2,0);
    tracep->declBus(c+8,"read_next_state", false,-1, 2,0);
    tracep->declBit(c+9,"read_ainit", false,-1);
    tracep->declBit(c+3,"read_araddr", false,-1);
    tracep->declBit(c+4,"read_rdata", false,-1);
    tracep->declBus(c+186,"WRITE_AINIT", false,-1, 2,0);
    tracep->declBus(c+187,"WRITE_AWADDR", false,-1, 2,0);
    tracep->declBus(c+188,"WRITE_WDATA", false,-1, 2,0);
    tracep->declBus(c+189,"WRITE_BRESP", false,-1, 2,0);
    tracep->declBus(c+10,"write_state", false,-1, 2,0);
    tracep->declBus(c+11,"write_next_state", false,-1, 2,0);
    tracep->declBit(c+12,"write_ainit", false,-1);
    tracep->declBit(c+5,"write_awaddr", false,-1);
    tracep->declBit(c+13,"write_wdata", false,-1);
    tracep->declBit(c+6,"write_bresp", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi ");
    tracep->declQuad(c+177,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_17", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_18", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_19", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_20", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_21", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_22", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_23", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_24", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_25", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_26", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_27", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_28", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_29", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_30", false,-1, 63,0);
    tracep->declQuad(c+177,"rf_31", false,-1, 63,0);
    tracep->declQuad(c+177,"csr_0", false,-1, 63,0);
    tracep->declQuad(c+177,"csr_1", false,-1, 63,0);
    tracep->declQuad(c+177,"csr_2", false,-1, 63,0);
    tracep->declQuad(c+177,"csr_3", false,-1, 63,0);
    tracep->declQuad(c+177,"csr_4", false,-1, 63,0);
    tracep->declQuad(c+177,"inst", false,-1, 63,0);
    tracep->declQuad(c+177,"pc", false,-1, 63,0);
    tracep->declBit(c+179,"eval", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+165,"clock", false,-1);
    tracep->declBus(c+180,"io_de_bus_OP", false,-1, 7,0);
    tracep->declBus(c+181,"io_de_bus_csr_raddr", false,-1, 2,0);
    tracep->declBit(c+179,"io_de_bus_csr_ren", false,-1);
    tracep->declQuad(c+177,"io_br_bus_csr_rdata", false,-1, 63,0);
    tracep->declBit(c+179,"io_br_bus_eval", false,-1);
    tracep->declBit(c+179,"io_br_bus_mret", false,-1);
    tracep->declBit(c+165,"Registers_clock", false,-1);
    tracep->declBus(c+190,"Registers_io_rs1", false,-1, 4,0);
    tracep->declQuad(c+14,"Registers_io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+16,"Registers_io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+18,"Registers_io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+20,"Registers_io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+22,"Registers_io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+24,"Registers_io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+26,"Registers_io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+28,"Registers_io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+30,"Registers_io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+32,"Registers_io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+34,"Registers_io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+36,"Registers_io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+38,"Registers_io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+40,"Registers_io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+42,"Registers_io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+44,"Registers_io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+46,"Registers_io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+48,"Registers_io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+50,"Registers_io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+52,"Registers_io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+54,"Registers_io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+56,"Registers_io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+58,"Registers_io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+60,"Registers_io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+62,"Registers_io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+64,"Registers_io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+66,"Registers_io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+68,"Registers_io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+70,"Registers_io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+72,"Registers_io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+74,"Registers_io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+76,"Registers_io_regs_31", false,-1, 63,0);
    tracep->declBus(c+182,"DPI_EBREAK_flag", false,-1, 31,0);
    tracep->declBit(c+165,"CSR_clock", false,-1);
    tracep->declBit(c+179,"CSR_io_ren", false,-1);
    tracep->declQuad(c+177,"CSR_io_rdata", false,-1, 63,0);
    tracep->declBus(c+190,"CSR_io_raddr", false,-1, 4,0);
    tracep->declQuad(c+78,"CSR_io_csrs_0", false,-1, 63,0);
    tracep->declQuad(c+80,"CSR_io_csrs_1", false,-1, 63,0);
    tracep->declQuad(c+82,"CSR_io_csrs_2", false,-1, 63,0);
    tracep->declQuad(c+84,"CSR_io_csrs_3", false,-1, 63,0);
    tracep->declQuad(c+86,"CSR_io_csrs_4", false,-1, 63,0);
    tracep->declQuad(c+14,"dpi_rf_0", false,-1, 63,0);
    tracep->declQuad(c+16,"dpi_rf_1", false,-1, 63,0);
    tracep->declQuad(c+18,"dpi_rf_2", false,-1, 63,0);
    tracep->declQuad(c+20,"dpi_rf_3", false,-1, 63,0);
    tracep->declQuad(c+22,"dpi_rf_4", false,-1, 63,0);
    tracep->declQuad(c+24,"dpi_rf_5", false,-1, 63,0);
    tracep->declQuad(c+26,"dpi_rf_6", false,-1, 63,0);
    tracep->declQuad(c+28,"dpi_rf_7", false,-1, 63,0);
    tracep->declQuad(c+30,"dpi_rf_8", false,-1, 63,0);
    tracep->declQuad(c+32,"dpi_rf_9", false,-1, 63,0);
    tracep->declQuad(c+34,"dpi_rf_10", false,-1, 63,0);
    tracep->declQuad(c+36,"dpi_rf_11", false,-1, 63,0);
    tracep->declQuad(c+38,"dpi_rf_12", false,-1, 63,0);
    tracep->declQuad(c+40,"dpi_rf_13", false,-1, 63,0);
    tracep->declQuad(c+42,"dpi_rf_14", false,-1, 63,0);
    tracep->declQuad(c+44,"dpi_rf_15", false,-1, 63,0);
    tracep->declQuad(c+46,"dpi_rf_16", false,-1, 63,0);
    tracep->declQuad(c+48,"dpi_rf_17", false,-1, 63,0);
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
    tracep->declQuad(c+78,"dpi_csr_0", false,-1, 63,0);
    tracep->declQuad(c+80,"dpi_csr_1", false,-1, 63,0);
    tracep->declQuad(c+82,"dpi_csr_2", false,-1, 63,0);
    tracep->declQuad(c+84,"dpi_csr_3", false,-1, 63,0);
    tracep->declQuad(c+86,"dpi_csr_4", false,-1, 63,0);
    tracep->declBus(c+182,"dpi_inst", false,-1, 31,0);
    tracep->declQuad(c+177,"dpi_pc", false,-1, 63,0);
    tracep->declBus(c+182,"dpi_eval", false,-1, 31,0);
    tracep->declBit(c+179,"eval", false,-1);
    tracep->declBit(c+179,"mret", false,-1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+165,"clock", false,-1);
    tracep->declBit(c+179,"io_ren", false,-1);
    tracep->declQuad(c+177,"io_rdata", false,-1, 63,0);
    tracep->declBus(c+190,"io_raddr", false,-1, 4,0);
    tracep->declQuad(c+78,"io_csrs_0", false,-1, 63,0);
    tracep->declQuad(c+80,"io_csrs_1", false,-1, 63,0);
    tracep->declQuad(c+82,"io_csrs_2", false,-1, 63,0);
    tracep->declQuad(c+84,"io_csrs_3", false,-1, 63,0);
    tracep->declQuad(c+86,"io_csrs_4", false,-1, 63,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+88+i*2,"csr", true,(i+0), 63,0);
    }
    tracep->declBit(c+191,"csr_io_rdata_MPORT_en", false,-1);
    tracep->declBus(c+181,"csr_io_rdata_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+78,"csr_io_rdata_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"csr_MPORT_1_en", false,-1);
    tracep->declBus(c+181,"csr_MPORT_1_addr", false,-1, 2,0);
    tracep->declQuad(c+78,"csr_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+191,"csr_MPORT_3_en", false,-1);
    tracep->declBus(c+181,"csr_MPORT_3_addr", false,-1, 2,0);
    tracep->declQuad(c+78,"csr_MPORT_3_data", false,-1, 63,0);
    tracep->declBit(c+191,"csr_io_csrs_0_MPORT_en", false,-1);
    tracep->declBus(c+181,"csr_io_csrs_0_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+78,"csr_io_csrs_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"csr_io_csrs_1_MPORT_en", false,-1);
    tracep->declBus(c+186,"csr_io_csrs_1_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+80,"csr_io_csrs_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"csr_io_csrs_2_MPORT_en", false,-1);
    tracep->declBus(c+187,"csr_io_csrs_2_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+82,"csr_io_csrs_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"csr_io_csrs_3_MPORT_en", false,-1);
    tracep->declBus(c+188,"csr_io_csrs_3_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+84,"csr_io_csrs_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"csr_io_csrs_4_MPORT_en", false,-1);
    tracep->declBus(c+189,"csr_io_csrs_4_MPORT_addr", false,-1, 2,0);
    tracep->declQuad(c+86,"csr_io_csrs_4_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+78,"csr_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+181,"csr_MPORT_addr", false,-1, 2,0);
    tracep->declBit(c+191,"csr_MPORT_mask", false,-1);
    tracep->declBit(c+191,"csr_MPORT_en", false,-1);
    tracep->declQuad(c+78,"csr_MPORT_2_data", false,-1, 63,0);
    tracep->declBus(c+181,"csr_MPORT_2_addr", false,-1, 2,0);
    tracep->declBit(c+191,"csr_MPORT_2_mask", false,-1);
    tracep->declBit(c+191,"csr_MPORT_2_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DPI_EBREAK ");
    tracep->declBus(c+182,"flag", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Registers ");
    tracep->declBit(c+165,"clock", false,-1);
    tracep->declBus(c+190,"io_rs1", false,-1, 4,0);
    tracep->declQuad(c+14,"io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+16,"io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+18,"io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+20,"io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+22,"io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+24,"io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+26,"io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+28,"io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+30,"io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+32,"io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+34,"io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+36,"io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+38,"io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+40,"io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+42,"io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+44,"io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+46,"io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+48,"io_regs_17", false,-1, 63,0);
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
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+98+i*2,"registers", true,(i+0), 63,0);
    }
    tracep->declBit(c+191,"registers_io_rdata1_MPORT_en", false,-1);
    tracep->declBus(c+190,"registers_io_rdata1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+14,"registers_io_rdata1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_rdata2_MPORT_en", false,-1);
    tracep->declBus(c+190,"registers_io_rdata2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+14,"registers_io_rdata2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_reg17_MPORT_en", false,-1);
    tracep->declBus(c+192,"registers_io_reg17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+48,"registers_io_reg17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_MPORT_1_en", false,-1);
    tracep->declBus(c+190,"registers_MPORT_1_addr", false,-1, 4,0);
    tracep->declQuad(c+14,"registers_MPORT_1_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_0_MPORT_en", false,-1);
    tracep->declBus(c+190,"registers_io_regs_0_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+14,"registers_io_regs_0_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_1_MPORT_en", false,-1);
    tracep->declBus(c+193,"registers_io_regs_1_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+16,"registers_io_regs_1_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_2_MPORT_en", false,-1);
    tracep->declBus(c+194,"registers_io_regs_2_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+18,"registers_io_regs_2_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_3_MPORT_en", false,-1);
    tracep->declBus(c+195,"registers_io_regs_3_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+20,"registers_io_regs_3_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_4_MPORT_en", false,-1);
    tracep->declBus(c+196,"registers_io_regs_4_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+22,"registers_io_regs_4_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_5_MPORT_en", false,-1);
    tracep->declBus(c+197,"registers_io_regs_5_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+24,"registers_io_regs_5_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_6_MPORT_en", false,-1);
    tracep->declBus(c+198,"registers_io_regs_6_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+26,"registers_io_regs_6_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_7_MPORT_en", false,-1);
    tracep->declBus(c+199,"registers_io_regs_7_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+28,"registers_io_regs_7_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_8_MPORT_en", false,-1);
    tracep->declBus(c+200,"registers_io_regs_8_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+30,"registers_io_regs_8_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_9_MPORT_en", false,-1);
    tracep->declBus(c+201,"registers_io_regs_9_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+32,"registers_io_regs_9_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_10_MPORT_en", false,-1);
    tracep->declBus(c+202,"registers_io_regs_10_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+34,"registers_io_regs_10_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_11_MPORT_en", false,-1);
    tracep->declBus(c+203,"registers_io_regs_11_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+36,"registers_io_regs_11_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_12_MPORT_en", false,-1);
    tracep->declBus(c+204,"registers_io_regs_12_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+38,"registers_io_regs_12_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_13_MPORT_en", false,-1);
    tracep->declBus(c+205,"registers_io_regs_13_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+40,"registers_io_regs_13_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_14_MPORT_en", false,-1);
    tracep->declBus(c+206,"registers_io_regs_14_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+42,"registers_io_regs_14_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_15_MPORT_en", false,-1);
    tracep->declBus(c+207,"registers_io_regs_15_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+44,"registers_io_regs_15_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_16_MPORT_en", false,-1);
    tracep->declBus(c+208,"registers_io_regs_16_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+46,"registers_io_regs_16_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_17_MPORT_en", false,-1);
    tracep->declBus(c+192,"registers_io_regs_17_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+48,"registers_io_regs_17_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_18_MPORT_en", false,-1);
    tracep->declBus(c+209,"registers_io_regs_18_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+50,"registers_io_regs_18_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_19_MPORT_en", false,-1);
    tracep->declBus(c+210,"registers_io_regs_19_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+52,"registers_io_regs_19_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_20_MPORT_en", false,-1);
    tracep->declBus(c+211,"registers_io_regs_20_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+54,"registers_io_regs_20_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_21_MPORT_en", false,-1);
    tracep->declBus(c+212,"registers_io_regs_21_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+56,"registers_io_regs_21_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_22_MPORT_en", false,-1);
    tracep->declBus(c+213,"registers_io_regs_22_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+58,"registers_io_regs_22_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_23_MPORT_en", false,-1);
    tracep->declBus(c+214,"registers_io_regs_23_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+60,"registers_io_regs_23_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_24_MPORT_en", false,-1);
    tracep->declBus(c+215,"registers_io_regs_24_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+62,"registers_io_regs_24_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_25_MPORT_en", false,-1);
    tracep->declBus(c+216,"registers_io_regs_25_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+64,"registers_io_regs_25_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_26_MPORT_en", false,-1);
    tracep->declBus(c+217,"registers_io_regs_26_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+66,"registers_io_regs_26_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_27_MPORT_en", false,-1);
    tracep->declBus(c+218,"registers_io_regs_27_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+68,"registers_io_regs_27_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_28_MPORT_en", false,-1);
    tracep->declBus(c+219,"registers_io_regs_28_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+70,"registers_io_regs_28_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_29_MPORT_en", false,-1);
    tracep->declBus(c+220,"registers_io_regs_29_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+72,"registers_io_regs_29_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_30_MPORT_en", false,-1);
    tracep->declBus(c+221,"registers_io_regs_30_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+74,"registers_io_regs_30_MPORT_data", false,-1, 63,0);
    tracep->declBit(c+191,"registers_io_regs_31_MPORT_en", false,-1);
    tracep->declBus(c+222,"registers_io_regs_31_MPORT_addr", false,-1, 4,0);
    tracep->declQuad(c+76,"registers_io_regs_31_MPORT_data", false,-1, 63,0);
    tracep->declQuad(c+14,"registers_MPORT_data", false,-1, 63,0);
    tracep->declBus(c+190,"registers_MPORT_addr", false,-1, 4,0);
    tracep->declBit(c+191,"registers_MPORT_mask", false,-1);
    tracep->declBit(c+191,"registers_MPORT_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi ");
    tracep->declQuad(c+14,"rf_0", false,-1, 63,0);
    tracep->declQuad(c+16,"rf_1", false,-1, 63,0);
    tracep->declQuad(c+18,"rf_2", false,-1, 63,0);
    tracep->declQuad(c+20,"rf_3", false,-1, 63,0);
    tracep->declQuad(c+22,"rf_4", false,-1, 63,0);
    tracep->declQuad(c+24,"rf_5", false,-1, 63,0);
    tracep->declQuad(c+26,"rf_6", false,-1, 63,0);
    tracep->declQuad(c+28,"rf_7", false,-1, 63,0);
    tracep->declQuad(c+30,"rf_8", false,-1, 63,0);
    tracep->declQuad(c+32,"rf_9", false,-1, 63,0);
    tracep->declQuad(c+34,"rf_10", false,-1, 63,0);
    tracep->declQuad(c+36,"rf_11", false,-1, 63,0);
    tracep->declQuad(c+38,"rf_12", false,-1, 63,0);
    tracep->declQuad(c+40,"rf_13", false,-1, 63,0);
    tracep->declQuad(c+42,"rf_14", false,-1, 63,0);
    tracep->declQuad(c+44,"rf_15", false,-1, 63,0);
    tracep->declQuad(c+46,"rf_16", false,-1, 63,0);
    tracep->declQuad(c+48,"rf_17", false,-1, 63,0);
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
    tracep->declQuad(c+78,"csr_0", false,-1, 63,0);
    tracep->declQuad(c+80,"csr_1", false,-1, 63,0);
    tracep->declQuad(c+82,"csr_2", false,-1, 63,0);
    tracep->declQuad(c+84,"csr_3", false,-1, 63,0);
    tracep->declQuad(c+86,"csr_4", false,-1, 63,0);
    tracep->declQuad(c+177,"inst", false,-1, 63,0);
    tracep->declQuad(c+177,"pc", false,-1, 63,0);
    tracep->declBit(c+179,"eval", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+165,"clock", false,-1);
    tracep->declBit(c+166,"reset", false,-1);
    tracep->declBus(c+167,"io_fd_bus_pc", false,-1, 31,0);
    tracep->declQuad(c+177,"io_br_bus_csr_rdata", false,-1, 63,0);
    tracep->declBit(c+179,"io_br_bus_eval", false,-1);
    tracep->declBit(c+179,"io_br_bus_mret", false,-1);
    tracep->declQuad(c+162,"fs_pc", false,-1, 63,0);
    tracep->declBus(c+164,"seq_pc", false,-1, 31,0);
    tracep->declBus(c+164,"nextpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem ");
    tracep->declQuad(c+1,"io_data_sram_rdata", false,-1, 63,0);
    tracep->declQuad(c+174,"io_mem_result", false,-1, 63,0);
    tracep->declBus(c+181,"io_ld_type", false,-1, 2,0);
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
    bufp->fullQData(oldp+1,(vlSelf->Top__DOT__axi_mem_rdata),64);
    bufp->fullBit(oldp+3,((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))));
    bufp->fullBit(oldp+4,((3U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))));
    bufp->fullBit(oldp+5,((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))));
    bufp->fullBit(oldp+6,((4U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))));
    bufp->fullCData(oldp+7,(vlSelf->Top__DOT__axi_mem__DOT__read_state),3);
    bufp->fullCData(oldp+8,(((1U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
                              ? 1U : ((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
                                       ? ((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
                                           ? 3U : 2U)
                                       : ((3U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
                                           ? 3U : 1U)))),3);
    bufp->fullBit(oldp+9,((1U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))));
    bufp->fullCData(oldp+10,(vlSelf->Top__DOT__axi_mem__DOT__write_state),3);
    bufp->fullCData(oldp+11,(vlSelf->Top__DOT__axi_mem__DOT__write_next_state),3);
    bufp->fullBit(oldp+12,((1U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))));
    bufp->fullBit(oldp+13,((3U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))));
    bufp->fullQData(oldp+14,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0U]),64);
    bufp->fullQData(oldp+16,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [1U]),64);
    bufp->fullQData(oldp+18,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [2U]),64);
    bufp->fullQData(oldp+20,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [3U]),64);
    bufp->fullQData(oldp+22,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [4U]),64);
    bufp->fullQData(oldp+24,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [5U]),64);
    bufp->fullQData(oldp+26,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [6U]),64);
    bufp->fullQData(oldp+28,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [7U]),64);
    bufp->fullQData(oldp+30,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [8U]),64);
    bufp->fullQData(oldp+32,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [9U]),64);
    bufp->fullQData(oldp+34,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0xaU]),64);
    bufp->fullQData(oldp+36,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0xbU]),64);
    bufp->fullQData(oldp+38,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0xcU]),64);
    bufp->fullQData(oldp+40,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0xdU]),64);
    bufp->fullQData(oldp+42,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0xeU]),64);
    bufp->fullQData(oldp+44,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0xfU]),64);
    bufp->fullQData(oldp+46,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x10U]),64);
    bufp->fullQData(oldp+48,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x11U]),64);
    bufp->fullQData(oldp+50,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x12U]),64);
    bufp->fullQData(oldp+52,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x13U]),64);
    bufp->fullQData(oldp+54,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x14U]),64);
    bufp->fullQData(oldp+56,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x15U]),64);
    bufp->fullQData(oldp+58,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x16U]),64);
    bufp->fullQData(oldp+60,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x17U]),64);
    bufp->fullQData(oldp+62,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x18U]),64);
    bufp->fullQData(oldp+64,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x19U]),64);
    bufp->fullQData(oldp+66,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x1aU]),64);
    bufp->fullQData(oldp+68,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x1bU]),64);
    bufp->fullQData(oldp+70,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x1cU]),64);
    bufp->fullQData(oldp+72,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x1dU]),64);
    bufp->fullQData(oldp+74,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x1eU]),64);
    bufp->fullQData(oldp+76,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                             [0x1fU]),64);
    bufp->fullQData(oldp+78,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                             [0U]),64);
    bufp->fullQData(oldp+80,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                             [1U]),64);
    bufp->fullQData(oldp+82,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                             [2U]),64);
    bufp->fullQData(oldp+84,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                             [3U]),64);
    bufp->fullQData(oldp+86,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                             [4U]),64);
    bufp->fullQData(oldp+88,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[0]),64);
    bufp->fullQData(oldp+90,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[1]),64);
    bufp->fullQData(oldp+92,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[2]),64);
    bufp->fullQData(oldp+94,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[3]),64);
    bufp->fullQData(oldp+96,(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[4]),64);
    bufp->fullQData(oldp+98,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[0]),64);
    bufp->fullQData(oldp+100,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[1]),64);
    bufp->fullQData(oldp+102,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[2]),64);
    bufp->fullQData(oldp+104,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[3]),64);
    bufp->fullQData(oldp+106,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[4]),64);
    bufp->fullQData(oldp+108,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[5]),64);
    bufp->fullQData(oldp+110,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[6]),64);
    bufp->fullQData(oldp+112,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[7]),64);
    bufp->fullQData(oldp+114,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[8]),64);
    bufp->fullQData(oldp+116,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[9]),64);
    bufp->fullQData(oldp+118,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[10]),64);
    bufp->fullQData(oldp+120,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[11]),64);
    bufp->fullQData(oldp+122,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[12]),64);
    bufp->fullQData(oldp+124,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[13]),64);
    bufp->fullQData(oldp+126,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[14]),64);
    bufp->fullQData(oldp+128,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[15]),64);
    bufp->fullQData(oldp+130,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[16]),64);
    bufp->fullQData(oldp+132,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[17]),64);
    bufp->fullQData(oldp+134,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[18]),64);
    bufp->fullQData(oldp+136,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[19]),64);
    bufp->fullQData(oldp+138,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[20]),64);
    bufp->fullQData(oldp+140,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[21]),64);
    bufp->fullQData(oldp+142,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[22]),64);
    bufp->fullQData(oldp+144,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[23]),64);
    bufp->fullQData(oldp+146,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[24]),64);
    bufp->fullQData(oldp+148,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[25]),64);
    bufp->fullQData(oldp+150,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[26]),64);
    bufp->fullQData(oldp+152,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[27]),64);
    bufp->fullQData(oldp+154,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[28]),64);
    bufp->fullQData(oldp+156,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[29]),64);
    bufp->fullQData(oldp+158,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[30]),64);
    bufp->fullQData(oldp+160,(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[31]),64);
    bufp->fullQData(oldp+162,(vlSelf->Top__DOT__ifu__DOT__fs_pc),64);
    bufp->fullIData(oldp+164,(((IData)(4U) + (IData)(vlSelf->Top__DOT__ifu__DOT__fs_pc))),32);
    bufp->fullBit(oldp+165,(vlSelf->clock));
    bufp->fullBit(oldp+166,(vlSelf->reset));
    bufp->fullIData(oldp+167,(vlSelf->io_fs_pc),32);
    bufp->fullCData(oldp+168,(vlSelf->io_op),7);
    bufp->fullBit(oldp+169,(vlSelf->io_in_WB));
    bufp->fullIData(oldp+170,(vlSelf->io_wb_pc),32);
    bufp->fullIData(oldp+171,(vlSelf->io_wb_inst),32);
    bufp->fullIData(oldp+172,(vlSelf->io_ds_pc),32);
    bufp->fullBit(oldp+173,(vlSelf->io_clock));
    bufp->fullQData(oldp+174,(vlSelf->io_mem_result),64);
    bufp->fullCData(oldp+176,(vlSelf->io_ld_type),3);
    bufp->fullQData(oldp+177,(0ULL),64);
    bufp->fullBit(oldp+179,(0U));
    bufp->fullCData(oldp+180,(0xffU),8);
    bufp->fullCData(oldp+181,(0U),3);
    bufp->fullIData(oldp+182,(0U),32);
    bufp->fullCData(oldp+183,(2U),4);
    bufp->fullCData(oldp+184,(1U),4);
    bufp->fullCData(oldp+185,(0U),8);
    bufp->fullCData(oldp+186,(1U),3);
    bufp->fullCData(oldp+187,(2U),3);
    bufp->fullCData(oldp+188,(3U),3);
    bufp->fullCData(oldp+189,(4U),3);
    bufp->fullCData(oldp+190,(0U),5);
    bufp->fullBit(oldp+191,(1U));
    bufp->fullCData(oldp+192,(0x11U),5);
    bufp->fullCData(oldp+193,(1U),5);
    bufp->fullCData(oldp+194,(2U),5);
    bufp->fullCData(oldp+195,(3U),5);
    bufp->fullCData(oldp+196,(4U),5);
    bufp->fullCData(oldp+197,(5U),5);
    bufp->fullCData(oldp+198,(6U),5);
    bufp->fullCData(oldp+199,(7U),5);
    bufp->fullCData(oldp+200,(8U),5);
    bufp->fullCData(oldp+201,(9U),5);
    bufp->fullCData(oldp+202,(0xaU),5);
    bufp->fullCData(oldp+203,(0xbU),5);
    bufp->fullCData(oldp+204,(0xcU),5);
    bufp->fullCData(oldp+205,(0xdU),5);
    bufp->fullCData(oldp+206,(0xeU),5);
    bufp->fullCData(oldp+207,(0xfU),5);
    bufp->fullCData(oldp+208,(0x10U),5);
    bufp->fullCData(oldp+209,(0x12U),5);
    bufp->fullCData(oldp+210,(0x13U),5);
    bufp->fullCData(oldp+211,(0x14U),5);
    bufp->fullCData(oldp+212,(0x15U),5);
    bufp->fullCData(oldp+213,(0x16U),5);
    bufp->fullCData(oldp+214,(0x17U),5);
    bufp->fullCData(oldp+215,(0x18U),5);
    bufp->fullCData(oldp+216,(0x19U),5);
    bufp->fullCData(oldp+217,(0x1aU),5);
    bufp->fullCData(oldp+218,(0x1bU),5);
    bufp->fullCData(oldp+219,(0x1cU),5);
    bufp->fullCData(oldp+220,(0x1dU),5);
    bufp->fullCData(oldp+221,(0x1eU),5);
    bufp->fullCData(oldp+222,(0x1fU),5);
}
