module IFU(
  input         clock,
  input         reset,
  output [31:0] io_fd_bus_pc,
  input  [63:0] io_br_bus_csr_rdata,
  input         io_br_bus_eval,
  input         io_br_bus_mret
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] fs_pc; // @[IFU.scala 30:24]
  wire [63:0] _seq_pc_T_1 = fs_pc + 64'h4; // @[IFU.scala 52:19]
  wire [63:0] _nextpc_T_1 = io_br_bus_csr_rdata + 64'h4; // @[IFU.scala 53:54]
  wire [31:0] seq_pc = _seq_pc_T_1[31:0]; // @[IFU.scala 49:20 52:10]
  wire [63:0] _nextpc_T_3 = io_br_bus_mret ? _nextpc_T_1 : {{32'd0}, seq_pc}; // @[IFU.scala 53:37]
  wire [63:0] _nextpc_T_4 = io_br_bus_eval ? io_br_bus_csr_rdata : _nextpc_T_3; // @[IFU.scala 53:16]
  wire [31:0] nextpc = _nextpc_T_4[31:0]; // @[IFU.scala 50:20 53:10]
  wire [63:0] _GEN_2 = {{32'd0}, nextpc}; // @[IFU.scala 66:21 67:11 30:24]
  assign io_fd_bus_pc = fs_pc[31:0]; // @[IFU.scala 32:19]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 30:24]
      fs_pc <= 64'h80000000; // @[IFU.scala 30:24]
    end else begin
      fs_pc <= _GEN_2;
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
  fs_pc = _RAND_0[63:0];
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
  input  [4:0]  io_rs1,
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
  assign registers_io_rdata1_MPORT_en = 1'h1;
  assign registers_io_rdata1_MPORT_addr = io_rs1;
  assign registers_io_rdata1_MPORT_data = registers[registers_io_rdata1_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_rdata2_MPORT_en = 1'h1;
  assign registers_io_rdata2_MPORT_addr = 5'h0;
  assign registers_io_rdata2_MPORT_data = registers[registers_io_rdata2_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_io_reg17_MPORT_en = 1'h1;
  assign registers_io_reg17_MPORT_addr = 5'h11;
  assign registers_io_reg17_MPORT_data = registers[registers_io_reg17_MPORT_addr]; // @[Registers.scala 22:22]
  assign registers_MPORT_1_en = 1'h1;
  assign registers_MPORT_1_addr = 5'h0;
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
  assign registers_MPORT_data = registers_MPORT_1_data;
  assign registers_MPORT_addr = 5'h0;
  assign registers_MPORT_mask = 1'h1;
  assign registers_MPORT_en = 1'h1;
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
  input         io_ren,
  output [63:0] io_rdata,
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
  assign csr_io_rdata_MPORT_en = 1'h1;
  assign csr_io_rdata_MPORT_addr = io_raddr[2:0];
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign csr_io_rdata_MPORT_data = csr[csr_io_rdata_MPORT_addr]; // @[CSR.scala 21:16]
  `else
  assign csr_io_rdata_MPORT_data = csr_io_rdata_MPORT_addr >= 3'h5 ? _RAND_1[63:0] : csr[csr_io_rdata_MPORT_addr]; // @[CSR.scala 21:16]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign csr_MPORT_1_en = 1'h1;
  assign csr_MPORT_1_addr = 3'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign csr_MPORT_1_data = csr[csr_MPORT_1_addr]; // @[CSR.scala 21:16]
  `else
  assign csr_MPORT_1_data = csr_MPORT_1_addr >= 3'h5 ? _RAND_2[63:0] : csr[csr_MPORT_1_addr]; // @[CSR.scala 21:16]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign csr_MPORT_3_en = 1'h1;
  assign csr_MPORT_3_addr = 3'h0;
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
  assign csr_MPORT_data = csr_MPORT_1_data;
  assign csr_MPORT_addr = 3'h0;
  assign csr_MPORT_mask = 1'h1;
  assign csr_MPORT_en = 1'h1;
  assign csr_MPORT_2_data = csr_MPORT_3_data;
  assign csr_MPORT_2_addr = 3'h0;
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
  output [7:0]  io_de_bus_OP,
  output [2:0]  io_de_bus_csr_raddr,
  output        io_de_bus_csr_ren,
  output [63:0] io_br_bus_csr_rdata,
  output        io_br_bus_eval,
  output        io_br_bus_mret
);
  wire  Registers_clock; // @[IDU.scala 282:25]
  wire [4:0] Registers_io_rs1; // @[IDU.scala 282:25]
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
  wire  CSR_io_ren; // @[IDU.scala 309:20]
  wire [63:0] CSR_io_rdata; // @[IDU.scala 309:20]
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
  wire  eval = io_de_bus_OP == 8'h3f; // @[IDU.scala 225:27]
  wire  mret = io_de_bus_OP == 8'h40; // @[IDU.scala 226:27]
  wire [2:0] _io_de_bus_csr_raddr_T = mret ? 3'h2 : 3'h0; // @[IDU.scala 228:42]
  Registers Registers ( // @[IDU.scala 282:25]
    .clock(Registers_clock),
    .io_rs1(Registers_io_rs1),
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
    .io_ren(CSR_io_ren),
    .io_rdata(CSR_io_rdata),
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
  assign io_de_bus_OP = 8'hff; // @[Lookup.scala 34:39]
  assign io_de_bus_csr_raddr = eval ? 3'h4 : _io_de_bus_csr_raddr_T; // @[IDU.scala 228:29]
  assign io_de_bus_csr_ren = eval | mret; // @[IDU.scala 231:32]
  assign io_br_bus_csr_rdata = CSR_io_rdata; // @[IDU.scala 318:23]
  assign io_br_bus_eval = io_de_bus_OP == 8'h3f; // @[IDU.scala 225:27]
  assign io_br_bus_mret = io_de_bus_OP == 8'h40; // @[IDU.scala 226:27]
  assign Registers_clock = clock;
  assign Registers_io_rs1 = ~eval ? 5'h0 : 5'h11; // @[IDU.scala 286:25]
  assign DPI_EBREAK_flag = 32'h0; // @[IDU.scala 306:25]
  assign CSR_clock = clock;
  assign CSR_io_ren = io_de_bus_csr_ren; // @[IDU.scala 314:14]
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
  assign dpi_inst = 32'h0; // @[IDU.scala 35:21 37:11]
  assign dpi_pc = 64'h0; // @[IDU.scala 356:16]
  assign dpi_eval = {{31'd0}, eval}; // @[IDU.scala 362:16]
endmodule
module MEM(
  input  [63:0] io_data_sram_rdata,
  output [63:0] io_mem_result,
  output [2:0]  io_ld_type
);
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
  assign io_mem_result = 3'h6 == io_ld_type ? {{32'd0}, io_data_sram_rdata[31:0]} : _io_mem_result_T_30; // @[Mux.scala 81:58]
  assign io_ld_type = 3'h0; // @[MEM.scala 101:26]
endmodule
module AXI(
  input  [63:0] io_rdata,
  output [63:0] io_data_sram_rdata
);
  assign io_data_sram_rdata = io_rdata; // @[AXI.scala 198:24]
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
  input         io_clock,
  output [63:0] io_mem_result,
  output [2:0]  io_ld_type
);
  wire  ifu_clock; // @[TopMain.scala 24:23]
  wire  ifu_reset; // @[TopMain.scala 24:23]
  wire [31:0] ifu_io_fd_bus_pc; // @[TopMain.scala 24:23]
  wire [63:0] ifu_io_br_bus_csr_rdata; // @[TopMain.scala 24:23]
  wire  ifu_io_br_bus_eval; // @[TopMain.scala 24:23]
  wire  ifu_io_br_bus_mret; // @[TopMain.scala 24:23]
  wire  idu_clock; // @[TopMain.scala 25:23]
  wire [7:0] idu_io_de_bus_OP; // @[TopMain.scala 25:23]
  wire [2:0] idu_io_de_bus_csr_raddr; // @[TopMain.scala 25:23]
  wire  idu_io_de_bus_csr_ren; // @[TopMain.scala 25:23]
  wire [63:0] idu_io_br_bus_csr_rdata; // @[TopMain.scala 25:23]
  wire  idu_io_br_bus_eval; // @[TopMain.scala 25:23]
  wire  idu_io_br_bus_mret; // @[TopMain.scala 25:23]
  wire [63:0] mem_io_data_sram_rdata; // @[TopMain.scala 27:23]
  wire [63:0] mem_io_mem_result; // @[TopMain.scala 27:23]
  wire [2:0] mem_io_ld_type; // @[TopMain.scala 27:23]
  wire [63:0] dpi_rf_0; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_1; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_2; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_3; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_4; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_5; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_6; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_7; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_8; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_9; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_10; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_11; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_12; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_13; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_14; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_15; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_16; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_17; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_18; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_19; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_20; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_21; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_22; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_23; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_24; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_25; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_26; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_27; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_28; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_29; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_30; // @[TopMain.scala 29:23]
  wire [63:0] dpi_rf_31; // @[TopMain.scala 29:23]
  wire [63:0] dpi_csr_0; // @[TopMain.scala 29:23]
  wire [63:0] dpi_csr_1; // @[TopMain.scala 29:23]
  wire [63:0] dpi_csr_2; // @[TopMain.scala 29:23]
  wire [63:0] dpi_csr_3; // @[TopMain.scala 29:23]
  wire [63:0] dpi_csr_4; // @[TopMain.scala 29:23]
  wire [31:0] dpi_inst; // @[TopMain.scala 29:23]
  wire [63:0] dpi_pc; // @[TopMain.scala 29:23]
  wire [31:0] dpi_eval; // @[TopMain.scala 29:23]
  wire [63:0] axi_io_rdata; // @[TopMain.scala 30:23]
  wire [63:0] axi_io_data_sram_rdata; // @[TopMain.scala 30:23]
  wire  axi_mem_clock; // @[TopMain.scala 31:23]
  wire [3:0] axi_mem_arid; // @[TopMain.scala 31:23]
  wire [63:0] axi_mem_araddr; // @[TopMain.scala 31:23]
  wire  axi_mem_arvalid; // @[TopMain.scala 31:23]
  wire  axi_mem_arready; // @[TopMain.scala 31:23]
  wire [63:0] axi_mem_rdata; // @[TopMain.scala 31:23]
  wire  axi_mem_rvalid; // @[TopMain.scala 31:23]
  wire  axi_mem_rready; // @[TopMain.scala 31:23]
  wire [3:0] axi_mem_awid; // @[TopMain.scala 31:23]
  wire [63:0] axi_mem_awaddr; // @[TopMain.scala 31:23]
  wire  axi_mem_awvalid; // @[TopMain.scala 31:23]
  wire  axi_mem_awready; // @[TopMain.scala 31:23]
  wire [63:0] axi_mem_wdata; // @[TopMain.scala 31:23]
  wire [7:0] axi_mem_wstrb; // @[TopMain.scala 31:23]
  wire  axi_mem_wvalid; // @[TopMain.scala 31:23]
  wire  axi_mem_wready; // @[TopMain.scala 31:23]
  wire  axi_mem_bvalid; // @[TopMain.scala 31:23]
  wire  axi_mem_bready; // @[TopMain.scala 31:23]
  IFU ifu ( // @[TopMain.scala 24:23]
    .clock(ifu_clock),
    .reset(ifu_reset),
    .io_fd_bus_pc(ifu_io_fd_bus_pc),
    .io_br_bus_csr_rdata(ifu_io_br_bus_csr_rdata),
    .io_br_bus_eval(ifu_io_br_bus_eval),
    .io_br_bus_mret(ifu_io_br_bus_mret)
  );
  IDU idu ( // @[TopMain.scala 25:23]
    .clock(idu_clock),
    .io_de_bus_OP(idu_io_de_bus_OP),
    .io_de_bus_csr_raddr(idu_io_de_bus_csr_raddr),
    .io_de_bus_csr_ren(idu_io_de_bus_csr_ren),
    .io_br_bus_csr_rdata(idu_io_br_bus_csr_rdata),
    .io_br_bus_eval(idu_io_br_bus_eval),
    .io_br_bus_mret(idu_io_br_bus_mret)
  );
  MEM mem ( // @[TopMain.scala 27:23]
    .io_data_sram_rdata(mem_io_data_sram_rdata),
    .io_mem_result(mem_io_mem_result),
    .io_ld_type(mem_io_ld_type)
  );
  DPI dpi ( // @[TopMain.scala 29:23]
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
  AXI axi ( // @[TopMain.scala 30:23]
    .io_rdata(axi_io_rdata),
    .io_data_sram_rdata(axi_io_data_sram_rdata)
  );
  AXI_mem axi_mem ( // @[TopMain.scala 31:23]
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
  assign io_op = 7'h7f; // @[TopMain.scala 87:17]
  assign io_in_WB = 1'h0; // @[TopMain.scala 88:17]
  assign io_wb_pc = 32'h0; // @[TopMain.scala 89:17]
  assign io_wb_inst = 32'h0; // @[TopMain.scala 90:17]
  assign io_ds_pc = 32'h0; // @[TopMain.scala 91:17]
  assign io_mem_result = mem_io_mem_result; // @[TopMain.scala 92:17]
  assign io_ld_type = 3'h0; // @[TopMain.scala 93:17]
  assign ifu_clock = clock;
  assign ifu_reset = reset;
  assign ifu_io_br_bus_csr_rdata = idu_io_br_bus_csr_rdata; // @[TopMain.scala 36:17]
  assign ifu_io_br_bus_eval = idu_io_br_bus_eval; // @[TopMain.scala 36:17]
  assign ifu_io_br_bus_mret = idu_io_br_bus_mret; // @[TopMain.scala 36:17]
  assign idu_clock = clock;
  assign mem_io_data_sram_rdata = axi_io_data_sram_rdata; // @[TopMain.scala 71:26]
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
  assign axi_io_rdata = axi_mem_rdata; // @[TopMain.scala 107:16]
  assign axi_mem_clock = io_clock; // @[TopMain.scala 118:20]
  assign axi_mem_arid = 4'h2; // @[TopMain.scala 119:19]
  assign axi_mem_araddr = 64'h0; // @[TopMain.scala 120:21]
  assign axi_mem_arvalid = 1'h0; // @[TopMain.scala 121:22]
  assign axi_mem_rready = 1'h0; // @[TopMain.scala 123:21]
  assign axi_mem_awid = 4'h1; // @[TopMain.scala 125:19]
  assign axi_mem_awaddr = 64'h0; // @[TopMain.scala 126:21]
  assign axi_mem_awvalid = 1'h0; // @[TopMain.scala 127:22]
  assign axi_mem_wdata = 64'h0; // @[TopMain.scala 129:20]
  assign axi_mem_wstrb = 8'h0; // @[TopMain.scala 130:20]
  assign axi_mem_wvalid = 1'h0; // @[TopMain.scala 131:21]
  assign axi_mem_bready = 1'h0; // @[TopMain.scala 133:21]
endmodule
