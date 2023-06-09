module IFU(
  input         clock,
  input         reset,
  input         io_reset,
  output [31:0] io_fd_bus_inst,
  output [31:0] io_fd_bus_pc,
  input         io_ds_allowin,
  output        io_fs_to_ds_valid,
  input         io_br_bus_br_taken,
  input  [31:0] io_br_bus_br_target,
  input         io_br_bus_br_taken_cancel,
  input         io_br_bus_rawblock,
  input  [63:0] io_br_bus_csr_rdata,
  input         io_br_bus_eval,
  input         io_br_bus_mret,
  output        io_inst_sram_req,
  output [63:0] io_inst_sram_addr,
  input  [63:0] io_inst_sram_rdata,
  input         io_inst_sram_addr_ok,
  input         io_inst_sram_data_ok
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg  fs_valid; // @[IFU.scala 23:28]
  reg  mid_handshake_inst; // @[IFU.scala 28:35]
  reg  inst_valid; // @[IFU.scala 29:27]
  reg [31:0] fs_inst; // @[IFU.scala 30:24]
  reg [63:0] fs_pc; // @[IFU.scala 31:24]
  wire  prefs_ready_go = io_inst_sram_req & io_inst_sram_addr_ok; // @[IFU.scala 35:39]
  wire [63:0] _seq_pc_T_1 = fs_pc + 64'h4; // @[IFU.scala 53:19]
  wire [63:0] _nextpc_T_1 = io_br_bus_csr_rdata + 64'h4; // @[IFU.scala 54:54]
  wire [31:0] seq_pc = _seq_pc_T_1[31:0]; // @[IFU.scala 50:20 53:10]
  wire [31:0] _nextpc_T_2 = io_br_bus_br_taken ? io_br_bus_br_target : seq_pc; // @[IFU.scala 54:64]
  wire [63:0] _nextpc_T_3 = io_br_bus_mret ? _nextpc_T_1 : {{32'd0}, _nextpc_T_2}; // @[IFU.scala 54:37]
  wire [63:0] _nextpc_T_4 = io_br_bus_eval ? io_br_bus_csr_rdata : _nextpc_T_3; // @[IFU.scala 54:16]
  wire  _to_fs_valid_T = ~io_reset; // @[IFU.scala 56:24]
  wire  to_fs_valid = ~io_reset & prefs_ready_go; // @[IFU.scala 56:34]
  wire  fs_ready_go = io_inst_sram_data_ok | mid_handshake_inst; // @[IFU.scala 57:45]
  wire  _fs_allow_in_T_1 = fs_ready_go & io_ds_allowin; // @[IFU.scala 58:49]
  wire  fs_allow_in = ~fs_valid | fs_ready_go & io_ds_allowin; // @[IFU.scala 58:34]
  wire [31:0] nextpc = _nextpc_T_4[31:0]; // @[IFU.scala 51:20 54:10]
  wire  _GEN_3 = fs_allow_in ? 1'h0 : mid_handshake_inst; // @[IFU.scala 75:26 76:24 28:35]
  wire  _GEN_4 = io_inst_sram_addr_ok & io_inst_sram_req & ~fs_allow_in | _GEN_3; // @[IFU.scala 73:72 74:24]
  wire  _T_5 = ~io_ds_allowin; // @[IFU.scala 81:38]
  wire  _GEN_6 = io_inst_sram_data_ok & ~io_ds_allowin | inst_valid; // @[IFU.scala 81:53 82:16 29:27]
  assign io_fd_bus_inst = inst_valid ? fs_inst : io_inst_sram_rdata[31:0]; // @[IFU.scala 32:25]
  assign io_fd_bus_pc = fs_pc[31:0]; // @[IFU.scala 33:19]
  assign io_fs_to_ds_valid = fs_valid & fs_ready_go; // @[IFU.scala 59:33]
  assign io_inst_sram_req = _to_fs_valid_T & fs_allow_in & ~io_br_bus_rawblock & ~mid_handshake_inst; // @[IFU.scala 85:73]
  assign io_inst_sram_addr = fs_pc; // @[IFU.scala 87:22]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 23:28]
      fs_valid <= 1'h0; // @[IFU.scala 23:28]
    end else if (fs_allow_in) begin // @[IFU.scala 61:21]
      fs_valid <= to_fs_valid; // @[IFU.scala 62:14]
    end else if (io_br_bus_br_taken_cancel) begin // @[IFU.scala 63:31]
      fs_valid <= 1'h0; // @[IFU.scala 64:14]
    end
    if (reset) begin // @[IFU.scala 28:35]
      mid_handshake_inst <= 1'h0; // @[IFU.scala 28:35]
    end else if (io_inst_sram_data_ok) begin // @[IFU.scala 71:30]
      mid_handshake_inst <= 1'h0; // @[IFU.scala 72:24]
    end else begin
      mid_handshake_inst <= _GEN_4;
    end
    if (reset) begin // @[IFU.scala 29:27]
      inst_valid <= 1'h0; // @[IFU.scala 29:27]
    end else if (_fs_allow_in_T_1) begin // @[IFU.scala 79:37]
      inst_valid <= 1'h0; // @[IFU.scala 80:16]
    end else begin
      inst_valid <= _GEN_6;
    end
    if (reset) begin // @[IFU.scala 30:24]
      fs_inst <= 32'h0; // @[IFU.scala 30:24]
    end else if (fs_ready_go & _T_5 & io_inst_sram_data_ok) begin // @[IFU.scala 89:62]
      fs_inst <= io_inst_sram_rdata[31:0]; // @[IFU.scala 90:13]
    end
    if (reset) begin // @[IFU.scala 31:24]
      fs_pc <= 64'h80000000; // @[IFU.scala 31:24]
    end else if (fs_allow_in & io_inst_sram_data_ok) begin // @[IFU.scala 67:45]
      fs_pc <= {{32'd0}, nextpc}; // @[IFU.scala 68:11]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  fs_valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  mid_handshake_inst = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  inst_valid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  fs_inst = _RAND_3[31:0];
  _RAND_4 = {2{`RANDOM}};
  fs_pc = _RAND_4[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Registers(
  input         clock,
  input         io_wen,
  input  [63:0] io_wdata,
  output [63:0] io_rdata1,
  output [63:0] io_rdata2,
  input  [4:0]  io_rs1,
  input  [4:0]  io_rs2,
  input  [4:0]  io_waddr,
  output [63:0] io_regs_0,
  output [63:0] io_regs_1,
  output [63:0] io_regs_2,
  output [63:0] io_regs_3,
  output [63:0] io_regs_4,
  output [63:0] io_regs_5,
  output [63:0] io_regs_6,
  output [63:0] io_regs_7,
  output [63:0] io_regs_8,
  output [63:0] io_regs_9,
  output [63:0] io_regs_10,
  output [63:0] io_regs_11,
  output [63:0] io_regs_12,
  output [63:0] io_regs_13,
  output [63:0] io_regs_14,
  output [63:0] io_regs_15,
  output [63:0] io_regs_16,
  output [63:0] io_regs_17,
  output [63:0] io_regs_18,
  output [63:0] io_regs_19,
  output [63:0] io_regs_20,
  output [63:0] io_regs_21,
  output [63:0] io_regs_22,
  output [63:0] io_regs_23,
  output [63:0] io_regs_24,
  output [63:0] io_regs_25,
  output [63:0] io_regs_26,
  output [63:0] io_regs_27,
  output [63:0] io_regs_28,
  output [63:0] io_regs_29,
  output [63:0] io_regs_30,
  output [63:0] io_regs_31
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] registers [0:31]; // @[Registers.scala 22:22]
  wire  registers_io_rdata1_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_rdata1_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_rdata1_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_rdata2_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_rdata2_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_rdata2_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_reg17_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_reg17_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_reg17_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_MPORT_1_en; // @[Registers.scala 22:22]
  wire [4:0] registers_MPORT_1_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_MPORT_1_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_0_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_0_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_0_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_1_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_1_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_1_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_2_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_2_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_2_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_3_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_3_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_3_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_4_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_4_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_4_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_5_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_5_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_5_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_6_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_6_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_6_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_7_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_7_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_7_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_8_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_8_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_8_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_9_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_9_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_9_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_10_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_10_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_10_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_11_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_11_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_11_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_12_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_12_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_12_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_13_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_13_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_13_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_14_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_14_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_14_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_15_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_15_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_15_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_16_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_16_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_16_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_17_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_17_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_17_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_18_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_18_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_18_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_19_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_19_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_19_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_20_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_20_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_20_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_21_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_21_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_21_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_22_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_22_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_22_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_23_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_23_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_23_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_24_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_24_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_24_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_25_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_25_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_25_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_26_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_26_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_26_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_27_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_27_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_27_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_28_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_28_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_28_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_29_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_29_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_29_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_30_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_30_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_30_MPORT_data; // @[Registers.scala 22:22]
  wire  registers_io_regs_31_MPORT_en; // @[Registers.scala 22:22]
  wire [4:0] registers_io_regs_31_MPORT_addr; // @[Registers.scala 22:22]
  wire [63:0] registers_io_regs_31_MPORT_data; // @[Registers.scala 22:22]
  wire [63:0] registers_MPORT_data; // @[Registers.scala 22:22]
  wire [4:0] registers_MPORT_addr; // @[Registers.scala 22:22]
  wire  registers_MPORT_mask; // @[Registers.scala 22:22]
  wire  registers_MPORT_en; // @[Registers.scala 22:22]
  wire  _T_1 = io_wen & io_waddr != 5'h0; // @[Registers.scala 27:37]
  assign registers_io_rdata1_MPORT_en = 1'h1;
  assign registers_io_rdata1_MPORT_addr = io_rs1;
  assign registers_io_rdata1_MPORT_data = registers[registers_io_rdata1_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_rdata2_MPORT_en = 1'h1;
  assign registers_io_rdata2_MPORT_addr = io_rs2;
  assign registers_io_rdata2_MPORT_data = registers[registers_io_rdata2_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_reg17_MPORT_en = 1'h1;
  assign registers_io_reg17_MPORT_addr = 5'h11;
  assign registers_io_reg17_MPORT_data = registers[registers_io_reg17_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_MPORT_1_en = 1'h1;
  assign registers_MPORT_1_addr = io_waddr;
  assign registers_MPORT_1_data = registers[registers_MPORT_1_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_0_MPORT_en = 1'h1;
  assign registers_io_regs_0_MPORT_addr = 5'h0;
  assign registers_io_regs_0_MPORT_data = registers[registers_io_regs_0_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_1_MPORT_en = 1'h1;
  assign registers_io_regs_1_MPORT_addr = 5'h1;
  assign registers_io_regs_1_MPORT_data = registers[registers_io_regs_1_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_2_MPORT_en = 1'h1;
  assign registers_io_regs_2_MPORT_addr = 5'h2;
  assign registers_io_regs_2_MPORT_data = registers[registers_io_regs_2_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_3_MPORT_en = 1'h1;
  assign registers_io_regs_3_MPORT_addr = 5'h3;
  assign registers_io_regs_3_MPORT_data = registers[registers_io_regs_3_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_4_MPORT_en = 1'h1;
  assign registers_io_regs_4_MPORT_addr = 5'h4;
  assign registers_io_regs_4_MPORT_data = registers[registers_io_regs_4_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_5_MPORT_en = 1'h1;
  assign registers_io_regs_5_MPORT_addr = 5'h5;
  assign registers_io_regs_5_MPORT_data = registers[registers_io_regs_5_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_6_MPORT_en = 1'h1;
  assign registers_io_regs_6_MPORT_addr = 5'h6;
  assign registers_io_regs_6_MPORT_data = registers[registers_io_regs_6_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_7_MPORT_en = 1'h1;
  assign registers_io_regs_7_MPORT_addr = 5'h7;
  assign registers_io_regs_7_MPORT_data = registers[registers_io_regs_7_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_8_MPORT_en = 1'h1;
  assign registers_io_regs_8_MPORT_addr = 5'h8;
  assign registers_io_regs_8_MPORT_data = registers[registers_io_regs_8_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_9_MPORT_en = 1'h1;
  assign registers_io_regs_9_MPORT_addr = 5'h9;
  assign registers_io_regs_9_MPORT_data = registers[registers_io_regs_9_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_10_MPORT_en = 1'h1;
  assign registers_io_regs_10_MPORT_addr = 5'ha;
  assign registers_io_regs_10_MPORT_data = registers[registers_io_regs_10_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_11_MPORT_en = 1'h1;
  assign registers_io_regs_11_MPORT_addr = 5'hb;
  assign registers_io_regs_11_MPORT_data = registers[registers_io_regs_11_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_12_MPORT_en = 1'h1;
  assign registers_io_regs_12_MPORT_addr = 5'hc;
  assign registers_io_regs_12_MPORT_data = registers[registers_io_regs_12_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_13_MPORT_en = 1'h1;
  assign registers_io_regs_13_MPORT_addr = 5'hd;
  assign registers_io_regs_13_MPORT_data = registers[registers_io_regs_13_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_14_MPORT_en = 1'h1;
  assign registers_io_regs_14_MPORT_addr = 5'he;
  assign registers_io_regs_14_MPORT_data = registers[registers_io_regs_14_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_15_MPORT_en = 1'h1;
  assign registers_io_regs_15_MPORT_addr = 5'hf;
  assign registers_io_regs_15_MPORT_data = registers[registers_io_regs_15_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_16_MPORT_en = 1'h1;
  assign registers_io_regs_16_MPORT_addr = 5'h10;
  assign registers_io_regs_16_MPORT_data = registers[registers_io_regs_16_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_17_MPORT_en = 1'h1;
  assign registers_io_regs_17_MPORT_addr = 5'h11;
  assign registers_io_regs_17_MPORT_data = registers[registers_io_regs_17_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_18_MPORT_en = 1'h1;
  assign registers_io_regs_18_MPORT_addr = 5'h12;
  assign registers_io_regs_18_MPORT_data = registers[registers_io_regs_18_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_19_MPORT_en = 1'h1;
  assign registers_io_regs_19_MPORT_addr = 5'h13;
  assign registers_io_regs_19_MPORT_data = registers[registers_io_regs_19_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_20_MPORT_en = 1'h1;
  assign registers_io_regs_20_MPORT_addr = 5'h14;
  assign registers_io_regs_20_MPORT_data = registers[registers_io_regs_20_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_21_MPORT_en = 1'h1;
  assign registers_io_regs_21_MPORT_addr = 5'h15;
  assign registers_io_regs_21_MPORT_data = registers[registers_io_regs_21_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_22_MPORT_en = 1'h1;
  assign registers_io_regs_22_MPORT_addr = 5'h16;
  assign registers_io_regs_22_MPORT_data = registers[registers_io_regs_22_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_23_MPORT_en = 1'h1;
  assign registers_io_regs_23_MPORT_addr = 5'h17;
  assign registers_io_regs_23_MPORT_data = registers[registers_io_regs_23_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_24_MPORT_en = 1'h1;
  assign registers_io_regs_24_MPORT_addr = 5'h18;
  assign registers_io_regs_24_MPORT_data = registers[registers_io_regs_24_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_25_MPORT_en = 1'h1;
  assign registers_io_regs_25_MPORT_addr = 5'h19;
  assign registers_io_regs_25_MPORT_data = registers[registers_io_regs_25_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_26_MPORT_en = 1'h1;
  assign registers_io_regs_26_MPORT_addr = 5'h1a;
  assign registers_io_regs_26_MPORT_data = registers[registers_io_regs_26_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_27_MPORT_en = 1'h1;
  assign registers_io_regs_27_MPORT_addr = 5'h1b;
  assign registers_io_regs_27_MPORT_data = registers[registers_io_regs_27_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_28_MPORT_en = 1'h1;
  assign registers_io_regs_28_MPORT_addr = 5'h1c;
  assign registers_io_regs_28_MPORT_data = registers[registers_io_regs_28_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_29_MPORT_en = 1'h1;
  assign registers_io_regs_29_MPORT_addr = 5'h1d;
  assign registers_io_regs_29_MPORT_data = registers[registers_io_regs_29_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_30_MPORT_en = 1'h1;
  assign registers_io_regs_30_MPORT_addr = 5'h1e;
  assign registers_io_regs_30_MPORT_data = registers[registers_io_regs_30_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_regs_31_MPORT_en = 1'h1;
  assign registers_io_regs_31_MPORT_addr = 5'h1f;
  assign registers_io_regs_31_MPORT_data = registers[registers_io_regs_31_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_MPORT_data = _T_1 ? io_wdata : registers_MPORT_1_data;
  assign registers_MPORT_addr = io_waddr;
  assign registers_MPORT_mask = 1'h1;
  assign registers_MPORT_en = 1'h1;
  assign io_rdata1 = io_rs1 == 5'h0 ? 64'h0 : registers_io_rdata1_MPORT_data; // @[Registers.scala 23:19]
  assign io_rdata2 = io_rs2 == 5'h0 ? 64'h0 : registers_io_rdata2_MPORT_data; // @[Registers.scala 24:19]
  assign io_regs_0 = registers_io_regs_0_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_1 = registers_io_regs_1_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_2 = registers_io_regs_2_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_3 = registers_io_regs_3_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_4 = registers_io_regs_4_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_5 = registers_io_regs_5_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_6 = registers_io_regs_6_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_7 = registers_io_regs_7_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_8 = registers_io_regs_8_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_9 = registers_io_regs_9_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_10 = registers_io_regs_10_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_11 = registers_io_regs_11_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_12 = registers_io_regs_12_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_13 = registers_io_regs_13_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_14 = registers_io_regs_14_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_15 = registers_io_regs_15_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_16 = registers_io_regs_16_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_17 = registers_io_regs_17_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_18 = registers_io_regs_18_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_19 = registers_io_regs_19_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_20 = registers_io_regs_20_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_21 = registers_io_regs_21_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_22 = registers_io_regs_22_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_23 = registers_io_regs_23_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_24 = registers_io_regs_24_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_25 = registers_io_regs_25_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_26 = registers_io_regs_26_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_27 = registers_io_regs_27_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_28 = registers_io_regs_28_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_29 = registers_io_regs_29_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_30 = registers_io_regs_30_MPORT_data; // @[Registers.scala 29:40]
  assign io_regs_31 = registers_io_regs_31_MPORT_data; // @[Registers.scala 29:40]
  always @(posedge clock) begin
    if (registers_MPORT_en & registers_MPORT_mask) begin
      registers[registers_MPORT_addr] <= registers_MPORT_data; // @[Registers.scala 22:22]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    registers[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module CSR(
  input         clock,
  input         io_wen,
  input         io_ren,
  input  [63:0] io_wdata1,
  input  [63:0] io_wdata2,
  output [63:0] io_rdata,
  input  [4:0]  io_waddr1,
  input  [4:0]  io_waddr2,
  input  [4:0]  io_raddr,
  output [63:0] io_csrs_0,
  output [63:0] io_csrs_1,
  output [63:0] io_csrs_2,
  output [63:0] io_csrs_3,
  output [63:0] io_csrs_4
);
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] csr [0:4]; // @[CSR.scala 21:16]
  wire  csr_io_rdata_MPORT_en; // @[CSR.scala 21:16]
  wire [2:0] csr_io_rdata_MPORT_addr; // @[CSR.scala 21:16]
  wire [63:0] csr_io_rdata_MPORT_data; // @[CSR.scala 21:16]
  wire  csr_MPORT_1_en; // @[CSR.scala 21:16]
  wire [2:0] csr_MPORT_1_addr; // @[CSR.scala 21:16]
  wire [63:0] csr_MPORT_1_data; // @[CSR.scala 21:16]
  wire  csr_MPORT_3_en; // @[CSR.scala 21:16]
  wire [2:0] csr_MPORT_3_addr; // @[CSR.scala 21:16]
  wire [63:0] csr_MPORT_3_data; // @[CSR.scala 21:16]
  wire  csr_io_csrs_0_MPORT_en; // @[CSR.scala 21:16]
  wire [2:0] csr_io_csrs_0_MPORT_addr; // @[CSR.scala 21:16]
  wire [63:0] csr_io_csrs_0_MPORT_data; // @[CSR.scala 21:16]
  wire  csr_io_csrs_1_MPORT_en; // @[CSR.scala 21:16]
  wire [2:0] csr_io_csrs_1_MPORT_addr; // @[CSR.scala 21:16]
  wire [63:0] csr_io_csrs_1_MPORT_data; // @[CSR.scala 21:16]
  wire  csr_io_csrs_2_MPORT_en; // @[CSR.scala 21:16]
  wire [2:0] csr_io_csrs_2_MPORT_addr; // @[CSR.scala 21:16]
  wire [63:0] csr_io_csrs_2_MPORT_data; // @[CSR.scala 21:16]
  wire  csr_io_csrs_3_MPORT_en; // @[CSR.scala 21:16]
  wire [2:0] csr_io_csrs_3_MPORT_addr; // @[CSR.scala 21:16]
  wire [63:0] csr_io_csrs_3_MPORT_data; // @[CSR.scala 21:16]
  wire  csr_io_csrs_4_MPORT_en; // @[CSR.scala 21:16]
  wire [2:0] csr_io_csrs_4_MPORT_addr; // @[CSR.scala 21:16]
  wire [63:0] csr_io_csrs_4_MPORT_data; // @[CSR.scala 21:16]
  wire [63:0] csr_MPORT_data; // @[CSR.scala 21:16]
  wire [2:0] csr_MPORT_addr; // @[CSR.scala 21:16]
  wire  csr_MPORT_mask; // @[CSR.scala 21:16]
  wire  csr_MPORT_en; // @[CSR.scala 21:16]
  wire [63:0] csr_MPORT_2_data; // @[CSR.scala 21:16]
  wire [2:0] csr_MPORT_2_addr; // @[CSR.scala 21:16]
  wire  csr_MPORT_2_mask; // @[CSR.scala 21:16]
  wire  csr_MPORT_2_en; // @[CSR.scala 21:16]
  wire  _T_2 = io_wen & io_waddr1 != 5'h0; // @[CSR.scala 24:32]
  wire  _T_7 = io_wen & io_waddr2 != 5'h0; // @[CSR.scala 25:32]
  assign csr_io_rdata_MPORT_en = 1'h1;
  assign csr_io_rdata_MPORT_addr = io_raddr[2:0];
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign csr_io_rdata_MPORT_data = csr[csr_io_rdata_MPORT_addr]; // @[CSR.scala 21:16]
  `else
  assign csr_io_rdata_MPORT_data = csr_io_rdata_MPORT_addr >= 3'h5 ? _RAND_1[63:0] : csr[csr_io_rdata_MPORT_addr]; // @[CSR.scala 21:16]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign csr_MPORT_1_en = 1'h1;
  assign csr_MPORT_1_addr = io_waddr1[2:0];
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign csr_MPORT_1_data = csr[csr_MPORT_1_addr]; // @[CSR.scala 21:16]
  `else
  assign csr_MPORT_1_data = csr_MPORT_1_addr >= 3'h5 ? _RAND_2[63:0] : csr[csr_MPORT_1_addr]; // @[CSR.scala 21:16]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign csr_MPORT_3_en = 1'h1;
  assign csr_MPORT_3_addr = io_waddr2[2:0];
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign csr_MPORT_3_data = csr[csr_MPORT_3_addr]; // @[CSR.scala 21:16]
  `else
  assign csr_MPORT_3_data = csr_MPORT_3_addr >= 3'h5 ? _RAND_3[63:0] : csr[csr_MPORT_3_addr]; // @[CSR.scala 21:16]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign csr_io_csrs_0_MPORT_en = 1'h1;
  assign csr_io_csrs_0_MPORT_addr = 3'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign csr_io_csrs_0_MPORT_data = csr[csr_io_csrs_0_MPORT_addr]; // @[CSR.scala 21:16]
  `else
  assign csr_io_csrs_0_MPORT_data = csr_io_csrs_0_MPORT_addr >= 3'h5 ? _RAND_4[63:0] : csr[csr_io_csrs_0_MPORT_addr]; // @[CSR.scala 21:16]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign csr_io_csrs_1_MPORT_en = 1'h1;
  assign csr_io_csrs_1_MPORT_addr = 3'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign csr_io_csrs_1_MPORT_data = csr[csr_io_csrs_1_MPORT_addr]; // @[CSR.scala 21:16]
  `else
  assign csr_io_csrs_1_MPORT_data = csr_io_csrs_1_MPORT_addr >= 3'h5 ? _RAND_5[63:0] : csr[csr_io_csrs_1_MPORT_addr]; // @[CSR.scala 21:16]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign csr_io_csrs_2_MPORT_en = 1'h1;
  assign csr_io_csrs_2_MPORT_addr = 3'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign csr_io_csrs_2_MPORT_data = csr[csr_io_csrs_2_MPORT_addr]; // @[CSR.scala 21:16]
  `else
  assign csr_io_csrs_2_MPORT_data = csr_io_csrs_2_MPORT_addr >= 3'h5 ? _RAND_6[63:0] : csr[csr_io_csrs_2_MPORT_addr]; // @[CSR.scala 21:16]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign csr_io_csrs_3_MPORT_en = 1'h1;
  assign csr_io_csrs_3_MPORT_addr = 3'h3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign csr_io_csrs_3_MPORT_data = csr[csr_io_csrs_3_MPORT_addr]; // @[CSR.scala 21:16]
  `else
  assign csr_io_csrs_3_MPORT_data = csr_io_csrs_3_MPORT_addr >= 3'h5 ? _RAND_7[63:0] : csr[csr_io_csrs_3_MPORT_addr]; // @[CSR.scala 21:16]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign csr_io_csrs_4_MPORT_en = 1'h1;
  assign csr_io_csrs_4_MPORT_addr = 3'h4;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign csr_io_csrs_4_MPORT_data = csr[csr_io_csrs_4_MPORT_addr]; // @[CSR.scala 21:16]
  `else
  assign csr_io_csrs_4_MPORT_data = csr_io_csrs_4_MPORT_addr >= 3'h5 ? _RAND_8[63:0] : csr[csr_io_csrs_4_MPORT_addr]; // @[CSR.scala 21:16]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign csr_MPORT_data = _T_2 ? io_wdata1 : csr_MPORT_1_data;
  assign csr_MPORT_addr = io_waddr1[2:0];
  assign csr_MPORT_mask = 1'h1;
  assign csr_MPORT_en = 1'h1;
  assign csr_MPORT_2_data = _T_7 ? io_wdata2 : csr_MPORT_3_data;
  assign csr_MPORT_2_addr = io_waddr2[2:0];
  assign csr_MPORT_2_mask = 1'h1;
  assign csr_MPORT_2_en = 1'h1;
  assign io_rdata = io_ren ? csr_io_rdata_MPORT_data : 64'h0; // @[CSR.scala 22:18]
  assign io_csrs_0 = csr_io_csrs_0_MPORT_data; // @[CSR.scala 27:39]
  assign io_csrs_1 = csr_io_csrs_1_MPORT_data; // @[CSR.scala 27:39]
  assign io_csrs_2 = csr_io_csrs_2_MPORT_data; // @[CSR.scala 27:39]
  assign io_csrs_3 = csr_io_csrs_3_MPORT_data; // @[CSR.scala 27:39]
  assign io_csrs_4 = csr_io_csrs_4_MPORT_data; // @[CSR.scala 27:39]
  always @(posedge clock) begin
    if (csr_MPORT_en & csr_MPORT_mask) begin
      csr[csr_MPORT_addr] <= csr_MPORT_data; // @[CSR.scala 21:16]
    end
    if (csr_MPORT_2_en & csr_MPORT_2_mask) begin
      csr[csr_MPORT_2_addr] <= csr_MPORT_2_data; // @[CSR.scala 21:16]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  _RAND_1 = {2{`RANDOM}};
  _RAND_2 = {2{`RANDOM}};
  _RAND_3 = {2{`RANDOM}};
  _RAND_4 = {2{`RANDOM}};
  _RAND_5 = {2{`RANDOM}};
  _RAND_6 = {2{`RANDOM}};
  _RAND_7 = {2{`RANDOM}};
  _RAND_8 = {2{`RANDOM}};
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 5; initvar = initvar+1)
    csr[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IDU(
  input         clock,
  input         reset,
  input         io_es_allowin,
  output        io_ds_allowin,
  input         io_fs_to_ds_valid,
  output        io_ds_to_es_valid,
  input  [31:0] io_fd_bus_inst,
  input  [31:0] io_fd_bus_pc,
  output [7:0]  io_de_bus_OP,
  output        io_de_bus_res_from_mem,
  output        io_de_bus_gr_we,
  output        io_de_bus_MemWen,
  output [7:0]  io_de_bus_wmask,
  output [31:0] io_de_bus_ds_pc,
  output [4:0]  io_de_bus_dest,
  output [63:0] io_de_bus_imm,
  output [63:0] io_de_bus_rdata1,
  output [63:0] io_de_bus_rdata2,
  output [2:0]  io_de_bus_ld_type,
  output [31:0] io_de_bus_inst,
  output [63:0] io_de_bus_csr_rdata,
  output [2:0]  io_de_bus_csr_waddr1,
  output [2:0]  io_de_bus_csr_waddr2,
  output [2:0]  io_de_bus_csr_raddr,
  output        io_de_bus_csr_ren,
  output        io_de_bus_csr_wen,
  output        io_de_bus_eval,
  output        io_de_bus_is_ld,
  output        io_br_bus_br_taken,
  output [31:0] io_br_bus_br_target,
  output        io_br_bus_br_taken_cancel,
  output        io_br_bus_rawblock,
  output [63:0] io_br_bus_csr_rdata,
  output        io_br_bus_eval,
  output        io_br_bus_mret,
  input         io_rf_bus_rf_we,
  input  [4:0]  io_rf_bus_rf_waddr,
  input  [63:0] io_rf_bus_rf_wdata,
  input  [31:0] io_rf_bus_wb_pc,
  input  [63:0] io_rf_bus_csr_wdata,
  input         io_rf_bus_csr_wen,
  input  [2:0]  io_rf_bus_csr_waddr1,
  input  [2:0]  io_rf_bus_csr_waddr2,
  input         io_rf_bus_eval,
  input         io_es_dest_valid_gr_we,
  input         io_es_dest_valid_es_valid,
  input  [4:0]  io_es_dest_valid_dest,
  input  [63:0] io_es_dest_valid_es_forward_data,
  input         io_es_dest_valid_es_is_ld,
  input         io_es_dest_valid_es_ready_go,
  input         io_ms_dest_valid_gr_we,
  input         io_ms_dest_valid_ms_valid,
  input  [4:0]  io_ms_dest_valid_dest,
  input  [63:0] io_ms_dest_valid_ms_forward_data,
  input         io_ms_dest_valid_ms_is_ld,
  input         io_ws_dest_valid_gr_we,
  input         io_ws_dest_valid_ws_valid,
  input  [4:0]  io_ws_dest_valid_dest,
  input  [63:0] io_ws_dest_valid_ws_forward_data
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  Registers_clock; // @[IDU.scala 282:25]
  wire  Registers_io_wen; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_wdata; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_rdata1; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_rdata2; // @[IDU.scala 282:25]
  wire [4:0] Registers_io_rs1; // @[IDU.scala 282:25]
  wire [4:0] Registers_io_rs2; // @[IDU.scala 282:25]
  wire [4:0] Registers_io_waddr; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_0; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_1; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_2; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_3; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_4; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_5; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_6; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_7; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_8; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_9; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_10; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_11; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_12; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_13; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_14; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_15; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_16; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_17; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_18; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_19; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_20; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_21; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_22; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_23; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_24; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_25; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_26; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_27; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_28; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_29; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_30; // @[IDU.scala 282:25]
  wire [63:0] Registers_io_regs_31; // @[IDU.scala 282:25]
  wire [31:0] DPI_EBREAK_flag; // @[IDU.scala 305:26]
  wire  CSR_clock; // @[IDU.scala 309:20]
  wire  CSR_io_wen; // @[IDU.scala 309:20]
  wire  CSR_io_ren; // @[IDU.scala 309:20]
  wire [63:0] CSR_io_wdata1; // @[IDU.scala 309:20]
  wire [63:0] CSR_io_wdata2; // @[IDU.scala 309:20]
  wire [63:0] CSR_io_rdata; // @[IDU.scala 309:20]
  wire [4:0] CSR_io_waddr1; // @[IDU.scala 309:20]
  wire [4:0] CSR_io_waddr2; // @[IDU.scala 309:20]
  wire [4:0] CSR_io_raddr; // @[IDU.scala 309:20]
  wire [63:0] CSR_io_csrs_0; // @[IDU.scala 309:20]
  wire [63:0] CSR_io_csrs_1; // @[IDU.scala 309:20]
  wire [63:0] CSR_io_csrs_2; // @[IDU.scala 309:20]
  wire [63:0] CSR_io_csrs_3; // @[IDU.scala 309:20]
  wire [63:0] CSR_io_csrs_4; // @[IDU.scala 309:20]
  wire [63:0] dpi_rf_0; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_1; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_2; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_3; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_4; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_5; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_6; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_7; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_8; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_9; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_10; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_11; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_12; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_13; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_14; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_15; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_16; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_17; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_18; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_19; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_20; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_21; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_22; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_23; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_24; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_25; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_26; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_27; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_28; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_29; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_30; // @[IDU.scala 322:19]
  wire [63:0] dpi_rf_31; // @[IDU.scala 322:19]
  wire [63:0] dpi_csr_0; // @[IDU.scala 322:19]
  wire [63:0] dpi_csr_1; // @[IDU.scala 322:19]
  wire [63:0] dpi_csr_2; // @[IDU.scala 322:19]
  wire [63:0] dpi_csr_3; // @[IDU.scala 322:19]
  wire [63:0] dpi_csr_4; // @[IDU.scala 322:19]
  wire [31:0] dpi_inst; // @[IDU.scala 322:19]
  wire [63:0] dpi_pc; // @[IDU.scala 322:19]
  wire [31:0] dpi_eval; // @[IDU.scala 322:19]
  reg  ds_valid; // @[IDU.scala 31:28]
  reg [31:0] fd_bus_r_inst; // @[IDU.scala 33:28]
  reg [31:0] fd_bus_r_pc; // @[IDU.scala 33:28]
  wire [4:0] rs1 = fd_bus_r_inst[19:15]; // @[IDU.scala 268:17]
  wire [4:0] rs2 = fd_bus_r_inst[24:20]; // @[IDU.scala 269:17]
  wire  _es_rawblock_T_1 = rs2 == io_es_dest_valid_dest; // @[IDU.scala 274:59]
  wire  _es_rawblock_T_3 = io_es_dest_valid_dest != 5'h0; // @[IDU.scala 274:111]
  wire  es_rawblock = (rs1 == io_es_dest_valid_dest | rs2 == io_es_dest_valid_dest) & io_es_dest_valid_dest != 5'h0 &
    io_es_dest_valid_es_is_ld & ds_valid; // @[IDU.scala 274:150]
  wire  _ms_rawblock_T_1 = rs2 == io_ms_dest_valid_dest; // @[IDU.scala 275:59]
  wire  _ms_rawblock_T_3 = io_ms_dest_valid_dest != 5'h0; // @[IDU.scala 275:111]
  wire  ms_rawblock = (rs1 == io_ms_dest_valid_dest | rs2 == io_ms_dest_valid_dest) & io_ms_dest_valid_dest != 5'h0 &
    io_ms_dest_valid_ms_is_ld & ds_valid; // @[IDU.scala 275:150]
  wire  rawblock = io_es_dest_valid_es_valid & es_rawblock | io_ms_dest_valid_ms_valid & ms_rawblock; // @[IDU.scala 276:59]
  wire  ds_ready_go = ~rawblock; // @[IDU.scala 277:18]
  wire  eval = io_de_bus_OP == 8'h3f; // @[IDU.scala 225:27]
  wire  mret = io_de_bus_OP == 8'h40; // @[IDU.scala 226:27]
  wire  _br_taken_cancel_T = eval | mret; // @[IDU.scala 266:28]
  wire  _rf_rdata1_T_5 = Registers_io_rs1 == io_es_dest_valid_dest & _es_rawblock_T_3 & io_es_dest_valid_es_valid &
    io_es_dest_valid_gr_we & io_es_dest_valid_es_ready_go; // @[IDU.scala 291:138]
  wire  _rf_rdata1_T_10 = Registers_io_rs1 == io_ms_dest_valid_dest & _ms_rawblock_T_3 & io_ms_dest_valid_ms_valid &
    io_ms_dest_valid_gr_we; // @[IDU.scala 292:112]
  wire  _rf_rdata1_T_12 = io_ws_dest_valid_dest != 5'h0; // @[IDU.scala 293:74]
  wire  _rf_rdata1_T_15 = Registers_io_rs1 == io_ws_dest_valid_dest & io_ws_dest_valid_dest != 5'h0 &
    io_ws_dest_valid_ws_valid & io_ws_dest_valid_gr_we; // @[IDU.scala 293:112]
  wire [63:0] _rf_rdata1_T_16 = _rf_rdata1_T_15 ? io_ws_dest_valid_ws_forward_data : Registers_io_rdata1; // @[Mux.scala 101:16]
  wire [63:0] _rf_rdata1_T_17 = _rf_rdata1_T_10 ? io_ms_dest_valid_ms_forward_data : _rf_rdata1_T_16; // @[Mux.scala 101:16]
  wire [63:0] rf_rdata1 = _rf_rdata1_T_5 ? io_es_dest_valid_es_forward_data : _rf_rdata1_T_17; // @[Mux.scala 101:16]
  wire  _rf_rdata2_T_4 = _es_rawblock_T_1 & _es_rawblock_T_3 & io_es_dest_valid_es_valid & io_es_dest_valid_gr_we; // @[IDU.scala 299:102]
  wire  _rf_rdata2_T_9 = _ms_rawblock_T_1 & _ms_rawblock_T_3 & io_ms_dest_valid_ms_valid & io_ms_dest_valid_gr_we; // @[IDU.scala 300:102]
  wire  _rf_rdata2_T_14 = rs2 == io_ws_dest_valid_dest & _rf_rdata1_T_12 & io_ws_dest_valid_ws_valid &
    io_ws_dest_valid_gr_we; // @[IDU.scala 301:102]
  wire [63:0] _rf_rdata2_T_15 = _rf_rdata2_T_14 ? io_ws_dest_valid_ws_forward_data : Registers_io_rdata2; // @[Mux.scala 101:16]
  wire [63:0] _rf_rdata2_T_16 = _rf_rdata2_T_9 ? io_ms_dest_valid_ms_forward_data : _rf_rdata2_T_15; // @[Mux.scala 101:16]
  wire [63:0] rf_rdata2 = _rf_rdata2_T_4 ? io_es_dest_valid_es_forward_data : _rf_rdata2_T_16; // @[Mux.scala 101:16]
  wire  _br_taken_T_15 = rf_rdata1 >= rf_rdata2 & ds_valid; // @[IDU.scala 246:45]
  wire  _br_taken_T_13 = rf_rdata1 < rf_rdata2 & ds_valid; // @[IDU.scala 245:44]
  wire [63:0] _br_taken_T_8 = _rf_rdata1_T_5 ? io_es_dest_valid_es_forward_data : _rf_rdata1_T_17; // @[IDU.scala 244:30]
  wire [63:0] _br_taken_T_9 = _rf_rdata2_T_4 ? io_es_dest_valid_es_forward_data : _rf_rdata2_T_16; // @[IDU.scala 244:50]
  wire  _br_taken_T_11 = $signed(_br_taken_T_8) >= $signed(_br_taken_T_9) & ds_valid; // @[IDU.scala 244:58]
  wire  _br_taken_T_7 = $signed(_br_taken_T_8) < $signed(_br_taken_T_9) & ds_valid; // @[IDU.scala 243:57]
  wire  _br_taken_T_3 = rf_rdata1 != rf_rdata2 & ds_valid; // @[IDU.scala 242:45]
  wire  _br_taken_T_1 = rf_rdata1 == rf_rdata2 & ds_valid; // @[IDU.scala 241:45]
  wire  _br_taken_T_21 = 8'h33 == io_de_bus_OP ? _br_taken_T_3 : 8'h32 == io_de_bus_OP & _br_taken_T_1; // @[Mux.scala 81:58]
  wire  _br_taken_T_23 = 8'h36 == io_de_bus_OP ? _br_taken_T_7 : _br_taken_T_21; // @[Mux.scala 81:58]
  wire  _br_taken_T_25 = 8'h34 == io_de_bus_OP ? _br_taken_T_11 : _br_taken_T_23; // @[Mux.scala 81:58]
  wire  _br_taken_T_27 = 8'h37 == io_de_bus_OP ? _br_taken_T_13 : _br_taken_T_25; // @[Mux.scala 81:58]
  wire  _br_taken_T_29 = 8'h35 == io_de_bus_OP ? _br_taken_T_15 : _br_taken_T_27; // @[Mux.scala 81:58]
  wire  _br_taken_T_31 = 8'h3a == io_de_bus_OP ? ds_valid : _br_taken_T_29; // @[Mux.scala 81:58]
  wire  br_taken = 8'h1b == io_de_bus_OP ? ds_valid : _br_taken_T_31; // @[Mux.scala 81:58]
  wire  br_taken_cancel = (eval | mret | br_taken) & ds_ready_go; // @[IDU.scala 266:49]
  wire [31:0] _crtlsignals_T = fd_bus_r_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_1 = 32'h33 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_3 = 32'h3b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_5 = 32'h40000033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_7 = 32'h4000003b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_9 = 32'h2000033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_11 = 32'h200003b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_13 = 32'h2004033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_15 = 32'h2005033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_17 = 32'h200403b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_19 = 32'h200503b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_21 = 32'h1033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_23 = 32'h2033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_25 = 32'h3033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_27 = 32'h103b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_29 = 32'h40005033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_31 = 32'h4000503b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_33 = 32'h5033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_35 = 32'h503b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_37 = 32'h4033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_39 = 32'h7033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_41 = 32'h6033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_43 = 32'h2006033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_45 = 32'h2007033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_47 = 32'h200603b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_49 = 32'h200703b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire [31:0] _crtlsignals_T_50 = fd_bus_r_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_51 = 32'h13 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_53 = 32'h1b == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_55 = 32'h67 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_57 = 32'h3 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_59 = 32'h4003 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_61 = 32'h1003 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_63 = 32'h5003 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_65 = 32'h2003 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_67 = 32'h6003 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_69 = 32'h3003 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire [31:0] _crtlsignals_T_70 = fd_bus_r_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_71 = 32'h1013 == _crtlsignals_T_70; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_73 = 32'h101b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_75 = 32'h5013 == _crtlsignals_T_70; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_77 = 32'h501b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_79 = 32'h2013 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_81 = 32'h3013 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_83 = 32'h7013 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_85 = 32'h4013 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_87 = 32'h6013 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_89 = 32'h40005013 == _crtlsignals_T_70; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_91 = 32'h4000501b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_93 = 32'h1073 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_95 = 32'h2073 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_97 = 32'h3073 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_99 = 32'h73 == fd_bus_r_inst; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_101 = 32'h3023 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_103 = 32'h23 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_105 = 32'h1023 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_107 = 32'h2023 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_109 = 32'h63 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_111 = 32'h1063 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_113 = 32'h4063 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_115 = 32'h5063 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_117 = 32'h7063 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_119 = 32'h6063 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire [31:0] _crtlsignals_T_120 = fd_bus_r_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_121 = 32'h37 == _crtlsignals_T_120; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_123 = 32'h17 == _crtlsignals_T_120; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_125 = 32'h6f == _crtlsignals_T_120; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_127 = 32'h30200073 == fd_bus_r_inst; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_129 = 32'h100073 == fd_bus_r_inst; // @[Lookup.scala 31:38]
  wire [7:0] _crtlsignals_T_133 = _crtlsignals_T_129 ? 8'h3b : 8'hff; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_134 = _crtlsignals_T_127 ? 8'h40 : _crtlsignals_T_133; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_135 = _crtlsignals_T_125 ? 8'h3a : _crtlsignals_T_134; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_136 = _crtlsignals_T_123 ? 8'h39 : _crtlsignals_T_135; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_137 = _crtlsignals_T_121 ? 8'h38 : _crtlsignals_T_136; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_138 = _crtlsignals_T_119 ? 8'h37 : _crtlsignals_T_137; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_139 = _crtlsignals_T_117 ? 8'h35 : _crtlsignals_T_138; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_140 = _crtlsignals_T_115 ? 8'h34 : _crtlsignals_T_139; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_141 = _crtlsignals_T_113 ? 8'h36 : _crtlsignals_T_140; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_142 = _crtlsignals_T_111 ? 8'h33 : _crtlsignals_T_141; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_143 = _crtlsignals_T_109 ? 8'h32 : _crtlsignals_T_142; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_144 = _crtlsignals_T_107 ? 8'h31 : _crtlsignals_T_143; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_145 = _crtlsignals_T_105 ? 8'h30 : _crtlsignals_T_144; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_146 = _crtlsignals_T_103 ? 8'h2f : _crtlsignals_T_145; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_147 = _crtlsignals_T_101 ? 8'h2e : _crtlsignals_T_146; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_148 = _crtlsignals_T_99 ? 8'h3f : _crtlsignals_T_147; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_149 = _crtlsignals_T_97 ? 8'h3e : _crtlsignals_T_148; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_150 = _crtlsignals_T_95 ? 8'h3d : _crtlsignals_T_149; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_151 = _crtlsignals_T_93 ? 8'h3c : _crtlsignals_T_150; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_152 = _crtlsignals_T_91 ? 8'h28 : _crtlsignals_T_151; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_153 = _crtlsignals_T_89 ? 8'h27 : _crtlsignals_T_152; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_154 = _crtlsignals_T_87 ? 8'h2d : _crtlsignals_T_153; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_155 = _crtlsignals_T_85 ? 8'h2c : _crtlsignals_T_154; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_156 = _crtlsignals_T_83 ? 8'h2b : _crtlsignals_T_155; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_157 = _crtlsignals_T_81 ? 8'h2a : _crtlsignals_T_156; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_158 = _crtlsignals_T_79 ? 8'h29 : _crtlsignals_T_157; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_159 = _crtlsignals_T_77 ? 8'h26 : _crtlsignals_T_158; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_160 = _crtlsignals_T_75 ? 8'h25 : _crtlsignals_T_159; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_161 = _crtlsignals_T_73 ? 8'h24 : _crtlsignals_T_160; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_162 = _crtlsignals_T_71 ? 8'h23 : _crtlsignals_T_161; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_163 = _crtlsignals_T_69 ? 8'h20 : _crtlsignals_T_162; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_164 = _crtlsignals_T_67 ? 8'h22 : _crtlsignals_T_163; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_165 = _crtlsignals_T_65 ? 8'h21 : _crtlsignals_T_164; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_166 = _crtlsignals_T_63 ? 8'h1f : _crtlsignals_T_165; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_167 = _crtlsignals_T_61 ? 8'h1e : _crtlsignals_T_166; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_168 = _crtlsignals_T_59 ? 8'h1d : _crtlsignals_T_167; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_169 = _crtlsignals_T_57 ? 8'h1c : _crtlsignals_T_168; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_170 = _crtlsignals_T_55 ? 8'h1b : _crtlsignals_T_169; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_171 = _crtlsignals_T_53 ? 8'h1a : _crtlsignals_T_170; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_172 = _crtlsignals_T_51 ? 8'h19 : _crtlsignals_T_171; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_173 = _crtlsignals_T_49 ? 8'h18 : _crtlsignals_T_172; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_174 = _crtlsignals_T_47 ? 8'h17 : _crtlsignals_T_173; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_175 = _crtlsignals_T_45 ? 8'h16 : _crtlsignals_T_174; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_176 = _crtlsignals_T_43 ? 8'h15 : _crtlsignals_T_175; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_177 = _crtlsignals_T_41 ? 8'h14 : _crtlsignals_T_176; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_178 = _crtlsignals_T_39 ? 8'h12 : _crtlsignals_T_177; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_179 = _crtlsignals_T_37 ? 8'h11 : _crtlsignals_T_178; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_180 = _crtlsignals_T_35 ? 8'h10 : _crtlsignals_T_179; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_181 = _crtlsignals_T_33 ? 8'hf : _crtlsignals_T_180; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_182 = _crtlsignals_T_31 ? 8'he : _crtlsignals_T_181; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_183 = _crtlsignals_T_29 ? 8'h13 : _crtlsignals_T_182; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_184 = _crtlsignals_T_27 ? 8'hd : _crtlsignals_T_183; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_185 = _crtlsignals_T_25 ? 8'hc : _crtlsignals_T_184; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_186 = _crtlsignals_T_23 ? 8'hb : _crtlsignals_T_185; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_187 = _crtlsignals_T_21 ? 8'ha : _crtlsignals_T_186; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_188 = _crtlsignals_T_19 ? 8'h9 : _crtlsignals_T_187; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_189 = _crtlsignals_T_17 ? 8'h8 : _crtlsignals_T_188; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_190 = _crtlsignals_T_15 ? 8'h7 : _crtlsignals_T_189; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_191 = _crtlsignals_T_13 ? 8'h6 : _crtlsignals_T_190; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_192 = _crtlsignals_T_11 ? 8'h5 : _crtlsignals_T_191; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_193 = _crtlsignals_T_9 ? 8'h4 : _crtlsignals_T_192; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_194 = _crtlsignals_T_7 ? 8'h3 : _crtlsignals_T_193; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_195 = _crtlsignals_T_5 ? 8'h2 : _crtlsignals_T_194; // @[Lookup.scala 34:39]
  wire [7:0] _crtlsignals_T_196 = _crtlsignals_T_3 ? 8'h1 : _crtlsignals_T_195; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_203 = _crtlsignals_T_119 ? 1'h0 : _crtlsignals_T_121 | (_crtlsignals_T_123 | _crtlsignals_T_125); // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_204 = _crtlsignals_T_117 ? 1'h0 : _crtlsignals_T_203; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_205 = _crtlsignals_T_115 ? 1'h0 : _crtlsignals_T_204; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_206 = _crtlsignals_T_113 ? 1'h0 : _crtlsignals_T_205; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_207 = _crtlsignals_T_111 ? 1'h0 : _crtlsignals_T_206; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_208 = _crtlsignals_T_109 ? 1'h0 : _crtlsignals_T_207; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_209 = _crtlsignals_T_107 ? 1'h0 : _crtlsignals_T_208; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_210 = _crtlsignals_T_105 ? 1'h0 : _crtlsignals_T_209; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_211 = _crtlsignals_T_103 ? 1'h0 : _crtlsignals_T_210; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_212 = _crtlsignals_T_101 ? 1'h0 : _crtlsignals_T_211; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_242 = _crtlsignals_T_41 | (_crtlsignals_T_43 | (_crtlsignals_T_45 | (_crtlsignals_T_47 | (
    _crtlsignals_T_49 | (_crtlsignals_T_51 | (_crtlsignals_T_53 | (_crtlsignals_T_55 | (_crtlsignals_T_57 | (
    _crtlsignals_T_59 | (_crtlsignals_T_61 | (_crtlsignals_T_63 | (_crtlsignals_T_65 | (_crtlsignals_T_67 | (
    _crtlsignals_T_69 | (_crtlsignals_T_71 | (_crtlsignals_T_73 | (_crtlsignals_T_75 | (_crtlsignals_T_77 | (
    _crtlsignals_T_79 | (_crtlsignals_T_81 | (_crtlsignals_T_83 | (_crtlsignals_T_85 | (_crtlsignals_T_87 | (
    _crtlsignals_T_89 | (_crtlsignals_T_91 | (_crtlsignals_T_93 | (_crtlsignals_T_95 | (_crtlsignals_T_97 | (
    _crtlsignals_T_99 | _crtlsignals_T_212))))))))))))))))))))))))))))); // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_265 = _crtlsignals_T_125 ? 3'h4 : 3'h0; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_266 = _crtlsignals_T_123 ? 3'h3 : _crtlsignals_T_265; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_267 = _crtlsignals_T_121 ? 3'h3 : _crtlsignals_T_266; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_268 = _crtlsignals_T_119 ? 3'h2 : _crtlsignals_T_267; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_269 = _crtlsignals_T_117 ? 3'h2 : _crtlsignals_T_268; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_270 = _crtlsignals_T_115 ? 3'h2 : _crtlsignals_T_269; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_271 = _crtlsignals_T_113 ? 3'h2 : _crtlsignals_T_270; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_272 = _crtlsignals_T_111 ? 3'h2 : _crtlsignals_T_271; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_273 = _crtlsignals_T_109 ? 3'h2 : _crtlsignals_T_272; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_274 = _crtlsignals_T_107 ? 3'h1 : _crtlsignals_T_273; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_275 = _crtlsignals_T_105 ? 3'h1 : _crtlsignals_T_274; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_276 = _crtlsignals_T_103 ? 3'h1 : _crtlsignals_T_275; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_277 = _crtlsignals_T_101 ? 3'h1 : _crtlsignals_T_276; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_278 = _crtlsignals_T_99 ? 3'h0 : _crtlsignals_T_277; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_279 = _crtlsignals_T_97 ? 3'h0 : _crtlsignals_T_278; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_280 = _crtlsignals_T_95 ? 3'h0 : _crtlsignals_T_279; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_281 = _crtlsignals_T_93 ? 3'h0 : _crtlsignals_T_280; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_282 = _crtlsignals_T_91 ? 3'h0 : _crtlsignals_T_281; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_283 = _crtlsignals_T_89 ? 3'h0 : _crtlsignals_T_282; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_284 = _crtlsignals_T_87 ? 3'h0 : _crtlsignals_T_283; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_285 = _crtlsignals_T_85 ? 3'h0 : _crtlsignals_T_284; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_286 = _crtlsignals_T_83 ? 3'h0 : _crtlsignals_T_285; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_287 = _crtlsignals_T_81 ? 3'h0 : _crtlsignals_T_286; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_288 = _crtlsignals_T_79 ? 3'h0 : _crtlsignals_T_287; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_289 = _crtlsignals_T_77 ? 3'h0 : _crtlsignals_T_288; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_290 = _crtlsignals_T_75 ? 3'h0 : _crtlsignals_T_289; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_291 = _crtlsignals_T_73 ? 3'h0 : _crtlsignals_T_290; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_292 = _crtlsignals_T_71 ? 3'h0 : _crtlsignals_T_291; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_293 = _crtlsignals_T_69 ? 3'h0 : _crtlsignals_T_292; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_294 = _crtlsignals_T_67 ? 3'h0 : _crtlsignals_T_293; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_295 = _crtlsignals_T_65 ? 3'h0 : _crtlsignals_T_294; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_296 = _crtlsignals_T_63 ? 3'h0 : _crtlsignals_T_295; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_297 = _crtlsignals_T_61 ? 3'h0 : _crtlsignals_T_296; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_298 = _crtlsignals_T_59 ? 3'h0 : _crtlsignals_T_297; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_299 = _crtlsignals_T_57 ? 3'h0 : _crtlsignals_T_298; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_300 = _crtlsignals_T_55 ? 3'h0 : _crtlsignals_T_299; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_301 = _crtlsignals_T_53 ? 3'h0 : _crtlsignals_T_300; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_302 = _crtlsignals_T_51 ? 3'h0 : _crtlsignals_T_301; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_303 = _crtlsignals_T_49 ? 3'h0 : _crtlsignals_T_302; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_304 = _crtlsignals_T_47 ? 3'h0 : _crtlsignals_T_303; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_305 = _crtlsignals_T_45 ? 3'h0 : _crtlsignals_T_304; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_306 = _crtlsignals_T_43 ? 3'h0 : _crtlsignals_T_305; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_307 = _crtlsignals_T_41 ? 3'h0 : _crtlsignals_T_306; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_308 = _crtlsignals_T_39 ? 3'h0 : _crtlsignals_T_307; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_309 = _crtlsignals_T_37 ? 3'h0 : _crtlsignals_T_308; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_310 = _crtlsignals_T_35 ? 3'h0 : _crtlsignals_T_309; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_311 = _crtlsignals_T_33 ? 3'h0 : _crtlsignals_T_310; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_312 = _crtlsignals_T_31 ? 3'h0 : _crtlsignals_T_311; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_313 = _crtlsignals_T_29 ? 3'h0 : _crtlsignals_T_312; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_314 = _crtlsignals_T_27 ? 3'h0 : _crtlsignals_T_313; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_315 = _crtlsignals_T_25 ? 3'h0 : _crtlsignals_T_314; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_316 = _crtlsignals_T_23 ? 3'h0 : _crtlsignals_T_315; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_317 = _crtlsignals_T_21 ? 3'h0 : _crtlsignals_T_316; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_318 = _crtlsignals_T_19 ? 3'h0 : _crtlsignals_T_317; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_319 = _crtlsignals_T_17 ? 3'h0 : _crtlsignals_T_318; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_320 = _crtlsignals_T_15 ? 3'h0 : _crtlsignals_T_319; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_321 = _crtlsignals_T_13 ? 3'h0 : _crtlsignals_T_320; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_322 = _crtlsignals_T_11 ? 3'h0 : _crtlsignals_T_321; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_323 = _crtlsignals_T_9 ? 3'h0 : _crtlsignals_T_322; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_324 = _crtlsignals_T_7 ? 3'h0 : _crtlsignals_T_323; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_325 = _crtlsignals_T_5 ? 3'h0 : _crtlsignals_T_324; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_326 = _crtlsignals_T_3 ? 3'h0 : _crtlsignals_T_325; // @[Lookup.scala 34:39]
  wire [2:0] ImmType = _crtlsignals_T_1 ? 3'h0 : _crtlsignals_T_326; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_408 = _crtlsignals_T_99 ? 1'h0 : _crtlsignals_T_101 | (_crtlsignals_T_103 | (_crtlsignals_T_105
     | _crtlsignals_T_107)); // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_409 = _crtlsignals_T_97 ? 1'h0 : _crtlsignals_T_408; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_410 = _crtlsignals_T_95 ? 1'h0 : _crtlsignals_T_409; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_411 = _crtlsignals_T_93 ? 1'h0 : _crtlsignals_T_410; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_412 = _crtlsignals_T_91 ? 1'h0 : _crtlsignals_T_411; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_413 = _crtlsignals_T_89 ? 1'h0 : _crtlsignals_T_412; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_414 = _crtlsignals_T_87 ? 1'h0 : _crtlsignals_T_413; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_415 = _crtlsignals_T_85 ? 1'h0 : _crtlsignals_T_414; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_416 = _crtlsignals_T_83 ? 1'h0 : _crtlsignals_T_415; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_417 = _crtlsignals_T_81 ? 1'h0 : _crtlsignals_T_416; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_418 = _crtlsignals_T_79 ? 1'h0 : _crtlsignals_T_417; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_419 = _crtlsignals_T_77 ? 1'h0 : _crtlsignals_T_418; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_420 = _crtlsignals_T_75 ? 1'h0 : _crtlsignals_T_419; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_421 = _crtlsignals_T_73 ? 1'h0 : _crtlsignals_T_420; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_422 = _crtlsignals_T_71 ? 1'h0 : _crtlsignals_T_421; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_423 = _crtlsignals_T_69 ? 1'h0 : _crtlsignals_T_422; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_424 = _crtlsignals_T_67 ? 1'h0 : _crtlsignals_T_423; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_425 = _crtlsignals_T_65 ? 1'h0 : _crtlsignals_T_424; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_426 = _crtlsignals_T_63 ? 1'h0 : _crtlsignals_T_425; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_427 = _crtlsignals_T_61 ? 1'h0 : _crtlsignals_T_426; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_428 = _crtlsignals_T_59 ? 1'h0 : _crtlsignals_T_427; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_429 = _crtlsignals_T_57 ? 1'h0 : _crtlsignals_T_428; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_430 = _crtlsignals_T_55 ? 1'h0 : _crtlsignals_T_429; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_431 = _crtlsignals_T_53 ? 1'h0 : _crtlsignals_T_430; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_432 = _crtlsignals_T_51 ? 1'h0 : _crtlsignals_T_431; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_433 = _crtlsignals_T_49 ? 1'h0 : _crtlsignals_T_432; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_434 = _crtlsignals_T_47 ? 1'h0 : _crtlsignals_T_433; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_435 = _crtlsignals_T_45 ? 1'h0 : _crtlsignals_T_434; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_436 = _crtlsignals_T_43 ? 1'h0 : _crtlsignals_T_435; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_437 = _crtlsignals_T_41 ? 1'h0 : _crtlsignals_T_436; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_438 = _crtlsignals_T_39 ? 1'h0 : _crtlsignals_T_437; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_439 = _crtlsignals_T_37 ? 1'h0 : _crtlsignals_T_438; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_440 = _crtlsignals_T_35 ? 1'h0 : _crtlsignals_T_439; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_441 = _crtlsignals_T_33 ? 1'h0 : _crtlsignals_T_440; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_442 = _crtlsignals_T_31 ? 1'h0 : _crtlsignals_T_441; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_443 = _crtlsignals_T_29 ? 1'h0 : _crtlsignals_T_442; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_444 = _crtlsignals_T_27 ? 1'h0 : _crtlsignals_T_443; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_445 = _crtlsignals_T_25 ? 1'h0 : _crtlsignals_T_444; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_446 = _crtlsignals_T_23 ? 1'h0 : _crtlsignals_T_445; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_447 = _crtlsignals_T_21 ? 1'h0 : _crtlsignals_T_446; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_448 = _crtlsignals_T_19 ? 1'h0 : _crtlsignals_T_447; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_449 = _crtlsignals_T_17 ? 1'h0 : _crtlsignals_T_448; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_450 = _crtlsignals_T_15 ? 1'h0 : _crtlsignals_T_449; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_451 = _crtlsignals_T_13 ? 1'h0 : _crtlsignals_T_450; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_452 = _crtlsignals_T_11 ? 1'h0 : _crtlsignals_T_451; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_453 = _crtlsignals_T_9 ? 1'h0 : _crtlsignals_T_452; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_454 = _crtlsignals_T_7 ? 1'h0 : _crtlsignals_T_453; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_455 = _crtlsignals_T_5 ? 1'h0 : _crtlsignals_T_454; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_456 = _crtlsignals_T_3 ? 1'h0 : _crtlsignals_T_455; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_495 = _crtlsignals_T_55 ? 1'h0 : _crtlsignals_T_57 | (_crtlsignals_T_59 | (_crtlsignals_T_61 | (
    _crtlsignals_T_63 | (_crtlsignals_T_65 | (_crtlsignals_T_67 | _crtlsignals_T_69))))); // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_496 = _crtlsignals_T_53 ? 1'h0 : _crtlsignals_T_495; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_497 = _crtlsignals_T_51 ? 1'h0 : _crtlsignals_T_496; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_498 = _crtlsignals_T_49 ? 1'h0 : _crtlsignals_T_497; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_499 = _crtlsignals_T_47 ? 1'h0 : _crtlsignals_T_498; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_500 = _crtlsignals_T_45 ? 1'h0 : _crtlsignals_T_499; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_501 = _crtlsignals_T_43 ? 1'h0 : _crtlsignals_T_500; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_502 = _crtlsignals_T_41 ? 1'h0 : _crtlsignals_T_501; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_503 = _crtlsignals_T_39 ? 1'h0 : _crtlsignals_T_502; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_504 = _crtlsignals_T_37 ? 1'h0 : _crtlsignals_T_503; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_505 = _crtlsignals_T_35 ? 1'h0 : _crtlsignals_T_504; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_506 = _crtlsignals_T_33 ? 1'h0 : _crtlsignals_T_505; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_507 = _crtlsignals_T_31 ? 1'h0 : _crtlsignals_T_506; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_508 = _crtlsignals_T_29 ? 1'h0 : _crtlsignals_T_507; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_509 = _crtlsignals_T_27 ? 1'h0 : _crtlsignals_T_508; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_510 = _crtlsignals_T_25 ? 1'h0 : _crtlsignals_T_509; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_511 = _crtlsignals_T_23 ? 1'h0 : _crtlsignals_T_510; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_512 = _crtlsignals_T_21 ? 1'h0 : _crtlsignals_T_511; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_513 = _crtlsignals_T_19 ? 1'h0 : _crtlsignals_T_512; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_514 = _crtlsignals_T_17 ? 1'h0 : _crtlsignals_T_513; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_515 = _crtlsignals_T_15 ? 1'h0 : _crtlsignals_T_514; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_516 = _crtlsignals_T_13 ? 1'h0 : _crtlsignals_T_515; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_517 = _crtlsignals_T_11 ? 1'h0 : _crtlsignals_T_516; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_518 = _crtlsignals_T_9 ? 1'h0 : _crtlsignals_T_517; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_519 = _crtlsignals_T_7 ? 1'h0 : _crtlsignals_T_518; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_520 = _crtlsignals_T_5 ? 1'h0 : _crtlsignals_T_519; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_521 = _crtlsignals_T_3 ? 1'h0 : _crtlsignals_T_520; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_542 = _crtlsignals_T_91 ? 1'h0 : _crtlsignals_T_93 | (_crtlsignals_T_95 | (_crtlsignals_T_97 |
    _crtlsignals_T_99)); // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_543 = _crtlsignals_T_89 ? 1'h0 : _crtlsignals_T_542; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_544 = _crtlsignals_T_87 ? 1'h0 : _crtlsignals_T_543; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_545 = _crtlsignals_T_85 ? 1'h0 : _crtlsignals_T_544; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_546 = _crtlsignals_T_83 ? 1'h0 : _crtlsignals_T_545; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_547 = _crtlsignals_T_81 ? 1'h0 : _crtlsignals_T_546; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_548 = _crtlsignals_T_79 ? 1'h0 : _crtlsignals_T_547; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_549 = _crtlsignals_T_77 ? 1'h0 : _crtlsignals_T_548; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_550 = _crtlsignals_T_75 ? 1'h0 : _crtlsignals_T_549; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_551 = _crtlsignals_T_73 ? 1'h0 : _crtlsignals_T_550; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_552 = _crtlsignals_T_71 ? 1'h0 : _crtlsignals_T_551; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_553 = _crtlsignals_T_69 ? 1'h0 : _crtlsignals_T_552; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_554 = _crtlsignals_T_67 ? 1'h0 : _crtlsignals_T_553; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_555 = _crtlsignals_T_65 ? 1'h0 : _crtlsignals_T_554; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_556 = _crtlsignals_T_63 ? 1'h0 : _crtlsignals_T_555; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_557 = _crtlsignals_T_61 ? 1'h0 : _crtlsignals_T_556; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_558 = _crtlsignals_T_59 ? 1'h0 : _crtlsignals_T_557; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_559 = _crtlsignals_T_57 ? 1'h0 : _crtlsignals_T_558; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_560 = _crtlsignals_T_55 ? 1'h0 : _crtlsignals_T_559; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_561 = _crtlsignals_T_53 ? 1'h0 : _crtlsignals_T_560; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_562 = _crtlsignals_T_51 ? 1'h0 : _crtlsignals_T_561; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_563 = _crtlsignals_T_49 ? 1'h0 : _crtlsignals_T_562; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_564 = _crtlsignals_T_47 ? 1'h0 : _crtlsignals_T_563; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_565 = _crtlsignals_T_45 ? 1'h0 : _crtlsignals_T_564; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_566 = _crtlsignals_T_43 ? 1'h0 : _crtlsignals_T_565; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_567 = _crtlsignals_T_41 ? 1'h0 : _crtlsignals_T_566; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_568 = _crtlsignals_T_39 ? 1'h0 : _crtlsignals_T_567; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_569 = _crtlsignals_T_37 ? 1'h0 : _crtlsignals_T_568; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_570 = _crtlsignals_T_35 ? 1'h0 : _crtlsignals_T_569; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_571 = _crtlsignals_T_33 ? 1'h0 : _crtlsignals_T_570; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_572 = _crtlsignals_T_31 ? 1'h0 : _crtlsignals_T_571; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_573 = _crtlsignals_T_29 ? 1'h0 : _crtlsignals_T_572; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_574 = _crtlsignals_T_27 ? 1'h0 : _crtlsignals_T_573; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_575 = _crtlsignals_T_25 ? 1'h0 : _crtlsignals_T_574; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_576 = _crtlsignals_T_23 ? 1'h0 : _crtlsignals_T_575; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_577 = _crtlsignals_T_21 ? 1'h0 : _crtlsignals_T_576; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_578 = _crtlsignals_T_19 ? 1'h0 : _crtlsignals_T_577; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_579 = _crtlsignals_T_17 ? 1'h0 : _crtlsignals_T_578; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_580 = _crtlsignals_T_15 ? 1'h0 : _crtlsignals_T_579; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_581 = _crtlsignals_T_13 ? 1'h0 : _crtlsignals_T_580; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_582 = _crtlsignals_T_11 ? 1'h0 : _crtlsignals_T_581; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_583 = _crtlsignals_T_9 ? 1'h0 : _crtlsignals_T_582; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_584 = _crtlsignals_T_7 ? 1'h0 : _crtlsignals_T_583; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_585 = _crtlsignals_T_5 ? 1'h0 : _crtlsignals_T_584; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_586 = _crtlsignals_T_3 ? 1'h0 : _crtlsignals_T_585; // @[Lookup.scala 34:39]
  wire [51:0] _I_T_3 = fd_bus_r_inst[31] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] I = {_I_T_3,fd_bus_r_inst[31:20]}; // @[Cat.scala 31:58]
  wire [43:0] _U_T_3 = fd_bus_r_inst[31] ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _U_T_4 = {_U_T_3,fd_bus_r_inst[31:12]}; // @[Cat.scala 31:58]
  wire [75:0] U = {_U_T_4, 12'h0}; // @[IDU.scala 176:37]
  wire [56:0] _S_T_3 = fd_bus_r_inst[31] ? 57'h1ffffffffffffff : 57'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _S_T_4 = {_S_T_3,fd_bus_r_inst[31:25]}; // @[Cat.scala 31:58]
  wire [68:0] _S_T_5 = {_S_T_4, 5'h0}; // @[IDU.scala 177:36]
  wire [68:0] _GEN_4 = {{64'd0}, fd_bus_r_inst[11:7]}; // @[IDU.scala 177:41]
  wire [68:0] S = _S_T_5 | _GEN_4; // @[IDU.scala 177:41]
  wire [62:0] _J_T_3 = fd_bus_r_inst[31] ? 63'h7fffffffffffffff : 63'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _J_T_4 = {_J_T_3,fd_bus_r_inst[31]}; // @[Cat.scala 31:58]
  wire [83:0] _J_T_5 = {_J_T_4, 20'h0}; // @[IDU.scala 178:32]
  wire [11:0] _J_T_7 = {fd_bus_r_inst[20], 11'h0}; // @[IDU.scala 178:52]
  wire [83:0] _GEN_5 = {{72'd0}, _J_T_7}; // @[IDU.scala 178:38]
  wire [83:0] _J_T_8 = _J_T_5 | _GEN_5; // @[IDU.scala 178:38]
  wire [19:0] _J_T_10 = {fd_bus_r_inst[19:12], 12'h0}; // @[IDU.scala 178:76]
  wire [83:0] _GEN_6 = {{64'd0}, _J_T_10}; // @[IDU.scala 178:58]
  wire [83:0] _J_T_11 = _J_T_8 | _GEN_6; // @[IDU.scala 178:58]
  wire [10:0] _J_T_13 = {fd_bus_r_inst[30:21], 1'h0}; // @[IDU.scala 178:100]
  wire [83:0] _GEN_7 = {{73'd0}, _J_T_13}; // @[IDU.scala 178:82]
  wire [83:0] J = _J_T_11 | _GEN_7; // @[IDU.scala 178:82]
  wire [75:0] _B_T_5 = {_J_T_4, 12'h0}; // @[IDU.scala 179:32]
  wire [11:0] _B_T_7 = {fd_bus_r_inst[7], 11'h0}; // @[IDU.scala 179:51]
  wire [75:0] _GEN_8 = {{64'd0}, _B_T_7}; // @[IDU.scala 179:38]
  wire [75:0] _B_T_8 = _B_T_5 | _GEN_8; // @[IDU.scala 179:38]
  wire [10:0] _B_T_10 = {fd_bus_r_inst[30:25], 5'h0}; // @[IDU.scala 179:75]
  wire [75:0] _GEN_9 = {{65'd0}, _B_T_10}; // @[IDU.scala 179:57]
  wire [75:0] _B_T_11 = _B_T_8 | _GEN_9; // @[IDU.scala 179:57]
  wire [4:0] _B_T_13 = {fd_bus_r_inst[11:8], 1'h0}; // @[IDU.scala 179:97]
  wire [75:0] _GEN_10 = {{71'd0}, _B_T_13}; // @[IDU.scala 179:80]
  wire [75:0] B = _B_T_11 | _GEN_10; // @[IDU.scala 179:80]
  wire [63:0] _io_de_bus_imm_T_1 = 3'h0 == ImmType ? I : 64'h0; // @[Mux.scala 81:58]
  wire [68:0] _io_de_bus_imm_T_3 = 3'h1 == ImmType ? S : {{5'd0}, _io_de_bus_imm_T_1}; // @[Mux.scala 81:58]
  wire [75:0] _io_de_bus_imm_T_5 = 3'h2 == ImmType ? B : {{7'd0}, _io_de_bus_imm_T_3}; // @[Mux.scala 81:58]
  wire [75:0] _io_de_bus_imm_T_7 = 3'h3 == ImmType ? U : _io_de_bus_imm_T_5; // @[Mux.scala 81:58]
  wire [83:0] _io_de_bus_imm_T_9 = 3'h4 == ImmType ? J : {{8'd0}, _io_de_bus_imm_T_7}; // @[Mux.scala 81:58]
  wire [63:0] _io_de_bus_wmask_T_1 = 8'h2f == io_de_bus_OP ? 64'h1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_de_bus_wmask_T_3 = 8'h30 == io_de_bus_OP ? 64'h3 : _io_de_bus_wmask_T_1; // @[Mux.scala 81:58]
  wire [63:0] _io_de_bus_wmask_T_5 = 8'h31 == io_de_bus_OP ? 64'hf : _io_de_bus_wmask_T_3; // @[Mux.scala 81:58]
  wire [63:0] _io_de_bus_wmask_T_7 = 8'h2e == io_de_bus_OP ? 64'hff : _io_de_bus_wmask_T_5; // @[Mux.scala 81:58]
  wire [2:0] _io_de_bus_ld_type_T_3 = 8'h1e == io_de_bus_OP ? 3'h1 : 3'h0; // @[Mux.scala 81:58]
  wire [2:0] _io_de_bus_ld_type_T_5 = 8'h21 == io_de_bus_OP ? 3'h2 : _io_de_bus_ld_type_T_3; // @[Mux.scala 81:58]
  wire [2:0] _io_de_bus_ld_type_T_7 = 8'h20 == io_de_bus_OP ? 3'h3 : _io_de_bus_ld_type_T_5; // @[Mux.scala 81:58]
  wire [2:0] _io_de_bus_ld_type_T_9 = 8'h1d == io_de_bus_OP ? 3'h4 : _io_de_bus_ld_type_T_7; // @[Mux.scala 81:58]
  wire [2:0] _io_de_bus_ld_type_T_11 = 8'h1f == io_de_bus_OP ? 3'h5 : _io_de_bus_ld_type_T_9; // @[Mux.scala 81:58]
  wire [1:0] _csr_index_T_3 = 64'h341 == I ? 2'h2 : {{1'd0}, 64'h342 == I}; // @[Mux.scala 81:58]
  wire [1:0] _csr_index_T_5 = 64'h300 == I ? 2'h3 : _csr_index_T_3; // @[Mux.scala 81:58]
  wire [2:0] csr_index = 64'h305 == I ? 3'h4 : {{1'd0}, _csr_index_T_5}; // @[Mux.scala 81:58]
  wire [2:0] _io_de_bus_csr_raddr_T = mret ? 3'h2 : csr_index; // @[IDU.scala 228:42]
  wire [63:0] _GEN_11 = {{32'd0}, fd_bus_r_pc}; // @[IDU.scala 255:25]
  wire [63:0] _br_target_T_1 = _GEN_11 + io_de_bus_imm; // @[IDU.scala 255:25]
  wire [63:0] _br_target_T_15 = rf_rdata1 + io_de_bus_imm; // @[IDU.scala 262:31]
  wire [63:0] _br_target_T_16 = _br_target_T_15 & 64'hfffffffffffffffe; // @[IDU.scala 262:48]
  wire [63:0] _br_target_T_18 = 8'h32 == io_de_bus_OP ? _br_target_T_1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _br_target_T_20 = 8'h33 == io_de_bus_OP ? _br_target_T_1 : _br_target_T_18; // @[Mux.scala 81:58]
  wire [63:0] _br_target_T_22 = 8'h36 == io_de_bus_OP ? _br_target_T_1 : _br_target_T_20; // @[Mux.scala 81:58]
  wire [63:0] _br_target_T_24 = 8'h34 == io_de_bus_OP ? _br_target_T_1 : _br_target_T_22; // @[Mux.scala 81:58]
  wire [63:0] _br_target_T_26 = 8'h37 == io_de_bus_OP ? _br_target_T_1 : _br_target_T_24; // @[Mux.scala 81:58]
  wire [63:0] _br_target_T_28 = 8'h35 == io_de_bus_OP ? _br_target_T_1 : _br_target_T_26; // @[Mux.scala 81:58]
  wire [63:0] _br_target_T_30 = 8'h3a == io_de_bus_OP ? _br_target_T_1 : _br_target_T_28; // @[Mux.scala 81:58]
  wire [63:0] _br_target_T_32 = 8'h1b == io_de_bus_OP ? _br_target_T_16 : _br_target_T_30; // @[Mux.scala 81:58]
  wire [2:0] _T_7 = io_rf_bus_eval ? io_rf_bus_csr_waddr2 : 3'h0; // @[IDU.scala 311:20]
  Registers Registers ( // @[IDU.scala 282:25]
    .clock(Registers_clock),
    .io_wen(Registers_io_wen),
    .io_wdata(Registers_io_wdata),
    .io_rdata1(Registers_io_rdata1),
    .io_rdata2(Registers_io_rdata2),
    .io_rs1(Registers_io_rs1),
    .io_rs2(Registers_io_rs2),
    .io_waddr(Registers_io_waddr),
    .io_regs_0(Registers_io_regs_0),
    .io_regs_1(Registers_io_regs_1),
    .io_regs_2(Registers_io_regs_2),
    .io_regs_3(Registers_io_regs_3),
    .io_regs_4(Registers_io_regs_4),
    .io_regs_5(Registers_io_regs_5),
    .io_regs_6(Registers_io_regs_6),
    .io_regs_7(Registers_io_regs_7),
    .io_regs_8(Registers_io_regs_8),
    .io_regs_9(Registers_io_regs_9),
    .io_regs_10(Registers_io_regs_10),
    .io_regs_11(Registers_io_regs_11),
    .io_regs_12(Registers_io_regs_12),
    .io_regs_13(Registers_io_regs_13),
    .io_regs_14(Registers_io_regs_14),
    .io_regs_15(Registers_io_regs_15),
    .io_regs_16(Registers_io_regs_16),
    .io_regs_17(Registers_io_regs_17),
    .io_regs_18(Registers_io_regs_18),
    .io_regs_19(Registers_io_regs_19),
    .io_regs_20(Registers_io_regs_20),
    .io_regs_21(Registers_io_regs_21),
    .io_regs_22(Registers_io_regs_22),
    .io_regs_23(Registers_io_regs_23),
    .io_regs_24(Registers_io_regs_24),
    .io_regs_25(Registers_io_regs_25),
    .io_regs_26(Registers_io_regs_26),
    .io_regs_27(Registers_io_regs_27),
    .io_regs_28(Registers_io_regs_28),
    .io_regs_29(Registers_io_regs_29),
    .io_regs_30(Registers_io_regs_30),
    .io_regs_31(Registers_io_regs_31)
  );
  DPI_EBREAK DPI_EBREAK ( // @[IDU.scala 305:26]
    .flag(DPI_EBREAK_flag)
  );
  CSR CSR ( // @[IDU.scala 309:20]
    .clock(CSR_clock),
    .io_wen(CSR_io_wen),
    .io_ren(CSR_io_ren),
    .io_wdata1(CSR_io_wdata1),
    .io_wdata2(CSR_io_wdata2),
    .io_rdata(CSR_io_rdata),
    .io_waddr1(CSR_io_waddr1),
    .io_waddr2(CSR_io_waddr2),
    .io_raddr(CSR_io_raddr),
    .io_csrs_0(CSR_io_csrs_0),
    .io_csrs_1(CSR_io_csrs_1),
    .io_csrs_2(CSR_io_csrs_2),
    .io_csrs_3(CSR_io_csrs_3),
    .io_csrs_4(CSR_io_csrs_4)
  );
  DPI dpi ( // @[IDU.scala 322:19]
    .rf_0(dpi_rf_0),
    .rf_1(dpi_rf_1),
    .rf_2(dpi_rf_2),
    .rf_3(dpi_rf_3),
    .rf_4(dpi_rf_4),
    .rf_5(dpi_rf_5),
    .rf_6(dpi_rf_6),
    .rf_7(dpi_rf_7),
    .rf_8(dpi_rf_8),
    .rf_9(dpi_rf_9),
    .rf_10(dpi_rf_10),
    .rf_11(dpi_rf_11),
    .rf_12(dpi_rf_12),
    .rf_13(dpi_rf_13),
    .rf_14(dpi_rf_14),
    .rf_15(dpi_rf_15),
    .rf_16(dpi_rf_16),
    .rf_17(dpi_rf_17),
    .rf_18(dpi_rf_18),
    .rf_19(dpi_rf_19),
    .rf_20(dpi_rf_20),
    .rf_21(dpi_rf_21),
    .rf_22(dpi_rf_22),
    .rf_23(dpi_rf_23),
    .rf_24(dpi_rf_24),
    .rf_25(dpi_rf_25),
    .rf_26(dpi_rf_26),
    .rf_27(dpi_rf_27),
    .rf_28(dpi_rf_28),
    .rf_29(dpi_rf_29),
    .rf_30(dpi_rf_30),
    .rf_31(dpi_rf_31),
    .csr_0(dpi_csr_0),
    .csr_1(dpi_csr_1),
    .csr_2(dpi_csr_2),
    .csr_3(dpi_csr_3),
    .csr_4(dpi_csr_4),
    .inst(dpi_inst),
    .pc(dpi_pc),
    .eval(dpi_eval)
  );
  assign io_ds_allowin = ~ds_valid | ds_ready_go & io_es_allowin; // @[IDU.scala 54:34]
  assign io_ds_to_es_valid = ds_valid & ds_ready_go; // @[IDU.scala 55:33]
  assign io_de_bus_OP = _crtlsignals_T_1 ? 8'h0 : _crtlsignals_T_196; // @[Lookup.scala 34:39]
  assign io_de_bus_res_from_mem = _crtlsignals_T_1 ? 1'h0 : _crtlsignals_T_521; // @[Lookup.scala 34:39]
  assign io_de_bus_gr_we = _crtlsignals_T_1 | (_crtlsignals_T_3 | (_crtlsignals_T_5 | (_crtlsignals_T_7 | (
    _crtlsignals_T_9 | (_crtlsignals_T_11 | (_crtlsignals_T_13 | (_crtlsignals_T_15 | (_crtlsignals_T_17 | (
    _crtlsignals_T_19 | (_crtlsignals_T_21 | (_crtlsignals_T_23 | (_crtlsignals_T_25 | (_crtlsignals_T_27 | (
    _crtlsignals_T_29 | (_crtlsignals_T_31 | (_crtlsignals_T_33 | (_crtlsignals_T_35 | (_crtlsignals_T_37 | (
    _crtlsignals_T_39 | _crtlsignals_T_242))))))))))))))))))); // @[Lookup.scala 34:39]
  assign io_de_bus_MemWen = _crtlsignals_T_1 ? 1'h0 : _crtlsignals_T_456; // @[Lookup.scala 34:39]
  assign io_de_bus_wmask = _io_de_bus_wmask_T_7[7:0]; // @[IDU.scala 192:19]
  assign io_de_bus_ds_pc = fd_bus_r_pc; // @[IDU.scala 36:21 38:11]
  assign io_de_bus_dest = fd_bus_r_inst[11:7]; // @[IDU.scala 270:17]
  assign io_de_bus_imm = _io_de_bus_imm_T_9[63:0]; // @[IDU.scala 181:17]
  assign io_de_bus_rdata1 = _rf_rdata1_T_5 ? io_es_dest_valid_es_forward_data : _rf_rdata1_T_17; // @[Mux.scala 101:16]
  assign io_de_bus_rdata2 = _rf_rdata2_T_4 ? io_es_dest_valid_es_forward_data : _rf_rdata2_T_16; // @[Mux.scala 101:16]
  assign io_de_bus_ld_type = 8'h22 == io_de_bus_OP ? 3'h6 : _io_de_bus_ld_type_T_11; // @[Mux.scala 81:58]
  assign io_de_bus_inst = fd_bus_r_inst; // @[IDU.scala 35:21 37:11]
  assign io_de_bus_csr_rdata = CSR_io_rdata; // @[IDU.scala 317:23]
  assign io_de_bus_csr_waddr1 = eval ? 3'h1 : csr_index; // @[IDU.scala 229:30]
  assign io_de_bus_csr_waddr2 = eval ? 3'h2 : csr_index; // @[IDU.scala 230:30]
  assign io_de_bus_csr_raddr = eval ? 3'h4 : _io_de_bus_csr_raddr_T; // @[IDU.scala 228:29]
  assign io_de_bus_csr_ren = _br_taken_cancel_T | csr_index != 3'h0; // @[IDU.scala 231:40]
  assign io_de_bus_csr_wen = _crtlsignals_T_1 ? 1'h0 : _crtlsignals_T_586; // @[Lookup.scala 34:39]
  assign io_de_bus_eval = io_de_bus_OP == 8'h3f; // @[IDU.scala 225:27]
  assign io_de_bus_is_ld = io_de_bus_res_from_mem; // @[IDU.scala 272:25]
  assign io_br_bus_br_taken = 8'h1b == io_de_bus_OP ? ds_valid : _br_taken_T_31; // @[Mux.scala 81:58]
  assign io_br_bus_br_target = _br_target_T_32[31:0]; // @[IDU.scala 251:13 48:29]
  assign io_br_bus_br_taken_cancel = (eval | mret | br_taken) & ds_ready_go; // @[IDU.scala 266:49]
  assign io_br_bus_rawblock = io_es_dest_valid_es_valid & es_rawblock | io_ms_dest_valid_ms_valid & ms_rawblock; // @[IDU.scala 276:59]
  assign io_br_bus_csr_rdata = CSR_io_rdata; // @[IDU.scala 318:23]
  assign io_br_bus_eval = io_de_bus_OP == 8'h3f; // @[IDU.scala 225:27]
  assign io_br_bus_mret = io_de_bus_OP == 8'h40; // @[IDU.scala 226:27]
  assign Registers_clock = clock;
  assign Registers_io_wen = io_rf_bus_rf_we; // @[IDU.scala 40:22 43:12]
  assign Registers_io_wdata = io_rf_bus_rf_wdata; // @[IDU.scala 42:22 45:12]
  assign Registers_io_rs1 = ~eval ? rs1 : 5'h11; // @[IDU.scala 286:25]
  assign Registers_io_rs2 = fd_bus_r_inst[24:20]; // @[IDU.scala 269:17]
  assign Registers_io_waddr = io_rf_bus_rf_waddr; // @[IDU.scala 41:22 44:12]
  assign DPI_EBREAK_flag = io_de_bus_OP == 8'h3b & ds_valid ? 32'h1 : 32'h0; // @[IDU.scala 306:25]
  assign CSR_clock = clock;
  assign CSR_io_wen = io_rf_bus_csr_wen; // @[IDU.scala 316:14]
  assign CSR_io_ren = io_de_bus_csr_ren; // @[IDU.scala 314:14]
  assign CSR_io_wdata1 = io_rf_bus_csr_wdata; // @[IDU.scala 312:15]
  assign CSR_io_wdata2 = {{32'd0}, io_rf_bus_wb_pc}; // @[IDU.scala 313:15]
  assign CSR_io_waddr1 = {{2'd0}, io_rf_bus_csr_waddr1}; // @[IDU.scala 310:14]
  assign CSR_io_waddr2 = {{2'd0}, _T_7}; // @[IDU.scala 311:14]
  assign CSR_io_raddr = {{2'd0}, io_de_bus_csr_raddr}; // @[IDU.scala 315:14]
  assign dpi_rf_0 = Registers_io_regs_0; // @[IDU.scala 323:16]
  assign dpi_rf_1 = Registers_io_regs_1; // @[IDU.scala 324:16]
  assign dpi_rf_2 = Registers_io_regs_2; // @[IDU.scala 325:16]
  assign dpi_rf_3 = Registers_io_regs_3; // @[IDU.scala 326:16]
  assign dpi_rf_4 = Registers_io_regs_4; // @[IDU.scala 327:16]
  assign dpi_rf_5 = Registers_io_regs_5; // @[IDU.scala 328:16]
  assign dpi_rf_6 = Registers_io_regs_6; // @[IDU.scala 329:16]
  assign dpi_rf_7 = Registers_io_regs_7; // @[IDU.scala 330:16]
  assign dpi_rf_8 = Registers_io_regs_8; // @[IDU.scala 331:16]
  assign dpi_rf_9 = Registers_io_regs_9; // @[IDU.scala 332:16]
  assign dpi_rf_10 = Registers_io_regs_10; // @[IDU.scala 333:16]
  assign dpi_rf_11 = Registers_io_regs_11; // @[IDU.scala 334:16]
  assign dpi_rf_12 = Registers_io_regs_12; // @[IDU.scala 335:16]
  assign dpi_rf_13 = Registers_io_regs_13; // @[IDU.scala 336:16]
  assign dpi_rf_14 = Registers_io_regs_14; // @[IDU.scala 337:16]
  assign dpi_rf_15 = Registers_io_regs_15; // @[IDU.scala 338:16]
  assign dpi_rf_16 = Registers_io_regs_16; // @[IDU.scala 339:16]
  assign dpi_rf_17 = Registers_io_regs_17; // @[IDU.scala 340:16]
  assign dpi_rf_18 = Registers_io_regs_18; // @[IDU.scala 341:16]
  assign dpi_rf_19 = Registers_io_regs_19; // @[IDU.scala 342:16]
  assign dpi_rf_20 = Registers_io_regs_20; // @[IDU.scala 343:16]
  assign dpi_rf_21 = Registers_io_regs_21; // @[IDU.scala 344:16]
  assign dpi_rf_22 = Registers_io_regs_22; // @[IDU.scala 345:16]
  assign dpi_rf_23 = Registers_io_regs_23; // @[IDU.scala 346:16]
  assign dpi_rf_24 = Registers_io_regs_24; // @[IDU.scala 347:16]
  assign dpi_rf_25 = Registers_io_regs_25; // @[IDU.scala 348:16]
  assign dpi_rf_26 = Registers_io_regs_26; // @[IDU.scala 349:16]
  assign dpi_rf_27 = Registers_io_regs_27; // @[IDU.scala 350:16]
  assign dpi_rf_28 = Registers_io_regs_28; // @[IDU.scala 351:16]
  assign dpi_rf_29 = Registers_io_regs_29; // @[IDU.scala 352:16]
  assign dpi_rf_30 = Registers_io_regs_30; // @[IDU.scala 353:16]
  assign dpi_rf_31 = Registers_io_regs_31; // @[IDU.scala 354:16]
  assign dpi_csr_0 = CSR_io_csrs_0; // @[IDU.scala 357:16]
  assign dpi_csr_1 = CSR_io_csrs_1; // @[IDU.scala 358:16]
  assign dpi_csr_2 = CSR_io_csrs_2; // @[IDU.scala 359:16]
  assign dpi_csr_3 = CSR_io_csrs_3; // @[IDU.scala 360:16]
  assign dpi_csr_4 = CSR_io_csrs_4; // @[IDU.scala 361:16]
  assign dpi_inst = fd_bus_r_inst; // @[IDU.scala 35:21 37:11]
  assign dpi_pc = {{32'd0}, fd_bus_r_pc}; // @[IDU.scala 356:16]
  assign dpi_eval = {{31'd0}, eval}; // @[IDU.scala 362:16]
  always @(posedge clock) begin
    if (reset) begin // @[IDU.scala 31:28]
      ds_valid <= 1'h0; // @[IDU.scala 31:28]
    end else if (br_taken_cancel & io_ds_allowin) begin // @[IDU.scala 57:42]
      ds_valid <= 1'h0; // @[IDU.scala 58:14]
    end else if (io_ds_allowin) begin // @[IDU.scala 59:29]
      ds_valid <= io_fs_to_ds_valid; // @[IDU.scala 60:14]
    end
    if (reset) begin // @[IDU.scala 33:28]
      fd_bus_r_inst <= 32'h0; // @[IDU.scala 33:28]
    end else if (io_fs_to_ds_valid & io_ds_allowin) begin // @[IDU.scala 63:44]
      fd_bus_r_inst <= io_fd_bus_inst; // @[IDU.scala 64:14]
    end
    if (reset) begin // @[IDU.scala 33:28]
      fd_bus_r_pc <= 32'h0; // @[IDU.scala 33:28]
    end else if (io_fs_to_ds_valid & io_ds_allowin) begin // @[IDU.scala 63:44]
      fd_bus_r_pc <= io_fd_bus_pc; // @[IDU.scala 64:14]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ds_valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  fd_bus_r_inst = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  fd_bus_r_pc = _RAND_2[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module RS(
  input   io_sel_negative,
  input   io_sel_positive,
  input   io_sel_double_negative,
  input   io_sel_double_positive,
  input   io_x,
  input   io_x_sub,
  output  io_p
);
  wire  _io_p_T_2 = ~(io_sel_negative & ~io_x); // @[RS.scala 17:11]
  wire  _io_p_T_6 = _io_p_T_2 & ~(io_sel_double_negative & ~io_x_sub); // @[RS.scala 18:9]
  wire  _io_p_T_9 = _io_p_T_6 & ~(io_sel_positive & io_x); // @[RS.scala 19:9]
  wire  _io_p_T_12 = _io_p_T_9 & ~(io_sel_double_positive & io_x_sub); // @[RS.scala 20:9]
  assign io_p = ~_io_p_T_12; // @[RS.scala 17:9]
endmodule
module BOOTH_S(
  output       io_sel_negative,
  output       io_sel_positive,
  output       io_sel_double_negative,
  output       io_sel_double_positive,
  output       io_cout,
  input  [2:0] io_src
);
  wire  y_add = io_src[2]; // @[BOOTH_S.scala 15:23]
  wire  y = io_src[1]; // @[BOOTH_S.scala 16:23]
  wire  y_sub = io_src[0]; // @[BOOTH_S.scala 17:23]
  wire  _io_sel_negative_T = ~y_sub; // @[BOOTH_S.scala 18:37]
  wire  _io_sel_negative_T_2 = ~y; // @[BOOTH_S.scala 18:46]
  wire  _io_sel_negative_T_4 = y & ~y_sub | ~y & y_sub; // @[BOOTH_S.scala 18:44]
  wire  _io_sel_negative_T_5 = y_add & (y & ~y_sub | ~y & y_sub); // @[BOOTH_S.scala 18:30]
  wire  _io_sel_positive_T = ~y_add; // @[BOOTH_S.scala 19:24]
  wire  _io_sel_double_negative_T_3 = y_add & _io_sel_negative_T_2 & _io_sel_negative_T; // @[BOOTH_S.scala 20:42]
  assign io_sel_negative = y_add & (y & ~y_sub | ~y & y_sub); // @[BOOTH_S.scala 18:30]
  assign io_sel_positive = ~y_add & _io_sel_negative_T_4; // @[BOOTH_S.scala 19:31]
  assign io_sel_double_negative = y_add & _io_sel_negative_T_2 & _io_sel_negative_T; // @[BOOTH_S.scala 20:42]
  assign io_sel_double_positive = _io_sel_positive_T & y & y_sub; // @[BOOTH_S.scala 21:42]
  assign io_cout = _io_sel_double_negative_T_3 | _io_sel_negative_T_5; // @[BOOTH_S.scala 22:38]
endmodule
module BOOTH_gen(
  input  [131:0] io_x,
  input  [2:0]   io_y,
  output [131:0] io_out,
  output         io_cout
);
  wire  RS_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_1_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_1_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_1_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_1_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_1_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_1_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_1_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_2_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_2_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_2_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_2_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_2_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_2_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_2_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_3_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_3_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_3_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_3_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_3_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_3_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_3_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_4_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_4_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_4_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_4_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_4_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_4_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_4_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_5_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_5_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_5_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_5_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_5_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_5_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_5_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_6_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_6_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_6_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_6_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_6_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_6_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_6_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_7_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_7_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_7_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_7_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_7_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_7_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_7_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_8_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_8_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_8_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_8_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_8_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_8_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_8_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_9_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_9_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_9_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_9_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_9_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_9_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_9_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_10_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_10_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_10_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_10_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_10_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_10_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_10_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_11_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_11_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_11_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_11_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_11_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_11_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_11_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_12_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_12_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_12_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_12_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_12_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_12_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_12_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_13_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_13_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_13_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_13_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_13_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_13_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_13_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_14_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_14_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_14_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_14_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_14_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_14_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_14_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_15_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_15_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_15_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_15_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_15_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_15_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_15_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_16_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_16_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_16_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_16_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_16_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_16_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_16_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_17_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_17_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_17_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_17_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_17_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_17_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_17_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_18_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_18_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_18_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_18_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_18_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_18_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_18_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_19_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_19_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_19_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_19_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_19_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_19_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_19_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_20_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_20_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_20_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_20_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_20_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_20_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_20_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_21_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_21_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_21_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_21_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_21_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_21_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_21_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_22_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_22_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_22_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_22_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_22_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_22_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_22_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_23_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_23_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_23_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_23_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_23_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_23_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_23_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_24_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_24_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_24_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_24_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_24_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_24_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_24_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_25_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_25_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_25_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_25_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_25_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_25_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_25_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_26_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_26_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_26_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_26_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_26_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_26_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_26_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_27_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_27_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_27_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_27_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_27_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_27_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_27_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_28_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_28_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_28_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_28_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_28_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_28_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_28_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_29_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_29_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_29_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_29_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_29_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_29_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_29_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_30_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_30_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_30_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_30_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_30_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_30_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_30_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_31_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_31_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_31_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_31_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_31_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_31_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_31_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_32_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_32_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_32_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_32_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_32_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_32_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_32_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_33_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_33_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_33_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_33_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_33_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_33_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_33_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_34_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_34_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_34_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_34_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_34_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_34_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_34_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_35_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_35_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_35_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_35_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_35_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_35_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_35_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_36_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_36_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_36_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_36_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_36_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_36_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_36_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_37_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_37_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_37_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_37_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_37_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_37_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_37_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_38_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_38_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_38_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_38_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_38_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_38_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_38_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_39_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_39_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_39_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_39_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_39_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_39_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_39_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_40_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_40_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_40_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_40_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_40_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_40_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_40_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_41_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_41_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_41_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_41_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_41_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_41_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_41_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_42_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_42_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_42_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_42_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_42_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_42_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_42_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_43_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_43_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_43_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_43_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_43_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_43_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_43_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_44_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_44_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_44_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_44_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_44_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_44_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_44_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_45_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_45_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_45_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_45_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_45_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_45_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_45_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_46_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_46_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_46_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_46_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_46_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_46_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_46_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_47_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_47_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_47_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_47_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_47_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_47_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_47_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_48_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_48_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_48_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_48_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_48_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_48_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_48_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_49_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_49_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_49_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_49_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_49_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_49_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_49_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_50_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_50_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_50_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_50_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_50_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_50_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_50_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_51_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_51_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_51_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_51_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_51_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_51_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_51_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_52_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_52_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_52_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_52_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_52_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_52_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_52_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_53_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_53_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_53_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_53_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_53_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_53_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_53_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_54_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_54_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_54_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_54_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_54_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_54_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_54_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_55_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_55_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_55_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_55_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_55_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_55_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_55_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_56_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_56_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_56_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_56_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_56_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_56_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_56_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_57_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_57_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_57_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_57_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_57_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_57_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_57_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_58_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_58_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_58_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_58_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_58_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_58_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_58_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_59_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_59_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_59_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_59_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_59_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_59_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_59_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_60_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_60_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_60_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_60_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_60_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_60_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_60_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_61_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_61_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_61_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_61_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_61_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_61_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_61_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_62_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_62_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_62_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_62_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_62_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_62_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_62_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_63_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_63_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_63_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_63_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_63_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_63_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_63_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_64_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_64_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_64_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_64_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_64_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_64_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_64_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_65_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_65_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_65_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_65_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_65_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_65_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_65_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_66_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_66_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_66_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_66_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_66_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_66_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_66_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_67_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_67_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_67_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_67_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_67_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_67_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_67_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_68_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_68_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_68_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_68_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_68_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_68_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_68_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_69_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_69_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_69_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_69_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_69_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_69_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_69_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_70_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_70_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_70_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_70_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_70_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_70_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_70_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_71_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_71_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_71_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_71_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_71_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_71_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_71_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_72_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_72_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_72_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_72_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_72_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_72_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_72_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_73_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_73_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_73_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_73_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_73_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_73_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_73_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_74_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_74_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_74_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_74_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_74_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_74_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_74_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_75_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_75_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_75_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_75_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_75_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_75_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_75_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_76_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_76_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_76_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_76_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_76_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_76_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_76_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_77_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_77_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_77_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_77_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_77_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_77_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_77_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_78_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_78_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_78_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_78_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_78_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_78_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_78_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_79_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_79_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_79_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_79_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_79_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_79_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_79_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_80_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_80_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_80_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_80_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_80_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_80_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_80_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_81_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_81_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_81_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_81_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_81_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_81_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_81_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_82_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_82_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_82_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_82_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_82_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_82_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_82_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_83_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_83_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_83_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_83_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_83_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_83_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_83_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_84_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_84_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_84_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_84_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_84_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_84_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_84_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_85_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_85_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_85_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_85_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_85_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_85_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_85_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_86_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_86_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_86_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_86_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_86_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_86_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_86_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_87_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_87_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_87_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_87_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_87_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_87_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_87_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_88_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_88_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_88_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_88_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_88_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_88_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_88_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_89_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_89_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_89_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_89_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_89_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_89_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_89_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_90_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_90_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_90_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_90_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_90_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_90_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_90_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_91_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_91_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_91_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_91_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_91_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_91_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_91_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_92_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_92_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_92_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_92_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_92_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_92_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_92_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_93_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_93_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_93_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_93_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_93_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_93_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_93_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_94_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_94_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_94_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_94_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_94_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_94_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_94_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_95_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_95_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_95_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_95_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_95_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_95_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_95_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_96_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_96_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_96_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_96_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_96_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_96_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_96_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_97_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_97_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_97_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_97_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_97_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_97_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_97_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_98_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_98_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_98_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_98_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_98_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_98_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_98_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_99_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_99_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_99_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_99_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_99_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_99_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_99_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_100_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_100_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_100_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_100_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_100_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_100_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_100_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_101_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_101_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_101_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_101_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_101_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_101_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_101_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_102_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_102_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_102_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_102_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_102_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_102_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_102_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_103_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_103_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_103_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_103_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_103_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_103_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_103_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_104_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_104_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_104_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_104_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_104_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_104_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_104_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_105_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_105_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_105_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_105_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_105_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_105_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_105_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_106_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_106_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_106_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_106_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_106_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_106_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_106_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_107_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_107_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_107_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_107_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_107_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_107_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_107_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_108_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_108_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_108_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_108_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_108_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_108_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_108_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_109_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_109_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_109_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_109_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_109_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_109_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_109_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_110_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_110_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_110_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_110_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_110_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_110_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_110_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_111_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_111_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_111_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_111_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_111_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_111_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_111_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_112_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_112_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_112_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_112_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_112_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_112_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_112_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_113_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_113_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_113_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_113_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_113_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_113_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_113_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_114_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_114_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_114_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_114_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_114_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_114_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_114_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_115_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_115_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_115_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_115_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_115_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_115_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_115_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_116_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_116_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_116_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_116_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_116_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_116_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_116_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_117_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_117_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_117_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_117_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_117_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_117_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_117_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_118_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_118_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_118_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_118_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_118_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_118_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_118_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_119_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_119_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_119_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_119_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_119_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_119_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_119_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_120_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_120_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_120_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_120_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_120_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_120_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_120_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_121_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_121_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_121_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_121_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_121_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_121_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_121_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_122_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_122_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_122_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_122_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_122_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_122_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_122_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_123_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_123_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_123_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_123_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_123_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_123_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_123_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_124_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_124_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_124_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_124_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_124_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_124_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_124_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_125_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_125_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_125_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_125_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_125_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_125_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_125_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_126_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_126_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_126_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_126_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_126_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_126_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_126_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_127_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_127_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_127_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_127_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_127_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_127_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_127_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_128_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_128_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_128_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_128_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_128_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_128_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_128_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_129_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_129_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_129_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_129_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_129_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_129_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_129_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_130_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_130_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_130_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_130_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_130_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_130_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_130_io_p; // @[BOOTH_gen.scala 16:42]
  wire  RS_131_io_sel_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_131_io_sel_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_131_io_sel_double_negative; // @[BOOTH_gen.scala 16:42]
  wire  RS_131_io_sel_double_positive; // @[BOOTH_gen.scala 16:42]
  wire  RS_131_io_x; // @[BOOTH_gen.scala 16:42]
  wire  RS_131_io_x_sub; // @[BOOTH_gen.scala 16:42]
  wire  RS_131_io_p; // @[BOOTH_gen.scala 16:42]
  wire  BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 17:21]
  wire  BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 17:21]
  wire  BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 17:21]
  wire  BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 17:21]
  wire  BOOTH_S_io_cout; // @[BOOTH_gen.scala 17:21]
  wire [2:0] BOOTH_S_io_src; // @[BOOTH_gen.scala 17:21]
  wire  r_1_p = RS_1_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_0_p = RS_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_3_p = RS_3_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_2_p = RS_2_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_5_p = RS_5_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_4_p = RS_4_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_7_p = RS_7_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_6_p = RS_6_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire [7:0] io_out_lo_lo_lo_lo = {r_7_p,r_6_p,r_5_p,r_4_p,r_3_p,r_2_p,r_1_p,r_0_p}; // @[Cat.scala 31:58]
  wire  r_9_p = RS_9_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_8_p = RS_8_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_11_p = RS_11_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_10_p = RS_10_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_13_p = RS_13_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_12_p = RS_12_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_15_p = RS_15_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_14_p = RS_14_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_17_p = RS_17_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_16_p = RS_16_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_19_p = RS_19_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_18_p = RS_18_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_21_p = RS_21_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_20_p = RS_20_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_23_p = RS_23_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_22_p = RS_22_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire [7:0] io_out_lo_lo_hi_lo = {r_23_p,r_22_p,r_21_p,r_20_p,r_19_p,r_18_p,r_17_p,r_16_p}; // @[Cat.scala 31:58]
  wire  r_25_p = RS_25_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_24_p = RS_24_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_27_p = RS_27_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_26_p = RS_26_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_29_p = RS_29_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_28_p = RS_28_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_32_p = RS_32_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_31_p = RS_31_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_30_p = RS_30_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire [16:0] io_out_lo_lo_hi = {r_32_p,r_31_p,r_30_p,r_29_p,r_28_p,r_27_p,r_26_p,r_25_p,r_24_p,io_out_lo_lo_hi_lo}; // @[Cat.scala 31:58]
  wire [32:0] io_out_lo_lo = {io_out_lo_lo_hi,r_15_p,r_14_p,r_13_p,r_12_p,r_11_p,r_10_p,r_9_p,r_8_p,io_out_lo_lo_lo_lo}; // @[Cat.scala 31:58]
  wire  r_34_p = RS_34_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_33_p = RS_33_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_36_p = RS_36_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_35_p = RS_35_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_38_p = RS_38_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_37_p = RS_37_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_40_p = RS_40_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_39_p = RS_39_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire [7:0] io_out_lo_hi_lo_lo = {r_40_p,r_39_p,r_38_p,r_37_p,r_36_p,r_35_p,r_34_p,r_33_p}; // @[Cat.scala 31:58]
  wire  r_42_p = RS_42_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_41_p = RS_41_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_44_p = RS_44_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_43_p = RS_43_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_46_p = RS_46_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_45_p = RS_45_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_48_p = RS_48_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_47_p = RS_47_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_50_p = RS_50_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_49_p = RS_49_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_52_p = RS_52_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_51_p = RS_51_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_54_p = RS_54_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_53_p = RS_53_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_56_p = RS_56_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_55_p = RS_55_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire [7:0] io_out_lo_hi_hi_lo = {r_56_p,r_55_p,r_54_p,r_53_p,r_52_p,r_51_p,r_50_p,r_49_p}; // @[Cat.scala 31:58]
  wire  r_58_p = RS_58_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_57_p = RS_57_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_60_p = RS_60_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_59_p = RS_59_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_62_p = RS_62_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_61_p = RS_61_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_65_p = RS_65_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_64_p = RS_64_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_63_p = RS_63_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire [16:0] io_out_lo_hi_hi = {r_65_p,r_64_p,r_63_p,r_62_p,r_61_p,r_60_p,r_59_p,r_58_p,r_57_p,io_out_lo_hi_hi_lo}; // @[Cat.scala 31:58]
  wire [32:0] io_out_lo_hi = {io_out_lo_hi_hi,r_48_p,r_47_p,r_46_p,r_45_p,r_44_p,r_43_p,r_42_p,r_41_p,io_out_lo_hi_lo_lo
    }; // @[Cat.scala 31:58]
  wire [65:0] io_out_lo = {io_out_lo_hi,io_out_lo_lo}; // @[Cat.scala 31:58]
  wire  r_67_p = RS_67_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_66_p = RS_66_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_69_p = RS_69_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_68_p = RS_68_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_71_p = RS_71_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_70_p = RS_70_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_73_p = RS_73_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_72_p = RS_72_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire [7:0] io_out_hi_lo_lo_lo = {r_73_p,r_72_p,r_71_p,r_70_p,r_69_p,r_68_p,r_67_p,r_66_p}; // @[Cat.scala 31:58]
  wire  r_75_p = RS_75_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_74_p = RS_74_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_77_p = RS_77_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_76_p = RS_76_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_79_p = RS_79_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_78_p = RS_78_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_81_p = RS_81_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_80_p = RS_80_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_83_p = RS_83_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_82_p = RS_82_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_85_p = RS_85_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_84_p = RS_84_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_87_p = RS_87_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_86_p = RS_86_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_89_p = RS_89_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_88_p = RS_88_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire [7:0] io_out_hi_lo_hi_lo = {r_89_p,r_88_p,r_87_p,r_86_p,r_85_p,r_84_p,r_83_p,r_82_p}; // @[Cat.scala 31:58]
  wire  r_91_p = RS_91_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_90_p = RS_90_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_93_p = RS_93_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_92_p = RS_92_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_95_p = RS_95_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_94_p = RS_94_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_98_p = RS_98_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_97_p = RS_97_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_96_p = RS_96_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire [16:0] io_out_hi_lo_hi = {r_98_p,r_97_p,r_96_p,r_95_p,r_94_p,r_93_p,r_92_p,r_91_p,r_90_p,io_out_hi_lo_hi_lo}; // @[Cat.scala 31:58]
  wire [32:0] io_out_hi_lo = {io_out_hi_lo_hi,r_81_p,r_80_p,r_79_p,r_78_p,r_77_p,r_76_p,r_75_p,r_74_p,io_out_hi_lo_lo_lo
    }; // @[Cat.scala 31:58]
  wire  r_100_p = RS_100_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_99_p = RS_99_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_102_p = RS_102_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_101_p = RS_101_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_104_p = RS_104_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_103_p = RS_103_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_106_p = RS_106_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_105_p = RS_105_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire [7:0] io_out_hi_hi_lo_lo = {r_106_p,r_105_p,r_104_p,r_103_p,r_102_p,r_101_p,r_100_p,r_99_p}; // @[Cat.scala 31:58]
  wire  r_108_p = RS_108_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_107_p = RS_107_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_110_p = RS_110_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_109_p = RS_109_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_112_p = RS_112_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_111_p = RS_111_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_114_p = RS_114_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_113_p = RS_113_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_116_p = RS_116_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_115_p = RS_115_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_118_p = RS_118_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_117_p = RS_117_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_120_p = RS_120_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_119_p = RS_119_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_122_p = RS_122_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_121_p = RS_121_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire [7:0] io_out_hi_hi_hi_lo = {r_122_p,r_121_p,r_120_p,r_119_p,r_118_p,r_117_p,r_116_p,r_115_p}; // @[Cat.scala 31:58]
  wire  r_124_p = RS_124_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_123_p = RS_123_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_126_p = RS_126_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_125_p = RS_125_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_128_p = RS_128_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_127_p = RS_127_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_131_p = RS_131_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_130_p = RS_130_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire  r_129_p = RS_129_io_p; // @[BOOTH_gen.scala 16:{20,20}]
  wire [16:0] io_out_hi_hi_hi = {r_131_p,r_130_p,r_129_p,r_128_p,r_127_p,r_126_p,r_125_p,r_124_p,r_123_p,
    io_out_hi_hi_hi_lo}; // @[Cat.scala 31:58]
  wire [32:0] io_out_hi_hi = {io_out_hi_hi_hi,r_114_p,r_113_p,r_112_p,r_111_p,r_110_p,r_109_p,r_108_p,r_107_p,
    io_out_hi_hi_lo_lo}; // @[Cat.scala 31:58]
  wire [65:0] io_out_hi = {io_out_hi_hi,io_out_hi_lo}; // @[Cat.scala 31:58]
  RS RS ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_io_sel_negative),
    .io_sel_positive(RS_io_sel_positive),
    .io_sel_double_negative(RS_io_sel_double_negative),
    .io_sel_double_positive(RS_io_sel_double_positive),
    .io_x(RS_io_x),
    .io_x_sub(RS_io_x_sub),
    .io_p(RS_io_p)
  );
  RS RS_1 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_1_io_sel_negative),
    .io_sel_positive(RS_1_io_sel_positive),
    .io_sel_double_negative(RS_1_io_sel_double_negative),
    .io_sel_double_positive(RS_1_io_sel_double_positive),
    .io_x(RS_1_io_x),
    .io_x_sub(RS_1_io_x_sub),
    .io_p(RS_1_io_p)
  );
  RS RS_2 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_2_io_sel_negative),
    .io_sel_positive(RS_2_io_sel_positive),
    .io_sel_double_negative(RS_2_io_sel_double_negative),
    .io_sel_double_positive(RS_2_io_sel_double_positive),
    .io_x(RS_2_io_x),
    .io_x_sub(RS_2_io_x_sub),
    .io_p(RS_2_io_p)
  );
  RS RS_3 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_3_io_sel_negative),
    .io_sel_positive(RS_3_io_sel_positive),
    .io_sel_double_negative(RS_3_io_sel_double_negative),
    .io_sel_double_positive(RS_3_io_sel_double_positive),
    .io_x(RS_3_io_x),
    .io_x_sub(RS_3_io_x_sub),
    .io_p(RS_3_io_p)
  );
  RS RS_4 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_4_io_sel_negative),
    .io_sel_positive(RS_4_io_sel_positive),
    .io_sel_double_negative(RS_4_io_sel_double_negative),
    .io_sel_double_positive(RS_4_io_sel_double_positive),
    .io_x(RS_4_io_x),
    .io_x_sub(RS_4_io_x_sub),
    .io_p(RS_4_io_p)
  );
  RS RS_5 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_5_io_sel_negative),
    .io_sel_positive(RS_5_io_sel_positive),
    .io_sel_double_negative(RS_5_io_sel_double_negative),
    .io_sel_double_positive(RS_5_io_sel_double_positive),
    .io_x(RS_5_io_x),
    .io_x_sub(RS_5_io_x_sub),
    .io_p(RS_5_io_p)
  );
  RS RS_6 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_6_io_sel_negative),
    .io_sel_positive(RS_6_io_sel_positive),
    .io_sel_double_negative(RS_6_io_sel_double_negative),
    .io_sel_double_positive(RS_6_io_sel_double_positive),
    .io_x(RS_6_io_x),
    .io_x_sub(RS_6_io_x_sub),
    .io_p(RS_6_io_p)
  );
  RS RS_7 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_7_io_sel_negative),
    .io_sel_positive(RS_7_io_sel_positive),
    .io_sel_double_negative(RS_7_io_sel_double_negative),
    .io_sel_double_positive(RS_7_io_sel_double_positive),
    .io_x(RS_7_io_x),
    .io_x_sub(RS_7_io_x_sub),
    .io_p(RS_7_io_p)
  );
  RS RS_8 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_8_io_sel_negative),
    .io_sel_positive(RS_8_io_sel_positive),
    .io_sel_double_negative(RS_8_io_sel_double_negative),
    .io_sel_double_positive(RS_8_io_sel_double_positive),
    .io_x(RS_8_io_x),
    .io_x_sub(RS_8_io_x_sub),
    .io_p(RS_8_io_p)
  );
  RS RS_9 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_9_io_sel_negative),
    .io_sel_positive(RS_9_io_sel_positive),
    .io_sel_double_negative(RS_9_io_sel_double_negative),
    .io_sel_double_positive(RS_9_io_sel_double_positive),
    .io_x(RS_9_io_x),
    .io_x_sub(RS_9_io_x_sub),
    .io_p(RS_9_io_p)
  );
  RS RS_10 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_10_io_sel_negative),
    .io_sel_positive(RS_10_io_sel_positive),
    .io_sel_double_negative(RS_10_io_sel_double_negative),
    .io_sel_double_positive(RS_10_io_sel_double_positive),
    .io_x(RS_10_io_x),
    .io_x_sub(RS_10_io_x_sub),
    .io_p(RS_10_io_p)
  );
  RS RS_11 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_11_io_sel_negative),
    .io_sel_positive(RS_11_io_sel_positive),
    .io_sel_double_negative(RS_11_io_sel_double_negative),
    .io_sel_double_positive(RS_11_io_sel_double_positive),
    .io_x(RS_11_io_x),
    .io_x_sub(RS_11_io_x_sub),
    .io_p(RS_11_io_p)
  );
  RS RS_12 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_12_io_sel_negative),
    .io_sel_positive(RS_12_io_sel_positive),
    .io_sel_double_negative(RS_12_io_sel_double_negative),
    .io_sel_double_positive(RS_12_io_sel_double_positive),
    .io_x(RS_12_io_x),
    .io_x_sub(RS_12_io_x_sub),
    .io_p(RS_12_io_p)
  );
  RS RS_13 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_13_io_sel_negative),
    .io_sel_positive(RS_13_io_sel_positive),
    .io_sel_double_negative(RS_13_io_sel_double_negative),
    .io_sel_double_positive(RS_13_io_sel_double_positive),
    .io_x(RS_13_io_x),
    .io_x_sub(RS_13_io_x_sub),
    .io_p(RS_13_io_p)
  );
  RS RS_14 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_14_io_sel_negative),
    .io_sel_positive(RS_14_io_sel_positive),
    .io_sel_double_negative(RS_14_io_sel_double_negative),
    .io_sel_double_positive(RS_14_io_sel_double_positive),
    .io_x(RS_14_io_x),
    .io_x_sub(RS_14_io_x_sub),
    .io_p(RS_14_io_p)
  );
  RS RS_15 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_15_io_sel_negative),
    .io_sel_positive(RS_15_io_sel_positive),
    .io_sel_double_negative(RS_15_io_sel_double_negative),
    .io_sel_double_positive(RS_15_io_sel_double_positive),
    .io_x(RS_15_io_x),
    .io_x_sub(RS_15_io_x_sub),
    .io_p(RS_15_io_p)
  );
  RS RS_16 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_16_io_sel_negative),
    .io_sel_positive(RS_16_io_sel_positive),
    .io_sel_double_negative(RS_16_io_sel_double_negative),
    .io_sel_double_positive(RS_16_io_sel_double_positive),
    .io_x(RS_16_io_x),
    .io_x_sub(RS_16_io_x_sub),
    .io_p(RS_16_io_p)
  );
  RS RS_17 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_17_io_sel_negative),
    .io_sel_positive(RS_17_io_sel_positive),
    .io_sel_double_negative(RS_17_io_sel_double_negative),
    .io_sel_double_positive(RS_17_io_sel_double_positive),
    .io_x(RS_17_io_x),
    .io_x_sub(RS_17_io_x_sub),
    .io_p(RS_17_io_p)
  );
  RS RS_18 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_18_io_sel_negative),
    .io_sel_positive(RS_18_io_sel_positive),
    .io_sel_double_negative(RS_18_io_sel_double_negative),
    .io_sel_double_positive(RS_18_io_sel_double_positive),
    .io_x(RS_18_io_x),
    .io_x_sub(RS_18_io_x_sub),
    .io_p(RS_18_io_p)
  );
  RS RS_19 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_19_io_sel_negative),
    .io_sel_positive(RS_19_io_sel_positive),
    .io_sel_double_negative(RS_19_io_sel_double_negative),
    .io_sel_double_positive(RS_19_io_sel_double_positive),
    .io_x(RS_19_io_x),
    .io_x_sub(RS_19_io_x_sub),
    .io_p(RS_19_io_p)
  );
  RS RS_20 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_20_io_sel_negative),
    .io_sel_positive(RS_20_io_sel_positive),
    .io_sel_double_negative(RS_20_io_sel_double_negative),
    .io_sel_double_positive(RS_20_io_sel_double_positive),
    .io_x(RS_20_io_x),
    .io_x_sub(RS_20_io_x_sub),
    .io_p(RS_20_io_p)
  );
  RS RS_21 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_21_io_sel_negative),
    .io_sel_positive(RS_21_io_sel_positive),
    .io_sel_double_negative(RS_21_io_sel_double_negative),
    .io_sel_double_positive(RS_21_io_sel_double_positive),
    .io_x(RS_21_io_x),
    .io_x_sub(RS_21_io_x_sub),
    .io_p(RS_21_io_p)
  );
  RS RS_22 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_22_io_sel_negative),
    .io_sel_positive(RS_22_io_sel_positive),
    .io_sel_double_negative(RS_22_io_sel_double_negative),
    .io_sel_double_positive(RS_22_io_sel_double_positive),
    .io_x(RS_22_io_x),
    .io_x_sub(RS_22_io_x_sub),
    .io_p(RS_22_io_p)
  );
  RS RS_23 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_23_io_sel_negative),
    .io_sel_positive(RS_23_io_sel_positive),
    .io_sel_double_negative(RS_23_io_sel_double_negative),
    .io_sel_double_positive(RS_23_io_sel_double_positive),
    .io_x(RS_23_io_x),
    .io_x_sub(RS_23_io_x_sub),
    .io_p(RS_23_io_p)
  );
  RS RS_24 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_24_io_sel_negative),
    .io_sel_positive(RS_24_io_sel_positive),
    .io_sel_double_negative(RS_24_io_sel_double_negative),
    .io_sel_double_positive(RS_24_io_sel_double_positive),
    .io_x(RS_24_io_x),
    .io_x_sub(RS_24_io_x_sub),
    .io_p(RS_24_io_p)
  );
  RS RS_25 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_25_io_sel_negative),
    .io_sel_positive(RS_25_io_sel_positive),
    .io_sel_double_negative(RS_25_io_sel_double_negative),
    .io_sel_double_positive(RS_25_io_sel_double_positive),
    .io_x(RS_25_io_x),
    .io_x_sub(RS_25_io_x_sub),
    .io_p(RS_25_io_p)
  );
  RS RS_26 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_26_io_sel_negative),
    .io_sel_positive(RS_26_io_sel_positive),
    .io_sel_double_negative(RS_26_io_sel_double_negative),
    .io_sel_double_positive(RS_26_io_sel_double_positive),
    .io_x(RS_26_io_x),
    .io_x_sub(RS_26_io_x_sub),
    .io_p(RS_26_io_p)
  );
  RS RS_27 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_27_io_sel_negative),
    .io_sel_positive(RS_27_io_sel_positive),
    .io_sel_double_negative(RS_27_io_sel_double_negative),
    .io_sel_double_positive(RS_27_io_sel_double_positive),
    .io_x(RS_27_io_x),
    .io_x_sub(RS_27_io_x_sub),
    .io_p(RS_27_io_p)
  );
  RS RS_28 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_28_io_sel_negative),
    .io_sel_positive(RS_28_io_sel_positive),
    .io_sel_double_negative(RS_28_io_sel_double_negative),
    .io_sel_double_positive(RS_28_io_sel_double_positive),
    .io_x(RS_28_io_x),
    .io_x_sub(RS_28_io_x_sub),
    .io_p(RS_28_io_p)
  );
  RS RS_29 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_29_io_sel_negative),
    .io_sel_positive(RS_29_io_sel_positive),
    .io_sel_double_negative(RS_29_io_sel_double_negative),
    .io_sel_double_positive(RS_29_io_sel_double_positive),
    .io_x(RS_29_io_x),
    .io_x_sub(RS_29_io_x_sub),
    .io_p(RS_29_io_p)
  );
  RS RS_30 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_30_io_sel_negative),
    .io_sel_positive(RS_30_io_sel_positive),
    .io_sel_double_negative(RS_30_io_sel_double_negative),
    .io_sel_double_positive(RS_30_io_sel_double_positive),
    .io_x(RS_30_io_x),
    .io_x_sub(RS_30_io_x_sub),
    .io_p(RS_30_io_p)
  );
  RS RS_31 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_31_io_sel_negative),
    .io_sel_positive(RS_31_io_sel_positive),
    .io_sel_double_negative(RS_31_io_sel_double_negative),
    .io_sel_double_positive(RS_31_io_sel_double_positive),
    .io_x(RS_31_io_x),
    .io_x_sub(RS_31_io_x_sub),
    .io_p(RS_31_io_p)
  );
  RS RS_32 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_32_io_sel_negative),
    .io_sel_positive(RS_32_io_sel_positive),
    .io_sel_double_negative(RS_32_io_sel_double_negative),
    .io_sel_double_positive(RS_32_io_sel_double_positive),
    .io_x(RS_32_io_x),
    .io_x_sub(RS_32_io_x_sub),
    .io_p(RS_32_io_p)
  );
  RS RS_33 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_33_io_sel_negative),
    .io_sel_positive(RS_33_io_sel_positive),
    .io_sel_double_negative(RS_33_io_sel_double_negative),
    .io_sel_double_positive(RS_33_io_sel_double_positive),
    .io_x(RS_33_io_x),
    .io_x_sub(RS_33_io_x_sub),
    .io_p(RS_33_io_p)
  );
  RS RS_34 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_34_io_sel_negative),
    .io_sel_positive(RS_34_io_sel_positive),
    .io_sel_double_negative(RS_34_io_sel_double_negative),
    .io_sel_double_positive(RS_34_io_sel_double_positive),
    .io_x(RS_34_io_x),
    .io_x_sub(RS_34_io_x_sub),
    .io_p(RS_34_io_p)
  );
  RS RS_35 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_35_io_sel_negative),
    .io_sel_positive(RS_35_io_sel_positive),
    .io_sel_double_negative(RS_35_io_sel_double_negative),
    .io_sel_double_positive(RS_35_io_sel_double_positive),
    .io_x(RS_35_io_x),
    .io_x_sub(RS_35_io_x_sub),
    .io_p(RS_35_io_p)
  );
  RS RS_36 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_36_io_sel_negative),
    .io_sel_positive(RS_36_io_sel_positive),
    .io_sel_double_negative(RS_36_io_sel_double_negative),
    .io_sel_double_positive(RS_36_io_sel_double_positive),
    .io_x(RS_36_io_x),
    .io_x_sub(RS_36_io_x_sub),
    .io_p(RS_36_io_p)
  );
  RS RS_37 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_37_io_sel_negative),
    .io_sel_positive(RS_37_io_sel_positive),
    .io_sel_double_negative(RS_37_io_sel_double_negative),
    .io_sel_double_positive(RS_37_io_sel_double_positive),
    .io_x(RS_37_io_x),
    .io_x_sub(RS_37_io_x_sub),
    .io_p(RS_37_io_p)
  );
  RS RS_38 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_38_io_sel_negative),
    .io_sel_positive(RS_38_io_sel_positive),
    .io_sel_double_negative(RS_38_io_sel_double_negative),
    .io_sel_double_positive(RS_38_io_sel_double_positive),
    .io_x(RS_38_io_x),
    .io_x_sub(RS_38_io_x_sub),
    .io_p(RS_38_io_p)
  );
  RS RS_39 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_39_io_sel_negative),
    .io_sel_positive(RS_39_io_sel_positive),
    .io_sel_double_negative(RS_39_io_sel_double_negative),
    .io_sel_double_positive(RS_39_io_sel_double_positive),
    .io_x(RS_39_io_x),
    .io_x_sub(RS_39_io_x_sub),
    .io_p(RS_39_io_p)
  );
  RS RS_40 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_40_io_sel_negative),
    .io_sel_positive(RS_40_io_sel_positive),
    .io_sel_double_negative(RS_40_io_sel_double_negative),
    .io_sel_double_positive(RS_40_io_sel_double_positive),
    .io_x(RS_40_io_x),
    .io_x_sub(RS_40_io_x_sub),
    .io_p(RS_40_io_p)
  );
  RS RS_41 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_41_io_sel_negative),
    .io_sel_positive(RS_41_io_sel_positive),
    .io_sel_double_negative(RS_41_io_sel_double_negative),
    .io_sel_double_positive(RS_41_io_sel_double_positive),
    .io_x(RS_41_io_x),
    .io_x_sub(RS_41_io_x_sub),
    .io_p(RS_41_io_p)
  );
  RS RS_42 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_42_io_sel_negative),
    .io_sel_positive(RS_42_io_sel_positive),
    .io_sel_double_negative(RS_42_io_sel_double_negative),
    .io_sel_double_positive(RS_42_io_sel_double_positive),
    .io_x(RS_42_io_x),
    .io_x_sub(RS_42_io_x_sub),
    .io_p(RS_42_io_p)
  );
  RS RS_43 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_43_io_sel_negative),
    .io_sel_positive(RS_43_io_sel_positive),
    .io_sel_double_negative(RS_43_io_sel_double_negative),
    .io_sel_double_positive(RS_43_io_sel_double_positive),
    .io_x(RS_43_io_x),
    .io_x_sub(RS_43_io_x_sub),
    .io_p(RS_43_io_p)
  );
  RS RS_44 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_44_io_sel_negative),
    .io_sel_positive(RS_44_io_sel_positive),
    .io_sel_double_negative(RS_44_io_sel_double_negative),
    .io_sel_double_positive(RS_44_io_sel_double_positive),
    .io_x(RS_44_io_x),
    .io_x_sub(RS_44_io_x_sub),
    .io_p(RS_44_io_p)
  );
  RS RS_45 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_45_io_sel_negative),
    .io_sel_positive(RS_45_io_sel_positive),
    .io_sel_double_negative(RS_45_io_sel_double_negative),
    .io_sel_double_positive(RS_45_io_sel_double_positive),
    .io_x(RS_45_io_x),
    .io_x_sub(RS_45_io_x_sub),
    .io_p(RS_45_io_p)
  );
  RS RS_46 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_46_io_sel_negative),
    .io_sel_positive(RS_46_io_sel_positive),
    .io_sel_double_negative(RS_46_io_sel_double_negative),
    .io_sel_double_positive(RS_46_io_sel_double_positive),
    .io_x(RS_46_io_x),
    .io_x_sub(RS_46_io_x_sub),
    .io_p(RS_46_io_p)
  );
  RS RS_47 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_47_io_sel_negative),
    .io_sel_positive(RS_47_io_sel_positive),
    .io_sel_double_negative(RS_47_io_sel_double_negative),
    .io_sel_double_positive(RS_47_io_sel_double_positive),
    .io_x(RS_47_io_x),
    .io_x_sub(RS_47_io_x_sub),
    .io_p(RS_47_io_p)
  );
  RS RS_48 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_48_io_sel_negative),
    .io_sel_positive(RS_48_io_sel_positive),
    .io_sel_double_negative(RS_48_io_sel_double_negative),
    .io_sel_double_positive(RS_48_io_sel_double_positive),
    .io_x(RS_48_io_x),
    .io_x_sub(RS_48_io_x_sub),
    .io_p(RS_48_io_p)
  );
  RS RS_49 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_49_io_sel_negative),
    .io_sel_positive(RS_49_io_sel_positive),
    .io_sel_double_negative(RS_49_io_sel_double_negative),
    .io_sel_double_positive(RS_49_io_sel_double_positive),
    .io_x(RS_49_io_x),
    .io_x_sub(RS_49_io_x_sub),
    .io_p(RS_49_io_p)
  );
  RS RS_50 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_50_io_sel_negative),
    .io_sel_positive(RS_50_io_sel_positive),
    .io_sel_double_negative(RS_50_io_sel_double_negative),
    .io_sel_double_positive(RS_50_io_sel_double_positive),
    .io_x(RS_50_io_x),
    .io_x_sub(RS_50_io_x_sub),
    .io_p(RS_50_io_p)
  );
  RS RS_51 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_51_io_sel_negative),
    .io_sel_positive(RS_51_io_sel_positive),
    .io_sel_double_negative(RS_51_io_sel_double_negative),
    .io_sel_double_positive(RS_51_io_sel_double_positive),
    .io_x(RS_51_io_x),
    .io_x_sub(RS_51_io_x_sub),
    .io_p(RS_51_io_p)
  );
  RS RS_52 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_52_io_sel_negative),
    .io_sel_positive(RS_52_io_sel_positive),
    .io_sel_double_negative(RS_52_io_sel_double_negative),
    .io_sel_double_positive(RS_52_io_sel_double_positive),
    .io_x(RS_52_io_x),
    .io_x_sub(RS_52_io_x_sub),
    .io_p(RS_52_io_p)
  );
  RS RS_53 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_53_io_sel_negative),
    .io_sel_positive(RS_53_io_sel_positive),
    .io_sel_double_negative(RS_53_io_sel_double_negative),
    .io_sel_double_positive(RS_53_io_sel_double_positive),
    .io_x(RS_53_io_x),
    .io_x_sub(RS_53_io_x_sub),
    .io_p(RS_53_io_p)
  );
  RS RS_54 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_54_io_sel_negative),
    .io_sel_positive(RS_54_io_sel_positive),
    .io_sel_double_negative(RS_54_io_sel_double_negative),
    .io_sel_double_positive(RS_54_io_sel_double_positive),
    .io_x(RS_54_io_x),
    .io_x_sub(RS_54_io_x_sub),
    .io_p(RS_54_io_p)
  );
  RS RS_55 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_55_io_sel_negative),
    .io_sel_positive(RS_55_io_sel_positive),
    .io_sel_double_negative(RS_55_io_sel_double_negative),
    .io_sel_double_positive(RS_55_io_sel_double_positive),
    .io_x(RS_55_io_x),
    .io_x_sub(RS_55_io_x_sub),
    .io_p(RS_55_io_p)
  );
  RS RS_56 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_56_io_sel_negative),
    .io_sel_positive(RS_56_io_sel_positive),
    .io_sel_double_negative(RS_56_io_sel_double_negative),
    .io_sel_double_positive(RS_56_io_sel_double_positive),
    .io_x(RS_56_io_x),
    .io_x_sub(RS_56_io_x_sub),
    .io_p(RS_56_io_p)
  );
  RS RS_57 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_57_io_sel_negative),
    .io_sel_positive(RS_57_io_sel_positive),
    .io_sel_double_negative(RS_57_io_sel_double_negative),
    .io_sel_double_positive(RS_57_io_sel_double_positive),
    .io_x(RS_57_io_x),
    .io_x_sub(RS_57_io_x_sub),
    .io_p(RS_57_io_p)
  );
  RS RS_58 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_58_io_sel_negative),
    .io_sel_positive(RS_58_io_sel_positive),
    .io_sel_double_negative(RS_58_io_sel_double_negative),
    .io_sel_double_positive(RS_58_io_sel_double_positive),
    .io_x(RS_58_io_x),
    .io_x_sub(RS_58_io_x_sub),
    .io_p(RS_58_io_p)
  );
  RS RS_59 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_59_io_sel_negative),
    .io_sel_positive(RS_59_io_sel_positive),
    .io_sel_double_negative(RS_59_io_sel_double_negative),
    .io_sel_double_positive(RS_59_io_sel_double_positive),
    .io_x(RS_59_io_x),
    .io_x_sub(RS_59_io_x_sub),
    .io_p(RS_59_io_p)
  );
  RS RS_60 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_60_io_sel_negative),
    .io_sel_positive(RS_60_io_sel_positive),
    .io_sel_double_negative(RS_60_io_sel_double_negative),
    .io_sel_double_positive(RS_60_io_sel_double_positive),
    .io_x(RS_60_io_x),
    .io_x_sub(RS_60_io_x_sub),
    .io_p(RS_60_io_p)
  );
  RS RS_61 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_61_io_sel_negative),
    .io_sel_positive(RS_61_io_sel_positive),
    .io_sel_double_negative(RS_61_io_sel_double_negative),
    .io_sel_double_positive(RS_61_io_sel_double_positive),
    .io_x(RS_61_io_x),
    .io_x_sub(RS_61_io_x_sub),
    .io_p(RS_61_io_p)
  );
  RS RS_62 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_62_io_sel_negative),
    .io_sel_positive(RS_62_io_sel_positive),
    .io_sel_double_negative(RS_62_io_sel_double_negative),
    .io_sel_double_positive(RS_62_io_sel_double_positive),
    .io_x(RS_62_io_x),
    .io_x_sub(RS_62_io_x_sub),
    .io_p(RS_62_io_p)
  );
  RS RS_63 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_63_io_sel_negative),
    .io_sel_positive(RS_63_io_sel_positive),
    .io_sel_double_negative(RS_63_io_sel_double_negative),
    .io_sel_double_positive(RS_63_io_sel_double_positive),
    .io_x(RS_63_io_x),
    .io_x_sub(RS_63_io_x_sub),
    .io_p(RS_63_io_p)
  );
  RS RS_64 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_64_io_sel_negative),
    .io_sel_positive(RS_64_io_sel_positive),
    .io_sel_double_negative(RS_64_io_sel_double_negative),
    .io_sel_double_positive(RS_64_io_sel_double_positive),
    .io_x(RS_64_io_x),
    .io_x_sub(RS_64_io_x_sub),
    .io_p(RS_64_io_p)
  );
  RS RS_65 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_65_io_sel_negative),
    .io_sel_positive(RS_65_io_sel_positive),
    .io_sel_double_negative(RS_65_io_sel_double_negative),
    .io_sel_double_positive(RS_65_io_sel_double_positive),
    .io_x(RS_65_io_x),
    .io_x_sub(RS_65_io_x_sub),
    .io_p(RS_65_io_p)
  );
  RS RS_66 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_66_io_sel_negative),
    .io_sel_positive(RS_66_io_sel_positive),
    .io_sel_double_negative(RS_66_io_sel_double_negative),
    .io_sel_double_positive(RS_66_io_sel_double_positive),
    .io_x(RS_66_io_x),
    .io_x_sub(RS_66_io_x_sub),
    .io_p(RS_66_io_p)
  );
  RS RS_67 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_67_io_sel_negative),
    .io_sel_positive(RS_67_io_sel_positive),
    .io_sel_double_negative(RS_67_io_sel_double_negative),
    .io_sel_double_positive(RS_67_io_sel_double_positive),
    .io_x(RS_67_io_x),
    .io_x_sub(RS_67_io_x_sub),
    .io_p(RS_67_io_p)
  );
  RS RS_68 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_68_io_sel_negative),
    .io_sel_positive(RS_68_io_sel_positive),
    .io_sel_double_negative(RS_68_io_sel_double_negative),
    .io_sel_double_positive(RS_68_io_sel_double_positive),
    .io_x(RS_68_io_x),
    .io_x_sub(RS_68_io_x_sub),
    .io_p(RS_68_io_p)
  );
  RS RS_69 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_69_io_sel_negative),
    .io_sel_positive(RS_69_io_sel_positive),
    .io_sel_double_negative(RS_69_io_sel_double_negative),
    .io_sel_double_positive(RS_69_io_sel_double_positive),
    .io_x(RS_69_io_x),
    .io_x_sub(RS_69_io_x_sub),
    .io_p(RS_69_io_p)
  );
  RS RS_70 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_70_io_sel_negative),
    .io_sel_positive(RS_70_io_sel_positive),
    .io_sel_double_negative(RS_70_io_sel_double_negative),
    .io_sel_double_positive(RS_70_io_sel_double_positive),
    .io_x(RS_70_io_x),
    .io_x_sub(RS_70_io_x_sub),
    .io_p(RS_70_io_p)
  );
  RS RS_71 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_71_io_sel_negative),
    .io_sel_positive(RS_71_io_sel_positive),
    .io_sel_double_negative(RS_71_io_sel_double_negative),
    .io_sel_double_positive(RS_71_io_sel_double_positive),
    .io_x(RS_71_io_x),
    .io_x_sub(RS_71_io_x_sub),
    .io_p(RS_71_io_p)
  );
  RS RS_72 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_72_io_sel_negative),
    .io_sel_positive(RS_72_io_sel_positive),
    .io_sel_double_negative(RS_72_io_sel_double_negative),
    .io_sel_double_positive(RS_72_io_sel_double_positive),
    .io_x(RS_72_io_x),
    .io_x_sub(RS_72_io_x_sub),
    .io_p(RS_72_io_p)
  );
  RS RS_73 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_73_io_sel_negative),
    .io_sel_positive(RS_73_io_sel_positive),
    .io_sel_double_negative(RS_73_io_sel_double_negative),
    .io_sel_double_positive(RS_73_io_sel_double_positive),
    .io_x(RS_73_io_x),
    .io_x_sub(RS_73_io_x_sub),
    .io_p(RS_73_io_p)
  );
  RS RS_74 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_74_io_sel_negative),
    .io_sel_positive(RS_74_io_sel_positive),
    .io_sel_double_negative(RS_74_io_sel_double_negative),
    .io_sel_double_positive(RS_74_io_sel_double_positive),
    .io_x(RS_74_io_x),
    .io_x_sub(RS_74_io_x_sub),
    .io_p(RS_74_io_p)
  );
  RS RS_75 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_75_io_sel_negative),
    .io_sel_positive(RS_75_io_sel_positive),
    .io_sel_double_negative(RS_75_io_sel_double_negative),
    .io_sel_double_positive(RS_75_io_sel_double_positive),
    .io_x(RS_75_io_x),
    .io_x_sub(RS_75_io_x_sub),
    .io_p(RS_75_io_p)
  );
  RS RS_76 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_76_io_sel_negative),
    .io_sel_positive(RS_76_io_sel_positive),
    .io_sel_double_negative(RS_76_io_sel_double_negative),
    .io_sel_double_positive(RS_76_io_sel_double_positive),
    .io_x(RS_76_io_x),
    .io_x_sub(RS_76_io_x_sub),
    .io_p(RS_76_io_p)
  );
  RS RS_77 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_77_io_sel_negative),
    .io_sel_positive(RS_77_io_sel_positive),
    .io_sel_double_negative(RS_77_io_sel_double_negative),
    .io_sel_double_positive(RS_77_io_sel_double_positive),
    .io_x(RS_77_io_x),
    .io_x_sub(RS_77_io_x_sub),
    .io_p(RS_77_io_p)
  );
  RS RS_78 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_78_io_sel_negative),
    .io_sel_positive(RS_78_io_sel_positive),
    .io_sel_double_negative(RS_78_io_sel_double_negative),
    .io_sel_double_positive(RS_78_io_sel_double_positive),
    .io_x(RS_78_io_x),
    .io_x_sub(RS_78_io_x_sub),
    .io_p(RS_78_io_p)
  );
  RS RS_79 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_79_io_sel_negative),
    .io_sel_positive(RS_79_io_sel_positive),
    .io_sel_double_negative(RS_79_io_sel_double_negative),
    .io_sel_double_positive(RS_79_io_sel_double_positive),
    .io_x(RS_79_io_x),
    .io_x_sub(RS_79_io_x_sub),
    .io_p(RS_79_io_p)
  );
  RS RS_80 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_80_io_sel_negative),
    .io_sel_positive(RS_80_io_sel_positive),
    .io_sel_double_negative(RS_80_io_sel_double_negative),
    .io_sel_double_positive(RS_80_io_sel_double_positive),
    .io_x(RS_80_io_x),
    .io_x_sub(RS_80_io_x_sub),
    .io_p(RS_80_io_p)
  );
  RS RS_81 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_81_io_sel_negative),
    .io_sel_positive(RS_81_io_sel_positive),
    .io_sel_double_negative(RS_81_io_sel_double_negative),
    .io_sel_double_positive(RS_81_io_sel_double_positive),
    .io_x(RS_81_io_x),
    .io_x_sub(RS_81_io_x_sub),
    .io_p(RS_81_io_p)
  );
  RS RS_82 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_82_io_sel_negative),
    .io_sel_positive(RS_82_io_sel_positive),
    .io_sel_double_negative(RS_82_io_sel_double_negative),
    .io_sel_double_positive(RS_82_io_sel_double_positive),
    .io_x(RS_82_io_x),
    .io_x_sub(RS_82_io_x_sub),
    .io_p(RS_82_io_p)
  );
  RS RS_83 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_83_io_sel_negative),
    .io_sel_positive(RS_83_io_sel_positive),
    .io_sel_double_negative(RS_83_io_sel_double_negative),
    .io_sel_double_positive(RS_83_io_sel_double_positive),
    .io_x(RS_83_io_x),
    .io_x_sub(RS_83_io_x_sub),
    .io_p(RS_83_io_p)
  );
  RS RS_84 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_84_io_sel_negative),
    .io_sel_positive(RS_84_io_sel_positive),
    .io_sel_double_negative(RS_84_io_sel_double_negative),
    .io_sel_double_positive(RS_84_io_sel_double_positive),
    .io_x(RS_84_io_x),
    .io_x_sub(RS_84_io_x_sub),
    .io_p(RS_84_io_p)
  );
  RS RS_85 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_85_io_sel_negative),
    .io_sel_positive(RS_85_io_sel_positive),
    .io_sel_double_negative(RS_85_io_sel_double_negative),
    .io_sel_double_positive(RS_85_io_sel_double_positive),
    .io_x(RS_85_io_x),
    .io_x_sub(RS_85_io_x_sub),
    .io_p(RS_85_io_p)
  );
  RS RS_86 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_86_io_sel_negative),
    .io_sel_positive(RS_86_io_sel_positive),
    .io_sel_double_negative(RS_86_io_sel_double_negative),
    .io_sel_double_positive(RS_86_io_sel_double_positive),
    .io_x(RS_86_io_x),
    .io_x_sub(RS_86_io_x_sub),
    .io_p(RS_86_io_p)
  );
  RS RS_87 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_87_io_sel_negative),
    .io_sel_positive(RS_87_io_sel_positive),
    .io_sel_double_negative(RS_87_io_sel_double_negative),
    .io_sel_double_positive(RS_87_io_sel_double_positive),
    .io_x(RS_87_io_x),
    .io_x_sub(RS_87_io_x_sub),
    .io_p(RS_87_io_p)
  );
  RS RS_88 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_88_io_sel_negative),
    .io_sel_positive(RS_88_io_sel_positive),
    .io_sel_double_negative(RS_88_io_sel_double_negative),
    .io_sel_double_positive(RS_88_io_sel_double_positive),
    .io_x(RS_88_io_x),
    .io_x_sub(RS_88_io_x_sub),
    .io_p(RS_88_io_p)
  );
  RS RS_89 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_89_io_sel_negative),
    .io_sel_positive(RS_89_io_sel_positive),
    .io_sel_double_negative(RS_89_io_sel_double_negative),
    .io_sel_double_positive(RS_89_io_sel_double_positive),
    .io_x(RS_89_io_x),
    .io_x_sub(RS_89_io_x_sub),
    .io_p(RS_89_io_p)
  );
  RS RS_90 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_90_io_sel_negative),
    .io_sel_positive(RS_90_io_sel_positive),
    .io_sel_double_negative(RS_90_io_sel_double_negative),
    .io_sel_double_positive(RS_90_io_sel_double_positive),
    .io_x(RS_90_io_x),
    .io_x_sub(RS_90_io_x_sub),
    .io_p(RS_90_io_p)
  );
  RS RS_91 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_91_io_sel_negative),
    .io_sel_positive(RS_91_io_sel_positive),
    .io_sel_double_negative(RS_91_io_sel_double_negative),
    .io_sel_double_positive(RS_91_io_sel_double_positive),
    .io_x(RS_91_io_x),
    .io_x_sub(RS_91_io_x_sub),
    .io_p(RS_91_io_p)
  );
  RS RS_92 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_92_io_sel_negative),
    .io_sel_positive(RS_92_io_sel_positive),
    .io_sel_double_negative(RS_92_io_sel_double_negative),
    .io_sel_double_positive(RS_92_io_sel_double_positive),
    .io_x(RS_92_io_x),
    .io_x_sub(RS_92_io_x_sub),
    .io_p(RS_92_io_p)
  );
  RS RS_93 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_93_io_sel_negative),
    .io_sel_positive(RS_93_io_sel_positive),
    .io_sel_double_negative(RS_93_io_sel_double_negative),
    .io_sel_double_positive(RS_93_io_sel_double_positive),
    .io_x(RS_93_io_x),
    .io_x_sub(RS_93_io_x_sub),
    .io_p(RS_93_io_p)
  );
  RS RS_94 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_94_io_sel_negative),
    .io_sel_positive(RS_94_io_sel_positive),
    .io_sel_double_negative(RS_94_io_sel_double_negative),
    .io_sel_double_positive(RS_94_io_sel_double_positive),
    .io_x(RS_94_io_x),
    .io_x_sub(RS_94_io_x_sub),
    .io_p(RS_94_io_p)
  );
  RS RS_95 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_95_io_sel_negative),
    .io_sel_positive(RS_95_io_sel_positive),
    .io_sel_double_negative(RS_95_io_sel_double_negative),
    .io_sel_double_positive(RS_95_io_sel_double_positive),
    .io_x(RS_95_io_x),
    .io_x_sub(RS_95_io_x_sub),
    .io_p(RS_95_io_p)
  );
  RS RS_96 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_96_io_sel_negative),
    .io_sel_positive(RS_96_io_sel_positive),
    .io_sel_double_negative(RS_96_io_sel_double_negative),
    .io_sel_double_positive(RS_96_io_sel_double_positive),
    .io_x(RS_96_io_x),
    .io_x_sub(RS_96_io_x_sub),
    .io_p(RS_96_io_p)
  );
  RS RS_97 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_97_io_sel_negative),
    .io_sel_positive(RS_97_io_sel_positive),
    .io_sel_double_negative(RS_97_io_sel_double_negative),
    .io_sel_double_positive(RS_97_io_sel_double_positive),
    .io_x(RS_97_io_x),
    .io_x_sub(RS_97_io_x_sub),
    .io_p(RS_97_io_p)
  );
  RS RS_98 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_98_io_sel_negative),
    .io_sel_positive(RS_98_io_sel_positive),
    .io_sel_double_negative(RS_98_io_sel_double_negative),
    .io_sel_double_positive(RS_98_io_sel_double_positive),
    .io_x(RS_98_io_x),
    .io_x_sub(RS_98_io_x_sub),
    .io_p(RS_98_io_p)
  );
  RS RS_99 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_99_io_sel_negative),
    .io_sel_positive(RS_99_io_sel_positive),
    .io_sel_double_negative(RS_99_io_sel_double_negative),
    .io_sel_double_positive(RS_99_io_sel_double_positive),
    .io_x(RS_99_io_x),
    .io_x_sub(RS_99_io_x_sub),
    .io_p(RS_99_io_p)
  );
  RS RS_100 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_100_io_sel_negative),
    .io_sel_positive(RS_100_io_sel_positive),
    .io_sel_double_negative(RS_100_io_sel_double_negative),
    .io_sel_double_positive(RS_100_io_sel_double_positive),
    .io_x(RS_100_io_x),
    .io_x_sub(RS_100_io_x_sub),
    .io_p(RS_100_io_p)
  );
  RS RS_101 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_101_io_sel_negative),
    .io_sel_positive(RS_101_io_sel_positive),
    .io_sel_double_negative(RS_101_io_sel_double_negative),
    .io_sel_double_positive(RS_101_io_sel_double_positive),
    .io_x(RS_101_io_x),
    .io_x_sub(RS_101_io_x_sub),
    .io_p(RS_101_io_p)
  );
  RS RS_102 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_102_io_sel_negative),
    .io_sel_positive(RS_102_io_sel_positive),
    .io_sel_double_negative(RS_102_io_sel_double_negative),
    .io_sel_double_positive(RS_102_io_sel_double_positive),
    .io_x(RS_102_io_x),
    .io_x_sub(RS_102_io_x_sub),
    .io_p(RS_102_io_p)
  );
  RS RS_103 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_103_io_sel_negative),
    .io_sel_positive(RS_103_io_sel_positive),
    .io_sel_double_negative(RS_103_io_sel_double_negative),
    .io_sel_double_positive(RS_103_io_sel_double_positive),
    .io_x(RS_103_io_x),
    .io_x_sub(RS_103_io_x_sub),
    .io_p(RS_103_io_p)
  );
  RS RS_104 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_104_io_sel_negative),
    .io_sel_positive(RS_104_io_sel_positive),
    .io_sel_double_negative(RS_104_io_sel_double_negative),
    .io_sel_double_positive(RS_104_io_sel_double_positive),
    .io_x(RS_104_io_x),
    .io_x_sub(RS_104_io_x_sub),
    .io_p(RS_104_io_p)
  );
  RS RS_105 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_105_io_sel_negative),
    .io_sel_positive(RS_105_io_sel_positive),
    .io_sel_double_negative(RS_105_io_sel_double_negative),
    .io_sel_double_positive(RS_105_io_sel_double_positive),
    .io_x(RS_105_io_x),
    .io_x_sub(RS_105_io_x_sub),
    .io_p(RS_105_io_p)
  );
  RS RS_106 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_106_io_sel_negative),
    .io_sel_positive(RS_106_io_sel_positive),
    .io_sel_double_negative(RS_106_io_sel_double_negative),
    .io_sel_double_positive(RS_106_io_sel_double_positive),
    .io_x(RS_106_io_x),
    .io_x_sub(RS_106_io_x_sub),
    .io_p(RS_106_io_p)
  );
  RS RS_107 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_107_io_sel_negative),
    .io_sel_positive(RS_107_io_sel_positive),
    .io_sel_double_negative(RS_107_io_sel_double_negative),
    .io_sel_double_positive(RS_107_io_sel_double_positive),
    .io_x(RS_107_io_x),
    .io_x_sub(RS_107_io_x_sub),
    .io_p(RS_107_io_p)
  );
  RS RS_108 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_108_io_sel_negative),
    .io_sel_positive(RS_108_io_sel_positive),
    .io_sel_double_negative(RS_108_io_sel_double_negative),
    .io_sel_double_positive(RS_108_io_sel_double_positive),
    .io_x(RS_108_io_x),
    .io_x_sub(RS_108_io_x_sub),
    .io_p(RS_108_io_p)
  );
  RS RS_109 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_109_io_sel_negative),
    .io_sel_positive(RS_109_io_sel_positive),
    .io_sel_double_negative(RS_109_io_sel_double_negative),
    .io_sel_double_positive(RS_109_io_sel_double_positive),
    .io_x(RS_109_io_x),
    .io_x_sub(RS_109_io_x_sub),
    .io_p(RS_109_io_p)
  );
  RS RS_110 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_110_io_sel_negative),
    .io_sel_positive(RS_110_io_sel_positive),
    .io_sel_double_negative(RS_110_io_sel_double_negative),
    .io_sel_double_positive(RS_110_io_sel_double_positive),
    .io_x(RS_110_io_x),
    .io_x_sub(RS_110_io_x_sub),
    .io_p(RS_110_io_p)
  );
  RS RS_111 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_111_io_sel_negative),
    .io_sel_positive(RS_111_io_sel_positive),
    .io_sel_double_negative(RS_111_io_sel_double_negative),
    .io_sel_double_positive(RS_111_io_sel_double_positive),
    .io_x(RS_111_io_x),
    .io_x_sub(RS_111_io_x_sub),
    .io_p(RS_111_io_p)
  );
  RS RS_112 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_112_io_sel_negative),
    .io_sel_positive(RS_112_io_sel_positive),
    .io_sel_double_negative(RS_112_io_sel_double_negative),
    .io_sel_double_positive(RS_112_io_sel_double_positive),
    .io_x(RS_112_io_x),
    .io_x_sub(RS_112_io_x_sub),
    .io_p(RS_112_io_p)
  );
  RS RS_113 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_113_io_sel_negative),
    .io_sel_positive(RS_113_io_sel_positive),
    .io_sel_double_negative(RS_113_io_sel_double_negative),
    .io_sel_double_positive(RS_113_io_sel_double_positive),
    .io_x(RS_113_io_x),
    .io_x_sub(RS_113_io_x_sub),
    .io_p(RS_113_io_p)
  );
  RS RS_114 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_114_io_sel_negative),
    .io_sel_positive(RS_114_io_sel_positive),
    .io_sel_double_negative(RS_114_io_sel_double_negative),
    .io_sel_double_positive(RS_114_io_sel_double_positive),
    .io_x(RS_114_io_x),
    .io_x_sub(RS_114_io_x_sub),
    .io_p(RS_114_io_p)
  );
  RS RS_115 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_115_io_sel_negative),
    .io_sel_positive(RS_115_io_sel_positive),
    .io_sel_double_negative(RS_115_io_sel_double_negative),
    .io_sel_double_positive(RS_115_io_sel_double_positive),
    .io_x(RS_115_io_x),
    .io_x_sub(RS_115_io_x_sub),
    .io_p(RS_115_io_p)
  );
  RS RS_116 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_116_io_sel_negative),
    .io_sel_positive(RS_116_io_sel_positive),
    .io_sel_double_negative(RS_116_io_sel_double_negative),
    .io_sel_double_positive(RS_116_io_sel_double_positive),
    .io_x(RS_116_io_x),
    .io_x_sub(RS_116_io_x_sub),
    .io_p(RS_116_io_p)
  );
  RS RS_117 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_117_io_sel_negative),
    .io_sel_positive(RS_117_io_sel_positive),
    .io_sel_double_negative(RS_117_io_sel_double_negative),
    .io_sel_double_positive(RS_117_io_sel_double_positive),
    .io_x(RS_117_io_x),
    .io_x_sub(RS_117_io_x_sub),
    .io_p(RS_117_io_p)
  );
  RS RS_118 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_118_io_sel_negative),
    .io_sel_positive(RS_118_io_sel_positive),
    .io_sel_double_negative(RS_118_io_sel_double_negative),
    .io_sel_double_positive(RS_118_io_sel_double_positive),
    .io_x(RS_118_io_x),
    .io_x_sub(RS_118_io_x_sub),
    .io_p(RS_118_io_p)
  );
  RS RS_119 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_119_io_sel_negative),
    .io_sel_positive(RS_119_io_sel_positive),
    .io_sel_double_negative(RS_119_io_sel_double_negative),
    .io_sel_double_positive(RS_119_io_sel_double_positive),
    .io_x(RS_119_io_x),
    .io_x_sub(RS_119_io_x_sub),
    .io_p(RS_119_io_p)
  );
  RS RS_120 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_120_io_sel_negative),
    .io_sel_positive(RS_120_io_sel_positive),
    .io_sel_double_negative(RS_120_io_sel_double_negative),
    .io_sel_double_positive(RS_120_io_sel_double_positive),
    .io_x(RS_120_io_x),
    .io_x_sub(RS_120_io_x_sub),
    .io_p(RS_120_io_p)
  );
  RS RS_121 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_121_io_sel_negative),
    .io_sel_positive(RS_121_io_sel_positive),
    .io_sel_double_negative(RS_121_io_sel_double_negative),
    .io_sel_double_positive(RS_121_io_sel_double_positive),
    .io_x(RS_121_io_x),
    .io_x_sub(RS_121_io_x_sub),
    .io_p(RS_121_io_p)
  );
  RS RS_122 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_122_io_sel_negative),
    .io_sel_positive(RS_122_io_sel_positive),
    .io_sel_double_negative(RS_122_io_sel_double_negative),
    .io_sel_double_positive(RS_122_io_sel_double_positive),
    .io_x(RS_122_io_x),
    .io_x_sub(RS_122_io_x_sub),
    .io_p(RS_122_io_p)
  );
  RS RS_123 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_123_io_sel_negative),
    .io_sel_positive(RS_123_io_sel_positive),
    .io_sel_double_negative(RS_123_io_sel_double_negative),
    .io_sel_double_positive(RS_123_io_sel_double_positive),
    .io_x(RS_123_io_x),
    .io_x_sub(RS_123_io_x_sub),
    .io_p(RS_123_io_p)
  );
  RS RS_124 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_124_io_sel_negative),
    .io_sel_positive(RS_124_io_sel_positive),
    .io_sel_double_negative(RS_124_io_sel_double_negative),
    .io_sel_double_positive(RS_124_io_sel_double_positive),
    .io_x(RS_124_io_x),
    .io_x_sub(RS_124_io_x_sub),
    .io_p(RS_124_io_p)
  );
  RS RS_125 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_125_io_sel_negative),
    .io_sel_positive(RS_125_io_sel_positive),
    .io_sel_double_negative(RS_125_io_sel_double_negative),
    .io_sel_double_positive(RS_125_io_sel_double_positive),
    .io_x(RS_125_io_x),
    .io_x_sub(RS_125_io_x_sub),
    .io_p(RS_125_io_p)
  );
  RS RS_126 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_126_io_sel_negative),
    .io_sel_positive(RS_126_io_sel_positive),
    .io_sel_double_negative(RS_126_io_sel_double_negative),
    .io_sel_double_positive(RS_126_io_sel_double_positive),
    .io_x(RS_126_io_x),
    .io_x_sub(RS_126_io_x_sub),
    .io_p(RS_126_io_p)
  );
  RS RS_127 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_127_io_sel_negative),
    .io_sel_positive(RS_127_io_sel_positive),
    .io_sel_double_negative(RS_127_io_sel_double_negative),
    .io_sel_double_positive(RS_127_io_sel_double_positive),
    .io_x(RS_127_io_x),
    .io_x_sub(RS_127_io_x_sub),
    .io_p(RS_127_io_p)
  );
  RS RS_128 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_128_io_sel_negative),
    .io_sel_positive(RS_128_io_sel_positive),
    .io_sel_double_negative(RS_128_io_sel_double_negative),
    .io_sel_double_positive(RS_128_io_sel_double_positive),
    .io_x(RS_128_io_x),
    .io_x_sub(RS_128_io_x_sub),
    .io_p(RS_128_io_p)
  );
  RS RS_129 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_129_io_sel_negative),
    .io_sel_positive(RS_129_io_sel_positive),
    .io_sel_double_negative(RS_129_io_sel_double_negative),
    .io_sel_double_positive(RS_129_io_sel_double_positive),
    .io_x(RS_129_io_x),
    .io_x_sub(RS_129_io_x_sub),
    .io_p(RS_129_io_p)
  );
  RS RS_130 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_130_io_sel_negative),
    .io_sel_positive(RS_130_io_sel_positive),
    .io_sel_double_negative(RS_130_io_sel_double_negative),
    .io_sel_double_positive(RS_130_io_sel_double_positive),
    .io_x(RS_130_io_x),
    .io_x_sub(RS_130_io_x_sub),
    .io_p(RS_130_io_p)
  );
  RS RS_131 ( // @[BOOTH_gen.scala 16:42]
    .io_sel_negative(RS_131_io_sel_negative),
    .io_sel_positive(RS_131_io_sel_positive),
    .io_sel_double_negative(RS_131_io_sel_double_negative),
    .io_sel_double_positive(RS_131_io_sel_double_positive),
    .io_x(RS_131_io_x),
    .io_x_sub(RS_131_io_x_sub),
    .io_p(RS_131_io_p)
  );
  BOOTH_S BOOTH_S ( // @[BOOTH_gen.scala 17:21]
    .io_sel_negative(BOOTH_S_io_sel_negative),
    .io_sel_positive(BOOTH_S_io_sel_positive),
    .io_sel_double_negative(BOOTH_S_io_sel_double_negative),
    .io_sel_double_positive(BOOTH_S_io_sel_double_positive),
    .io_cout(BOOTH_S_io_cout),
    .io_src(BOOTH_S_io_src)
  );
  assign io_out = {io_out_hi,io_out_lo}; // @[Cat.scala 31:58]
  assign io_cout = BOOTH_S_io_cout; // @[BOOTH_gen.scala 38:13]
  assign RS_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 23:23]
  assign RS_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 24:23]
  assign RS_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 25:30]
  assign RS_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 26:30]
  assign RS_io_x = io_x[0]; // @[BOOTH_gen.scala 21:16]
  assign RS_io_x_sub = 1'h0; // @[BOOTH_gen.scala 16:20 22:16]
  assign RS_1_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_1_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_1_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_1_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_1_io_x = io_x[1]; // @[BOOTH_gen.scala 29:20]
  assign RS_1_io_x_sub = io_x[0]; // @[BOOTH_gen.scala 30:24]
  assign RS_2_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_2_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_2_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_2_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_2_io_x = io_x[2]; // @[BOOTH_gen.scala 29:20]
  assign RS_2_io_x_sub = io_x[1]; // @[BOOTH_gen.scala 30:24]
  assign RS_3_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_3_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_3_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_3_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_3_io_x = io_x[3]; // @[BOOTH_gen.scala 29:20]
  assign RS_3_io_x_sub = io_x[2]; // @[BOOTH_gen.scala 30:24]
  assign RS_4_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_4_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_4_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_4_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_4_io_x = io_x[4]; // @[BOOTH_gen.scala 29:20]
  assign RS_4_io_x_sub = io_x[3]; // @[BOOTH_gen.scala 30:24]
  assign RS_5_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_5_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_5_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_5_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_5_io_x = io_x[5]; // @[BOOTH_gen.scala 29:20]
  assign RS_5_io_x_sub = io_x[4]; // @[BOOTH_gen.scala 30:24]
  assign RS_6_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_6_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_6_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_6_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_6_io_x = io_x[6]; // @[BOOTH_gen.scala 29:20]
  assign RS_6_io_x_sub = io_x[5]; // @[BOOTH_gen.scala 30:24]
  assign RS_7_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_7_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_7_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_7_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_7_io_x = io_x[7]; // @[BOOTH_gen.scala 29:20]
  assign RS_7_io_x_sub = io_x[6]; // @[BOOTH_gen.scala 30:24]
  assign RS_8_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_8_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_8_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_8_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_8_io_x = io_x[8]; // @[BOOTH_gen.scala 29:20]
  assign RS_8_io_x_sub = io_x[7]; // @[BOOTH_gen.scala 30:24]
  assign RS_9_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_9_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_9_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_9_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_9_io_x = io_x[9]; // @[BOOTH_gen.scala 29:20]
  assign RS_9_io_x_sub = io_x[8]; // @[BOOTH_gen.scala 30:24]
  assign RS_10_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_10_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_10_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_10_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_10_io_x = io_x[10]; // @[BOOTH_gen.scala 29:20]
  assign RS_10_io_x_sub = io_x[9]; // @[BOOTH_gen.scala 30:24]
  assign RS_11_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_11_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_11_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_11_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_11_io_x = io_x[11]; // @[BOOTH_gen.scala 29:20]
  assign RS_11_io_x_sub = io_x[10]; // @[BOOTH_gen.scala 30:24]
  assign RS_12_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_12_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_12_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_12_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_12_io_x = io_x[12]; // @[BOOTH_gen.scala 29:20]
  assign RS_12_io_x_sub = io_x[11]; // @[BOOTH_gen.scala 30:24]
  assign RS_13_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_13_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_13_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_13_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_13_io_x = io_x[13]; // @[BOOTH_gen.scala 29:20]
  assign RS_13_io_x_sub = io_x[12]; // @[BOOTH_gen.scala 30:24]
  assign RS_14_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_14_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_14_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_14_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_14_io_x = io_x[14]; // @[BOOTH_gen.scala 29:20]
  assign RS_14_io_x_sub = io_x[13]; // @[BOOTH_gen.scala 30:24]
  assign RS_15_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_15_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_15_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_15_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_15_io_x = io_x[15]; // @[BOOTH_gen.scala 29:20]
  assign RS_15_io_x_sub = io_x[14]; // @[BOOTH_gen.scala 30:24]
  assign RS_16_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_16_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_16_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_16_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_16_io_x = io_x[16]; // @[BOOTH_gen.scala 29:20]
  assign RS_16_io_x_sub = io_x[15]; // @[BOOTH_gen.scala 30:24]
  assign RS_17_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_17_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_17_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_17_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_17_io_x = io_x[17]; // @[BOOTH_gen.scala 29:20]
  assign RS_17_io_x_sub = io_x[16]; // @[BOOTH_gen.scala 30:24]
  assign RS_18_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_18_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_18_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_18_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_18_io_x = io_x[18]; // @[BOOTH_gen.scala 29:20]
  assign RS_18_io_x_sub = io_x[17]; // @[BOOTH_gen.scala 30:24]
  assign RS_19_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_19_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_19_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_19_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_19_io_x = io_x[19]; // @[BOOTH_gen.scala 29:20]
  assign RS_19_io_x_sub = io_x[18]; // @[BOOTH_gen.scala 30:24]
  assign RS_20_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_20_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_20_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_20_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_20_io_x = io_x[20]; // @[BOOTH_gen.scala 29:20]
  assign RS_20_io_x_sub = io_x[19]; // @[BOOTH_gen.scala 30:24]
  assign RS_21_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_21_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_21_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_21_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_21_io_x = io_x[21]; // @[BOOTH_gen.scala 29:20]
  assign RS_21_io_x_sub = io_x[20]; // @[BOOTH_gen.scala 30:24]
  assign RS_22_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_22_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_22_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_22_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_22_io_x = io_x[22]; // @[BOOTH_gen.scala 29:20]
  assign RS_22_io_x_sub = io_x[21]; // @[BOOTH_gen.scala 30:24]
  assign RS_23_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_23_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_23_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_23_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_23_io_x = io_x[23]; // @[BOOTH_gen.scala 29:20]
  assign RS_23_io_x_sub = io_x[22]; // @[BOOTH_gen.scala 30:24]
  assign RS_24_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_24_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_24_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_24_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_24_io_x = io_x[24]; // @[BOOTH_gen.scala 29:20]
  assign RS_24_io_x_sub = io_x[23]; // @[BOOTH_gen.scala 30:24]
  assign RS_25_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_25_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_25_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_25_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_25_io_x = io_x[25]; // @[BOOTH_gen.scala 29:20]
  assign RS_25_io_x_sub = io_x[24]; // @[BOOTH_gen.scala 30:24]
  assign RS_26_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_26_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_26_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_26_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_26_io_x = io_x[26]; // @[BOOTH_gen.scala 29:20]
  assign RS_26_io_x_sub = io_x[25]; // @[BOOTH_gen.scala 30:24]
  assign RS_27_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_27_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_27_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_27_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_27_io_x = io_x[27]; // @[BOOTH_gen.scala 29:20]
  assign RS_27_io_x_sub = io_x[26]; // @[BOOTH_gen.scala 30:24]
  assign RS_28_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_28_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_28_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_28_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_28_io_x = io_x[28]; // @[BOOTH_gen.scala 29:20]
  assign RS_28_io_x_sub = io_x[27]; // @[BOOTH_gen.scala 30:24]
  assign RS_29_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_29_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_29_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_29_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_29_io_x = io_x[29]; // @[BOOTH_gen.scala 29:20]
  assign RS_29_io_x_sub = io_x[28]; // @[BOOTH_gen.scala 30:24]
  assign RS_30_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_30_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_30_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_30_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_30_io_x = io_x[30]; // @[BOOTH_gen.scala 29:20]
  assign RS_30_io_x_sub = io_x[29]; // @[BOOTH_gen.scala 30:24]
  assign RS_31_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_31_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_31_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_31_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_31_io_x = io_x[31]; // @[BOOTH_gen.scala 29:20]
  assign RS_31_io_x_sub = io_x[30]; // @[BOOTH_gen.scala 30:24]
  assign RS_32_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_32_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_32_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_32_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_32_io_x = io_x[32]; // @[BOOTH_gen.scala 29:20]
  assign RS_32_io_x_sub = io_x[31]; // @[BOOTH_gen.scala 30:24]
  assign RS_33_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_33_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_33_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_33_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_33_io_x = io_x[33]; // @[BOOTH_gen.scala 29:20]
  assign RS_33_io_x_sub = io_x[32]; // @[BOOTH_gen.scala 30:24]
  assign RS_34_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_34_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_34_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_34_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_34_io_x = io_x[34]; // @[BOOTH_gen.scala 29:20]
  assign RS_34_io_x_sub = io_x[33]; // @[BOOTH_gen.scala 30:24]
  assign RS_35_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_35_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_35_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_35_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_35_io_x = io_x[35]; // @[BOOTH_gen.scala 29:20]
  assign RS_35_io_x_sub = io_x[34]; // @[BOOTH_gen.scala 30:24]
  assign RS_36_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_36_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_36_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_36_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_36_io_x = io_x[36]; // @[BOOTH_gen.scala 29:20]
  assign RS_36_io_x_sub = io_x[35]; // @[BOOTH_gen.scala 30:24]
  assign RS_37_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_37_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_37_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_37_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_37_io_x = io_x[37]; // @[BOOTH_gen.scala 29:20]
  assign RS_37_io_x_sub = io_x[36]; // @[BOOTH_gen.scala 30:24]
  assign RS_38_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_38_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_38_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_38_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_38_io_x = io_x[38]; // @[BOOTH_gen.scala 29:20]
  assign RS_38_io_x_sub = io_x[37]; // @[BOOTH_gen.scala 30:24]
  assign RS_39_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_39_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_39_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_39_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_39_io_x = io_x[39]; // @[BOOTH_gen.scala 29:20]
  assign RS_39_io_x_sub = io_x[38]; // @[BOOTH_gen.scala 30:24]
  assign RS_40_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_40_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_40_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_40_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_40_io_x = io_x[40]; // @[BOOTH_gen.scala 29:20]
  assign RS_40_io_x_sub = io_x[39]; // @[BOOTH_gen.scala 30:24]
  assign RS_41_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_41_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_41_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_41_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_41_io_x = io_x[41]; // @[BOOTH_gen.scala 29:20]
  assign RS_41_io_x_sub = io_x[40]; // @[BOOTH_gen.scala 30:24]
  assign RS_42_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_42_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_42_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_42_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_42_io_x = io_x[42]; // @[BOOTH_gen.scala 29:20]
  assign RS_42_io_x_sub = io_x[41]; // @[BOOTH_gen.scala 30:24]
  assign RS_43_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_43_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_43_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_43_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_43_io_x = io_x[43]; // @[BOOTH_gen.scala 29:20]
  assign RS_43_io_x_sub = io_x[42]; // @[BOOTH_gen.scala 30:24]
  assign RS_44_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_44_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_44_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_44_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_44_io_x = io_x[44]; // @[BOOTH_gen.scala 29:20]
  assign RS_44_io_x_sub = io_x[43]; // @[BOOTH_gen.scala 30:24]
  assign RS_45_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_45_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_45_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_45_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_45_io_x = io_x[45]; // @[BOOTH_gen.scala 29:20]
  assign RS_45_io_x_sub = io_x[44]; // @[BOOTH_gen.scala 30:24]
  assign RS_46_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_46_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_46_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_46_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_46_io_x = io_x[46]; // @[BOOTH_gen.scala 29:20]
  assign RS_46_io_x_sub = io_x[45]; // @[BOOTH_gen.scala 30:24]
  assign RS_47_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_47_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_47_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_47_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_47_io_x = io_x[47]; // @[BOOTH_gen.scala 29:20]
  assign RS_47_io_x_sub = io_x[46]; // @[BOOTH_gen.scala 30:24]
  assign RS_48_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_48_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_48_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_48_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_48_io_x = io_x[48]; // @[BOOTH_gen.scala 29:20]
  assign RS_48_io_x_sub = io_x[47]; // @[BOOTH_gen.scala 30:24]
  assign RS_49_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_49_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_49_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_49_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_49_io_x = io_x[49]; // @[BOOTH_gen.scala 29:20]
  assign RS_49_io_x_sub = io_x[48]; // @[BOOTH_gen.scala 30:24]
  assign RS_50_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_50_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_50_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_50_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_50_io_x = io_x[50]; // @[BOOTH_gen.scala 29:20]
  assign RS_50_io_x_sub = io_x[49]; // @[BOOTH_gen.scala 30:24]
  assign RS_51_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_51_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_51_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_51_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_51_io_x = io_x[51]; // @[BOOTH_gen.scala 29:20]
  assign RS_51_io_x_sub = io_x[50]; // @[BOOTH_gen.scala 30:24]
  assign RS_52_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_52_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_52_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_52_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_52_io_x = io_x[52]; // @[BOOTH_gen.scala 29:20]
  assign RS_52_io_x_sub = io_x[51]; // @[BOOTH_gen.scala 30:24]
  assign RS_53_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_53_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_53_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_53_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_53_io_x = io_x[53]; // @[BOOTH_gen.scala 29:20]
  assign RS_53_io_x_sub = io_x[52]; // @[BOOTH_gen.scala 30:24]
  assign RS_54_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_54_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_54_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_54_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_54_io_x = io_x[54]; // @[BOOTH_gen.scala 29:20]
  assign RS_54_io_x_sub = io_x[53]; // @[BOOTH_gen.scala 30:24]
  assign RS_55_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_55_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_55_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_55_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_55_io_x = io_x[55]; // @[BOOTH_gen.scala 29:20]
  assign RS_55_io_x_sub = io_x[54]; // @[BOOTH_gen.scala 30:24]
  assign RS_56_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_56_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_56_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_56_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_56_io_x = io_x[56]; // @[BOOTH_gen.scala 29:20]
  assign RS_56_io_x_sub = io_x[55]; // @[BOOTH_gen.scala 30:24]
  assign RS_57_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_57_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_57_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_57_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_57_io_x = io_x[57]; // @[BOOTH_gen.scala 29:20]
  assign RS_57_io_x_sub = io_x[56]; // @[BOOTH_gen.scala 30:24]
  assign RS_58_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_58_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_58_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_58_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_58_io_x = io_x[58]; // @[BOOTH_gen.scala 29:20]
  assign RS_58_io_x_sub = io_x[57]; // @[BOOTH_gen.scala 30:24]
  assign RS_59_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_59_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_59_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_59_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_59_io_x = io_x[59]; // @[BOOTH_gen.scala 29:20]
  assign RS_59_io_x_sub = io_x[58]; // @[BOOTH_gen.scala 30:24]
  assign RS_60_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_60_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_60_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_60_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_60_io_x = io_x[60]; // @[BOOTH_gen.scala 29:20]
  assign RS_60_io_x_sub = io_x[59]; // @[BOOTH_gen.scala 30:24]
  assign RS_61_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_61_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_61_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_61_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_61_io_x = io_x[61]; // @[BOOTH_gen.scala 29:20]
  assign RS_61_io_x_sub = io_x[60]; // @[BOOTH_gen.scala 30:24]
  assign RS_62_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_62_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_62_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_62_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_62_io_x = io_x[62]; // @[BOOTH_gen.scala 29:20]
  assign RS_62_io_x_sub = io_x[61]; // @[BOOTH_gen.scala 30:24]
  assign RS_63_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_63_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_63_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_63_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_63_io_x = io_x[63]; // @[BOOTH_gen.scala 29:20]
  assign RS_63_io_x_sub = io_x[62]; // @[BOOTH_gen.scala 30:24]
  assign RS_64_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_64_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_64_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_64_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_64_io_x = io_x[64]; // @[BOOTH_gen.scala 29:20]
  assign RS_64_io_x_sub = io_x[63]; // @[BOOTH_gen.scala 30:24]
  assign RS_65_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_65_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_65_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_65_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_65_io_x = io_x[65]; // @[BOOTH_gen.scala 29:20]
  assign RS_65_io_x_sub = io_x[64]; // @[BOOTH_gen.scala 30:24]
  assign RS_66_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_66_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_66_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_66_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_66_io_x = io_x[66]; // @[BOOTH_gen.scala 29:20]
  assign RS_66_io_x_sub = io_x[65]; // @[BOOTH_gen.scala 30:24]
  assign RS_67_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_67_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_67_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_67_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_67_io_x = io_x[67]; // @[BOOTH_gen.scala 29:20]
  assign RS_67_io_x_sub = io_x[66]; // @[BOOTH_gen.scala 30:24]
  assign RS_68_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_68_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_68_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_68_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_68_io_x = io_x[68]; // @[BOOTH_gen.scala 29:20]
  assign RS_68_io_x_sub = io_x[67]; // @[BOOTH_gen.scala 30:24]
  assign RS_69_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_69_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_69_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_69_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_69_io_x = io_x[69]; // @[BOOTH_gen.scala 29:20]
  assign RS_69_io_x_sub = io_x[68]; // @[BOOTH_gen.scala 30:24]
  assign RS_70_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_70_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_70_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_70_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_70_io_x = io_x[70]; // @[BOOTH_gen.scala 29:20]
  assign RS_70_io_x_sub = io_x[69]; // @[BOOTH_gen.scala 30:24]
  assign RS_71_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_71_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_71_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_71_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_71_io_x = io_x[71]; // @[BOOTH_gen.scala 29:20]
  assign RS_71_io_x_sub = io_x[70]; // @[BOOTH_gen.scala 30:24]
  assign RS_72_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_72_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_72_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_72_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_72_io_x = io_x[72]; // @[BOOTH_gen.scala 29:20]
  assign RS_72_io_x_sub = io_x[71]; // @[BOOTH_gen.scala 30:24]
  assign RS_73_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_73_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_73_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_73_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_73_io_x = io_x[73]; // @[BOOTH_gen.scala 29:20]
  assign RS_73_io_x_sub = io_x[72]; // @[BOOTH_gen.scala 30:24]
  assign RS_74_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_74_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_74_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_74_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_74_io_x = io_x[74]; // @[BOOTH_gen.scala 29:20]
  assign RS_74_io_x_sub = io_x[73]; // @[BOOTH_gen.scala 30:24]
  assign RS_75_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_75_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_75_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_75_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_75_io_x = io_x[75]; // @[BOOTH_gen.scala 29:20]
  assign RS_75_io_x_sub = io_x[74]; // @[BOOTH_gen.scala 30:24]
  assign RS_76_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_76_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_76_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_76_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_76_io_x = io_x[76]; // @[BOOTH_gen.scala 29:20]
  assign RS_76_io_x_sub = io_x[75]; // @[BOOTH_gen.scala 30:24]
  assign RS_77_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_77_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_77_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_77_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_77_io_x = io_x[77]; // @[BOOTH_gen.scala 29:20]
  assign RS_77_io_x_sub = io_x[76]; // @[BOOTH_gen.scala 30:24]
  assign RS_78_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_78_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_78_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_78_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_78_io_x = io_x[78]; // @[BOOTH_gen.scala 29:20]
  assign RS_78_io_x_sub = io_x[77]; // @[BOOTH_gen.scala 30:24]
  assign RS_79_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_79_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_79_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_79_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_79_io_x = io_x[79]; // @[BOOTH_gen.scala 29:20]
  assign RS_79_io_x_sub = io_x[78]; // @[BOOTH_gen.scala 30:24]
  assign RS_80_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_80_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_80_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_80_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_80_io_x = io_x[80]; // @[BOOTH_gen.scala 29:20]
  assign RS_80_io_x_sub = io_x[79]; // @[BOOTH_gen.scala 30:24]
  assign RS_81_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_81_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_81_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_81_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_81_io_x = io_x[81]; // @[BOOTH_gen.scala 29:20]
  assign RS_81_io_x_sub = io_x[80]; // @[BOOTH_gen.scala 30:24]
  assign RS_82_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_82_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_82_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_82_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_82_io_x = io_x[82]; // @[BOOTH_gen.scala 29:20]
  assign RS_82_io_x_sub = io_x[81]; // @[BOOTH_gen.scala 30:24]
  assign RS_83_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_83_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_83_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_83_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_83_io_x = io_x[83]; // @[BOOTH_gen.scala 29:20]
  assign RS_83_io_x_sub = io_x[82]; // @[BOOTH_gen.scala 30:24]
  assign RS_84_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_84_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_84_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_84_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_84_io_x = io_x[84]; // @[BOOTH_gen.scala 29:20]
  assign RS_84_io_x_sub = io_x[83]; // @[BOOTH_gen.scala 30:24]
  assign RS_85_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_85_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_85_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_85_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_85_io_x = io_x[85]; // @[BOOTH_gen.scala 29:20]
  assign RS_85_io_x_sub = io_x[84]; // @[BOOTH_gen.scala 30:24]
  assign RS_86_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_86_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_86_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_86_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_86_io_x = io_x[86]; // @[BOOTH_gen.scala 29:20]
  assign RS_86_io_x_sub = io_x[85]; // @[BOOTH_gen.scala 30:24]
  assign RS_87_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_87_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_87_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_87_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_87_io_x = io_x[87]; // @[BOOTH_gen.scala 29:20]
  assign RS_87_io_x_sub = io_x[86]; // @[BOOTH_gen.scala 30:24]
  assign RS_88_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_88_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_88_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_88_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_88_io_x = io_x[88]; // @[BOOTH_gen.scala 29:20]
  assign RS_88_io_x_sub = io_x[87]; // @[BOOTH_gen.scala 30:24]
  assign RS_89_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_89_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_89_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_89_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_89_io_x = io_x[89]; // @[BOOTH_gen.scala 29:20]
  assign RS_89_io_x_sub = io_x[88]; // @[BOOTH_gen.scala 30:24]
  assign RS_90_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_90_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_90_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_90_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_90_io_x = io_x[90]; // @[BOOTH_gen.scala 29:20]
  assign RS_90_io_x_sub = io_x[89]; // @[BOOTH_gen.scala 30:24]
  assign RS_91_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_91_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_91_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_91_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_91_io_x = io_x[91]; // @[BOOTH_gen.scala 29:20]
  assign RS_91_io_x_sub = io_x[90]; // @[BOOTH_gen.scala 30:24]
  assign RS_92_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_92_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_92_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_92_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_92_io_x = io_x[92]; // @[BOOTH_gen.scala 29:20]
  assign RS_92_io_x_sub = io_x[91]; // @[BOOTH_gen.scala 30:24]
  assign RS_93_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_93_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_93_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_93_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_93_io_x = io_x[93]; // @[BOOTH_gen.scala 29:20]
  assign RS_93_io_x_sub = io_x[92]; // @[BOOTH_gen.scala 30:24]
  assign RS_94_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_94_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_94_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_94_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_94_io_x = io_x[94]; // @[BOOTH_gen.scala 29:20]
  assign RS_94_io_x_sub = io_x[93]; // @[BOOTH_gen.scala 30:24]
  assign RS_95_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_95_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_95_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_95_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_95_io_x = io_x[95]; // @[BOOTH_gen.scala 29:20]
  assign RS_95_io_x_sub = io_x[94]; // @[BOOTH_gen.scala 30:24]
  assign RS_96_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_96_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_96_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_96_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_96_io_x = io_x[96]; // @[BOOTH_gen.scala 29:20]
  assign RS_96_io_x_sub = io_x[95]; // @[BOOTH_gen.scala 30:24]
  assign RS_97_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_97_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_97_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_97_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_97_io_x = io_x[97]; // @[BOOTH_gen.scala 29:20]
  assign RS_97_io_x_sub = io_x[96]; // @[BOOTH_gen.scala 30:24]
  assign RS_98_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_98_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_98_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_98_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_98_io_x = io_x[98]; // @[BOOTH_gen.scala 29:20]
  assign RS_98_io_x_sub = io_x[97]; // @[BOOTH_gen.scala 30:24]
  assign RS_99_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_99_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_99_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_99_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_99_io_x = io_x[99]; // @[BOOTH_gen.scala 29:20]
  assign RS_99_io_x_sub = io_x[98]; // @[BOOTH_gen.scala 30:24]
  assign RS_100_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_100_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_100_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_100_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_100_io_x = io_x[100]; // @[BOOTH_gen.scala 29:20]
  assign RS_100_io_x_sub = io_x[99]; // @[BOOTH_gen.scala 30:24]
  assign RS_101_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_101_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_101_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_101_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_101_io_x = io_x[101]; // @[BOOTH_gen.scala 29:20]
  assign RS_101_io_x_sub = io_x[100]; // @[BOOTH_gen.scala 30:24]
  assign RS_102_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_102_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_102_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_102_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_102_io_x = io_x[102]; // @[BOOTH_gen.scala 29:20]
  assign RS_102_io_x_sub = io_x[101]; // @[BOOTH_gen.scala 30:24]
  assign RS_103_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_103_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_103_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_103_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_103_io_x = io_x[103]; // @[BOOTH_gen.scala 29:20]
  assign RS_103_io_x_sub = io_x[102]; // @[BOOTH_gen.scala 30:24]
  assign RS_104_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_104_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_104_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_104_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_104_io_x = io_x[104]; // @[BOOTH_gen.scala 29:20]
  assign RS_104_io_x_sub = io_x[103]; // @[BOOTH_gen.scala 30:24]
  assign RS_105_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_105_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_105_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_105_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_105_io_x = io_x[105]; // @[BOOTH_gen.scala 29:20]
  assign RS_105_io_x_sub = io_x[104]; // @[BOOTH_gen.scala 30:24]
  assign RS_106_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_106_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_106_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_106_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_106_io_x = io_x[106]; // @[BOOTH_gen.scala 29:20]
  assign RS_106_io_x_sub = io_x[105]; // @[BOOTH_gen.scala 30:24]
  assign RS_107_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_107_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_107_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_107_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_107_io_x = io_x[107]; // @[BOOTH_gen.scala 29:20]
  assign RS_107_io_x_sub = io_x[106]; // @[BOOTH_gen.scala 30:24]
  assign RS_108_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_108_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_108_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_108_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_108_io_x = io_x[108]; // @[BOOTH_gen.scala 29:20]
  assign RS_108_io_x_sub = io_x[107]; // @[BOOTH_gen.scala 30:24]
  assign RS_109_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_109_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_109_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_109_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_109_io_x = io_x[109]; // @[BOOTH_gen.scala 29:20]
  assign RS_109_io_x_sub = io_x[108]; // @[BOOTH_gen.scala 30:24]
  assign RS_110_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_110_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_110_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_110_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_110_io_x = io_x[110]; // @[BOOTH_gen.scala 29:20]
  assign RS_110_io_x_sub = io_x[109]; // @[BOOTH_gen.scala 30:24]
  assign RS_111_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_111_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_111_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_111_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_111_io_x = io_x[111]; // @[BOOTH_gen.scala 29:20]
  assign RS_111_io_x_sub = io_x[110]; // @[BOOTH_gen.scala 30:24]
  assign RS_112_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_112_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_112_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_112_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_112_io_x = io_x[112]; // @[BOOTH_gen.scala 29:20]
  assign RS_112_io_x_sub = io_x[111]; // @[BOOTH_gen.scala 30:24]
  assign RS_113_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_113_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_113_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_113_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_113_io_x = io_x[113]; // @[BOOTH_gen.scala 29:20]
  assign RS_113_io_x_sub = io_x[112]; // @[BOOTH_gen.scala 30:24]
  assign RS_114_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_114_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_114_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_114_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_114_io_x = io_x[114]; // @[BOOTH_gen.scala 29:20]
  assign RS_114_io_x_sub = io_x[113]; // @[BOOTH_gen.scala 30:24]
  assign RS_115_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_115_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_115_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_115_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_115_io_x = io_x[115]; // @[BOOTH_gen.scala 29:20]
  assign RS_115_io_x_sub = io_x[114]; // @[BOOTH_gen.scala 30:24]
  assign RS_116_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_116_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_116_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_116_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_116_io_x = io_x[116]; // @[BOOTH_gen.scala 29:20]
  assign RS_116_io_x_sub = io_x[115]; // @[BOOTH_gen.scala 30:24]
  assign RS_117_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_117_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_117_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_117_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_117_io_x = io_x[117]; // @[BOOTH_gen.scala 29:20]
  assign RS_117_io_x_sub = io_x[116]; // @[BOOTH_gen.scala 30:24]
  assign RS_118_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_118_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_118_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_118_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_118_io_x = io_x[118]; // @[BOOTH_gen.scala 29:20]
  assign RS_118_io_x_sub = io_x[117]; // @[BOOTH_gen.scala 30:24]
  assign RS_119_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_119_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_119_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_119_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_119_io_x = io_x[119]; // @[BOOTH_gen.scala 29:20]
  assign RS_119_io_x_sub = io_x[118]; // @[BOOTH_gen.scala 30:24]
  assign RS_120_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_120_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_120_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_120_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_120_io_x = io_x[120]; // @[BOOTH_gen.scala 29:20]
  assign RS_120_io_x_sub = io_x[119]; // @[BOOTH_gen.scala 30:24]
  assign RS_121_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_121_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_121_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_121_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_121_io_x = io_x[121]; // @[BOOTH_gen.scala 29:20]
  assign RS_121_io_x_sub = io_x[120]; // @[BOOTH_gen.scala 30:24]
  assign RS_122_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_122_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_122_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_122_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_122_io_x = io_x[122]; // @[BOOTH_gen.scala 29:20]
  assign RS_122_io_x_sub = io_x[121]; // @[BOOTH_gen.scala 30:24]
  assign RS_123_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_123_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_123_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_123_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_123_io_x = io_x[123]; // @[BOOTH_gen.scala 29:20]
  assign RS_123_io_x_sub = io_x[122]; // @[BOOTH_gen.scala 30:24]
  assign RS_124_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_124_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_124_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_124_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_124_io_x = io_x[124]; // @[BOOTH_gen.scala 29:20]
  assign RS_124_io_x_sub = io_x[123]; // @[BOOTH_gen.scala 30:24]
  assign RS_125_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_125_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_125_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_125_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_125_io_x = io_x[125]; // @[BOOTH_gen.scala 29:20]
  assign RS_125_io_x_sub = io_x[124]; // @[BOOTH_gen.scala 30:24]
  assign RS_126_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_126_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_126_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_126_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_126_io_x = io_x[126]; // @[BOOTH_gen.scala 29:20]
  assign RS_126_io_x_sub = io_x[125]; // @[BOOTH_gen.scala 30:24]
  assign RS_127_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_127_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_127_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_127_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_127_io_x = io_x[127]; // @[BOOTH_gen.scala 29:20]
  assign RS_127_io_x_sub = io_x[126]; // @[BOOTH_gen.scala 30:24]
  assign RS_128_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_128_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_128_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_128_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_128_io_x = io_x[128]; // @[BOOTH_gen.scala 29:20]
  assign RS_128_io_x_sub = io_x[127]; // @[BOOTH_gen.scala 30:24]
  assign RS_129_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_129_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_129_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_129_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_129_io_x = io_x[129]; // @[BOOTH_gen.scala 29:20]
  assign RS_129_io_x_sub = io_x[128]; // @[BOOTH_gen.scala 30:24]
  assign RS_130_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_130_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_130_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_130_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_130_io_x = io_x[130]; // @[BOOTH_gen.scala 29:20]
  assign RS_130_io_x_sub = io_x[129]; // @[BOOTH_gen.scala 30:24]
  assign RS_131_io_sel_negative = BOOTH_S_io_sel_negative; // @[BOOTH_gen.scala 16:20 31:27]
  assign RS_131_io_sel_positive = BOOTH_S_io_sel_positive; // @[BOOTH_gen.scala 16:20 32:27]
  assign RS_131_io_sel_double_negative = BOOTH_S_io_sel_double_negative; // @[BOOTH_gen.scala 16:20 33:34]
  assign RS_131_io_sel_double_positive = BOOTH_S_io_sel_double_positive; // @[BOOTH_gen.scala 16:20 34:34]
  assign RS_131_io_x = io_x[131]; // @[BOOTH_gen.scala 29:20]
  assign RS_131_io_x_sub = io_x[130]; // @[BOOTH_gen.scala 30:24]
  assign BOOTH_S_io_src = io_y; // @[BOOTH_gen.scala 19:11]
endmodule
module mul(
  input         clock,
  input         reset,
  input         io_mul_valid,
  input  [63:0] io_multiplicand,
  input  [63:0] io_multiplier,
  output        io_out_valid,
  output [63:0] io_result_lo
);
`ifdef RANDOMIZE_REG_INIT
  reg [159:0] _RAND_0;
  reg [95:0] _RAND_1;
  reg [159:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire [131:0] BOOTH_gen_io_x; // @[mul.scala 101:18]
  wire [2:0] BOOTH_gen_io_y; // @[mul.scala 101:18]
  wire [131:0] BOOTH_gen_io_out; // @[mul.scala 101:18]
  wire  BOOTH_gen_io_cout; // @[mul.scala 101:18]
  wire [65:0] multiplier = {io_multiplier[63],io_multiplier,1'h0}; // @[Cat.scala 31:58]
  wire [65:0] multiplicand = {io_multiplicand[63],io_multiplicand,1'h0}; // @[Cat.scala 31:58]
  reg [131:0] multiplicand_reg; // @[mul.scala 75:33]
  reg [65:0] multiplier_reg; // @[mul.scala 76:33]
  reg [131:0] result; // @[mul.scala 77:33]
  reg  start; // @[mul.scala 78:33]
  wire  _GEN_1 = io_mul_valid | start; // @[mul.scala 81:22 83:18 78:33]
  wire  _multiplier_reg_T_1 = ~start & io_mul_valid; // @[mul.scala 98:45]
  wire [133:0] _multiplicand_reg_T_2 = {multiplicand_reg, 2'h0}; // @[mul.scala 99:93]
  wire [133:0] _multiplicand_reg_T_3 = _multiplier_reg_T_1 ? {{68'd0}, multiplicand} : _multiplicand_reg_T_2; // @[mul.scala 99:26]
  wire [131:0] _result_T_2 = result + BOOTH_gen_io_out; // @[mul.scala 105:42]
  wire [131:0] _GEN_0 = {{131'd0}, BOOTH_gen_io_cout}; // @[mul.scala 105:51]
  wire [131:0] _result_T_4 = _result_T_2 + _GEN_0; // @[mul.scala 105:51]
  wire  result_sign = io_multiplier[63] ^ io_multiplicand[63]; // @[mul.scala 108:30]
  wire [133:0] _GEN_6 = reset ? 134'h0 : _multiplicand_reg_T_3; // @[mul.scala 75:{33,33} 99:20]
  BOOTH_gen BOOTH_gen ( // @[mul.scala 101:18]
    .io_x(BOOTH_gen_io_x),
    .io_y(BOOTH_gen_io_y),
    .io_out(BOOTH_gen_io_out),
    .io_cout(BOOTH_gen_io_cout)
  );
  assign io_out_valid = multiplier_reg == 66'h0 & start; // @[mul.scala 87:31]
  assign io_result_lo = {result_sign,result[63:1]}; // @[Cat.scala 31:58]
  assign BOOTH_gen_io_x = multiplicand_reg; // @[mul.scala 103:8]
  assign BOOTH_gen_io_y = multiplier_reg[2:0]; // @[mul.scala 102:25]
  always @(posedge clock) begin
    multiplicand_reg <= _GEN_6[131:0]; // @[mul.scala 75:{33,33} 99:20]
    if (reset) begin // @[mul.scala 76:33]
      multiplier_reg <= 66'h0; // @[mul.scala 76:33]
    end else if (~start & io_mul_valid) begin // @[mul.scala 98:26]
      multiplier_reg <= multiplier;
    end else begin
      multiplier_reg <= {{2'd0}, multiplier_reg[65:2]};
    end
    if (reset) begin // @[mul.scala 77:33]
      result <= 132'h0; // @[mul.scala 77:33]
    end else if (io_out_valid) begin // @[mul.scala 113:21]
      result <= 132'h0; // @[mul.scala 114:12]
    end else if (start) begin // @[mul.scala 105:16]
      result <= _result_T_4;
    end
    if (reset) begin // @[mul.scala 78:33]
      start <= 1'h0; // @[mul.scala 78:33]
    end else if (multiplier_reg == 66'h0 & start) begin // @[mul.scala 87:52]
      start <= 1'h0; // @[mul.scala 90:18]
    end else begin
      start <= _GEN_1;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {5{`RANDOM}};
  multiplicand_reg = _RAND_0[131:0];
  _RAND_1 = {3{`RANDOM}};
  multiplier_reg = _RAND_1[65:0];
  _RAND_2 = {5{`RANDOM}};
  result = _RAND_2[131:0];
  _RAND_3 = {1{`RANDOM}};
  start = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module mul_1(
  input         clock,
  input         reset,
  input         io_mul_valid,
  input  [31:0] io_multiplicand,
  input  [31:0] io_multiplier,
  output        io_out_valid,
  output [31:0] io_result_lo
);
`ifdef RANDOMIZE_REG_INIT
  reg [95:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [95:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire [131:0] BOOTH_gen_io_x; // @[mul.scala 101:18]
  wire [2:0] BOOTH_gen_io_y; // @[mul.scala 101:18]
  wire [131:0] BOOTH_gen_io_out; // @[mul.scala 101:18]
  wire  BOOTH_gen_io_cout; // @[mul.scala 101:18]
  wire [33:0] multiplier = {1'h0,io_multiplier,1'h0}; // @[Cat.scala 31:58]
  wire [33:0] multiplicand = {1'h0,io_multiplicand,1'h0}; // @[Cat.scala 31:58]
  reg [67:0] multiplicand_reg; // @[mul.scala 75:33]
  reg [33:0] multiplier_reg; // @[mul.scala 76:33]
  reg [67:0] result; // @[mul.scala 77:33]
  reg  start; // @[mul.scala 78:33]
  wire  _GEN_1 = io_mul_valid | start; // @[mul.scala 81:22 83:18 78:33]
  wire  _multiplier_reg_T_1 = ~start & io_mul_valid; // @[mul.scala 98:45]
  wire [69:0] _multiplicand_reg_T_2 = {multiplicand_reg, 2'h0}; // @[mul.scala 99:93]
  wire [69:0] _multiplicand_reg_T_3 = _multiplier_reg_T_1 ? {{36'd0}, multiplicand} : _multiplicand_reg_T_2; // @[mul.scala 99:26]
  wire [131:0] _GEN_0 = {{64'd0}, result}; // @[mul.scala 105:42]
  wire [131:0] _result_T_2 = _GEN_0 + BOOTH_gen_io_out; // @[mul.scala 105:42]
  wire [131:0] _GEN_6 = {{131'd0}, BOOTH_gen_io_cout}; // @[mul.scala 105:51]
  wire [131:0] _result_T_4 = _result_T_2 + _GEN_6; // @[mul.scala 105:51]
  wire [131:0] _result_T_5 = start ? _result_T_4 : {{64'd0}, result}; // @[mul.scala 105:16]
  wire  result_sign = io_multiplier[31] ^ io_multiplicand[31]; // @[mul.scala 108:30]
  wire [131:0] _GEN_5 = io_out_valid ? 132'h0 : _result_T_5; // @[mul.scala 105:10 113:21 114:12]
  wire [69:0] _GEN_7 = reset ? 70'h0 : _multiplicand_reg_T_3; // @[mul.scala 75:{33,33} 99:20]
  wire [131:0] _GEN_8 = reset ? 132'h0 : _GEN_5; // @[mul.scala 77:{33,33}]
  BOOTH_gen BOOTH_gen ( // @[mul.scala 101:18]
    .io_x(BOOTH_gen_io_x),
    .io_y(BOOTH_gen_io_y),
    .io_out(BOOTH_gen_io_out),
    .io_cout(BOOTH_gen_io_cout)
  );
  assign io_out_valid = multiplier_reg == 34'h0 & start; // @[mul.scala 87:31]
  assign io_result_lo = {result_sign,result[31:1]}; // @[Cat.scala 31:58]
  assign BOOTH_gen_io_x = {{64'd0}, multiplicand_reg}; // @[mul.scala 103:8]
  assign BOOTH_gen_io_y = multiplier_reg[2:0]; // @[mul.scala 102:25]
  always @(posedge clock) begin
    multiplicand_reg <= _GEN_7[67:0]; // @[mul.scala 75:{33,33} 99:20]
    if (reset) begin // @[mul.scala 76:33]
      multiplier_reg <= 34'h0; // @[mul.scala 76:33]
    end else if (~start & io_mul_valid) begin // @[mul.scala 98:26]
      multiplier_reg <= multiplier;
    end else begin
      multiplier_reg <= {{2'd0}, multiplier_reg[33:2]};
    end
    result <= _GEN_8[67:0]; // @[mul.scala 77:{33,33}]
    if (reset) begin // @[mul.scala 78:33]
      start <= 1'h0; // @[mul.scala 78:33]
    end else if (multiplier_reg == 34'h0 & start) begin // @[mul.scala 87:52]
      start <= 1'h0; // @[mul.scala 90:18]
    end else begin
      start <= _GEN_1;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {3{`RANDOM}};
  multiplicand_reg = _RAND_0[67:0];
  _RAND_1 = {2{`RANDOM}};
  multiplier_reg = _RAND_1[33:0];
  _RAND_2 = {3{`RANDOM}};
  result = _RAND_2[67:0];
  _RAND_3 = {1{`RANDOM}};
  start = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module div(
  input         clock,
  input         reset,
  input  [63:0] io_dividend,
  input  [63:0] io_divisor,
  input         io_div_valid,
  input         io_div_signed,
  output        io_out_valid,
  output [63:0] io_quotient,
  output [63:0] io_remainder
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [127:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [31:0] _RAND_10;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] dividend_reg; // @[div.scala 21:25]
  reg [63:0] divisor_reg; // @[div.scala 22:25]
  reg  start; // @[div.scala 23:25]
  reg [7:0] delay; // @[div.scala 25:24]
  reg [1:0] clear; // @[div.scala 27:24]
  wire  _dividend_T_1 = io_div_signed & io_dividend[63]; // @[div.scala 31:34]
  wire [63:0] _dividend_T_3 = ~io_dividend; // @[div.scala 31:66]
  wire [63:0] _dividend_T_5 = _dividend_T_3 + 64'h1; // @[div.scala 31:80]
  wire [63:0] _divisor_T_3 = ~io_divisor; // @[div.scala 32:65]
  wire [63:0] _divisor_T_5 = _divisor_T_3 + 64'h1; // @[div.scala 32:78]
  reg  quotient_sign; // @[div.scala 42:31]
  reg  remainder_sign; // @[div.scala 43:31]
  reg [127:0] A; // @[div.scala 48:18]
  reg [63:0] B; // @[div.scala 49:18]
  reg [63:0] S; // @[div.scala 51:18]
  reg [7:0] cnt; // @[div.scala 52:20]
  wire [127:0] _A_T = {64'h0,dividend_reg}; // @[Cat.scala 31:58]
  wire  _T_1 = ~io_out_valid; // @[div.scala 58:23]
  wire [7:0] _delay_T_1 = delay + 8'h1; // @[div.scala 59:20]
  wire [64:0] _S_tmp_T_1 = {1'h0,B}; // @[Cat.scala 31:58]
  wire  _S_tmp_T_2 = A[127:63] >= _S_tmp_T_1; // @[div.scala 61:42]
  wire  _GEN_3 = 6'h0 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_4 = 6'h1 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_5 = 6'h2 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_6 = 6'h3 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_7 = 6'h4 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_8 = 6'h5 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_9 = 6'h6 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_10 = 6'h7 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_11 = 6'h8 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_12 = 6'h9 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_13 = 6'ha == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_14 = 6'hb == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_15 = 6'hc == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_16 = 6'hd == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_17 = 6'he == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_18 = 6'hf == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_19 = 6'h10 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_20 = 6'h11 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_21 = 6'h12 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_22 = 6'h13 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_23 = 6'h14 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_24 = 6'h15 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_25 = 6'h16 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_26 = 6'h17 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_27 = 6'h18 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_28 = 6'h19 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_29 = 6'h1a == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_30 = 6'h1b == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_31 = 6'h1c == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_32 = 6'h1d == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_33 = 6'h1e == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_34 = 6'h1f == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_35 = 6'h20 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_36 = 6'h21 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_37 = 6'h22 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_38 = 6'h23 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_39 = 6'h24 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_40 = 6'h25 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_41 = 6'h26 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_42 = 6'h27 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_43 = 6'h28 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_44 = 6'h29 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_45 = 6'h2a == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_46 = 6'h2b == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_47 = 6'h2c == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_48 = 6'h2d == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_49 = 6'h2e == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_50 = 6'h2f == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_51 = 6'h30 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_52 = 6'h31 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_53 = 6'h32 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_54 = 6'h33 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_55 = 6'h34 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_56 = 6'h35 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_57 = 6'h36 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_58 = 6'h37 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_59 = 6'h38 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_60 = 6'h39 == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_61 = 6'h3a == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_62 = 6'h3b == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_63 = 6'h3c == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_64 = 6'h3d == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_65 = 6'h3e == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_66 = 6'h3f == cnt[5:0] & A[127:63] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire [127:0] _A_T_5 = {65'h0,A[62:0]}; // @[Cat.scala 31:58]
  wire [64:0] _A_T_9 = A[127:63] - _S_tmp_T_1; // @[div.scala 62:106]
  wire [127:0] _A_T_10 = {_A_T_9, 63'h0}; // @[div.scala 62:121]
  wire [127:0] _A_T_11 = _A_T_5 | _A_T_10; // @[div.scala 62:84]
  wire [127:0] _A_T_12 = _S_tmp_T_2 ? _A_T_11 : A; // @[div.scala 62:14]
  wire [128:0] _A_T_13 = {_A_T_12, 1'h0}; // @[div.scala 62:137]
  wire [7:0] _cnt_T_1 = cnt + 8'h1; // @[div.scala 63:16]
  wire  _GEN_129 = delay >= 8'h2 & _T_1 & _GEN_65; // @[div.scala 50:22 60:44]
  wire  S_tmp_62 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_129; // @[div.scala 50:22 58:46]
  wire  _GEN_130 = delay >= 8'h2 & _T_1 & _GEN_66; // @[div.scala 50:22 60:44]
  wire  S_tmp_63 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_130; // @[div.scala 50:22 58:46]
  wire  _GEN_127 = delay >= 8'h2 & _T_1 & _GEN_63; // @[div.scala 50:22 60:44]
  wire  S_tmp_60 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_127; // @[div.scala 50:22 58:46]
  wire  _GEN_128 = delay >= 8'h2 & _T_1 & _GEN_64; // @[div.scala 50:22 60:44]
  wire  S_tmp_61 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_128; // @[div.scala 50:22 58:46]
  wire  _GEN_125 = delay >= 8'h2 & _T_1 & _GEN_61; // @[div.scala 50:22 60:44]
  wire  S_tmp_58 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_125; // @[div.scala 50:22 58:46]
  wire  _GEN_126 = delay >= 8'h2 & _T_1 & _GEN_62; // @[div.scala 50:22 60:44]
  wire  S_tmp_59 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_126; // @[div.scala 50:22 58:46]
  wire  _GEN_123 = delay >= 8'h2 & _T_1 & _GEN_59; // @[div.scala 50:22 60:44]
  wire  S_tmp_56 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_123; // @[div.scala 50:22 58:46]
  wire  _GEN_124 = delay >= 8'h2 & _T_1 & _GEN_60; // @[div.scala 50:22 60:44]
  wire  S_tmp_57 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_124; // @[div.scala 50:22 58:46]
  wire [7:0] S_lo_lo_lo = {S_tmp_56,S_tmp_57,S_tmp_58,S_tmp_59,S_tmp_60,S_tmp_61,S_tmp_62,S_tmp_63}; // @[Cat.scala 31:58]
  wire  _GEN_121 = delay >= 8'h2 & _T_1 & _GEN_57; // @[div.scala 50:22 60:44]
  wire  S_tmp_54 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_121; // @[div.scala 50:22 58:46]
  wire  _GEN_122 = delay >= 8'h2 & _T_1 & _GEN_58; // @[div.scala 50:22 60:44]
  wire  S_tmp_55 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_122; // @[div.scala 50:22 58:46]
  wire  _GEN_119 = delay >= 8'h2 & _T_1 & _GEN_55; // @[div.scala 50:22 60:44]
  wire  S_tmp_52 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_119; // @[div.scala 50:22 58:46]
  wire  _GEN_120 = delay >= 8'h2 & _T_1 & _GEN_56; // @[div.scala 50:22 60:44]
  wire  S_tmp_53 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_120; // @[div.scala 50:22 58:46]
  wire  _GEN_117 = delay >= 8'h2 & _T_1 & _GEN_53; // @[div.scala 50:22 60:44]
  wire  S_tmp_50 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_117; // @[div.scala 50:22 58:46]
  wire  _GEN_118 = delay >= 8'h2 & _T_1 & _GEN_54; // @[div.scala 50:22 60:44]
  wire  S_tmp_51 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_118; // @[div.scala 50:22 58:46]
  wire  _GEN_115 = delay >= 8'h2 & _T_1 & _GEN_51; // @[div.scala 50:22 60:44]
  wire  S_tmp_48 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_115; // @[div.scala 50:22 58:46]
  wire  _GEN_116 = delay >= 8'h2 & _T_1 & _GEN_52; // @[div.scala 50:22 60:44]
  wire  S_tmp_49 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_116; // @[div.scala 50:22 58:46]
  wire [15:0] S_lo_lo = {S_tmp_48,S_tmp_49,S_tmp_50,S_tmp_51,S_tmp_52,S_tmp_53,S_tmp_54,S_tmp_55,S_lo_lo_lo}; // @[Cat.scala 31:58]
  wire  _GEN_113 = delay >= 8'h2 & _T_1 & _GEN_49; // @[div.scala 50:22 60:44]
  wire  S_tmp_46 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_113; // @[div.scala 50:22 58:46]
  wire  _GEN_114 = delay >= 8'h2 & _T_1 & _GEN_50; // @[div.scala 50:22 60:44]
  wire  S_tmp_47 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_114; // @[div.scala 50:22 58:46]
  wire  _GEN_111 = delay >= 8'h2 & _T_1 & _GEN_47; // @[div.scala 50:22 60:44]
  wire  S_tmp_44 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_111; // @[div.scala 50:22 58:46]
  wire  _GEN_112 = delay >= 8'h2 & _T_1 & _GEN_48; // @[div.scala 50:22 60:44]
  wire  S_tmp_45 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_112; // @[div.scala 50:22 58:46]
  wire  _GEN_109 = delay >= 8'h2 & _T_1 & _GEN_45; // @[div.scala 50:22 60:44]
  wire  S_tmp_42 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_109; // @[div.scala 50:22 58:46]
  wire  _GEN_110 = delay >= 8'h2 & _T_1 & _GEN_46; // @[div.scala 50:22 60:44]
  wire  S_tmp_43 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_110; // @[div.scala 50:22 58:46]
  wire  _GEN_107 = delay >= 8'h2 & _T_1 & _GEN_43; // @[div.scala 50:22 60:44]
  wire  S_tmp_40 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_107; // @[div.scala 50:22 58:46]
  wire  _GEN_108 = delay >= 8'h2 & _T_1 & _GEN_44; // @[div.scala 50:22 60:44]
  wire  S_tmp_41 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_108; // @[div.scala 50:22 58:46]
  wire [7:0] S_lo_hi_lo = {S_tmp_40,S_tmp_41,S_tmp_42,S_tmp_43,S_tmp_44,S_tmp_45,S_tmp_46,S_tmp_47}; // @[Cat.scala 31:58]
  wire  _GEN_105 = delay >= 8'h2 & _T_1 & _GEN_41; // @[div.scala 50:22 60:44]
  wire  S_tmp_38 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_105; // @[div.scala 50:22 58:46]
  wire  _GEN_106 = delay >= 8'h2 & _T_1 & _GEN_42; // @[div.scala 50:22 60:44]
  wire  S_tmp_39 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_106; // @[div.scala 50:22 58:46]
  wire  _GEN_103 = delay >= 8'h2 & _T_1 & _GEN_39; // @[div.scala 50:22 60:44]
  wire  S_tmp_36 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_103; // @[div.scala 50:22 58:46]
  wire  _GEN_104 = delay >= 8'h2 & _T_1 & _GEN_40; // @[div.scala 50:22 60:44]
  wire  S_tmp_37 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_104; // @[div.scala 50:22 58:46]
  wire  _GEN_101 = delay >= 8'h2 & _T_1 & _GEN_37; // @[div.scala 50:22 60:44]
  wire  S_tmp_34 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_101; // @[div.scala 50:22 58:46]
  wire  _GEN_102 = delay >= 8'h2 & _T_1 & _GEN_38; // @[div.scala 50:22 60:44]
  wire  S_tmp_35 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_102; // @[div.scala 50:22 58:46]
  wire  _GEN_99 = delay >= 8'h2 & _T_1 & _GEN_35; // @[div.scala 50:22 60:44]
  wire  S_tmp_32 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_99; // @[div.scala 50:22 58:46]
  wire  _GEN_100 = delay >= 8'h2 & _T_1 & _GEN_36; // @[div.scala 50:22 60:44]
  wire  S_tmp_33 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_100; // @[div.scala 50:22 58:46]
  wire [31:0] S_lo = {S_tmp_32,S_tmp_33,S_tmp_34,S_tmp_35,S_tmp_36,S_tmp_37,S_tmp_38,S_tmp_39,S_lo_hi_lo,S_lo_lo}; // @[Cat.scala 31:58]
  wire  _GEN_97 = delay >= 8'h2 & _T_1 & _GEN_33; // @[div.scala 50:22 60:44]
  wire  S_tmp_30 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_97; // @[div.scala 50:22 58:46]
  wire  _GEN_98 = delay >= 8'h2 & _T_1 & _GEN_34; // @[div.scala 50:22 60:44]
  wire  S_tmp_31 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_98; // @[div.scala 50:22 58:46]
  wire  _GEN_95 = delay >= 8'h2 & _T_1 & _GEN_31; // @[div.scala 50:22 60:44]
  wire  S_tmp_28 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_95; // @[div.scala 50:22 58:46]
  wire  _GEN_96 = delay >= 8'h2 & _T_1 & _GEN_32; // @[div.scala 50:22 60:44]
  wire  S_tmp_29 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_96; // @[div.scala 50:22 58:46]
  wire  _GEN_93 = delay >= 8'h2 & _T_1 & _GEN_29; // @[div.scala 50:22 60:44]
  wire  S_tmp_26 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_93; // @[div.scala 50:22 58:46]
  wire  _GEN_94 = delay >= 8'h2 & _T_1 & _GEN_30; // @[div.scala 50:22 60:44]
  wire  S_tmp_27 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_94; // @[div.scala 50:22 58:46]
  wire  _GEN_91 = delay >= 8'h2 & _T_1 & _GEN_27; // @[div.scala 50:22 60:44]
  wire  S_tmp_24 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_91; // @[div.scala 50:22 58:46]
  wire  _GEN_92 = delay >= 8'h2 & _T_1 & _GEN_28; // @[div.scala 50:22 60:44]
  wire  S_tmp_25 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_92; // @[div.scala 50:22 58:46]
  wire [7:0] S_hi_lo_lo = {S_tmp_24,S_tmp_25,S_tmp_26,S_tmp_27,S_tmp_28,S_tmp_29,S_tmp_30,S_tmp_31}; // @[Cat.scala 31:58]
  wire  _GEN_89 = delay >= 8'h2 & _T_1 & _GEN_25; // @[div.scala 50:22 60:44]
  wire  S_tmp_22 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_89; // @[div.scala 50:22 58:46]
  wire  _GEN_90 = delay >= 8'h2 & _T_1 & _GEN_26; // @[div.scala 50:22 60:44]
  wire  S_tmp_23 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_90; // @[div.scala 50:22 58:46]
  wire  _GEN_87 = delay >= 8'h2 & _T_1 & _GEN_23; // @[div.scala 50:22 60:44]
  wire  S_tmp_20 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_87; // @[div.scala 50:22 58:46]
  wire  _GEN_88 = delay >= 8'h2 & _T_1 & _GEN_24; // @[div.scala 50:22 60:44]
  wire  S_tmp_21 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_88; // @[div.scala 50:22 58:46]
  wire  _GEN_85 = delay >= 8'h2 & _T_1 & _GEN_21; // @[div.scala 50:22 60:44]
  wire  S_tmp_18 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_85; // @[div.scala 50:22 58:46]
  wire  _GEN_86 = delay >= 8'h2 & _T_1 & _GEN_22; // @[div.scala 50:22 60:44]
  wire  S_tmp_19 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_86; // @[div.scala 50:22 58:46]
  wire  _GEN_83 = delay >= 8'h2 & _T_1 & _GEN_19; // @[div.scala 50:22 60:44]
  wire  S_tmp_16 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_83; // @[div.scala 50:22 58:46]
  wire  _GEN_84 = delay >= 8'h2 & _T_1 & _GEN_20; // @[div.scala 50:22 60:44]
  wire  S_tmp_17 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_84; // @[div.scala 50:22 58:46]
  wire [15:0] S_hi_lo = {S_tmp_16,S_tmp_17,S_tmp_18,S_tmp_19,S_tmp_20,S_tmp_21,S_tmp_22,S_tmp_23,S_hi_lo_lo}; // @[Cat.scala 31:58]
  wire  _GEN_81 = delay >= 8'h2 & _T_1 & _GEN_17; // @[div.scala 50:22 60:44]
  wire  S_tmp_14 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_81; // @[div.scala 50:22 58:46]
  wire  _GEN_82 = delay >= 8'h2 & _T_1 & _GEN_18; // @[div.scala 50:22 60:44]
  wire  S_tmp_15 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_82; // @[div.scala 50:22 58:46]
  wire  _GEN_79 = delay >= 8'h2 & _T_1 & _GEN_15; // @[div.scala 50:22 60:44]
  wire  S_tmp_12 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_79; // @[div.scala 50:22 58:46]
  wire  _GEN_80 = delay >= 8'h2 & _T_1 & _GEN_16; // @[div.scala 50:22 60:44]
  wire  S_tmp_13 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_80; // @[div.scala 50:22 58:46]
  wire  _GEN_77 = delay >= 8'h2 & _T_1 & _GEN_13; // @[div.scala 50:22 60:44]
  wire  S_tmp_10 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_77; // @[div.scala 50:22 58:46]
  wire  _GEN_78 = delay >= 8'h2 & _T_1 & _GEN_14; // @[div.scala 50:22 60:44]
  wire  S_tmp_11 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_78; // @[div.scala 50:22 58:46]
  wire  _GEN_75 = delay >= 8'h2 & _T_1 & _GEN_11; // @[div.scala 50:22 60:44]
  wire  S_tmp_8 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_75; // @[div.scala 50:22 58:46]
  wire  _GEN_76 = delay >= 8'h2 & _T_1 & _GEN_12; // @[div.scala 50:22 60:44]
  wire  S_tmp_9 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_76; // @[div.scala 50:22 58:46]
  wire [7:0] S_hi_hi_lo = {S_tmp_8,S_tmp_9,S_tmp_10,S_tmp_11,S_tmp_12,S_tmp_13,S_tmp_14,S_tmp_15}; // @[Cat.scala 31:58]
  wire  _GEN_73 = delay >= 8'h2 & _T_1 & _GEN_9; // @[div.scala 50:22 60:44]
  wire  S_tmp_6 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_73; // @[div.scala 50:22 58:46]
  wire  _GEN_74 = delay >= 8'h2 & _T_1 & _GEN_10; // @[div.scala 50:22 60:44]
  wire  S_tmp_7 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_74; // @[div.scala 50:22 58:46]
  wire  _GEN_71 = delay >= 8'h2 & _T_1 & _GEN_7; // @[div.scala 50:22 60:44]
  wire  S_tmp_4 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_71; // @[div.scala 50:22 58:46]
  wire  _GEN_72 = delay >= 8'h2 & _T_1 & _GEN_8; // @[div.scala 50:22 60:44]
  wire  S_tmp_5 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_72; // @[div.scala 50:22 58:46]
  wire  _GEN_69 = delay >= 8'h2 & _T_1 & _GEN_5; // @[div.scala 50:22 60:44]
  wire  S_tmp_2 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_69; // @[div.scala 50:22 58:46]
  wire  _GEN_70 = delay >= 8'h2 & _T_1 & _GEN_6; // @[div.scala 50:22 60:44]
  wire  S_tmp_3 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_70; // @[div.scala 50:22 58:46]
  wire  _GEN_67 = delay >= 8'h2 & _T_1 & _GEN_3; // @[div.scala 50:22 60:44]
  wire  S_tmp_0 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_67; // @[div.scala 50:22 58:46]
  wire  _GEN_68 = delay >= 8'h2 & _T_1 & _GEN_4; // @[div.scala 50:22 60:44]
  wire  S_tmp_1 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_68; // @[div.scala 50:22 58:46]
  wire [31:0] S_hi = {S_tmp_0,S_tmp_1,S_tmp_2,S_tmp_3,S_tmp_4,S_tmp_5,S_tmp_6,S_tmp_7,S_hi_hi_lo,S_hi_lo}; // @[Cat.scala 31:58]
  wire [63:0] _S_T = {S_hi,S_lo}; // @[Cat.scala 31:58]
  wire [63:0] _S_T_1 = _S_T | S; // @[div.scala 64:21]
  wire [128:0] _GEN_131 = delay >= 8'h2 & _T_1 ? _A_T_13 : {{1'd0}, _A_T}; // @[div.scala 60:44 54:5 62:7]
  wire [128:0] _GEN_199 = delay < 8'h2 & ~io_out_valid & start ? {{1'd0}, _A_T} : _GEN_131; // @[div.scala 58:46 54:5]
  wire  _GEN_202 = io_div_valid | start; // @[div.scala 66:21 67:11 23:25]
  wire [1:0] _clear_T_1 = clear + 2'h1; // @[div.scala 77:20]
  wire [128:0] _GEN_210 = clear == 2'h1 ? 129'h0 : _GEN_199; // @[div.scala 79:22 83:7]
  wire [63:0] _io_quotient_T_1 = ~S; // @[div.scala 92:47]
  wire [63:0] _io_quotient_T_3 = _io_quotient_T_1 + 64'h1; // @[div.scala 92:51]
  wire [63:0] _io_remainder_T_2 = ~A[127:64]; // @[div.scala 93:47]
  wire [63:0] _io_remainder_T_4 = _io_remainder_T_2 + 64'h1; // @[div.scala 93:64]
  wire [128:0] _GEN_280 = reset ? 129'h0 : _GEN_210; // @[div.scala 48:{18,18}]
  assign io_out_valid = cnt == 8'h40 & start; // @[div.scala 71:24]
  assign io_quotient = quotient_sign ? _io_quotient_T_3 : S; // @[div.scala 92:22]
  assign io_remainder = remainder_sign ? _io_remainder_T_4 : A[127:64]; // @[div.scala 93:22]
  always @(posedge clock) begin
    if (clear == 2'h1) begin // @[div.scala 79:22]
      dividend_reg <= 64'h0; // @[div.scala 86:18]
    end else if (start) begin // @[div.scala 33:14]
      if (io_div_signed & io_dividend[63]) begin // @[div.scala 31:18]
        dividend_reg <= _dividend_T_5;
      end else begin
        dividend_reg <= io_dividend;
      end
    end
    if (clear == 2'h1) begin // @[div.scala 79:22]
      divisor_reg <= 64'h0; // @[div.scala 87:18]
    end else if (start) begin // @[div.scala 33:14]
      if (io_div_signed & io_divisor[63]) begin // @[div.scala 32:18]
        divisor_reg <= _divisor_T_5;
      end else begin
        divisor_reg <= io_divisor;
      end
    end
    if (reset) begin // @[div.scala 23:25]
      start <= 1'h0; // @[div.scala 23:25]
    end else if (cnt == 8'h40 & start) begin // @[div.scala 71:33]
      start <= 1'h0; // @[div.scala 72:11]
    end else begin
      start <= _GEN_202;
    end
    if (reset) begin // @[div.scala 25:24]
      delay <= 8'h0; // @[div.scala 25:24]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      delay <= 8'h0; // @[div.scala 88:11]
    end else if (delay < 8'h2 & ~io_out_valid & start) begin // @[div.scala 58:46]
      delay <= _delay_T_1; // @[div.scala 59:11]
    end
    if (reset) begin // @[div.scala 27:24]
      clear <= 2'h0; // @[div.scala 27:24]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      clear <= 2'h0; // @[div.scala 89:11]
    end else if (io_out_valid) begin // @[div.scala 76:21]
      clear <= _clear_T_1; // @[div.scala 77:11]
    end
    if (reset) begin // @[div.scala 42:31]
      quotient_sign <= 1'h0; // @[div.scala 42:31]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      quotient_sign <= 1'h0; // @[div.scala 81:20]
    end else if (io_div_valid) begin // @[div.scala 44:24]
      quotient_sign <= io_div_signed & (io_dividend[63] ^ io_divisor[63]);
    end else begin
      quotient_sign <= remainder_sign;
    end
    if (reset) begin // @[div.scala 43:31]
      remainder_sign <= 1'h0; // @[div.scala 43:31]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      remainder_sign <= 1'h0; // @[div.scala 82:20]
    end else if (io_div_valid) begin // @[div.scala 45:24]
      remainder_sign <= _dividend_T_1;
    end
    A <= _GEN_280[127:0]; // @[div.scala 48:{18,18}]
    if (reset) begin // @[div.scala 49:18]
      B <= 64'h0; // @[div.scala 49:18]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      B <= 64'h0; // @[div.scala 84:7]
    end else begin
      B <= divisor_reg; // @[div.scala 55:5]
    end
    if (reset) begin // @[div.scala 51:18]
      S <= 64'h0; // @[div.scala 51:18]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      S <= 64'h0; // @[div.scala 85:7]
    end else if (!(delay < 8'h2 & ~io_out_valid & start)) begin // @[div.scala 58:46]
      if (delay >= 8'h2 & _T_1) begin // @[div.scala 60:44]
        S <= _S_T_1; // @[div.scala 64:7]
      end
    end
    if (reset) begin // @[div.scala 52:20]
      cnt <= 8'h0; // @[div.scala 52:20]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      cnt <= 8'h0; // @[div.scala 80:9]
    end else if (!(delay < 8'h2 & ~io_out_valid & start)) begin // @[div.scala 58:46]
      if (delay >= 8'h2 & _T_1) begin // @[div.scala 60:44]
        cnt <= _cnt_T_1; // @[div.scala 63:9]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  dividend_reg = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  divisor_reg = _RAND_1[63:0];
  _RAND_2 = {1{`RANDOM}};
  start = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  delay = _RAND_3[7:0];
  _RAND_4 = {1{`RANDOM}};
  clear = _RAND_4[1:0];
  _RAND_5 = {1{`RANDOM}};
  quotient_sign = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  remainder_sign = _RAND_6[0:0];
  _RAND_7 = {4{`RANDOM}};
  A = _RAND_7[127:0];
  _RAND_8 = {2{`RANDOM}};
  B = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  S = _RAND_9[63:0];
  _RAND_10 = {1{`RANDOM}};
  cnt = _RAND_10[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module div_1(
  input         clock,
  input         reset,
  input  [31:0] io_dividend,
  input  [31:0] io_divisor,
  input         io_div_valid,
  input         io_div_signed,
  output        io_out_valid,
  output [31:0] io_quotient,
  output [31:0] io_remainder
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] dividend_reg; // @[div.scala 21:25]
  reg [31:0] divisor_reg; // @[div.scala 22:25]
  reg  start; // @[div.scala 23:25]
  reg [7:0] delay; // @[div.scala 25:24]
  reg [1:0] clear; // @[div.scala 27:24]
  wire  _dividend_T_1 = io_div_signed & io_dividend[31]; // @[div.scala 31:34]
  wire [31:0] _dividend_T_3 = ~io_dividend; // @[div.scala 31:66]
  wire [31:0] _dividend_T_5 = _dividend_T_3 + 32'h1; // @[div.scala 31:80]
  wire [31:0] _divisor_T_3 = ~io_divisor; // @[div.scala 32:65]
  wire [31:0] _divisor_T_5 = _divisor_T_3 + 32'h1; // @[div.scala 32:78]
  reg  quotient_sign; // @[div.scala 42:31]
  reg  remainder_sign; // @[div.scala 43:31]
  reg [63:0] A; // @[div.scala 48:18]
  reg [31:0] B; // @[div.scala 49:18]
  reg [31:0] S; // @[div.scala 51:18]
  reg [7:0] cnt; // @[div.scala 52:20]
  wire [63:0] _A_T = {32'h0,dividend_reg}; // @[Cat.scala 31:58]
  wire  _T_1 = ~io_out_valid; // @[div.scala 58:23]
  wire [7:0] _delay_T_1 = delay + 8'h1; // @[div.scala 59:20]
  wire [32:0] _S_tmp_T_1 = {1'h0,B}; // @[Cat.scala 31:58]
  wire  _S_tmp_T_2 = A[63:31] >= _S_tmp_T_1; // @[div.scala 61:42]
  wire  _GEN_3 = 5'h0 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_4 = 5'h1 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_5 = 5'h2 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_6 = 5'h3 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_7 = 5'h4 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_8 = 5'h5 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_9 = 5'h6 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_10 = 5'h7 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_11 = 5'h8 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_12 = 5'h9 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_13 = 5'ha == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_14 = 5'hb == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_15 = 5'hc == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_16 = 5'hd == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_17 = 5'he == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_18 = 5'hf == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_19 = 5'h10 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_20 = 5'h11 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_21 = 5'h12 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_22 = 5'h13 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_23 = 5'h14 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_24 = 5'h15 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_25 = 5'h16 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_26 = 5'h17 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_27 = 5'h18 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_28 = 5'h19 == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_29 = 5'h1a == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_30 = 5'h1b == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_31 = 5'h1c == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_32 = 5'h1d == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_33 = 5'h1e == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire  _GEN_34 = 5'h1f == cnt[4:0] & A[63:31] >= _S_tmp_T_1; // @[div.scala 61:{16,16} 50:22]
  wire [63:0] _A_T_5 = {33'h0,A[30:0]}; // @[Cat.scala 31:58]
  wire [32:0] _A_T_9 = A[63:31] - _S_tmp_T_1; // @[div.scala 62:106]
  wire [63:0] _A_T_10 = {_A_T_9, 31'h0}; // @[div.scala 62:121]
  wire [63:0] _A_T_11 = _A_T_5 | _A_T_10; // @[div.scala 62:84]
  wire [63:0] _A_T_12 = _S_tmp_T_2 ? _A_T_11 : A; // @[div.scala 62:14]
  wire [64:0] _A_T_13 = {_A_T_12, 1'h0}; // @[div.scala 62:137]
  wire [7:0] _cnt_T_1 = cnt + 8'h1; // @[div.scala 63:16]
  wire  _GEN_65 = delay >= 8'h2 & _T_1 & _GEN_33; // @[div.scala 50:22 60:44]
  wire  S_tmp_30 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_65; // @[div.scala 50:22 58:46]
  wire  _GEN_66 = delay >= 8'h2 & _T_1 & _GEN_34; // @[div.scala 50:22 60:44]
  wire  S_tmp_31 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_66; // @[div.scala 50:22 58:46]
  wire  _GEN_63 = delay >= 8'h2 & _T_1 & _GEN_31; // @[div.scala 50:22 60:44]
  wire  S_tmp_28 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_63; // @[div.scala 50:22 58:46]
  wire  _GEN_64 = delay >= 8'h2 & _T_1 & _GEN_32; // @[div.scala 50:22 60:44]
  wire  S_tmp_29 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_64; // @[div.scala 50:22 58:46]
  wire  _GEN_61 = delay >= 8'h2 & _T_1 & _GEN_29; // @[div.scala 50:22 60:44]
  wire  S_tmp_26 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_61; // @[div.scala 50:22 58:46]
  wire  _GEN_62 = delay >= 8'h2 & _T_1 & _GEN_30; // @[div.scala 50:22 60:44]
  wire  S_tmp_27 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_62; // @[div.scala 50:22 58:46]
  wire  _GEN_59 = delay >= 8'h2 & _T_1 & _GEN_27; // @[div.scala 50:22 60:44]
  wire  S_tmp_24 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_59; // @[div.scala 50:22 58:46]
  wire  _GEN_60 = delay >= 8'h2 & _T_1 & _GEN_28; // @[div.scala 50:22 60:44]
  wire  S_tmp_25 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_60; // @[div.scala 50:22 58:46]
  wire [7:0] S_lo_lo = {S_tmp_24,S_tmp_25,S_tmp_26,S_tmp_27,S_tmp_28,S_tmp_29,S_tmp_30,S_tmp_31}; // @[Cat.scala 31:58]
  wire  _GEN_57 = delay >= 8'h2 & _T_1 & _GEN_25; // @[div.scala 50:22 60:44]
  wire  S_tmp_22 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_57; // @[div.scala 50:22 58:46]
  wire  _GEN_58 = delay >= 8'h2 & _T_1 & _GEN_26; // @[div.scala 50:22 60:44]
  wire  S_tmp_23 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_58; // @[div.scala 50:22 58:46]
  wire  _GEN_55 = delay >= 8'h2 & _T_1 & _GEN_23; // @[div.scala 50:22 60:44]
  wire  S_tmp_20 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_55; // @[div.scala 50:22 58:46]
  wire  _GEN_56 = delay >= 8'h2 & _T_1 & _GEN_24; // @[div.scala 50:22 60:44]
  wire  S_tmp_21 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_56; // @[div.scala 50:22 58:46]
  wire  _GEN_53 = delay >= 8'h2 & _T_1 & _GEN_21; // @[div.scala 50:22 60:44]
  wire  S_tmp_18 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_53; // @[div.scala 50:22 58:46]
  wire  _GEN_54 = delay >= 8'h2 & _T_1 & _GEN_22; // @[div.scala 50:22 60:44]
  wire  S_tmp_19 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_54; // @[div.scala 50:22 58:46]
  wire  _GEN_51 = delay >= 8'h2 & _T_1 & _GEN_19; // @[div.scala 50:22 60:44]
  wire  S_tmp_16 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_51; // @[div.scala 50:22 58:46]
  wire  _GEN_52 = delay >= 8'h2 & _T_1 & _GEN_20; // @[div.scala 50:22 60:44]
  wire  S_tmp_17 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_52; // @[div.scala 50:22 58:46]
  wire [15:0] S_lo = {S_tmp_16,S_tmp_17,S_tmp_18,S_tmp_19,S_tmp_20,S_tmp_21,S_tmp_22,S_tmp_23,S_lo_lo}; // @[Cat.scala 31:58]
  wire  _GEN_49 = delay >= 8'h2 & _T_1 & _GEN_17; // @[div.scala 50:22 60:44]
  wire  S_tmp_14 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_49; // @[div.scala 50:22 58:46]
  wire  _GEN_50 = delay >= 8'h2 & _T_1 & _GEN_18; // @[div.scala 50:22 60:44]
  wire  S_tmp_15 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_50; // @[div.scala 50:22 58:46]
  wire  _GEN_47 = delay >= 8'h2 & _T_1 & _GEN_15; // @[div.scala 50:22 60:44]
  wire  S_tmp_12 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_47; // @[div.scala 50:22 58:46]
  wire  _GEN_48 = delay >= 8'h2 & _T_1 & _GEN_16; // @[div.scala 50:22 60:44]
  wire  S_tmp_13 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_48; // @[div.scala 50:22 58:46]
  wire  _GEN_45 = delay >= 8'h2 & _T_1 & _GEN_13; // @[div.scala 50:22 60:44]
  wire  S_tmp_10 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_45; // @[div.scala 50:22 58:46]
  wire  _GEN_46 = delay >= 8'h2 & _T_1 & _GEN_14; // @[div.scala 50:22 60:44]
  wire  S_tmp_11 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_46; // @[div.scala 50:22 58:46]
  wire  _GEN_43 = delay >= 8'h2 & _T_1 & _GEN_11; // @[div.scala 50:22 60:44]
  wire  S_tmp_8 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_43; // @[div.scala 50:22 58:46]
  wire  _GEN_44 = delay >= 8'h2 & _T_1 & _GEN_12; // @[div.scala 50:22 60:44]
  wire  S_tmp_9 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_44; // @[div.scala 50:22 58:46]
  wire [7:0] S_hi_lo = {S_tmp_8,S_tmp_9,S_tmp_10,S_tmp_11,S_tmp_12,S_tmp_13,S_tmp_14,S_tmp_15}; // @[Cat.scala 31:58]
  wire  _GEN_41 = delay >= 8'h2 & _T_1 & _GEN_9; // @[div.scala 50:22 60:44]
  wire  S_tmp_6 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_41; // @[div.scala 50:22 58:46]
  wire  _GEN_42 = delay >= 8'h2 & _T_1 & _GEN_10; // @[div.scala 50:22 60:44]
  wire  S_tmp_7 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_42; // @[div.scala 50:22 58:46]
  wire  _GEN_39 = delay >= 8'h2 & _T_1 & _GEN_7; // @[div.scala 50:22 60:44]
  wire  S_tmp_4 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_39; // @[div.scala 50:22 58:46]
  wire  _GEN_40 = delay >= 8'h2 & _T_1 & _GEN_8; // @[div.scala 50:22 60:44]
  wire  S_tmp_5 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_40; // @[div.scala 50:22 58:46]
  wire  _GEN_37 = delay >= 8'h2 & _T_1 & _GEN_5; // @[div.scala 50:22 60:44]
  wire  S_tmp_2 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_37; // @[div.scala 50:22 58:46]
  wire  _GEN_38 = delay >= 8'h2 & _T_1 & _GEN_6; // @[div.scala 50:22 60:44]
  wire  S_tmp_3 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_38; // @[div.scala 50:22 58:46]
  wire  _GEN_35 = delay >= 8'h2 & _T_1 & _GEN_3; // @[div.scala 50:22 60:44]
  wire  S_tmp_0 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_35; // @[div.scala 50:22 58:46]
  wire  _GEN_36 = delay >= 8'h2 & _T_1 & _GEN_4; // @[div.scala 50:22 60:44]
  wire  S_tmp_1 = delay < 8'h2 & ~io_out_valid & start ? 1'h0 : _GEN_36; // @[div.scala 50:22 58:46]
  wire [31:0] _S_T = {S_tmp_0,S_tmp_1,S_tmp_2,S_tmp_3,S_tmp_4,S_tmp_5,S_tmp_6,S_tmp_7,S_hi_lo,S_lo}; // @[Cat.scala 31:58]
  wire [31:0] _S_T_1 = _S_T | S; // @[div.scala 64:21]
  wire [64:0] _GEN_67 = delay >= 8'h2 & _T_1 ? _A_T_13 : {{1'd0}, _A_T}; // @[div.scala 60:44 54:5 62:7]
  wire [64:0] _GEN_103 = delay < 8'h2 & ~io_out_valid & start ? {{1'd0}, _A_T} : _GEN_67; // @[div.scala 58:46 54:5]
  wire  _GEN_106 = io_div_valid | start; // @[div.scala 66:21 67:11 23:25]
  wire [1:0] _clear_T_1 = clear + 2'h1; // @[div.scala 77:20]
  wire [64:0] _GEN_114 = clear == 2'h1 ? 65'h0 : _GEN_103; // @[div.scala 79:22 83:7]
  wire [31:0] _io_quotient_T_1 = ~S; // @[div.scala 92:47]
  wire [31:0] _io_quotient_T_3 = _io_quotient_T_1 + 32'h1; // @[div.scala 92:51]
  wire [31:0] _io_remainder_T_2 = ~A[63:32]; // @[div.scala 93:47]
  wire [31:0] _io_remainder_T_4 = _io_remainder_T_2 + 32'h1; // @[div.scala 93:64]
  wire [64:0] _GEN_152 = reset ? 65'h0 : _GEN_114; // @[div.scala 48:{18,18}]
  assign io_out_valid = cnt == 8'h20 & start; // @[div.scala 71:24]
  assign io_quotient = quotient_sign ? _io_quotient_T_3 : S; // @[div.scala 92:22]
  assign io_remainder = remainder_sign ? _io_remainder_T_4 : A[63:32]; // @[div.scala 93:22]
  always @(posedge clock) begin
    if (clear == 2'h1) begin // @[div.scala 79:22]
      dividend_reg <= 32'h0; // @[div.scala 86:18]
    end else if (start) begin // @[div.scala 33:14]
      if (io_div_signed & io_dividend[31]) begin // @[div.scala 31:18]
        dividend_reg <= _dividend_T_5;
      end else begin
        dividend_reg <= io_dividend;
      end
    end
    if (clear == 2'h1) begin // @[div.scala 79:22]
      divisor_reg <= 32'h0; // @[div.scala 87:18]
    end else if (start) begin // @[div.scala 33:14]
      if (io_div_signed & io_divisor[31]) begin // @[div.scala 32:18]
        divisor_reg <= _divisor_T_5;
      end else begin
        divisor_reg <= io_divisor;
      end
    end
    if (reset) begin // @[div.scala 23:25]
      start <= 1'h0; // @[div.scala 23:25]
    end else if (cnt == 8'h20 & start) begin // @[div.scala 71:33]
      start <= 1'h0; // @[div.scala 72:11]
    end else begin
      start <= _GEN_106;
    end
    if (reset) begin // @[div.scala 25:24]
      delay <= 8'h0; // @[div.scala 25:24]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      delay <= 8'h0; // @[div.scala 88:11]
    end else if (delay < 8'h2 & ~io_out_valid & start) begin // @[div.scala 58:46]
      delay <= _delay_T_1; // @[div.scala 59:11]
    end
    if (reset) begin // @[div.scala 27:24]
      clear <= 2'h0; // @[div.scala 27:24]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      clear <= 2'h0; // @[div.scala 89:11]
    end else if (io_out_valid) begin // @[div.scala 76:21]
      clear <= _clear_T_1; // @[div.scala 77:11]
    end
    if (reset) begin // @[div.scala 42:31]
      quotient_sign <= 1'h0; // @[div.scala 42:31]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      quotient_sign <= 1'h0; // @[div.scala 81:20]
    end else if (io_div_valid) begin // @[div.scala 44:24]
      quotient_sign <= io_div_signed & (io_dividend[31] ^ io_divisor[31]);
    end else begin
      quotient_sign <= remainder_sign;
    end
    if (reset) begin // @[div.scala 43:31]
      remainder_sign <= 1'h0; // @[div.scala 43:31]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      remainder_sign <= 1'h0; // @[div.scala 82:20]
    end else if (io_div_valid) begin // @[div.scala 45:24]
      remainder_sign <= _dividend_T_1;
    end
    A <= _GEN_152[63:0]; // @[div.scala 48:{18,18}]
    if (reset) begin // @[div.scala 49:18]
      B <= 32'h0; // @[div.scala 49:18]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      B <= 32'h0; // @[div.scala 84:7]
    end else begin
      B <= divisor_reg; // @[div.scala 55:5]
    end
    if (reset) begin // @[div.scala 51:18]
      S <= 32'h0; // @[div.scala 51:18]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      S <= 32'h0; // @[div.scala 85:7]
    end else if (!(delay < 8'h2 & ~io_out_valid & start)) begin // @[div.scala 58:46]
      if (delay >= 8'h2 & _T_1) begin // @[div.scala 60:44]
        S <= _S_T_1; // @[div.scala 64:7]
      end
    end
    if (reset) begin // @[div.scala 52:20]
      cnt <= 8'h0; // @[div.scala 52:20]
    end else if (clear == 2'h1) begin // @[div.scala 79:22]
      cnt <= 8'h0; // @[div.scala 80:9]
    end else if (!(delay < 8'h2 & ~io_out_valid & start)) begin // @[div.scala 58:46]
      if (delay >= 8'h2 & _T_1) begin // @[div.scala 60:44]
        cnt <= _cnt_T_1; // @[div.scala 63:9]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  dividend_reg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  divisor_reg = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  start = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  delay = _RAND_3[7:0];
  _RAND_4 = {1{`RANDOM}};
  clear = _RAND_4[1:0];
  _RAND_5 = {1{`RANDOM}};
  quotient_sign = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  remainder_sign = _RAND_6[0:0];
  _RAND_7 = {2{`RANDOM}};
  A = _RAND_7[63:0];
  _RAND_8 = {1{`RANDOM}};
  B = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  S = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  cnt = _RAND_10[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module EXU(
  input         clock,
  input         reset,
  input         io_ms_allowin,
  output        io_es_allowin,
  input         io_ds_to_es_valid,
  output        io_es_to_ms_valid,
  input  [7:0]  io_de_bus_OP,
  input         io_de_bus_res_from_mem,
  input         io_de_bus_gr_we,
  input         io_de_bus_MemWen,
  input  [7:0]  io_de_bus_wmask,
  input  [31:0] io_de_bus_ds_pc,
  input  [4:0]  io_de_bus_dest,
  input  [63:0] io_de_bus_imm,
  input  [63:0] io_de_bus_rdata1,
  input  [63:0] io_de_bus_rdata2,
  input  [2:0]  io_de_bus_ld_type,
  input  [31:0] io_de_bus_inst,
  input  [63:0] io_de_bus_csr_rdata,
  input  [2:0]  io_de_bus_csr_waddr1,
  input  [2:0]  io_de_bus_csr_waddr2,
  input         io_de_bus_csr_wen,
  input         io_de_bus_eval,
  input         io_de_bus_is_ld,
  output        io_em_bus_res_from_mem,
  output        io_em_bus_gr_we,
  output [4:0]  io_em_bus_dest,
  output [63:0] io_em_bus_alu_result,
  output [31:0] io_em_bus_ex_pc,
  output [2:0]  io_em_bus_ld_type,
  output [31:0] io_em_bus_inst,
  output [63:0] io_em_bus_csr_wdata,
  output        io_em_bus_csr_wen,
  output [2:0]  io_em_bus_csr_waddr1,
  output [2:0]  io_em_bus_csr_waddr2,
  output        io_em_bus_eval,
  output        io_em_bus_is_ld,
  output        io_em_bus_MemWen,
  output        io_es_dest_valid_gr_we,
  output        io_es_dest_valid_es_valid,
  output [4:0]  io_es_dest_valid_dest,
  output [63:0] io_es_dest_valid_es_forward_data,
  output        io_es_dest_valid_es_is_ld,
  output        io_es_dest_valid_es_ready_go,
  output        io_data_sram_req,
  output        io_data_sram_we,
  output [31:0] io_data_sram_addr,
  output [63:0] io_data_sram_wdata,
  output [7:0]  io_data_sram_wmask,
  input         io_data_sram_addr_ok
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
`endif // RANDOMIZE_REG_INIT
  wire  mul_clock; // @[EXU.scala 58:23]
  wire  mul_reset; // @[EXU.scala 58:23]
  wire  mul_io_mul_valid; // @[EXU.scala 58:23]
  wire [63:0] mul_io_multiplicand; // @[EXU.scala 58:23]
  wire [63:0] mul_io_multiplier; // @[EXU.scala 58:23]
  wire  mul_io_out_valid; // @[EXU.scala 58:23]
  wire [63:0] mul_io_result_lo; // @[EXU.scala 58:23]
  wire  mul_1_clock; // @[EXU.scala 59:23]
  wire  mul_1_reset; // @[EXU.scala 59:23]
  wire  mul_1_io_mul_valid; // @[EXU.scala 59:23]
  wire [31:0] mul_1_io_multiplicand; // @[EXU.scala 59:23]
  wire [31:0] mul_1_io_multiplier; // @[EXU.scala 59:23]
  wire  mul_1_io_out_valid; // @[EXU.scala 59:23]
  wire [31:0] mul_1_io_result_lo; // @[EXU.scala 59:23]
  wire  div_clock; // @[EXU.scala 77:23]
  wire  div_reset; // @[EXU.scala 77:23]
  wire [63:0] div_io_dividend; // @[EXU.scala 77:23]
  wire [63:0] div_io_divisor; // @[EXU.scala 77:23]
  wire  div_io_div_valid; // @[EXU.scala 77:23]
  wire  div_io_div_signed; // @[EXU.scala 77:23]
  wire  div_io_out_valid; // @[EXU.scala 77:23]
  wire [63:0] div_io_quotient; // @[EXU.scala 77:23]
  wire [63:0] div_io_remainder; // @[EXU.scala 77:23]
  wire  div_1_clock; // @[EXU.scala 78:23]
  wire  div_1_reset; // @[EXU.scala 78:23]
  wire [31:0] div_1_io_dividend; // @[EXU.scala 78:23]
  wire [31:0] div_1_io_divisor; // @[EXU.scala 78:23]
  wire  div_1_io_div_valid; // @[EXU.scala 78:23]
  wire  div_1_io_div_signed; // @[EXU.scala 78:23]
  wire  div_1_io_out_valid; // @[EXU.scala 78:23]
  wire [31:0] div_1_io_quotient; // @[EXU.scala 78:23]
  wire [31:0] div_1_io_remainder; // @[EXU.scala 78:23]
  reg [7:0] de_bus_r_OP; // @[EXU.scala 30:28]
  reg  de_bus_r_res_from_mem; // @[EXU.scala 30:28]
  reg  de_bus_r_gr_we; // @[EXU.scala 30:28]
  reg  de_bus_r_MemWen; // @[EXU.scala 30:28]
  reg [7:0] de_bus_r_wmask; // @[EXU.scala 30:28]
  reg [31:0] de_bus_r_ds_pc; // @[EXU.scala 30:28]
  reg [4:0] de_bus_r_dest; // @[EXU.scala 30:28]
  reg [63:0] de_bus_r_imm; // @[EXU.scala 30:28]
  reg [63:0] de_bus_r_rdata1; // @[EXU.scala 30:28]
  reg [63:0] de_bus_r_rdata2; // @[EXU.scala 30:28]
  reg [2:0] de_bus_r_ld_type; // @[EXU.scala 30:28]
  reg [31:0] de_bus_r_inst; // @[EXU.scala 30:28]
  reg [63:0] de_bus_r_csr_rdata; // @[EXU.scala 30:28]
  reg [2:0] de_bus_r_csr_waddr1; // @[EXU.scala 30:28]
  reg [2:0] de_bus_r_csr_waddr2; // @[EXU.scala 30:28]
  reg  de_bus_r_csr_wen; // @[EXU.scala 30:28]
  reg  de_bus_r_eval; // @[EXU.scala 30:28]
  reg  de_bus_r_is_ld; // @[EXU.scala 30:28]
  reg  es_valid; // @[EXU.scala 31:28]
  wire  is_mul_64 = de_bus_r_OP == 8'h4; // @[EXU.scala 60:31]
  wire  is_mul_32 = de_bus_r_OP == 8'h5; // @[EXU.scala 61:31]
  wire  _is_div_64_T = de_bus_r_OP == 8'h6; // @[EXU.scala 79:31]
  wire  is_div_64 = de_bus_r_OP == 8'h6 | de_bus_r_OP == 8'h7; // @[EXU.scala 79:43]
  wire  _is_div_32_T = de_bus_r_OP == 8'h8; // @[EXU.scala 80:31]
  wire  is_div_32 = de_bus_r_OP == 8'h8 | de_bus_r_OP == 8'h9; // @[EXU.scala 80:44]
  wire  _is_rem_64_T = de_bus_r_OP == 8'h15; // @[EXU.scala 81:31]
  wire  is_rem_64 = de_bus_r_OP == 8'h15 | de_bus_r_OP == 8'h16; // @[EXU.scala 81:43]
  wire  _is_rem_32_T = de_bus_r_OP == 8'h17; // @[EXU.scala 82:31]
  wire  is_rem_32 = de_bus_r_OP == 8'h17 | de_bus_r_OP == 8'h18; // @[EXU.scala 82:44]
  wire [63:0] _result_T_1 = de_bus_r_rdata1 + de_bus_r_rdata2; // @[EXU.scala 103:24]
  wire [31:0] _result_T_5 = de_bus_r_rdata1[31:0] + de_bus_r_rdata2[31:0]; // @[EXU.scala 104:37]
  wire [31:0] _result_T_8 = _result_T_5[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_10 = {_result_T_8,_result_T_5}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_12 = de_bus_r_rdata1 - de_bus_r_rdata2; // @[EXU.scala 105:24]
  wire [31:0] _result_T_16 = de_bus_r_rdata1[31:0] - de_bus_r_rdata2[31:0]; // @[EXU.scala 106:36]
  wire [31:0] _result_T_19 = _result_T_16[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_21 = {_result_T_19,_result_T_16}; // @[Cat.scala 31:58]
  wire [31:0] _result_T_24 = mul_1_io_result_lo[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _result_T_25 = mul_1_io_result_lo; // @[EXU.scala 50:66]
  wire [63:0] _result_T_26 = {_result_T_24,_result_T_25}; // @[Cat.scala 31:58]
  wire [31:0] _result_T_29 = div_1_io_quotient[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _result_T_30 = div_1_io_quotient; // @[EXU.scala 50:66]
  wire [63:0] _result_T_31 = {_result_T_29,_result_T_30}; // @[Cat.scala 31:58]
  wire [126:0] _GEN_7 = {{63'd0}, de_bus_r_rdata1}; // @[EXU.scala 113:24]
  wire [126:0] _result_T_38 = _GEN_7 << de_bus_r_rdata2[5:0]; // @[EXU.scala 113:24]
  wire  _result_T_41 = $signed(de_bus_r_rdata1) < $signed(de_bus_r_rdata2); // @[EXU.scala 114:35]
  wire  _result_T_43 = de_bus_r_rdata1 < de_bus_r_rdata2; // @[EXU.scala 115:29]
  wire [62:0] _GEN_15 = {{31'd0}, de_bus_r_rdata1[31:0]}; // @[EXU.scala 116:37]
  wire [62:0] _result_T_47 = _GEN_15 << de_bus_r_rdata2[4:0]; // @[EXU.scala 116:37]
  wire [31:0] _result_T_50 = _result_T_47[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_52 = {_result_T_50,_result_T_47[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_56 = $signed(de_bus_r_rdata1) >>> de_bus_r_rdata2[5:0]; // @[EXU.scala 117:46]
  wire [31:0] _result_T_58 = de_bus_r_rdata1[31:0]; // @[EXU.scala 118:37]
  wire [31:0] _result_T_61 = $signed(_result_T_58) >>> de_bus_r_rdata2[4:0]; // @[EXU.scala 118:59]
  wire [31:0] _result_T_64 = _result_T_61[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_66 = {_result_T_64,_result_T_61}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_68 = de_bus_r_rdata1 >> de_bus_r_rdata2[5:0]; // @[EXU.scala 119:24]
  wire [31:0] _result_T_71 = de_bus_r_rdata1[31:0] >> de_bus_r_rdata2[4:0]; // @[EXU.scala 120:37]
  wire [31:0] _result_T_74 = _result_T_71[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_76 = {_result_T_74,_result_T_71}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_77 = de_bus_r_rdata1 ^ de_bus_r_rdata2; // @[EXU.scala 121:24]
  wire [63:0] _result_T_78 = de_bus_r_rdata1 & de_bus_r_rdata2; // @[EXU.scala 122:24]
  wire [63:0] _result_T_79 = de_bus_r_rdata1 | de_bus_r_rdata2; // @[EXU.scala 123:23]
  wire [31:0] _result_T_82 = div_1_io_remainder[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [31:0] _result_T_83 = div_1_io_remainder; // @[EXU.scala 50:66]
  wire [63:0] _result_T_84 = {_result_T_82,_result_T_83}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_91 = de_bus_r_rdata1 + de_bus_r_imm; // @[EXU.scala 129:25]
  wire [63:0] _GEN_5 = {{32'd0}, de_bus_r_rdata1[31:0]}; // @[EXU.scala 130:38]
  wire [63:0] _result_T_94 = _GEN_5 + de_bus_r_imm; // @[EXU.scala 130:38]
  wire [31:0] _result_T_97 = _result_T_94[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_99 = {_result_T_97,_result_T_94[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] ex_pc = {{32'd0}, de_bus_r_ds_pc};
  wire [63:0] _result_T_101 = ex_pc + 64'h4; // @[EXU.scala 131:26]
  wire [126:0] _GEN_16 = {{63'd0}, de_bus_r_rdata1}; // @[EXU.scala 139:25]
  wire [126:0] _result_T_117 = _GEN_16 << de_bus_r_imm[5:0]; // @[EXU.scala 139:25]
  wire [62:0] _GEN_17 = {{31'd0}, de_bus_r_rdata1[31:0]}; // @[EXU.scala 140:39]
  wire [62:0] _result_T_120 = _GEN_17 << de_bus_r_imm[4:0]; // @[EXU.scala 140:39]
  wire [31:0] _result_T_123 = _result_T_120[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_125 = {_result_T_123,_result_T_120[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_127 = de_bus_r_rdata1 >> de_bus_r_imm[5:0]; // @[EXU.scala 141:25]
  wire [31:0] _result_T_130 = de_bus_r_rdata1[31:0] >> de_bus_r_imm[4:0]; // @[EXU.scala 142:39]
  wire [31:0] _result_T_133 = _result_T_130[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_135 = {_result_T_133,_result_T_130}; // @[Cat.scala 31:58]
  wire  _result_T_138 = $signed(de_bus_r_rdata1) < $signed(de_bus_r_imm); // @[EXU.scala 143:36]
  wire  _result_T_140 = de_bus_r_rdata1 < de_bus_r_imm; // @[EXU.scala 144:30]
  wire [63:0] _result_T_142 = de_bus_r_rdata1 & de_bus_r_imm; // @[EXU.scala 145:25]
  wire [63:0] _result_T_143 = de_bus_r_rdata1 ^ de_bus_r_imm; // @[EXU.scala 146:25]
  wire [63:0] _result_T_144 = de_bus_r_rdata1 | de_bus_r_imm; // @[EXU.scala 147:24]
  wire [63:0] _result_T_148 = $signed(de_bus_r_rdata1) >>> de_bus_r_imm[5:0]; // @[EXU.scala 148:46]
  wire [31:0] _result_T_153 = $signed(_result_T_58) >>> de_bus_r_imm[4:0]; // @[EXU.scala 149:60]
  wire [31:0] _result_T_156 = _result_T_153[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_158 = {_result_T_156,_result_T_153}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_168 = ex_pc + de_bus_r_imm; // @[EXU.scala 160:27]
  wire [63:0] _result_T_172 = 8'h0 == de_bus_r_OP ? _result_T_1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _result_T_174 = 8'h1 == de_bus_r_OP ? _result_T_10 : _result_T_172; // @[Mux.scala 81:58]
  wire [63:0] _result_T_176 = 8'h2 == de_bus_r_OP ? _result_T_12 : _result_T_174; // @[Mux.scala 81:58]
  wire [63:0] _result_T_178 = 8'h3 == de_bus_r_OP ? _result_T_21 : _result_T_176; // @[Mux.scala 81:58]
  wire [63:0] _result_T_180 = 8'h4 == de_bus_r_OP ? mul_io_result_lo : _result_T_178; // @[Mux.scala 81:58]
  wire [63:0] _result_T_182 = 8'h5 == de_bus_r_OP ? _result_T_26 : _result_T_180; // @[Mux.scala 81:58]
  wire [63:0] _result_T_184 = 8'h6 == de_bus_r_OP ? div_io_quotient : _result_T_182; // @[Mux.scala 81:58]
  wire [63:0] _result_T_186 = 8'h7 == de_bus_r_OP ? div_io_quotient : _result_T_184; // @[Mux.scala 81:58]
  wire [63:0] _result_T_188 = 8'h8 == de_bus_r_OP ? _result_T_31 : _result_T_186; // @[Mux.scala 81:58]
  wire [63:0] _result_T_190 = 8'h9 == de_bus_r_OP ? _result_T_31 : _result_T_188; // @[Mux.scala 81:58]
  wire [126:0] _result_T_192 = 8'ha == de_bus_r_OP ? _result_T_38 : {{63'd0}, _result_T_190}; // @[Mux.scala 81:58]
  wire [126:0] _result_T_194 = 8'hb == de_bus_r_OP ? {{126'd0}, _result_T_41} : _result_T_192; // @[Mux.scala 81:58]
  wire [126:0] _result_T_196 = 8'hc == de_bus_r_OP ? {{126'd0}, _result_T_43} : _result_T_194; // @[Mux.scala 81:58]
  wire [126:0] _result_T_198 = 8'hd == de_bus_r_OP ? {{63'd0}, _result_T_52} : _result_T_196; // @[Mux.scala 81:58]
  wire [126:0] _result_T_200 = 8'h13 == de_bus_r_OP ? {{63'd0}, _result_T_56} : _result_T_198; // @[Mux.scala 81:58]
  wire [126:0] _result_T_202 = 8'he == de_bus_r_OP ? {{63'd0}, _result_T_66} : _result_T_200; // @[Mux.scala 81:58]
  wire [126:0] _result_T_204 = 8'hf == de_bus_r_OP ? {{63'd0}, _result_T_68} : _result_T_202; // @[Mux.scala 81:58]
  wire [126:0] _result_T_206 = 8'h10 == de_bus_r_OP ? {{63'd0}, _result_T_76} : _result_T_204; // @[Mux.scala 81:58]
  wire [126:0] _result_T_208 = 8'h11 == de_bus_r_OP ? {{63'd0}, _result_T_77} : _result_T_206; // @[Mux.scala 81:58]
  wire [126:0] _result_T_210 = 8'h12 == de_bus_r_OP ? {{63'd0}, _result_T_78} : _result_T_208; // @[Mux.scala 81:58]
  wire [126:0] _result_T_212 = 8'h14 == de_bus_r_OP ? {{63'd0}, _result_T_79} : _result_T_210; // @[Mux.scala 81:58]
  wire [126:0] _result_T_214 = 8'h15 == de_bus_r_OP ? {{63'd0}, div_io_remainder} : _result_T_212; // @[Mux.scala 81:58]
  wire [126:0] _result_T_216 = 8'h16 == de_bus_r_OP ? {{63'd0}, div_io_remainder} : _result_T_214; // @[Mux.scala 81:58]
  wire [126:0] _result_T_218 = 8'h17 == de_bus_r_OP ? {{63'd0}, _result_T_84} : _result_T_216; // @[Mux.scala 81:58]
  wire [126:0] _result_T_220 = 8'h18 == de_bus_r_OP ? {{63'd0}, _result_T_84} : _result_T_218; // @[Mux.scala 81:58]
  wire [126:0] _result_T_222 = 8'h19 == de_bus_r_OP ? {{63'd0}, _result_T_91} : _result_T_220; // @[Mux.scala 81:58]
  wire [126:0] _result_T_224 = 8'h1a == de_bus_r_OP ? {{63'd0}, _result_T_99} : _result_T_222; // @[Mux.scala 81:58]
  wire [126:0] _result_T_226 = 8'h1b == de_bus_r_OP ? {{63'd0}, _result_T_101} : _result_T_224; // @[Mux.scala 81:58]
  wire [126:0] _result_T_228 = 8'h1c == de_bus_r_OP ? {{63'd0}, _result_T_91} : _result_T_226; // @[Mux.scala 81:58]
  wire [126:0] _result_T_230 = 8'h1d == de_bus_r_OP ? {{63'd0}, _result_T_91} : _result_T_228; // @[Mux.scala 81:58]
  wire [126:0] _result_T_232 = 8'h1e == de_bus_r_OP ? {{63'd0}, _result_T_91} : _result_T_230; // @[Mux.scala 81:58]
  wire [126:0] _result_T_234 = 8'h1f == de_bus_r_OP ? {{63'd0}, _result_T_91} : _result_T_232; // @[Mux.scala 81:58]
  wire [126:0] _result_T_236 = 8'h21 == de_bus_r_OP ? {{63'd0}, _result_T_91} : _result_T_234; // @[Mux.scala 81:58]
  wire [126:0] _result_T_238 = 8'h22 == de_bus_r_OP ? {{63'd0}, _result_T_91} : _result_T_236; // @[Mux.scala 81:58]
  wire [126:0] _result_T_240 = 8'h20 == de_bus_r_OP ? {{63'd0}, _result_T_91} : _result_T_238; // @[Mux.scala 81:58]
  wire [126:0] _result_T_242 = 8'h23 == de_bus_r_OP ? _result_T_117 : _result_T_240; // @[Mux.scala 81:58]
  wire [126:0] _result_T_244 = 8'h24 == de_bus_r_OP ? {{63'd0}, _result_T_125} : _result_T_242; // @[Mux.scala 81:58]
  wire [126:0] _result_T_246 = 8'h25 == de_bus_r_OP ? {{63'd0}, _result_T_127} : _result_T_244; // @[Mux.scala 81:58]
  wire [126:0] _result_T_248 = 8'h26 == de_bus_r_OP ? {{63'd0}, _result_T_135} : _result_T_246; // @[Mux.scala 81:58]
  wire [126:0] _result_T_250 = 8'h29 == de_bus_r_OP ? {{126'd0}, _result_T_138} : _result_T_248; // @[Mux.scala 81:58]
  wire [126:0] _result_T_252 = 8'h2a == de_bus_r_OP ? {{126'd0}, _result_T_140} : _result_T_250; // @[Mux.scala 81:58]
  wire [126:0] _result_T_254 = 8'h2b == de_bus_r_OP ? {{63'd0}, _result_T_142} : _result_T_252; // @[Mux.scala 81:58]
  wire [126:0] _result_T_256 = 8'h2c == de_bus_r_OP ? {{63'd0}, _result_T_143} : _result_T_254; // @[Mux.scala 81:58]
  wire [126:0] _result_T_258 = 8'h2d == de_bus_r_OP ? {{63'd0}, _result_T_144} : _result_T_256; // @[Mux.scala 81:58]
  wire [126:0] _result_T_260 = 8'h27 == de_bus_r_OP ? {{63'd0}, _result_T_148} : _result_T_258; // @[Mux.scala 81:58]
  wire [126:0] _result_T_262 = 8'h28 == de_bus_r_OP ? {{63'd0}, _result_T_158} : _result_T_260; // @[Mux.scala 81:58]
  wire [126:0] _result_T_264 = 8'h3c == de_bus_r_OP ? {{63'd0}, de_bus_r_csr_rdata} : _result_T_262; // @[Mux.scala 81:58]
  wire [126:0] _result_T_266 = 8'h3d == de_bus_r_OP ? {{63'd0}, de_bus_r_csr_rdata} : _result_T_264; // @[Mux.scala 81:58]
  wire [126:0] _result_T_268 = 8'h3e == de_bus_r_OP ? {{63'd0}, de_bus_r_csr_rdata} : _result_T_266; // @[Mux.scala 81:58]
  wire [126:0] _result_T_270 = 8'h2e == de_bus_r_OP ? {{63'd0}, _result_T_91} : _result_T_268; // @[Mux.scala 81:58]
  wire [126:0] _result_T_272 = 8'h31 == de_bus_r_OP ? {{63'd0}, _result_T_91} : _result_T_270; // @[Mux.scala 81:58]
  wire [126:0] _result_T_274 = 8'h30 == de_bus_r_OP ? {{63'd0}, _result_T_91} : _result_T_272; // @[Mux.scala 81:58]
  wire [126:0] _result_T_276 = 8'h2f == de_bus_r_OP ? {{63'd0}, _result_T_91} : _result_T_274; // @[Mux.scala 81:58]
  wire [126:0] _result_T_278 = 8'h38 == de_bus_r_OP ? {{63'd0}, de_bus_r_imm} : _result_T_276; // @[Mux.scala 81:58]
  wire [126:0] _result_T_280 = 8'h39 == de_bus_r_OP ? {{63'd0}, _result_T_168} : _result_T_278; // @[Mux.scala 81:58]
  wire [126:0] _result_T_282 = 8'h3a == de_bus_r_OP ? {{63'd0}, _result_T_101} : _result_T_280; // @[Mux.scala 81:58]
  wire [63:0] _csr_wdata_T = de_bus_r_csr_rdata | de_bus_r_rdata1; // @[EXU.scala 170:40]
  wire [63:0] _csr_wdata_T_1 = ~de_bus_r_rdata1; // @[EXU.scala 171:42]
  wire [63:0] _csr_wdata_T_2 = de_bus_r_csr_rdata & _csr_wdata_T_1; // @[EXU.scala 171:40]
  wire [63:0] _csr_wdata_T_4 = 8'h3c == de_bus_r_OP ? de_bus_r_rdata1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _csr_wdata_T_6 = 8'h3d == de_bus_r_OP ? _csr_wdata_T : _csr_wdata_T_4; // @[Mux.scala 81:58]
  wire [63:0] _csr_wdata_T_8 = 8'h3e == de_bus_r_OP ? _csr_wdata_T_2 : _csr_wdata_T_6; // @[Mux.scala 81:58]
  wire  _io_data_sram_req_T = de_bus_r_res_from_mem | de_bus_r_MemWen; // @[EXU.scala 211:48]
  wire  mul_end = mul_io_out_valid | mul_1_io_out_valid; // @[EXU.scala 213:34]
  wire  muling = is_mul_64 & ~mul_io_out_valid | is_mul_32 & ~mul_1_io_out_valid; // @[EXU.scala 214:50]
  wire  div_end = div_io_out_valid | div_1_io_out_valid; // @[EXU.scala 215:34]
  wire  _diving_T = ~div_io_out_valid; // @[EXU.scala 216:31]
  wire  _diving_T_2 = ~div_1_io_out_valid; // @[EXU.scala 216:67]
  wire  diving = is_div_64 & ~div_io_out_valid | is_div_32 & ~div_1_io_out_valid; // @[EXU.scala 216:50]
  wire  reming = is_rem_64 & _diving_T | is_rem_32 & _diving_T_2; // @[EXU.scala 217:50]
  wire  _es_ready_go_T_5 = _io_data_sram_req_T ? io_data_sram_req & io_data_sram_addr_ok : 1'h1; // @[EXU.scala 220:27]
  wire  _es_ready_go_T_6 = muling | diving | reming ? 1'h0 : _es_ready_go_T_5; // @[EXU.scala 219:27]
  wire  es_ready_go = mul_end | div_end | _es_ready_go_T_6; // @[EXU.scala 218:27]
  wire [63:0] result = _result_T_282[63:0];
  mul mul ( // @[EXU.scala 58:23]
    .clock(mul_clock),
    .reset(mul_reset),
    .io_mul_valid(mul_io_mul_valid),
    .io_multiplicand(mul_io_multiplicand),
    .io_multiplier(mul_io_multiplier),
    .io_out_valid(mul_io_out_valid),
    .io_result_lo(mul_io_result_lo)
  );
  mul_1 mul_1 ( // @[EXU.scala 59:23]
    .clock(mul_1_clock),
    .reset(mul_1_reset),
    .io_mul_valid(mul_1_io_mul_valid),
    .io_multiplicand(mul_1_io_multiplicand),
    .io_multiplier(mul_1_io_multiplier),
    .io_out_valid(mul_1_io_out_valid),
    .io_result_lo(mul_1_io_result_lo)
  );
  div div ( // @[EXU.scala 77:23]
    .clock(div_clock),
    .reset(div_reset),
    .io_dividend(div_io_dividend),
    .io_divisor(div_io_divisor),
    .io_div_valid(div_io_div_valid),
    .io_div_signed(div_io_div_signed),
    .io_out_valid(div_io_out_valid),
    .io_quotient(div_io_quotient),
    .io_remainder(div_io_remainder)
  );
  div_1 div_1 ( // @[EXU.scala 78:23]
    .clock(div_1_clock),
    .reset(div_1_reset),
    .io_dividend(div_1_io_dividend),
    .io_divisor(div_1_io_divisor),
    .io_div_valid(div_1_io_div_valid),
    .io_div_signed(div_1_io_div_signed),
    .io_out_valid(div_1_io_out_valid),
    .io_quotient(div_1_io_quotient),
    .io_remainder(div_1_io_remainder)
  );
  assign io_es_allowin = ~es_valid | es_ready_go & io_ms_allowin; // @[EXU.scala 221:34]
  assign io_es_to_ms_valid = es_valid & es_ready_go; // @[EXU.scala 222:33]
  assign io_em_bus_res_from_mem = de_bus_r_res_from_mem; // @[EXU.scala 176:26]
  assign io_em_bus_gr_we = de_bus_r_gr_we; // @[EXU.scala 177:26]
  assign io_em_bus_dest = de_bus_r_dest; // @[EXU.scala 178:26]
  assign io_em_bus_alu_result = _result_T_282[63:0]; // @[EXU.scala 180:26]
  assign io_em_bus_ex_pc = ex_pc[31:0]; // @[EXU.scala 179:26]
  assign io_em_bus_ld_type = de_bus_r_ld_type; // @[EXU.scala 181:26]
  assign io_em_bus_inst = de_bus_r_inst; // @[EXU.scala 182:26]
  assign io_em_bus_csr_wdata = 8'h3f == de_bus_r_OP ? de_bus_r_rdata1 : _csr_wdata_T_8; // @[Mux.scala 81:58]
  assign io_em_bus_csr_wen = de_bus_r_csr_wen; // @[EXU.scala 185:26]
  assign io_em_bus_csr_waddr1 = de_bus_r_csr_waddr1; // @[EXU.scala 189:25]
  assign io_em_bus_csr_waddr2 = de_bus_r_csr_waddr2; // @[EXU.scala 190:25]
  assign io_em_bus_eval = de_bus_r_eval; // @[EXU.scala 192:24]
  assign io_em_bus_is_ld = de_bus_r_is_ld; // @[EXU.scala 195:25]
  assign io_em_bus_MemWen = de_bus_r_MemWen; // @[EXU.scala 197:24]
  assign io_es_dest_valid_gr_we = de_bus_r_gr_we; // @[EXU.scala 200:36]
  assign io_es_dest_valid_es_valid = es_valid; // @[EXU.scala 202:36]
  assign io_es_dest_valid_dest = de_bus_r_dest; // @[EXU.scala 201:36]
  assign io_es_dest_valid_es_forward_data = _result_T_282[63:0]; // @[EXU.scala 199:36]
  assign io_es_dest_valid_es_is_ld = de_bus_r_is_ld; // @[EXU.scala 203:36]
  assign io_es_dest_valid_es_ready_go = mul_end | div_end | _es_ready_go_T_6; // @[EXU.scala 218:27]
  assign io_data_sram_req = (de_bus_r_res_from_mem | de_bus_r_MemWen) & es_valid; // @[EXU.scala 211:68]
  assign io_data_sram_we = de_bus_r_MemWen; // @[EXU.scala 207:22]
  assign io_data_sram_addr = result[31:0]; // @[EXU.scala 208:22]
  assign io_data_sram_wdata = de_bus_r_rdata2; // @[EXU.scala 209:22]
  assign io_data_sram_wmask = de_bus_r_wmask; // @[EXU.scala 210:22]
  assign mul_clock = clock;
  assign mul_reset = reset;
  assign mul_io_mul_valid = de_bus_r_OP == 8'h4; // @[EXU.scala 60:31]
  assign mul_io_multiplicand = de_bus_r_rdata1; // @[EXU.scala 67:23]
  assign mul_io_multiplier = de_bus_r_rdata2; // @[EXU.scala 68:21]
  assign mul_1_clock = clock;
  assign mul_1_reset = reset;
  assign mul_1_io_mul_valid = de_bus_r_OP == 8'h5; // @[EXU.scala 61:31]
  assign mul_1_io_multiplicand = de_bus_r_rdata1[31:0]; // @[EXU.scala 74:30]
  assign mul_1_io_multiplier = de_bus_r_rdata2[31:0]; // @[EXU.scala 75:28]
  assign div_clock = clock;
  assign div_reset = reset;
  assign div_io_dividend = de_bus_r_rdata1; // @[EXU.scala 88:19]
  assign div_io_divisor = de_bus_r_rdata2; // @[EXU.scala 89:18]
  assign div_io_div_valid = is_div_64 | is_rem_64; // @[EXU.scala 84:33]
  assign div_io_div_signed = _is_div_64_T | _is_rem_64_T; // @[EXU.scala 87:48]
  assign div_1_clock = clock;
  assign div_1_reset = reset;
  assign div_1_io_dividend = de_bus_r_rdata1[31:0]; // @[EXU.scala 95:26]
  assign div_1_io_divisor = de_bus_r_rdata2[31:0]; // @[EXU.scala 96:25]
  assign div_1_io_div_valid = is_div_32 | is_rem_32; // @[EXU.scala 91:33]
  assign div_1_io_div_signed = _is_div_32_T | _is_rem_32_T; // @[EXU.scala 94:49]
  always @(posedge clock) begin
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_OP <= 8'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_OP <= io_de_bus_OP; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_res_from_mem <= 1'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_res_from_mem <= io_de_bus_res_from_mem; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_gr_we <= 1'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_gr_we <= io_de_bus_gr_we; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_MemWen <= 1'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_MemWen <= io_de_bus_MemWen; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_wmask <= 8'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_wmask <= io_de_bus_wmask; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_ds_pc <= 32'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_ds_pc <= io_de_bus_ds_pc; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_dest <= 5'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_dest <= io_de_bus_dest; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_imm <= 64'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_imm <= io_de_bus_imm; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_rdata1 <= 64'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_rdata1 <= io_de_bus_rdata1; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_rdata2 <= 64'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_rdata2 <= io_de_bus_rdata2; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_ld_type <= 3'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_ld_type <= io_de_bus_ld_type; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_inst <= 32'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_inst <= io_de_bus_inst; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_csr_rdata <= 64'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_csr_rdata <= io_de_bus_csr_rdata; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_csr_waddr1 <= 3'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_csr_waddr1 <= io_de_bus_csr_waddr1; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_csr_waddr2 <= 3'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_csr_waddr2 <= io_de_bus_csr_waddr2; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_csr_wen <= 1'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_csr_wen <= io_de_bus_csr_wen; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_eval <= 1'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_eval <= io_de_bus_eval; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 30:28]
      de_bus_r_is_ld <= 1'h0; // @[EXU.scala 30:28]
    end else if (io_ds_to_es_valid & io_es_allowin) begin // @[EXU.scala 38:44]
      de_bus_r_is_ld <= io_de_bus_is_ld; // @[EXU.scala 39:14]
    end
    if (reset) begin // @[EXU.scala 31:28]
      es_valid <= 1'h0; // @[EXU.scala 31:28]
    end else if (io_es_allowin) begin // @[EXU.scala 34:23]
      es_valid <= io_ds_to_es_valid; // @[EXU.scala 35:14]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  de_bus_r_OP = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  de_bus_r_res_from_mem = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  de_bus_r_gr_we = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  de_bus_r_MemWen = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  de_bus_r_wmask = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  de_bus_r_ds_pc = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  de_bus_r_dest = _RAND_6[4:0];
  _RAND_7 = {2{`RANDOM}};
  de_bus_r_imm = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  de_bus_r_rdata1 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  de_bus_r_rdata2 = _RAND_9[63:0];
  _RAND_10 = {1{`RANDOM}};
  de_bus_r_ld_type = _RAND_10[2:0];
  _RAND_11 = {1{`RANDOM}};
  de_bus_r_inst = _RAND_11[31:0];
  _RAND_12 = {2{`RANDOM}};
  de_bus_r_csr_rdata = _RAND_12[63:0];
  _RAND_13 = {1{`RANDOM}};
  de_bus_r_csr_waddr1 = _RAND_13[2:0];
  _RAND_14 = {1{`RANDOM}};
  de_bus_r_csr_waddr2 = _RAND_14[2:0];
  _RAND_15 = {1{`RANDOM}};
  de_bus_r_csr_wen = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  de_bus_r_eval = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  de_bus_r_is_ld = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  es_valid = _RAND_18[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module MEM(
  input         clock,
  input         reset,
  output        io_ms_allowin,
  input         io_es_to_ms_valid,
  output        io_ms_to_ws_valid,
  input         io_em_bus_res_from_mem,
  input         io_em_bus_gr_we,
  input  [4:0]  io_em_bus_dest,
  input  [63:0] io_em_bus_alu_result,
  input  [31:0] io_em_bus_ex_pc,
  input  [2:0]  io_em_bus_ld_type,
  input  [31:0] io_em_bus_inst,
  input  [63:0] io_em_bus_csr_wdata,
  input         io_em_bus_csr_wen,
  input  [2:0]  io_em_bus_csr_waddr1,
  input  [2:0]  io_em_bus_csr_waddr2,
  input         io_em_bus_eval,
  input         io_em_bus_is_ld,
  input         io_em_bus_MemWen,
  output        io_mw_bus_gr_we,
  output [4:0]  io_mw_bus_dest,
  output [63:0] io_mw_bus_final_result,
  output [31:0] io_mw_bus_mem_pc,
  output [31:0] io_mw_bus_inst,
  output [63:0] io_mw_bus_csr_wdata,
  output        io_mw_bus_csr_wen,
  output [2:0]  io_mw_bus_csr_waddr1,
  output [2:0]  io_mw_bus_csr_waddr2,
  output        io_mw_bus_eval,
  output        io_ms_dest_valid_gr_we,
  output        io_ms_dest_valid_ms_valid,
  output [4:0]  io_ms_dest_valid_dest,
  output [63:0] io_ms_dest_valid_ms_forward_data,
  output        io_ms_dest_valid_ms_is_ld,
  input  [63:0] io_data_sram_rdata,
  output [63:0] io_mem_result,
  output [2:0]  io_ld_type,
  input         io_data_sram_data_ok
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
`endif // RANDOMIZE_REG_INIT
  reg  ms_valid; // @[MEM.scala 24:28]
  reg  em_bus_r_res_from_mem; // @[MEM.scala 26:28]
  reg  em_bus_r_gr_we; // @[MEM.scala 26:28]
  reg [4:0] em_bus_r_dest; // @[MEM.scala 26:28]
  reg [63:0] em_bus_r_alu_result; // @[MEM.scala 26:28]
  reg [31:0] em_bus_r_ex_pc; // @[MEM.scala 26:28]
  reg [2:0] em_bus_r_ld_type; // @[MEM.scala 26:28]
  reg [31:0] em_bus_r_inst; // @[MEM.scala 26:28]
  reg [63:0] em_bus_r_csr_wdata; // @[MEM.scala 26:28]
  reg  em_bus_r_csr_wen; // @[MEM.scala 26:28]
  reg [2:0] em_bus_r_csr_waddr1; // @[MEM.scala 26:28]
  reg [2:0] em_bus_r_csr_waddr2; // @[MEM.scala 26:28]
  reg  em_bus_r_eval; // @[MEM.scala 26:28]
  reg  em_bus_r_MemWen; // @[MEM.scala 26:28]
  wire  ms_ready_go = em_bus_r_res_from_mem | em_bus_r_MemWen ? io_data_sram_data_ok : 1'h1; // @[MEM.scala 28:27]
  wire [55:0] _io_mem_result_T_3 = io_data_sram_rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_mem_result_T_4 = {_io_mem_result_T_3,io_data_sram_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [47:0] _io_mem_result_T_8 = io_data_sram_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_mem_result_T_9 = {_io_mem_result_T_8,io_data_sram_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [31:0] _io_mem_result_T_13 = io_data_sram_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _io_mem_result_T_14 = {_io_mem_result_T_13,io_data_sram_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _io_mem_result_T_20 = 3'h0 == io_ld_type ? _io_mem_result_T_4 : io_data_sram_rdata; // @[Mux.scala 81:58]
  wire [63:0] _io_mem_result_T_22 = 3'h1 == io_ld_type ? _io_mem_result_T_9 : _io_mem_result_T_20; // @[Mux.scala 81:58]
  wire [63:0] _io_mem_result_T_24 = 3'h2 == io_ld_type ? _io_mem_result_T_14 : _io_mem_result_T_22; // @[Mux.scala 81:58]
  wire [63:0] _io_mem_result_T_26 = 3'h3 == io_ld_type ? io_data_sram_rdata : _io_mem_result_T_24; // @[Mux.scala 81:58]
  wire [63:0] _io_mem_result_T_28 = 3'h4 == io_ld_type ? {{56'd0}, io_data_sram_rdata[7:0]} : _io_mem_result_T_26; // @[Mux.scala 81:58]
  wire [63:0] _io_mem_result_T_30 = 3'h5 == io_ld_type ? {{48'd0}, io_data_sram_rdata[15:0]} : _io_mem_result_T_28; // @[Mux.scala 81:58]
  assign io_ms_allowin = ~ms_valid | ms_ready_go; // @[MEM.scala 29:34]
  assign io_ms_to_ws_valid = ms_valid & ms_ready_go; // @[MEM.scala 30:33]
  assign io_mw_bus_gr_we = em_bus_r_gr_we; // @[MEM.scala 84:26]
  assign io_mw_bus_dest = em_bus_r_dest; // @[MEM.scala 85:26]
  assign io_mw_bus_final_result = em_bus_r_res_from_mem ? io_mem_result : em_bus_r_alu_result; // @[MEM.scala 76:42]
  assign io_mw_bus_mem_pc = em_bus_r_ex_pc; // @[MEM.scala 87:26]
  assign io_mw_bus_inst = em_bus_r_inst; // @[MEM.scala 88:26]
  assign io_mw_bus_csr_wdata = em_bus_r_csr_wdata; // @[MEM.scala 90:26]
  assign io_mw_bus_csr_wen = em_bus_r_csr_wen; // @[MEM.scala 91:26]
  assign io_mw_bus_csr_waddr1 = em_bus_r_csr_waddr1; // @[MEM.scala 92:26]
  assign io_mw_bus_csr_waddr2 = em_bus_r_csr_waddr2; // @[MEM.scala 93:26]
  assign io_mw_bus_eval = em_bus_r_eval; // @[MEM.scala 96:26]
  assign io_ms_dest_valid_gr_we = em_bus_r_gr_we; // @[MEM.scala 79:29]
  assign io_ms_dest_valid_ms_valid = ms_valid; // @[MEM.scala 81:29]
  assign io_ms_dest_valid_dest = em_bus_r_dest; // @[MEM.scala 80:29]
  assign io_ms_dest_valid_ms_forward_data = em_bus_r_res_from_mem ? io_mem_result : em_bus_r_alu_result; // @[MEM.scala 76:42]
  assign io_ms_dest_valid_ms_is_ld = io_em_bus_is_ld; // @[MEM.scala 82:29]
  assign io_mem_result = 3'h6 == io_ld_type ? {{32'd0}, io_data_sram_rdata[31:0]} : _io_mem_result_T_30; // @[Mux.scala 81:58]
  assign io_ld_type = em_bus_r_ld_type; // @[MEM.scala 101:26]
  always @(posedge clock) begin
    if (reset) begin // @[MEM.scala 24:28]
      ms_valid <= 1'h0; // @[MEM.scala 24:28]
    end else if (io_ms_allowin) begin // @[MEM.scala 32:23]
      ms_valid <= io_es_to_ms_valid; // @[MEM.scala 33:14]
    end
    if (reset) begin // @[MEM.scala 26:28]
      em_bus_r_res_from_mem <= 1'h0; // @[MEM.scala 26:28]
    end else if (io_es_to_ms_valid & io_ms_allowin) begin // @[MEM.scala 36:44]
      em_bus_r_res_from_mem <= io_em_bus_res_from_mem; // @[MEM.scala 37:14]
    end
    if (reset) begin // @[MEM.scala 26:28]
      em_bus_r_gr_we <= 1'h0; // @[MEM.scala 26:28]
    end else if (io_es_to_ms_valid & io_ms_allowin) begin // @[MEM.scala 36:44]
      em_bus_r_gr_we <= io_em_bus_gr_we; // @[MEM.scala 37:14]
    end
    if (reset) begin // @[MEM.scala 26:28]
      em_bus_r_dest <= 5'h0; // @[MEM.scala 26:28]
    end else if (io_es_to_ms_valid & io_ms_allowin) begin // @[MEM.scala 36:44]
      em_bus_r_dest <= io_em_bus_dest; // @[MEM.scala 37:14]
    end
    if (reset) begin // @[MEM.scala 26:28]
      em_bus_r_alu_result <= 64'h0; // @[MEM.scala 26:28]
    end else if (io_es_to_ms_valid & io_ms_allowin) begin // @[MEM.scala 36:44]
      em_bus_r_alu_result <= io_em_bus_alu_result; // @[MEM.scala 37:14]
    end
    if (reset) begin // @[MEM.scala 26:28]
      em_bus_r_ex_pc <= 32'h0; // @[MEM.scala 26:28]
    end else if (io_es_to_ms_valid & io_ms_allowin) begin // @[MEM.scala 36:44]
      em_bus_r_ex_pc <= io_em_bus_ex_pc; // @[MEM.scala 37:14]
    end
    if (reset) begin // @[MEM.scala 26:28]
      em_bus_r_ld_type <= 3'h0; // @[MEM.scala 26:28]
    end else if (io_es_to_ms_valid & io_ms_allowin) begin // @[MEM.scala 36:44]
      em_bus_r_ld_type <= io_em_bus_ld_type; // @[MEM.scala 37:14]
    end
    if (reset) begin // @[MEM.scala 26:28]
      em_bus_r_inst <= 32'h0; // @[MEM.scala 26:28]
    end else if (io_es_to_ms_valid & io_ms_allowin) begin // @[MEM.scala 36:44]
      em_bus_r_inst <= io_em_bus_inst; // @[MEM.scala 37:14]
    end
    if (reset) begin // @[MEM.scala 26:28]
      em_bus_r_csr_wdata <= 64'h0; // @[MEM.scala 26:28]
    end else if (io_es_to_ms_valid & io_ms_allowin) begin // @[MEM.scala 36:44]
      em_bus_r_csr_wdata <= io_em_bus_csr_wdata; // @[MEM.scala 37:14]
    end
    if (reset) begin // @[MEM.scala 26:28]
      em_bus_r_csr_wen <= 1'h0; // @[MEM.scala 26:28]
    end else if (io_es_to_ms_valid & io_ms_allowin) begin // @[MEM.scala 36:44]
      em_bus_r_csr_wen <= io_em_bus_csr_wen; // @[MEM.scala 37:14]
    end
    if (reset) begin // @[MEM.scala 26:28]
      em_bus_r_csr_waddr1 <= 3'h0; // @[MEM.scala 26:28]
    end else if (io_es_to_ms_valid & io_ms_allowin) begin // @[MEM.scala 36:44]
      em_bus_r_csr_waddr1 <= io_em_bus_csr_waddr1; // @[MEM.scala 37:14]
    end
    if (reset) begin // @[MEM.scala 26:28]
      em_bus_r_csr_waddr2 <= 3'h0; // @[MEM.scala 26:28]
    end else if (io_es_to_ms_valid & io_ms_allowin) begin // @[MEM.scala 36:44]
      em_bus_r_csr_waddr2 <= io_em_bus_csr_waddr2; // @[MEM.scala 37:14]
    end
    if (reset) begin // @[MEM.scala 26:28]
      em_bus_r_eval <= 1'h0; // @[MEM.scala 26:28]
    end else if (io_es_to_ms_valid & io_ms_allowin) begin // @[MEM.scala 36:44]
      em_bus_r_eval <= io_em_bus_eval; // @[MEM.scala 37:14]
    end
    if (reset) begin // @[MEM.scala 26:28]
      em_bus_r_MemWen <= 1'h0; // @[MEM.scala 26:28]
    end else if (io_es_to_ms_valid & io_ms_allowin) begin // @[MEM.scala 36:44]
      em_bus_r_MemWen <= io_em_bus_MemWen; // @[MEM.scala 37:14]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ms_valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  em_bus_r_res_from_mem = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  em_bus_r_gr_we = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  em_bus_r_dest = _RAND_3[4:0];
  _RAND_4 = {2{`RANDOM}};
  em_bus_r_alu_result = _RAND_4[63:0];
  _RAND_5 = {1{`RANDOM}};
  em_bus_r_ex_pc = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  em_bus_r_ld_type = _RAND_6[2:0];
  _RAND_7 = {1{`RANDOM}};
  em_bus_r_inst = _RAND_7[31:0];
  _RAND_8 = {2{`RANDOM}};
  em_bus_r_csr_wdata = _RAND_8[63:0];
  _RAND_9 = {1{`RANDOM}};
  em_bus_r_csr_wen = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  em_bus_r_csr_waddr1 = _RAND_10[2:0];
  _RAND_11 = {1{`RANDOM}};
  em_bus_r_csr_waddr2 = _RAND_11[2:0];
  _RAND_12 = {1{`RANDOM}};
  em_bus_r_eval = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  em_bus_r_MemWen = _RAND_13[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module WBU(
  input         clock,
  input         reset,
  output        io_ws_allowin,
  input         io_ms_to_ws_valid,
  input         io_mw_bus_gr_we,
  input  [4:0]  io_mw_bus_dest,
  input  [63:0] io_mw_bus_final_result,
  input  [31:0] io_mw_bus_mem_pc,
  input  [31:0] io_mw_bus_inst,
  input  [63:0] io_mw_bus_csr_wdata,
  input         io_mw_bus_csr_wen,
  input  [2:0]  io_mw_bus_csr_waddr1,
  input  [2:0]  io_mw_bus_csr_waddr2,
  input         io_mw_bus_eval,
  output        io_rf_bus_rf_we,
  output [4:0]  io_rf_bus_rf_waddr,
  output [63:0] io_rf_bus_rf_wdata,
  output [31:0] io_rf_bus_wb_pc,
  output [63:0] io_rf_bus_csr_wdata,
  output        io_rf_bus_csr_wen,
  output [2:0]  io_rf_bus_csr_waddr1,
  output [2:0]  io_rf_bus_csr_waddr2,
  output        io_rf_bus_eval,
  output        io_in_WB,
  output        io_ws_dest_valid_gr_we,
  output        io_ws_dest_valid_ws_valid,
  output [4:0]  io_ws_dest_valid_dest,
  output [63:0] io_ws_dest_valid_ws_forward_data,
  output [63:0] io_wb_pc,
  output [63:0] io_wb_inst
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
`endif // RANDOMIZE_REG_INIT
  reg  ws_valid; // @[WBU.scala 21:28]
  reg  mw_bus_r_gr_we; // @[WBU.scala 22:28]
  reg [4:0] mw_bus_r_dest; // @[WBU.scala 22:28]
  reg [63:0] mw_bus_r_final_result; // @[WBU.scala 22:28]
  reg [31:0] mw_bus_r_mem_pc; // @[WBU.scala 22:28]
  reg [31:0] mw_bus_r_inst; // @[WBU.scala 22:28]
  reg [63:0] mw_bus_r_csr_wdata; // @[WBU.scala 22:28]
  reg  mw_bus_r_csr_wen; // @[WBU.scala 22:28]
  reg [2:0] mw_bus_r_csr_waddr1; // @[WBU.scala 22:28]
  reg [2:0] mw_bus_r_csr_waddr2; // @[WBU.scala 22:28]
  reg  mw_bus_r_eval; // @[WBU.scala 22:28]
  assign io_ws_allowin = 1'h1; // @[WBU.scala 25:30]
  assign io_rf_bus_rf_we = mw_bus_r_gr_we & ws_valid; // @[WBU.scala 45:30]
  assign io_rf_bus_rf_waddr = mw_bus_r_dest; // @[WBU.scala 50:22]
  assign io_rf_bus_rf_wdata = mw_bus_r_final_result; // @[WBU.scala 51:22]
  assign io_rf_bus_wb_pc = mw_bus_r_mem_pc; // @[WBU.scala 52:21]
  assign io_rf_bus_csr_wdata = mw_bus_r_csr_wdata; // @[WBU.scala 56:23]
  assign io_rf_bus_csr_wen = mw_bus_r_csr_wen; // @[WBU.scala 57:21]
  assign io_rf_bus_csr_waddr1 = mw_bus_r_csr_waddr1; // @[WBU.scala 59:24]
  assign io_rf_bus_csr_waddr2 = mw_bus_r_csr_waddr2; // @[WBU.scala 60:24]
  assign io_rf_bus_eval = mw_bus_r_eval; // @[WBU.scala 53:21]
  assign io_in_WB = ws_valid; // @[WBU.scala 26:17]
  assign io_ws_dest_valid_gr_we = mw_bus_r_gr_we; // @[WBU.scala 71:36]
  assign io_ws_dest_valid_ws_valid = ws_valid; // @[WBU.scala 70:36]
  assign io_ws_dest_valid_dest = mw_bus_r_dest; // @[WBU.scala 72:36]
  assign io_ws_dest_valid_ws_forward_data = mw_bus_r_final_result; // @[WBU.scala 73:36]
  assign io_wb_pc = {{32'd0}, mw_bus_r_mem_pc}; // @[WBU.scala 54:22]
  assign io_wb_inst = {{32'd0}, mw_bus_r_inst}; // @[WBU.scala 55:22]
  always @(posedge clock) begin
    if (reset) begin // @[WBU.scala 21:28]
      ws_valid <= 1'h0; // @[WBU.scala 21:28]
    end else if (io_ws_allowin) begin // @[WBU.scala 34:23]
      ws_valid <= io_ms_to_ws_valid; // @[WBU.scala 35:14]
    end
    if (reset) begin // @[WBU.scala 22:28]
      mw_bus_r_gr_we <= 1'h0; // @[WBU.scala 22:28]
    end else if (io_ms_to_ws_valid & io_ws_allowin) begin // @[WBU.scala 38:44]
      mw_bus_r_gr_we <= io_mw_bus_gr_we; // @[WBU.scala 39:14]
    end
    if (reset) begin // @[WBU.scala 22:28]
      mw_bus_r_dest <= 5'h0; // @[WBU.scala 22:28]
    end else if (io_ms_to_ws_valid & io_ws_allowin) begin // @[WBU.scala 38:44]
      mw_bus_r_dest <= io_mw_bus_dest; // @[WBU.scala 39:14]
    end
    if (reset) begin // @[WBU.scala 22:28]
      mw_bus_r_final_result <= 64'h0; // @[WBU.scala 22:28]
    end else if (io_ms_to_ws_valid & io_ws_allowin) begin // @[WBU.scala 38:44]
      mw_bus_r_final_result <= io_mw_bus_final_result; // @[WBU.scala 39:14]
    end
    if (reset) begin // @[WBU.scala 22:28]
      mw_bus_r_mem_pc <= 32'h0; // @[WBU.scala 22:28]
    end else if (io_ms_to_ws_valid & io_ws_allowin) begin // @[WBU.scala 38:44]
      mw_bus_r_mem_pc <= io_mw_bus_mem_pc; // @[WBU.scala 39:14]
    end
    if (reset) begin // @[WBU.scala 22:28]
      mw_bus_r_inst <= 32'h0; // @[WBU.scala 22:28]
    end else if (io_ms_to_ws_valid & io_ws_allowin) begin // @[WBU.scala 38:44]
      mw_bus_r_inst <= io_mw_bus_inst; // @[WBU.scala 39:14]
    end
    if (reset) begin // @[WBU.scala 22:28]
      mw_bus_r_csr_wdata <= 64'h0; // @[WBU.scala 22:28]
    end else if (io_ms_to_ws_valid & io_ws_allowin) begin // @[WBU.scala 38:44]
      mw_bus_r_csr_wdata <= io_mw_bus_csr_wdata; // @[WBU.scala 39:14]
    end
    if (reset) begin // @[WBU.scala 22:28]
      mw_bus_r_csr_wen <= 1'h0; // @[WBU.scala 22:28]
    end else if (io_ms_to_ws_valid & io_ws_allowin) begin // @[WBU.scala 38:44]
      mw_bus_r_csr_wen <= io_mw_bus_csr_wen; // @[WBU.scala 39:14]
    end
    if (reset) begin // @[WBU.scala 22:28]
      mw_bus_r_csr_waddr1 <= 3'h0; // @[WBU.scala 22:28]
    end else if (io_ms_to_ws_valid & io_ws_allowin) begin // @[WBU.scala 38:44]
      mw_bus_r_csr_waddr1 <= io_mw_bus_csr_waddr1; // @[WBU.scala 39:14]
    end
    if (reset) begin // @[WBU.scala 22:28]
      mw_bus_r_csr_waddr2 <= 3'h0; // @[WBU.scala 22:28]
    end else if (io_ms_to_ws_valid & io_ws_allowin) begin // @[WBU.scala 38:44]
      mw_bus_r_csr_waddr2 <= io_mw_bus_csr_waddr2; // @[WBU.scala 39:14]
    end
    if (reset) begin // @[WBU.scala 22:28]
      mw_bus_r_eval <= 1'h0; // @[WBU.scala 22:28]
    end else if (io_ms_to_ws_valid & io_ws_allowin) begin // @[WBU.scala 38:44]
      mw_bus_r_eval <= io_mw_bus_eval; // @[WBU.scala 39:14]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ws_valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  mw_bus_r_gr_we = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  mw_bus_r_dest = _RAND_2[4:0];
  _RAND_3 = {2{`RANDOM}};
  mw_bus_r_final_result = _RAND_3[63:0];
  _RAND_4 = {1{`RANDOM}};
  mw_bus_r_mem_pc = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  mw_bus_r_inst = _RAND_5[31:0];
  _RAND_6 = {2{`RANDOM}};
  mw_bus_r_csr_wdata = _RAND_6[63:0];
  _RAND_7 = {1{`RANDOM}};
  mw_bus_r_csr_wen = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  mw_bus_r_csr_waddr1 = _RAND_8[2:0];
  _RAND_9 = {1{`RANDOM}};
  mw_bus_r_csr_waddr2 = _RAND_9[2:0];
  _RAND_10 = {1{`RANDOM}};
  mw_bus_r_eval = _RAND_10[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module AXI(
  input         clock,
  input         reset,
  output [3:0]  io_arid,
  output [63:0] io_araddr,
  output        io_arvalid,
  input         io_arready,
  input  [63:0] io_rdata,
  input         io_rvalid,
  output        io_rready,
  output [63:0] io_awaddr,
  output        io_awvalid,
  input         io_awready,
  output [63:0] io_wdata,
  output [7:0]  io_wstrb,
  output        io_wvalid,
  input         io_wready,
  input         io_bvalid,
  output        io_bready,
  input         io_inst_sram_req,
  input  [63:0] io_inst_sram_addr,
  output [63:0] io_inst_sram_rdata,
  output        io_inst_sram_addr_ok,
  output        io_inst_sram_data_ok,
  input         io_data_sram_req,
  input         io_data_sram_wr,
  input  [7:0]  io_data_sram_wstrb,
  input  [63:0] io_data_sram_addr,
  input  [63:0] io_data_sram_wdata,
  output [63:0] io_data_sram_rdata,
  output        io_data_sram_addr_ok,
  output        io_data_sram_data_ok
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] rstate; // @[AXI.scala 71:55]
  wire  read_ainit = rstate == 2'h0; // @[AXI.scala 73:29]
  wire  read_araddr = rstate == 2'h1; // @[AXI.scala 74:29]
  wire  read_rdata = rstate == 2'h2; // @[AXI.scala 75:29]
  reg  reading_inst_sram; // @[AXI.scala 77:34]
  reg  reading_data_sram; // @[AXI.scala 78:34]
  reg [1:0] wstate; // @[AXI.scala 84:76]
  wire  write_init = wstate == 2'h0; // @[AXI.scala 86:28]
  wire  write_addr = wstate == 2'h1; // @[AXI.scala 87:28]
  wire  write_data = wstate == 2'h2; // @[AXI.scala 88:28]
  reg [1:0] writing_data_sram; // @[AXI.scala 91:34]
  wire  _T_2 = io_data_sram_req & ~io_data_sram_wr; // @[AXI.scala 96:31]
  wire [1:0] _GEN_2 = io_rvalid ? 2'h0 : 2'h2; // @[AXI.scala 110:23 111:16 113:16]
  wire  _T_16 = read_rdata & io_rvalid & io_rready; // @[AXI.scala 120:38]
  wire  _GEN_6 = read_rdata & io_rvalid & io_rready ? 1'h0 : reading_inst_sram; // @[AXI.scala 120:52 121:23 123:23]
  wire  _GEN_7 = ~io_data_sram_req & io_inst_sram_req & write_init & read_ainit | _GEN_6; // @[AXI.scala 118:95 119:23]
  wire  _GEN_8 = _T_16 ? 1'h0 : reading_data_sram; // @[AXI.scala 129:52 130:23 78:34]
  wire  _GEN_9 = _T_2 & write_init & read_ainit | _GEN_8; // @[AXI.scala 127:74 128:23]
  wire  _io_arid_T = read_araddr & reading_data_sram; // @[AXI.scala 134:33]
  wire  _io_arid_T_1 = read_araddr & reading_inst_sram; // @[AXI.scala 134:76]
  wire [1:0] _io_arid_T_2 = read_araddr & reading_inst_sram ? 2'h0 : 2'h2; // @[AXI.scala 134:63]
  wire [1:0] _io_arid_T_3 = read_araddr & reading_data_sram ? 2'h1 : _io_arid_T_2; // @[AXI.scala 134:20]
  wire [63:0] _io_araddr_T_2 = _io_arid_T_1 ? io_inst_sram_addr : 64'h0; // @[AXI.scala 139:8]
  wire [1:0] _GEN_12 = io_wready ? 2'h3 : 2'h2; // @[AXI.scala 160:23 161:16 163:16]
  wire [1:0] _GEN_13 = io_bvalid ? 2'h0 : wstate; // @[AXI.scala 167:23 168:16 84:76]
  wire [1:0] _GEN_14 = 2'h3 == wstate ? _GEN_13 : wstate; // @[AXI.scala 144:18 84:76]
  wire [1:0] _writing_data_sram_T_1 = writing_data_sram + 2'h1; // @[AXI.scala 177:44]
  assign io_arid = {{2'd0}, _io_arid_T_3}; // @[AXI.scala 134:14]
  assign io_araddr = _io_arid_T ? io_data_sram_addr : _io_araddr_T_2; // @[AXI.scala 136:19]
  assign io_arvalid = rstate == 2'h1; // @[AXI.scala 74:29]
  assign io_rready = rstate == 2'h2; // @[AXI.scala 75:29]
  assign io_awaddr = write_addr ? io_data_sram_addr : 64'h0; // @[AXI.scala 183:20]
  assign io_awvalid = wstate == 2'h1; // @[AXI.scala 87:28]
  assign io_wdata = write_data ? io_data_sram_wdata : 64'h0; // @[AXI.scala 186:19]
  assign io_wstrb = write_data ? io_data_sram_wstrb : 8'h0; // @[AXI.scala 187:19]
  assign io_wvalid = wstate == 2'h2; // @[AXI.scala 88:28]
  assign io_bready = wstate == 2'h3; // @[AXI.scala 89:28]
  assign io_inst_sram_rdata = io_rdata; // @[AXI.scala 195:24]
  assign io_inst_sram_addr_ok = reading_inst_sram & io_arready; // @[AXI.scala 191:45]
  assign io_inst_sram_data_ok = reading_inst_sram & io_rvalid; // @[AXI.scala 193:45]
  assign io_data_sram_rdata = io_rdata; // @[AXI.scala 196:24]
  assign io_data_sram_addr_ok = reading_data_sram & io_arready | writing_data_sram == 2'h2; // @[AXI.scala 192:59]
  assign io_data_sram_data_ok = reading_data_sram & io_rvalid | io_bvalid; // @[AXI.scala 194:58]
  always @(posedge clock) begin
    if (reset) begin // @[AXI.scala 71:55]
      rstate <= 2'h0; // @[AXI.scala 71:55]
    end else if (2'h0 == rstate) begin // @[AXI.scala 94:18]
      if ((io_data_sram_req & ~io_data_sram_wr | io_inst_sram_req) & write_init) begin // @[AXI.scala 96:110]
        rstate <= 2'h1; // @[AXI.scala 97:16]
      end else begin
        rstate <= 2'h0; // @[AXI.scala 99:16]
      end
    end else if (2'h1 == rstate) begin // @[AXI.scala 94:18]
      if (io_arready) begin // @[AXI.scala 103:24]
        rstate <= 2'h2; // @[AXI.scala 104:16]
      end else begin
        rstate <= 2'h1; // @[AXI.scala 106:16]
      end
    end else if (2'h2 == rstate) begin // @[AXI.scala 94:18]
      rstate <= _GEN_2;
    end
    if (reset) begin // @[AXI.scala 77:34]
      reading_inst_sram <= 1'h0; // @[AXI.scala 77:34]
    end else begin
      reading_inst_sram <= _GEN_7;
    end
    if (reset) begin // @[AXI.scala 78:34]
      reading_data_sram <= 1'h0; // @[AXI.scala 78:34]
    end else begin
      reading_data_sram <= _GEN_9;
    end
    if (reset) begin // @[AXI.scala 84:76]
      wstate <= 2'h0; // @[AXI.scala 84:76]
    end else if (2'h0 == wstate) begin // @[AXI.scala 144:18]
      if (io_data_sram_req & io_data_sram_wr) begin // @[AXI.scala 146:51]
        wstate <= 2'h1; // @[AXI.scala 147:16]
      end else begin
        wstate <= 2'h0; // @[AXI.scala 149:16]
      end
    end else if (2'h1 == wstate) begin // @[AXI.scala 144:18]
      if (io_awready) begin // @[AXI.scala 153:24]
        wstate <= 2'h2; // @[AXI.scala 154:16]
      end else begin
        wstate <= 2'h1; // @[AXI.scala 156:16]
      end
    end else if (2'h2 == wstate) begin // @[AXI.scala 144:18]
      wstate <= _GEN_12;
    end else begin
      wstate <= _GEN_14;
    end
    if (reset) begin // @[AXI.scala 91:34]
      writing_data_sram <= 2'h0; // @[AXI.scala 91:34]
    end else if (io_awready | io_wready) begin // @[AXI.scala 176:39]
      writing_data_sram <= _writing_data_sram_T_1; // @[AXI.scala 177:23]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  rstate = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  reading_inst_sram = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  reading_data_sram = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  wstate = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  writing_data_sram = _RAND_4[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Top(
  input         clock,
  input         reset,
  output [31:0] io_fs_pc,
  output [6:0]  io_op,
  output        io_in_WB,
  output [31:0] io_wb_pc,
  output [31:0] io_wb_inst,
  output [31:0] io_ds_pc,
  output [63:0] io_mem_result,
  output [2:0]  io_ld_type
);
  wire  ifu_clock; // @[TopMain.scala 23:23]
  wire  ifu_reset; // @[TopMain.scala 23:23]
  wire  ifu_io_reset; // @[TopMain.scala 23:23]
  wire [31:0] ifu_io_fd_bus_inst; // @[TopMain.scala 23:23]
  wire [31:0] ifu_io_fd_bus_pc; // @[TopMain.scala 23:23]
  wire  ifu_io_ds_allowin; // @[TopMain.scala 23:23]
  wire  ifu_io_fs_to_ds_valid; // @[TopMain.scala 23:23]
  wire  ifu_io_br_bus_br_taken; // @[TopMain.scala 23:23]
  wire [31:0] ifu_io_br_bus_br_target; // @[TopMain.scala 23:23]
  wire  ifu_io_br_bus_br_taken_cancel; // @[TopMain.scala 23:23]
  wire  ifu_io_br_bus_rawblock; // @[TopMain.scala 23:23]
  wire [63:0] ifu_io_br_bus_csr_rdata; // @[TopMain.scala 23:23]
  wire  ifu_io_br_bus_eval; // @[TopMain.scala 23:23]
  wire  ifu_io_br_bus_mret; // @[TopMain.scala 23:23]
  wire  ifu_io_inst_sram_req; // @[TopMain.scala 23:23]
  wire [63:0] ifu_io_inst_sram_addr; // @[TopMain.scala 23:23]
  wire [63:0] ifu_io_inst_sram_rdata; // @[TopMain.scala 23:23]
  wire  ifu_io_inst_sram_addr_ok; // @[TopMain.scala 23:23]
  wire  ifu_io_inst_sram_data_ok; // @[TopMain.scala 23:23]
  wire  idu_clock; // @[TopMain.scala 24:23]
  wire  idu_reset; // @[TopMain.scala 24:23]
  wire  idu_io_es_allowin; // @[TopMain.scala 24:23]
  wire  idu_io_ds_allowin; // @[TopMain.scala 24:23]
  wire  idu_io_fs_to_ds_valid; // @[TopMain.scala 24:23]
  wire  idu_io_ds_to_es_valid; // @[TopMain.scala 24:23]
  wire [31:0] idu_io_fd_bus_inst; // @[TopMain.scala 24:23]
  wire [31:0] idu_io_fd_bus_pc; // @[TopMain.scala 24:23]
  wire [7:0] idu_io_de_bus_OP; // @[TopMain.scala 24:23]
  wire  idu_io_de_bus_res_from_mem; // @[TopMain.scala 24:23]
  wire  idu_io_de_bus_gr_we; // @[TopMain.scala 24:23]
  wire  idu_io_de_bus_MemWen; // @[TopMain.scala 24:23]
  wire [7:0] idu_io_de_bus_wmask; // @[TopMain.scala 24:23]
  wire [31:0] idu_io_de_bus_ds_pc; // @[TopMain.scala 24:23]
  wire [4:0] idu_io_de_bus_dest; // @[TopMain.scala 24:23]
  wire [63:0] idu_io_de_bus_imm; // @[TopMain.scala 24:23]
  wire [63:0] idu_io_de_bus_rdata1; // @[TopMain.scala 24:23]
  wire [63:0] idu_io_de_bus_rdata2; // @[TopMain.scala 24:23]
  wire [2:0] idu_io_de_bus_ld_type; // @[TopMain.scala 24:23]
  wire [31:0] idu_io_de_bus_inst; // @[TopMain.scala 24:23]
  wire [63:0] idu_io_de_bus_csr_rdata; // @[TopMain.scala 24:23]
  wire [2:0] idu_io_de_bus_csr_waddr1; // @[TopMain.scala 24:23]
  wire [2:0] idu_io_de_bus_csr_waddr2; // @[TopMain.scala 24:23]
  wire [2:0] idu_io_de_bus_csr_raddr; // @[TopMain.scala 24:23]
  wire  idu_io_de_bus_csr_ren; // @[TopMain.scala 24:23]
  wire  idu_io_de_bus_csr_wen; // @[TopMain.scala 24:23]
  wire  idu_io_de_bus_eval; // @[TopMain.scala 24:23]
  wire  idu_io_de_bus_is_ld; // @[TopMain.scala 24:23]
  wire  idu_io_br_bus_br_taken; // @[TopMain.scala 24:23]
  wire [31:0] idu_io_br_bus_br_target; // @[TopMain.scala 24:23]
  wire  idu_io_br_bus_br_taken_cancel; // @[TopMain.scala 24:23]
  wire  idu_io_br_bus_rawblock; // @[TopMain.scala 24:23]
  wire [63:0] idu_io_br_bus_csr_rdata; // @[TopMain.scala 24:23]
  wire  idu_io_br_bus_eval; // @[TopMain.scala 24:23]
  wire  idu_io_br_bus_mret; // @[TopMain.scala 24:23]
  wire  idu_io_rf_bus_rf_we; // @[TopMain.scala 24:23]
  wire [4:0] idu_io_rf_bus_rf_waddr; // @[TopMain.scala 24:23]
  wire [63:0] idu_io_rf_bus_rf_wdata; // @[TopMain.scala 24:23]
  wire [31:0] idu_io_rf_bus_wb_pc; // @[TopMain.scala 24:23]
  wire [63:0] idu_io_rf_bus_csr_wdata; // @[TopMain.scala 24:23]
  wire  idu_io_rf_bus_csr_wen; // @[TopMain.scala 24:23]
  wire [2:0] idu_io_rf_bus_csr_waddr1; // @[TopMain.scala 24:23]
  wire [2:0] idu_io_rf_bus_csr_waddr2; // @[TopMain.scala 24:23]
  wire  idu_io_rf_bus_eval; // @[TopMain.scala 24:23]
  wire  idu_io_es_dest_valid_gr_we; // @[TopMain.scala 24:23]
  wire  idu_io_es_dest_valid_es_valid; // @[TopMain.scala 24:23]
  wire [4:0] idu_io_es_dest_valid_dest; // @[TopMain.scala 24:23]
  wire [63:0] idu_io_es_dest_valid_es_forward_data; // @[TopMain.scala 24:23]
  wire  idu_io_es_dest_valid_es_is_ld; // @[TopMain.scala 24:23]
  wire  idu_io_es_dest_valid_es_ready_go; // @[TopMain.scala 24:23]
  wire  idu_io_ms_dest_valid_gr_we; // @[TopMain.scala 24:23]
  wire  idu_io_ms_dest_valid_ms_valid; // @[TopMain.scala 24:23]
  wire [4:0] idu_io_ms_dest_valid_dest; // @[TopMain.scala 24:23]
  wire [63:0] idu_io_ms_dest_valid_ms_forward_data; // @[TopMain.scala 24:23]
  wire  idu_io_ms_dest_valid_ms_is_ld; // @[TopMain.scala 24:23]
  wire  idu_io_ws_dest_valid_gr_we; // @[TopMain.scala 24:23]
  wire  idu_io_ws_dest_valid_ws_valid; // @[TopMain.scala 24:23]
  wire [4:0] idu_io_ws_dest_valid_dest; // @[TopMain.scala 24:23]
  wire [63:0] idu_io_ws_dest_valid_ws_forward_data; // @[TopMain.scala 24:23]
  wire  exu_clock; // @[TopMain.scala 25:23]
  wire  exu_reset; // @[TopMain.scala 25:23]
  wire  exu_io_ms_allowin; // @[TopMain.scala 25:23]
  wire  exu_io_es_allowin; // @[TopMain.scala 25:23]
  wire  exu_io_ds_to_es_valid; // @[TopMain.scala 25:23]
  wire  exu_io_es_to_ms_valid; // @[TopMain.scala 25:23]
  wire [7:0] exu_io_de_bus_OP; // @[TopMain.scala 25:23]
  wire  exu_io_de_bus_res_from_mem; // @[TopMain.scala 25:23]
  wire  exu_io_de_bus_gr_we; // @[TopMain.scala 25:23]
  wire  exu_io_de_bus_MemWen; // @[TopMain.scala 25:23]
  wire [7:0] exu_io_de_bus_wmask; // @[TopMain.scala 25:23]
  wire [31:0] exu_io_de_bus_ds_pc; // @[TopMain.scala 25:23]
  wire [4:0] exu_io_de_bus_dest; // @[TopMain.scala 25:23]
  wire [63:0] exu_io_de_bus_imm; // @[TopMain.scala 25:23]
  wire [63:0] exu_io_de_bus_rdata1; // @[TopMain.scala 25:23]
  wire [63:0] exu_io_de_bus_rdata2; // @[TopMain.scala 25:23]
  wire [2:0] exu_io_de_bus_ld_type; // @[TopMain.scala 25:23]
  wire [31:0] exu_io_de_bus_inst; // @[TopMain.scala 25:23]
  wire [63:0] exu_io_de_bus_csr_rdata; // @[TopMain.scala 25:23]
  wire [2:0] exu_io_de_bus_csr_waddr1; // @[TopMain.scala 25:23]
  wire [2:0] exu_io_de_bus_csr_waddr2; // @[TopMain.scala 25:23]
  wire  exu_io_de_bus_csr_wen; // @[TopMain.scala 25:23]
  wire  exu_io_de_bus_eval; // @[TopMain.scala 25:23]
  wire  exu_io_de_bus_is_ld; // @[TopMain.scala 25:23]
  wire  exu_io_em_bus_res_from_mem; // @[TopMain.scala 25:23]
  wire  exu_io_em_bus_gr_we; // @[TopMain.scala 25:23]
  wire [4:0] exu_io_em_bus_dest; // @[TopMain.scala 25:23]
  wire [63:0] exu_io_em_bus_alu_result; // @[TopMain.scala 25:23]
  wire [31:0] exu_io_em_bus_ex_pc; // @[TopMain.scala 25:23]
  wire [2:0] exu_io_em_bus_ld_type; // @[TopMain.scala 25:23]
  wire [31:0] exu_io_em_bus_inst; // @[TopMain.scala 25:23]
  wire [63:0] exu_io_em_bus_csr_wdata; // @[TopMain.scala 25:23]
  wire  exu_io_em_bus_csr_wen; // @[TopMain.scala 25:23]
  wire [2:0] exu_io_em_bus_csr_waddr1; // @[TopMain.scala 25:23]
  wire [2:0] exu_io_em_bus_csr_waddr2; // @[TopMain.scala 25:23]
  wire  exu_io_em_bus_eval; // @[TopMain.scala 25:23]
  wire  exu_io_em_bus_is_ld; // @[TopMain.scala 25:23]
  wire  exu_io_em_bus_MemWen; // @[TopMain.scala 25:23]
  wire  exu_io_es_dest_valid_gr_we; // @[TopMain.scala 25:23]
  wire  exu_io_es_dest_valid_es_valid; // @[TopMain.scala 25:23]
  wire [4:0] exu_io_es_dest_valid_dest; // @[TopMain.scala 25:23]
  wire [63:0] exu_io_es_dest_valid_es_forward_data; // @[TopMain.scala 25:23]
  wire  exu_io_es_dest_valid_es_is_ld; // @[TopMain.scala 25:23]
  wire  exu_io_es_dest_valid_es_ready_go; // @[TopMain.scala 25:23]
  wire  exu_io_data_sram_req; // @[TopMain.scala 25:23]
  wire  exu_io_data_sram_we; // @[TopMain.scala 25:23]
  wire [31:0] exu_io_data_sram_addr; // @[TopMain.scala 25:23]
  wire [63:0] exu_io_data_sram_wdata; // @[TopMain.scala 25:23]
  wire [7:0] exu_io_data_sram_wmask; // @[TopMain.scala 25:23]
  wire  exu_io_data_sram_addr_ok; // @[TopMain.scala 25:23]
  wire  mem_clock; // @[TopMain.scala 26:23]
  wire  mem_reset; // @[TopMain.scala 26:23]
  wire  mem_io_ms_allowin; // @[TopMain.scala 26:23]
  wire  mem_io_es_to_ms_valid; // @[TopMain.scala 26:23]
  wire  mem_io_ms_to_ws_valid; // @[TopMain.scala 26:23]
  wire  mem_io_em_bus_res_from_mem; // @[TopMain.scala 26:23]
  wire  mem_io_em_bus_gr_we; // @[TopMain.scala 26:23]
  wire [4:0] mem_io_em_bus_dest; // @[TopMain.scala 26:23]
  wire [63:0] mem_io_em_bus_alu_result; // @[TopMain.scala 26:23]
  wire [31:0] mem_io_em_bus_ex_pc; // @[TopMain.scala 26:23]
  wire [2:0] mem_io_em_bus_ld_type; // @[TopMain.scala 26:23]
  wire [31:0] mem_io_em_bus_inst; // @[TopMain.scala 26:23]
  wire [63:0] mem_io_em_bus_csr_wdata; // @[TopMain.scala 26:23]
  wire  mem_io_em_bus_csr_wen; // @[TopMain.scala 26:23]
  wire [2:0] mem_io_em_bus_csr_waddr1; // @[TopMain.scala 26:23]
  wire [2:0] mem_io_em_bus_csr_waddr2; // @[TopMain.scala 26:23]
  wire  mem_io_em_bus_eval; // @[TopMain.scala 26:23]
  wire  mem_io_em_bus_is_ld; // @[TopMain.scala 26:23]
  wire  mem_io_em_bus_MemWen; // @[TopMain.scala 26:23]
  wire  mem_io_mw_bus_gr_we; // @[TopMain.scala 26:23]
  wire [4:0] mem_io_mw_bus_dest; // @[TopMain.scala 26:23]
  wire [63:0] mem_io_mw_bus_final_result; // @[TopMain.scala 26:23]
  wire [31:0] mem_io_mw_bus_mem_pc; // @[TopMain.scala 26:23]
  wire [31:0] mem_io_mw_bus_inst; // @[TopMain.scala 26:23]
  wire [63:0] mem_io_mw_bus_csr_wdata; // @[TopMain.scala 26:23]
  wire  mem_io_mw_bus_csr_wen; // @[TopMain.scala 26:23]
  wire [2:0] mem_io_mw_bus_csr_waddr1; // @[TopMain.scala 26:23]
  wire [2:0] mem_io_mw_bus_csr_waddr2; // @[TopMain.scala 26:23]
  wire  mem_io_mw_bus_eval; // @[TopMain.scala 26:23]
  wire  mem_io_ms_dest_valid_gr_we; // @[TopMain.scala 26:23]
  wire  mem_io_ms_dest_valid_ms_valid; // @[TopMain.scala 26:23]
  wire [4:0] mem_io_ms_dest_valid_dest; // @[TopMain.scala 26:23]
  wire [63:0] mem_io_ms_dest_valid_ms_forward_data; // @[TopMain.scala 26:23]
  wire  mem_io_ms_dest_valid_ms_is_ld; // @[TopMain.scala 26:23]
  wire [63:0] mem_io_data_sram_rdata; // @[TopMain.scala 26:23]
  wire [63:0] mem_io_mem_result; // @[TopMain.scala 26:23]
  wire [2:0] mem_io_ld_type; // @[TopMain.scala 26:23]
  wire  mem_io_data_sram_data_ok; // @[TopMain.scala 26:23]
  wire  wbu_clock; // @[TopMain.scala 27:23]
  wire  wbu_reset; // @[TopMain.scala 27:23]
  wire  wbu_io_ws_allowin; // @[TopMain.scala 27:23]
  wire  wbu_io_ms_to_ws_valid; // @[TopMain.scala 27:23]
  wire  wbu_io_mw_bus_gr_we; // @[TopMain.scala 27:23]
  wire [4:0] wbu_io_mw_bus_dest; // @[TopMain.scala 27:23]
  wire [63:0] wbu_io_mw_bus_final_result; // @[TopMain.scala 27:23]
  wire [31:0] wbu_io_mw_bus_mem_pc; // @[TopMain.scala 27:23]
  wire [31:0] wbu_io_mw_bus_inst; // @[TopMain.scala 27:23]
  wire [63:0] wbu_io_mw_bus_csr_wdata; // @[TopMain.scala 27:23]
  wire  wbu_io_mw_bus_csr_wen; // @[TopMain.scala 27:23]
  wire [2:0] wbu_io_mw_bus_csr_waddr1; // @[TopMain.scala 27:23]
  wire [2:0] wbu_io_mw_bus_csr_waddr2; // @[TopMain.scala 27:23]
  wire  wbu_io_mw_bus_eval; // @[TopMain.scala 27:23]
  wire  wbu_io_rf_bus_rf_we; // @[TopMain.scala 27:23]
  wire [4:0] wbu_io_rf_bus_rf_waddr; // @[TopMain.scala 27:23]
  wire [63:0] wbu_io_rf_bus_rf_wdata; // @[TopMain.scala 27:23]
  wire [31:0] wbu_io_rf_bus_wb_pc; // @[TopMain.scala 27:23]
  wire [63:0] wbu_io_rf_bus_csr_wdata; // @[TopMain.scala 27:23]
  wire  wbu_io_rf_bus_csr_wen; // @[TopMain.scala 27:23]
  wire [2:0] wbu_io_rf_bus_csr_waddr1; // @[TopMain.scala 27:23]
  wire [2:0] wbu_io_rf_bus_csr_waddr2; // @[TopMain.scala 27:23]
  wire  wbu_io_rf_bus_eval; // @[TopMain.scala 27:23]
  wire  wbu_io_in_WB; // @[TopMain.scala 27:23]
  wire  wbu_io_ws_dest_valid_gr_we; // @[TopMain.scala 27:23]
  wire  wbu_io_ws_dest_valid_ws_valid; // @[TopMain.scala 27:23]
  wire [4:0] wbu_io_ws_dest_valid_dest; // @[TopMain.scala 27:23]
  wire [63:0] wbu_io_ws_dest_valid_ws_forward_data; // @[TopMain.scala 27:23]
  wire [63:0] wbu_io_wb_pc; // @[TopMain.scala 27:23]
  wire [63:0] wbu_io_wb_inst; // @[TopMain.scala 27:23]
  wire [63:0] dpi_rf_0; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_1; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_2; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_3; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_4; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_5; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_6; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_7; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_8; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_9; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_10; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_11; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_12; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_13; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_14; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_15; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_16; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_17; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_18; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_19; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_20; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_21; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_22; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_23; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_24; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_25; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_26; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_27; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_28; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_29; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_30; // @[TopMain.scala 28:23]
  wire [63:0] dpi_rf_31; // @[TopMain.scala 28:23]
  wire [63:0] dpi_csr_0; // @[TopMain.scala 28:23]
  wire [63:0] dpi_csr_1; // @[TopMain.scala 28:23]
  wire [63:0] dpi_csr_2; // @[TopMain.scala 28:23]
  wire [63:0] dpi_csr_3; // @[TopMain.scala 28:23]
  wire [63:0] dpi_csr_4; // @[TopMain.scala 28:23]
  wire [31:0] dpi_inst; // @[TopMain.scala 28:23]
  wire [63:0] dpi_pc; // @[TopMain.scala 28:23]
  wire [31:0] dpi_eval; // @[TopMain.scala 28:23]
  wire  axi_clock; // @[TopMain.scala 29:23]
  wire  axi_reset; // @[TopMain.scala 29:23]
  wire [3:0] axi_io_arid; // @[TopMain.scala 29:23]
  wire [63:0] axi_io_araddr; // @[TopMain.scala 29:23]
  wire  axi_io_arvalid; // @[TopMain.scala 29:23]
  wire  axi_io_arready; // @[TopMain.scala 29:23]
  wire [63:0] axi_io_rdata; // @[TopMain.scala 29:23]
  wire  axi_io_rvalid; // @[TopMain.scala 29:23]
  wire  axi_io_rready; // @[TopMain.scala 29:23]
  wire [63:0] axi_io_awaddr; // @[TopMain.scala 29:23]
  wire  axi_io_awvalid; // @[TopMain.scala 29:23]
  wire  axi_io_awready; // @[TopMain.scala 29:23]
  wire [63:0] axi_io_wdata; // @[TopMain.scala 29:23]
  wire [7:0] axi_io_wstrb; // @[TopMain.scala 29:23]
  wire  axi_io_wvalid; // @[TopMain.scala 29:23]
  wire  axi_io_wready; // @[TopMain.scala 29:23]
  wire  axi_io_bvalid; // @[TopMain.scala 29:23]
  wire  axi_io_bready; // @[TopMain.scala 29:23]
  wire  axi_io_inst_sram_req; // @[TopMain.scala 29:23]
  wire [63:0] axi_io_inst_sram_addr; // @[TopMain.scala 29:23]
  wire [63:0] axi_io_inst_sram_rdata; // @[TopMain.scala 29:23]
  wire  axi_io_inst_sram_addr_ok; // @[TopMain.scala 29:23]
  wire  axi_io_inst_sram_data_ok; // @[TopMain.scala 29:23]
  wire  axi_io_data_sram_req; // @[TopMain.scala 29:23]
  wire  axi_io_data_sram_wr; // @[TopMain.scala 29:23]
  wire [7:0] axi_io_data_sram_wstrb; // @[TopMain.scala 29:23]
  wire [63:0] axi_io_data_sram_addr; // @[TopMain.scala 29:23]
  wire [63:0] axi_io_data_sram_wdata; // @[TopMain.scala 29:23]
  wire [63:0] axi_io_data_sram_rdata; // @[TopMain.scala 29:23]
  wire  axi_io_data_sram_addr_ok; // @[TopMain.scala 29:23]
  wire  axi_io_data_sram_data_ok; // @[TopMain.scala 29:23]
  wire  axi_mem_reset; // @[TopMain.scala 30:23]
  wire  axi_mem_clock; // @[TopMain.scala 30:23]
  wire [3:0] axi_mem_arid; // @[TopMain.scala 30:23]
  wire [63:0] axi_mem_araddr; // @[TopMain.scala 30:23]
  wire  axi_mem_arvalid; // @[TopMain.scala 30:23]
  wire  axi_mem_arready; // @[TopMain.scala 30:23]
  wire [63:0] axi_mem_rdata; // @[TopMain.scala 30:23]
  wire  axi_mem_rvalid; // @[TopMain.scala 30:23]
  wire  axi_mem_rready; // @[TopMain.scala 30:23]
  wire [3:0] axi_mem_awid; // @[TopMain.scala 30:23]
  wire [63:0] axi_mem_awaddr; // @[TopMain.scala 30:23]
  wire  axi_mem_awvalid; // @[TopMain.scala 30:23]
  wire  axi_mem_awready; // @[TopMain.scala 30:23]
  wire [63:0] axi_mem_wdata; // @[TopMain.scala 30:23]
  wire [7:0] axi_mem_wstrb; // @[TopMain.scala 30:23]
  wire  axi_mem_wvalid; // @[TopMain.scala 30:23]
  wire  axi_mem_wready; // @[TopMain.scala 30:23]
  wire  axi_mem_bvalid; // @[TopMain.scala 30:23]
  wire  axi_mem_bready; // @[TopMain.scala 30:23]
  IFU ifu ( // @[TopMain.scala 23:23]
    .clock(ifu_clock),
    .reset(ifu_reset),
    .io_reset(ifu_io_reset),
    .io_fd_bus_inst(ifu_io_fd_bus_inst),
    .io_fd_bus_pc(ifu_io_fd_bus_pc),
    .io_ds_allowin(ifu_io_ds_allowin),
    .io_fs_to_ds_valid(ifu_io_fs_to_ds_valid),
    .io_br_bus_br_taken(ifu_io_br_bus_br_taken),
    .io_br_bus_br_target(ifu_io_br_bus_br_target),
    .io_br_bus_br_taken_cancel(ifu_io_br_bus_br_taken_cancel),
    .io_br_bus_rawblock(ifu_io_br_bus_rawblock),
    .io_br_bus_csr_rdata(ifu_io_br_bus_csr_rdata),
    .io_br_bus_eval(ifu_io_br_bus_eval),
    .io_br_bus_mret(ifu_io_br_bus_mret),
    .io_inst_sram_req(ifu_io_inst_sram_req),
    .io_inst_sram_addr(ifu_io_inst_sram_addr),
    .io_inst_sram_rdata(ifu_io_inst_sram_rdata),
    .io_inst_sram_addr_ok(ifu_io_inst_sram_addr_ok),
    .io_inst_sram_data_ok(ifu_io_inst_sram_data_ok)
  );
  IDU idu ( // @[TopMain.scala 24:23]
    .clock(idu_clock),
    .reset(idu_reset),
    .io_es_allowin(idu_io_es_allowin),
    .io_ds_allowin(idu_io_ds_allowin),
    .io_fs_to_ds_valid(idu_io_fs_to_ds_valid),
    .io_ds_to_es_valid(idu_io_ds_to_es_valid),
    .io_fd_bus_inst(idu_io_fd_bus_inst),
    .io_fd_bus_pc(idu_io_fd_bus_pc),
    .io_de_bus_OP(idu_io_de_bus_OP),
    .io_de_bus_res_from_mem(idu_io_de_bus_res_from_mem),
    .io_de_bus_gr_we(idu_io_de_bus_gr_we),
    .io_de_bus_MemWen(idu_io_de_bus_MemWen),
    .io_de_bus_wmask(idu_io_de_bus_wmask),
    .io_de_bus_ds_pc(idu_io_de_bus_ds_pc),
    .io_de_bus_dest(idu_io_de_bus_dest),
    .io_de_bus_imm(idu_io_de_bus_imm),
    .io_de_bus_rdata1(idu_io_de_bus_rdata1),
    .io_de_bus_rdata2(idu_io_de_bus_rdata2),
    .io_de_bus_ld_type(idu_io_de_bus_ld_type),
    .io_de_bus_inst(idu_io_de_bus_inst),
    .io_de_bus_csr_rdata(idu_io_de_bus_csr_rdata),
    .io_de_bus_csr_waddr1(idu_io_de_bus_csr_waddr1),
    .io_de_bus_csr_waddr2(idu_io_de_bus_csr_waddr2),
    .io_de_bus_csr_raddr(idu_io_de_bus_csr_raddr),
    .io_de_bus_csr_ren(idu_io_de_bus_csr_ren),
    .io_de_bus_csr_wen(idu_io_de_bus_csr_wen),
    .io_de_bus_eval(idu_io_de_bus_eval),
    .io_de_bus_is_ld(idu_io_de_bus_is_ld),
    .io_br_bus_br_taken(idu_io_br_bus_br_taken),
    .io_br_bus_br_target(idu_io_br_bus_br_target),
    .io_br_bus_br_taken_cancel(idu_io_br_bus_br_taken_cancel),
    .io_br_bus_rawblock(idu_io_br_bus_rawblock),
    .io_br_bus_csr_rdata(idu_io_br_bus_csr_rdata),
    .io_br_bus_eval(idu_io_br_bus_eval),
    .io_br_bus_mret(idu_io_br_bus_mret),
    .io_rf_bus_rf_we(idu_io_rf_bus_rf_we),
    .io_rf_bus_rf_waddr(idu_io_rf_bus_rf_waddr),
    .io_rf_bus_rf_wdata(idu_io_rf_bus_rf_wdata),
    .io_rf_bus_wb_pc(idu_io_rf_bus_wb_pc),
    .io_rf_bus_csr_wdata(idu_io_rf_bus_csr_wdata),
    .io_rf_bus_csr_wen(idu_io_rf_bus_csr_wen),
    .io_rf_bus_csr_waddr1(idu_io_rf_bus_csr_waddr1),
    .io_rf_bus_csr_waddr2(idu_io_rf_bus_csr_waddr2),
    .io_rf_bus_eval(idu_io_rf_bus_eval),
    .io_es_dest_valid_gr_we(idu_io_es_dest_valid_gr_we),
    .io_es_dest_valid_es_valid(idu_io_es_dest_valid_es_valid),
    .io_es_dest_valid_dest(idu_io_es_dest_valid_dest),
    .io_es_dest_valid_es_forward_data(idu_io_es_dest_valid_es_forward_data),
    .io_es_dest_valid_es_is_ld(idu_io_es_dest_valid_es_is_ld),
    .io_es_dest_valid_es_ready_go(idu_io_es_dest_valid_es_ready_go),
    .io_ms_dest_valid_gr_we(idu_io_ms_dest_valid_gr_we),
    .io_ms_dest_valid_ms_valid(idu_io_ms_dest_valid_ms_valid),
    .io_ms_dest_valid_dest(idu_io_ms_dest_valid_dest),
    .io_ms_dest_valid_ms_forward_data(idu_io_ms_dest_valid_ms_forward_data),
    .io_ms_dest_valid_ms_is_ld(idu_io_ms_dest_valid_ms_is_ld),
    .io_ws_dest_valid_gr_we(idu_io_ws_dest_valid_gr_we),
    .io_ws_dest_valid_ws_valid(idu_io_ws_dest_valid_ws_valid),
    .io_ws_dest_valid_dest(idu_io_ws_dest_valid_dest),
    .io_ws_dest_valid_ws_forward_data(idu_io_ws_dest_valid_ws_forward_data)
  );
  EXU exu ( // @[TopMain.scala 25:23]
    .clock(exu_clock),
    .reset(exu_reset),
    .io_ms_allowin(exu_io_ms_allowin),
    .io_es_allowin(exu_io_es_allowin),
    .io_ds_to_es_valid(exu_io_ds_to_es_valid),
    .io_es_to_ms_valid(exu_io_es_to_ms_valid),
    .io_de_bus_OP(exu_io_de_bus_OP),
    .io_de_bus_res_from_mem(exu_io_de_bus_res_from_mem),
    .io_de_bus_gr_we(exu_io_de_bus_gr_we),
    .io_de_bus_MemWen(exu_io_de_bus_MemWen),
    .io_de_bus_wmask(exu_io_de_bus_wmask),
    .io_de_bus_ds_pc(exu_io_de_bus_ds_pc),
    .io_de_bus_dest(exu_io_de_bus_dest),
    .io_de_bus_imm(exu_io_de_bus_imm),
    .io_de_bus_rdata1(exu_io_de_bus_rdata1),
    .io_de_bus_rdata2(exu_io_de_bus_rdata2),
    .io_de_bus_ld_type(exu_io_de_bus_ld_type),
    .io_de_bus_inst(exu_io_de_bus_inst),
    .io_de_bus_csr_rdata(exu_io_de_bus_csr_rdata),
    .io_de_bus_csr_waddr1(exu_io_de_bus_csr_waddr1),
    .io_de_bus_csr_waddr2(exu_io_de_bus_csr_waddr2),
    .io_de_bus_csr_wen(exu_io_de_bus_csr_wen),
    .io_de_bus_eval(exu_io_de_bus_eval),
    .io_de_bus_is_ld(exu_io_de_bus_is_ld),
    .io_em_bus_res_from_mem(exu_io_em_bus_res_from_mem),
    .io_em_bus_gr_we(exu_io_em_bus_gr_we),
    .io_em_bus_dest(exu_io_em_bus_dest),
    .io_em_bus_alu_result(exu_io_em_bus_alu_result),
    .io_em_bus_ex_pc(exu_io_em_bus_ex_pc),
    .io_em_bus_ld_type(exu_io_em_bus_ld_type),
    .io_em_bus_inst(exu_io_em_bus_inst),
    .io_em_bus_csr_wdata(exu_io_em_bus_csr_wdata),
    .io_em_bus_csr_wen(exu_io_em_bus_csr_wen),
    .io_em_bus_csr_waddr1(exu_io_em_bus_csr_waddr1),
    .io_em_bus_csr_waddr2(exu_io_em_bus_csr_waddr2),
    .io_em_bus_eval(exu_io_em_bus_eval),
    .io_em_bus_is_ld(exu_io_em_bus_is_ld),
    .io_em_bus_MemWen(exu_io_em_bus_MemWen),
    .io_es_dest_valid_gr_we(exu_io_es_dest_valid_gr_we),
    .io_es_dest_valid_es_valid(exu_io_es_dest_valid_es_valid),
    .io_es_dest_valid_dest(exu_io_es_dest_valid_dest),
    .io_es_dest_valid_es_forward_data(exu_io_es_dest_valid_es_forward_data),
    .io_es_dest_valid_es_is_ld(exu_io_es_dest_valid_es_is_ld),
    .io_es_dest_valid_es_ready_go(exu_io_es_dest_valid_es_ready_go),
    .io_data_sram_req(exu_io_data_sram_req),
    .io_data_sram_we(exu_io_data_sram_we),
    .io_data_sram_addr(exu_io_data_sram_addr),
    .io_data_sram_wdata(exu_io_data_sram_wdata),
    .io_data_sram_wmask(exu_io_data_sram_wmask),
    .io_data_sram_addr_ok(exu_io_data_sram_addr_ok)
  );
  MEM mem ( // @[TopMain.scala 26:23]
    .clock(mem_clock),
    .reset(mem_reset),
    .io_ms_allowin(mem_io_ms_allowin),
    .io_es_to_ms_valid(mem_io_es_to_ms_valid),
    .io_ms_to_ws_valid(mem_io_ms_to_ws_valid),
    .io_em_bus_res_from_mem(mem_io_em_bus_res_from_mem),
    .io_em_bus_gr_we(mem_io_em_bus_gr_we),
    .io_em_bus_dest(mem_io_em_bus_dest),
    .io_em_bus_alu_result(mem_io_em_bus_alu_result),
    .io_em_bus_ex_pc(mem_io_em_bus_ex_pc),
    .io_em_bus_ld_type(mem_io_em_bus_ld_type),
    .io_em_bus_inst(mem_io_em_bus_inst),
    .io_em_bus_csr_wdata(mem_io_em_bus_csr_wdata),
    .io_em_bus_csr_wen(mem_io_em_bus_csr_wen),
    .io_em_bus_csr_waddr1(mem_io_em_bus_csr_waddr1),
    .io_em_bus_csr_waddr2(mem_io_em_bus_csr_waddr2),
    .io_em_bus_eval(mem_io_em_bus_eval),
    .io_em_bus_is_ld(mem_io_em_bus_is_ld),
    .io_em_bus_MemWen(mem_io_em_bus_MemWen),
    .io_mw_bus_gr_we(mem_io_mw_bus_gr_we),
    .io_mw_bus_dest(mem_io_mw_bus_dest),
    .io_mw_bus_final_result(mem_io_mw_bus_final_result),
    .io_mw_bus_mem_pc(mem_io_mw_bus_mem_pc),
    .io_mw_bus_inst(mem_io_mw_bus_inst),
    .io_mw_bus_csr_wdata(mem_io_mw_bus_csr_wdata),
    .io_mw_bus_csr_wen(mem_io_mw_bus_csr_wen),
    .io_mw_bus_csr_waddr1(mem_io_mw_bus_csr_waddr1),
    .io_mw_bus_csr_waddr2(mem_io_mw_bus_csr_waddr2),
    .io_mw_bus_eval(mem_io_mw_bus_eval),
    .io_ms_dest_valid_gr_we(mem_io_ms_dest_valid_gr_we),
    .io_ms_dest_valid_ms_valid(mem_io_ms_dest_valid_ms_valid),
    .io_ms_dest_valid_dest(mem_io_ms_dest_valid_dest),
    .io_ms_dest_valid_ms_forward_data(mem_io_ms_dest_valid_ms_forward_data),
    .io_ms_dest_valid_ms_is_ld(mem_io_ms_dest_valid_ms_is_ld),
    .io_data_sram_rdata(mem_io_data_sram_rdata),
    .io_mem_result(mem_io_mem_result),
    .io_ld_type(mem_io_ld_type),
    .io_data_sram_data_ok(mem_io_data_sram_data_ok)
  );
  WBU wbu ( // @[TopMain.scala 27:23]
    .clock(wbu_clock),
    .reset(wbu_reset),
    .io_ws_allowin(wbu_io_ws_allowin),
    .io_ms_to_ws_valid(wbu_io_ms_to_ws_valid),
    .io_mw_bus_gr_we(wbu_io_mw_bus_gr_we),
    .io_mw_bus_dest(wbu_io_mw_bus_dest),
    .io_mw_bus_final_result(wbu_io_mw_bus_final_result),
    .io_mw_bus_mem_pc(wbu_io_mw_bus_mem_pc),
    .io_mw_bus_inst(wbu_io_mw_bus_inst),
    .io_mw_bus_csr_wdata(wbu_io_mw_bus_csr_wdata),
    .io_mw_bus_csr_wen(wbu_io_mw_bus_csr_wen),
    .io_mw_bus_csr_waddr1(wbu_io_mw_bus_csr_waddr1),
    .io_mw_bus_csr_waddr2(wbu_io_mw_bus_csr_waddr2),
    .io_mw_bus_eval(wbu_io_mw_bus_eval),
    .io_rf_bus_rf_we(wbu_io_rf_bus_rf_we),
    .io_rf_bus_rf_waddr(wbu_io_rf_bus_rf_waddr),
    .io_rf_bus_rf_wdata(wbu_io_rf_bus_rf_wdata),
    .io_rf_bus_wb_pc(wbu_io_rf_bus_wb_pc),
    .io_rf_bus_csr_wdata(wbu_io_rf_bus_csr_wdata),
    .io_rf_bus_csr_wen(wbu_io_rf_bus_csr_wen),
    .io_rf_bus_csr_waddr1(wbu_io_rf_bus_csr_waddr1),
    .io_rf_bus_csr_waddr2(wbu_io_rf_bus_csr_waddr2),
    .io_rf_bus_eval(wbu_io_rf_bus_eval),
    .io_in_WB(wbu_io_in_WB),
    .io_ws_dest_valid_gr_we(wbu_io_ws_dest_valid_gr_we),
    .io_ws_dest_valid_ws_valid(wbu_io_ws_dest_valid_ws_valid),
    .io_ws_dest_valid_dest(wbu_io_ws_dest_valid_dest),
    .io_ws_dest_valid_ws_forward_data(wbu_io_ws_dest_valid_ws_forward_data),
    .io_wb_pc(wbu_io_wb_pc),
    .io_wb_inst(wbu_io_wb_inst)
  );
  DPI dpi ( // @[TopMain.scala 28:23]
    .rf_0(dpi_rf_0),
    .rf_1(dpi_rf_1),
    .rf_2(dpi_rf_2),
    .rf_3(dpi_rf_3),
    .rf_4(dpi_rf_4),
    .rf_5(dpi_rf_5),
    .rf_6(dpi_rf_6),
    .rf_7(dpi_rf_7),
    .rf_8(dpi_rf_8),
    .rf_9(dpi_rf_9),
    .rf_10(dpi_rf_10),
    .rf_11(dpi_rf_11),
    .rf_12(dpi_rf_12),
    .rf_13(dpi_rf_13),
    .rf_14(dpi_rf_14),
    .rf_15(dpi_rf_15),
    .rf_16(dpi_rf_16),
    .rf_17(dpi_rf_17),
    .rf_18(dpi_rf_18),
    .rf_19(dpi_rf_19),
    .rf_20(dpi_rf_20),
    .rf_21(dpi_rf_21),
    .rf_22(dpi_rf_22),
    .rf_23(dpi_rf_23),
    .rf_24(dpi_rf_24),
    .rf_25(dpi_rf_25),
    .rf_26(dpi_rf_26),
    .rf_27(dpi_rf_27),
    .rf_28(dpi_rf_28),
    .rf_29(dpi_rf_29),
    .rf_30(dpi_rf_30),
    .rf_31(dpi_rf_31),
    .csr_0(dpi_csr_0),
    .csr_1(dpi_csr_1),
    .csr_2(dpi_csr_2),
    .csr_3(dpi_csr_3),
    .csr_4(dpi_csr_4),
    .inst(dpi_inst),
    .pc(dpi_pc),
    .eval(dpi_eval)
  );
  AXI axi ( // @[TopMain.scala 29:23]
    .clock(axi_clock),
    .reset(axi_reset),
    .io_arid(axi_io_arid),
    .io_araddr(axi_io_araddr),
    .io_arvalid(axi_io_arvalid),
    .io_arready(axi_io_arready),
    .io_rdata(axi_io_rdata),
    .io_rvalid(axi_io_rvalid),
    .io_rready(axi_io_rready),
    .io_awaddr(axi_io_awaddr),
    .io_awvalid(axi_io_awvalid),
    .io_awready(axi_io_awready),
    .io_wdata(axi_io_wdata),
    .io_wstrb(axi_io_wstrb),
    .io_wvalid(axi_io_wvalid),
    .io_wready(axi_io_wready),
    .io_bvalid(axi_io_bvalid),
    .io_bready(axi_io_bready),
    .io_inst_sram_req(axi_io_inst_sram_req),
    .io_inst_sram_addr(axi_io_inst_sram_addr),
    .io_inst_sram_rdata(axi_io_inst_sram_rdata),
    .io_inst_sram_addr_ok(axi_io_inst_sram_addr_ok),
    .io_inst_sram_data_ok(axi_io_inst_sram_data_ok),
    .io_data_sram_req(axi_io_data_sram_req),
    .io_data_sram_wr(axi_io_data_sram_wr),
    .io_data_sram_wstrb(axi_io_data_sram_wstrb),
    .io_data_sram_addr(axi_io_data_sram_addr),
    .io_data_sram_wdata(axi_io_data_sram_wdata),
    .io_data_sram_rdata(axi_io_data_sram_rdata),
    .io_data_sram_addr_ok(axi_io_data_sram_addr_ok),
    .io_data_sram_data_ok(axi_io_data_sram_data_ok)
  );
  AXI_mem axi_mem ( // @[TopMain.scala 30:23]
    .reset(axi_mem_reset),
    .clock(axi_mem_clock),
    .arid(axi_mem_arid),
    .araddr(axi_mem_araddr),
    .arvalid(axi_mem_arvalid),
    .arready(axi_mem_arready),
    .rdata(axi_mem_rdata),
    .rvalid(axi_mem_rvalid),
    .rready(axi_mem_rready),
    .awid(axi_mem_awid),
    .awaddr(axi_mem_awaddr),
    .awvalid(axi_mem_awvalid),
    .awready(axi_mem_awready),
    .wdata(axi_mem_wdata),
    .wstrb(axi_mem_wstrb),
    .wvalid(axi_mem_wvalid),
    .wready(axi_mem_wready),
    .bvalid(axi_mem_bvalid),
    .bready(axi_mem_bready)
  );
  assign io_fs_pc = ifu_io_fd_bus_pc; // @[TopMain.scala 86:17]
  assign io_op = idu_io_de_bus_OP[6:0]; // @[TopMain.scala 87:17]
  assign io_in_WB = wbu_io_in_WB; // @[TopMain.scala 88:17]
  assign io_wb_pc = wbu_io_wb_pc[31:0]; // @[TopMain.scala 89:17]
  assign io_wb_inst = wbu_io_wb_inst[31:0]; // @[TopMain.scala 90:17]
  assign io_ds_pc = idu_io_de_bus_ds_pc; // @[TopMain.scala 91:17]
  assign io_mem_result = mem_io_mem_result; // @[TopMain.scala 92:17]
  assign io_ld_type = mem_io_ld_type; // @[TopMain.scala 93:17]
  assign ifu_clock = clock;
  assign ifu_reset = reset;
  assign ifu_io_reset = reset; // @[TopMain.scala 34:16]
  assign ifu_io_ds_allowin = idu_io_ds_allowin; // @[TopMain.scala 35:21]
  assign ifu_io_br_bus_br_taken = idu_io_br_bus_br_taken; // @[TopMain.scala 36:17]
  assign ifu_io_br_bus_br_target = idu_io_br_bus_br_target; // @[TopMain.scala 36:17]
  assign ifu_io_br_bus_br_taken_cancel = idu_io_br_bus_br_taken_cancel; // @[TopMain.scala 36:17]
  assign ifu_io_br_bus_rawblock = idu_io_br_bus_rawblock; // @[TopMain.scala 36:17]
  assign ifu_io_br_bus_csr_rdata = idu_io_br_bus_csr_rdata; // @[TopMain.scala 36:17]
  assign ifu_io_br_bus_eval = idu_io_br_bus_eval; // @[TopMain.scala 36:17]
  assign ifu_io_br_bus_mret = idu_io_br_bus_mret; // @[TopMain.scala 36:17]
  assign ifu_io_inst_sram_rdata = axi_io_inst_sram_rdata; // @[TopMain.scala 40:26]
  assign ifu_io_inst_sram_addr_ok = axi_io_inst_sram_addr_ok; // @[TopMain.scala 39:28]
  assign ifu_io_inst_sram_data_ok = axi_io_inst_sram_data_ok; // @[TopMain.scala 38:28]
  assign idu_clock = clock;
  assign idu_reset = reset;
  assign idu_io_es_allowin = exu_io_es_allowin; // @[TopMain.scala 51:21]
  assign idu_io_fs_to_ds_valid = ifu_io_fs_to_ds_valid; // @[TopMain.scala 52:25]
  assign idu_io_fd_bus_inst = ifu_io_fd_bus_inst; // @[TopMain.scala 53:17]
  assign idu_io_fd_bus_pc = ifu_io_fd_bus_pc; // @[TopMain.scala 53:17]
  assign idu_io_rf_bus_rf_we = wbu_io_rf_bus_rf_we; // @[TopMain.scala 54:17]
  assign idu_io_rf_bus_rf_waddr = wbu_io_rf_bus_rf_waddr; // @[TopMain.scala 54:17]
  assign idu_io_rf_bus_rf_wdata = wbu_io_rf_bus_rf_wdata; // @[TopMain.scala 54:17]
  assign idu_io_rf_bus_wb_pc = wbu_io_rf_bus_wb_pc; // @[TopMain.scala 54:17]
  assign idu_io_rf_bus_csr_wdata = wbu_io_rf_bus_csr_wdata; // @[TopMain.scala 54:17]
  assign idu_io_rf_bus_csr_wen = wbu_io_rf_bus_csr_wen; // @[TopMain.scala 54:17]
  assign idu_io_rf_bus_csr_waddr1 = wbu_io_rf_bus_csr_waddr1; // @[TopMain.scala 54:17]
  assign idu_io_rf_bus_csr_waddr2 = wbu_io_rf_bus_csr_waddr2; // @[TopMain.scala 54:17]
  assign idu_io_rf_bus_eval = wbu_io_rf_bus_eval; // @[TopMain.scala 54:17]
  assign idu_io_es_dest_valid_gr_we = exu_io_es_dest_valid_gr_we; // @[TopMain.scala 55:24]
  assign idu_io_es_dest_valid_es_valid = exu_io_es_dest_valid_es_valid; // @[TopMain.scala 55:24]
  assign idu_io_es_dest_valid_dest = exu_io_es_dest_valid_dest; // @[TopMain.scala 55:24]
  assign idu_io_es_dest_valid_es_forward_data = exu_io_es_dest_valid_es_forward_data; // @[TopMain.scala 55:24]
  assign idu_io_es_dest_valid_es_is_ld = exu_io_es_dest_valid_es_is_ld; // @[TopMain.scala 55:24]
  assign idu_io_es_dest_valid_es_ready_go = exu_io_es_dest_valid_es_ready_go; // @[TopMain.scala 55:24]
  assign idu_io_ms_dest_valid_gr_we = mem_io_ms_dest_valid_gr_we; // @[TopMain.scala 56:24]
  assign idu_io_ms_dest_valid_ms_valid = mem_io_ms_dest_valid_ms_valid; // @[TopMain.scala 56:24]
  assign idu_io_ms_dest_valid_dest = mem_io_ms_dest_valid_dest; // @[TopMain.scala 56:24]
  assign idu_io_ms_dest_valid_ms_forward_data = mem_io_ms_dest_valid_ms_forward_data; // @[TopMain.scala 56:24]
  assign idu_io_ms_dest_valid_ms_is_ld = mem_io_ms_dest_valid_ms_is_ld; // @[TopMain.scala 56:24]
  assign idu_io_ws_dest_valid_gr_we = wbu_io_ws_dest_valid_gr_we; // @[TopMain.scala 57:24]
  assign idu_io_ws_dest_valid_ws_valid = wbu_io_ws_dest_valid_ws_valid; // @[TopMain.scala 57:24]
  assign idu_io_ws_dest_valid_dest = wbu_io_ws_dest_valid_dest; // @[TopMain.scala 57:24]
  assign idu_io_ws_dest_valid_ws_forward_data = wbu_io_ws_dest_valid_ws_forward_data; // @[TopMain.scala 57:24]
  assign exu_clock = clock;
  assign exu_reset = reset;
  assign exu_io_ms_allowin = mem_io_ms_allowin; // @[TopMain.scala 61:21]
  assign exu_io_ds_to_es_valid = idu_io_ds_to_es_valid; // @[TopMain.scala 62:25]
  assign exu_io_de_bus_OP = idu_io_de_bus_OP; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_res_from_mem = idu_io_de_bus_res_from_mem; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_gr_we = idu_io_de_bus_gr_we; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_MemWen = idu_io_de_bus_MemWen; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_wmask = idu_io_de_bus_wmask; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_ds_pc = idu_io_de_bus_ds_pc; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_dest = idu_io_de_bus_dest; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_imm = idu_io_de_bus_imm; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_rdata1 = idu_io_de_bus_rdata1; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_rdata2 = idu_io_de_bus_rdata2; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_ld_type = idu_io_de_bus_ld_type; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_inst = idu_io_de_bus_inst; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_csr_rdata = idu_io_de_bus_csr_rdata; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_csr_waddr1 = idu_io_de_bus_csr_waddr1; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_csr_waddr2 = idu_io_de_bus_csr_waddr2; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_csr_wen = idu_io_de_bus_csr_wen; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_eval = idu_io_de_bus_eval; // @[TopMain.scala 63:17]
  assign exu_io_de_bus_is_ld = idu_io_de_bus_is_ld; // @[TopMain.scala 63:17]
  assign exu_io_data_sram_addr_ok = axi_io_data_sram_addr_ok; // @[TopMain.scala 64:28]
  assign mem_clock = clock;
  assign mem_reset = reset;
  assign mem_io_es_to_ms_valid = exu_io_es_to_ms_valid; // @[TopMain.scala 68:25]
  assign mem_io_em_bus_res_from_mem = exu_io_em_bus_res_from_mem; // @[TopMain.scala 69:17]
  assign mem_io_em_bus_gr_we = exu_io_em_bus_gr_we; // @[TopMain.scala 69:17]
  assign mem_io_em_bus_dest = exu_io_em_bus_dest; // @[TopMain.scala 69:17]
  assign mem_io_em_bus_alu_result = exu_io_em_bus_alu_result; // @[TopMain.scala 69:17]
  assign mem_io_em_bus_ex_pc = exu_io_em_bus_ex_pc; // @[TopMain.scala 69:17]
  assign mem_io_em_bus_ld_type = exu_io_em_bus_ld_type; // @[TopMain.scala 69:17]
  assign mem_io_em_bus_inst = exu_io_em_bus_inst; // @[TopMain.scala 69:17]
  assign mem_io_em_bus_csr_wdata = exu_io_em_bus_csr_wdata; // @[TopMain.scala 69:17]
  assign mem_io_em_bus_csr_wen = exu_io_em_bus_csr_wen; // @[TopMain.scala 69:17]
  assign mem_io_em_bus_csr_waddr1 = exu_io_em_bus_csr_waddr1; // @[TopMain.scala 69:17]
  assign mem_io_em_bus_csr_waddr2 = exu_io_em_bus_csr_waddr2; // @[TopMain.scala 69:17]
  assign mem_io_em_bus_eval = exu_io_em_bus_eval; // @[TopMain.scala 69:17]
  assign mem_io_em_bus_is_ld = exu_io_em_bus_is_ld; // @[TopMain.scala 69:17]
  assign mem_io_em_bus_MemWen = exu_io_em_bus_MemWen; // @[TopMain.scala 69:17]
  assign mem_io_data_sram_rdata = axi_io_data_sram_rdata; // @[TopMain.scala 71:26]
  assign mem_io_data_sram_data_ok = axi_io_data_sram_data_ok; // @[TopMain.scala 70:28]
  assign wbu_clock = clock;
  assign wbu_reset = reset;
  assign wbu_io_ms_to_ws_valid = mem_io_ms_to_ws_valid; // @[TopMain.scala 82:25]
  assign wbu_io_mw_bus_gr_we = mem_io_mw_bus_gr_we; // @[TopMain.scala 83:17]
  assign wbu_io_mw_bus_dest = mem_io_mw_bus_dest; // @[TopMain.scala 83:17]
  assign wbu_io_mw_bus_final_result = mem_io_mw_bus_final_result; // @[TopMain.scala 83:17]
  assign wbu_io_mw_bus_mem_pc = mem_io_mw_bus_mem_pc; // @[TopMain.scala 83:17]
  assign wbu_io_mw_bus_inst = mem_io_mw_bus_inst; // @[TopMain.scala 83:17]
  assign wbu_io_mw_bus_csr_wdata = mem_io_mw_bus_csr_wdata; // @[TopMain.scala 83:17]
  assign wbu_io_mw_bus_csr_wen = mem_io_mw_bus_csr_wen; // @[TopMain.scala 83:17]
  assign wbu_io_mw_bus_csr_waddr1 = mem_io_mw_bus_csr_waddr1; // @[TopMain.scala 83:17]
  assign wbu_io_mw_bus_csr_waddr2 = mem_io_mw_bus_csr_waddr2; // @[TopMain.scala 83:17]
  assign wbu_io_mw_bus_eval = mem_io_mw_bus_eval; // @[TopMain.scala 83:17]
  assign dpi_rf_0 = 64'h0;
  assign dpi_rf_1 = 64'h0;
  assign dpi_rf_2 = 64'h0;
  assign dpi_rf_3 = 64'h0;
  assign dpi_rf_4 = 64'h0;
  assign dpi_rf_5 = 64'h0;
  assign dpi_rf_6 = 64'h0;
  assign dpi_rf_7 = 64'h0;
  assign dpi_rf_8 = 64'h0;
  assign dpi_rf_9 = 64'h0;
  assign dpi_rf_10 = 64'h0;
  assign dpi_rf_11 = 64'h0;
  assign dpi_rf_12 = 64'h0;
  assign dpi_rf_13 = 64'h0;
  assign dpi_rf_14 = 64'h0;
  assign dpi_rf_15 = 64'h0;
  assign dpi_rf_16 = 64'h0;
  assign dpi_rf_17 = 64'h0;
  assign dpi_rf_18 = 64'h0;
  assign dpi_rf_19 = 64'h0;
  assign dpi_rf_20 = 64'h0;
  assign dpi_rf_21 = 64'h0;
  assign dpi_rf_22 = 64'h0;
  assign dpi_rf_23 = 64'h0;
  assign dpi_rf_24 = 64'h0;
  assign dpi_rf_25 = 64'h0;
  assign dpi_rf_26 = 64'h0;
  assign dpi_rf_27 = 64'h0;
  assign dpi_rf_28 = 64'h0;
  assign dpi_rf_29 = 64'h0;
  assign dpi_rf_30 = 64'h0;
  assign dpi_rf_31 = 64'h0;
  assign dpi_csr_0 = 64'h0;
  assign dpi_csr_1 = 64'h0;
  assign dpi_csr_2 = 64'h0;
  assign dpi_csr_3 = 64'h0;
  assign dpi_csr_4 = 64'h0;
  assign dpi_inst = 32'h0;
  assign dpi_pc = 64'h0;
  assign dpi_eval = 32'h0;
  assign axi_clock = clock;
  assign axi_reset = reset;
  assign axi_io_arready = axi_mem_arready; // @[TopMain.scala 106:18]
  assign axi_io_rdata = axi_mem_rdata; // @[TopMain.scala 107:16]
  assign axi_io_rvalid = axi_mem_rvalid; // @[TopMain.scala 108:17]
  assign axi_io_awready = axi_mem_awready; // @[TopMain.scala 110:18]
  assign axi_io_wready = axi_mem_wready; // @[TopMain.scala 112:17]
  assign axi_io_bvalid = axi_mem_bvalid; // @[TopMain.scala 114:17]
  assign axi_io_inst_sram_req = ifu_io_inst_sram_req; // @[TopMain.scala 96:24]
  assign axi_io_inst_sram_addr = ifu_io_inst_sram_addr; // @[TopMain.scala 98:25]
  assign axi_io_data_sram_req = exu_io_data_sram_req; // @[TopMain.scala 100:24]
  assign axi_io_data_sram_wr = exu_io_data_sram_we; // @[TopMain.scala 101:23]
  assign axi_io_data_sram_wstrb = exu_io_data_sram_wmask; // @[TopMain.scala 104:26]
  assign axi_io_data_sram_addr = {{32'd0}, exu_io_data_sram_addr}; // @[TopMain.scala 102:25]
  assign axi_io_data_sram_wdata = exu_io_data_sram_wdata; // @[TopMain.scala 103:26]
  assign axi_mem_reset = reset; // @[TopMain.scala 117:20]
  assign axi_mem_clock = clock; // @[TopMain.scala 118:20]
  assign axi_mem_arid = axi_io_arid; // @[TopMain.scala 119:19]
  assign axi_mem_araddr = axi_io_araddr; // @[TopMain.scala 120:21]
  assign axi_mem_arvalid = axi_io_arvalid; // @[TopMain.scala 121:22]
  assign axi_mem_rready = axi_io_rready; // @[TopMain.scala 123:21]
  assign axi_mem_awid = 4'h1; // @[TopMain.scala 125:19]
  assign axi_mem_awaddr = axi_io_awaddr; // @[TopMain.scala 126:21]
  assign axi_mem_awvalid = axi_io_awvalid; // @[TopMain.scala 127:22]
  assign axi_mem_wdata = axi_io_wdata; // @[TopMain.scala 129:20]
  assign axi_mem_wstrb = axi_io_wstrb; // @[TopMain.scala 130:20]
  assign axi_mem_wvalid = axi_io_wvalid; // @[TopMain.scala 131:21]
  assign axi_mem_bready = axi_io_bready; // @[TopMain.scala 133:21]
endmodule
