module PC(
  input         clock,
  input         reset,
  output [63:0] io_pc,
  input         io_is_j,
  input  [63:0] io_j_branch
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] init; // @[PC.scala 13:21]
  wire [63:0] _init_T_1 = io_pc + 64'h4; // @[PC.scala 14:42]
  assign io_pc = init; // @[PC.scala 15:10]
  always @(posedge clock) begin
    if (reset) begin // @[PC.scala 13:21]
      init <= 64'h80000000; // @[PC.scala 13:21]
    end else if (io_is_j) begin // @[PC.scala 14:16]
      init <= io_j_branch;
    end else begin
      init <= _init_T_1;
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
  init = _RAND_0[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Alu(
  input  [3:0]  io_ctrl_alu_op,
  input  [63:0] io_in1,
  input  [63:0] io_in2,
  input  [63:0] io_imm,
  output [63:0] io_out,
  input  [63:0] io_pc,
  output [63:0] io_j_branch
);
  wire [63:0] _op1_T_3 = 4'h5 == io_ctrl_alu_op ? io_pc : io_in1; // @[Mux.scala 81:58]
  wire [63:0] op1 = 4'h6 == io_ctrl_alu_op ? io_pc : _op1_T_3; // @[Mux.scala 81:58]
  wire [63:0] _result_T_1 = op1 + io_in2; // @[Alu.scala 47:23]
  wire [63:0] _result_T_3 = op1 + io_imm; // @[Alu.scala 48:24]
  wire [63:0] _result_T_7 = op1 + 64'h4; // @[Alu.scala 51:23]
  wire [64:0] _result_T_10 = {{1'd0}, op1}; // @[Alu.scala 53:22]
  wire [63:0] _result_T_13 = 4'h0 == io_ctrl_alu_op ? _result_T_1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _result_T_15 = 4'h1 == io_ctrl_alu_op ? _result_T_3 : _result_T_13; // @[Mux.scala 81:58]
  wire [63:0] _result_T_17 = 4'h2 == io_ctrl_alu_op ? io_imm : _result_T_15; // @[Mux.scala 81:58]
  wire [63:0] _result_T_19 = 4'h3 == io_ctrl_alu_op ? _result_T_3 : _result_T_17; // @[Mux.scala 81:58]
  wire [63:0] _result_T_21 = 4'h5 == io_ctrl_alu_op ? _result_T_7 : _result_T_19; // @[Mux.scala 81:58]
  wire [63:0] _result_T_23 = 4'h6 == io_ctrl_alu_op ? _result_T_7 : _result_T_21; // @[Mux.scala 81:58]
  wire [63:0] _io_j_branch_T_7 = 4'h5 == io_ctrl_alu_op ? _result_T_3 : 64'h0; // @[Mux.scala 81:58]
  assign io_out = 4'h7 == io_ctrl_alu_op ? _result_T_10[63:0] : _result_T_23; // @[Mux.scala 81:58]
  assign io_j_branch = 4'h6 == io_ctrl_alu_op ? 64'h0 : _io_j_branch_T_7; // @[Mux.scala 81:58]
endmodule
module Decoder(
  input  [31:0] io_inst,
  output        io_ctrl_RegWen,
  output [3:0]  io_ctrl_OP,
  output        io_ctrl_J_JUMP,
  output [4:0]  io_reg_rs1,
  output [4:0]  io_reg_rs2,
  output [4:0]  io_reg_rd,
  output [63:0] io_imm
);
  wire [31:0] _crtlsignals_T = io_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_1 = 32'h33 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire [31:0] _crtlsignals_T_2 = io_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_3 = 32'h13 == _crtlsignals_T_2; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_5 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire [31:0] _crtlsignals_T_6 = io_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_7 = 32'h17 == _crtlsignals_T_6; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_9 = 32'h37 == _crtlsignals_T_6; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_11 = 32'h6f == _crtlsignals_T_6; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_13 = 32'h67 == _crtlsignals_T_2; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_15 = 32'h3023 == _crtlsignals_T_2; // @[Lookup.scala 31:38]
  wire [3:0] _crtlsignals_T_16 = _crtlsignals_T_15 ? 4'h7 : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _crtlsignals_T_17 = _crtlsignals_T_13 ? 4'h6 : _crtlsignals_T_16; // @[Lookup.scala 34:39]
  wire [3:0] _crtlsignals_T_18 = _crtlsignals_T_11 ? 4'h5 : _crtlsignals_T_17; // @[Lookup.scala 34:39]
  wire [3:0] _crtlsignals_T_19 = _crtlsignals_T_9 ? 4'h2 : _crtlsignals_T_18; // @[Lookup.scala 34:39]
  wire [3:0] _crtlsignals_T_20 = _crtlsignals_T_7 ? 4'h3 : _crtlsignals_T_19; // @[Lookup.scala 34:39]
  wire [3:0] _crtlsignals_T_21 = _crtlsignals_T_5 ? 4'h4 : _crtlsignals_T_20; // @[Lookup.scala 34:39]
  wire [3:0] _crtlsignals_T_22 = _crtlsignals_T_3 ? 4'h1 : _crtlsignals_T_21; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_28 = _crtlsignals_T_5 ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  wire [1:0] _crtlsignals_T_32 = _crtlsignals_T_11 ? 2'h2 : 2'h0; // @[Lookup.scala 34:39]
  wire [1:0] _crtlsignals_T_33 = _crtlsignals_T_9 ? 2'h1 : _crtlsignals_T_32; // @[Lookup.scala 34:39]
  wire [1:0] _crtlsignals_T_34 = _crtlsignals_T_7 ? 2'h1 : _crtlsignals_T_33; // @[Lookup.scala 34:39]
  wire [1:0] _crtlsignals_T_35 = _crtlsignals_T_5 ? 2'h0 : _crtlsignals_T_34; // @[Lookup.scala 34:39]
  wire [1:0] _crtlsignals_T_36 = _crtlsignals_T_3 ? 2'h0 : _crtlsignals_T_35; // @[Lookup.scala 34:39]
  wire [1:0] ImmType = _crtlsignals_T_1 ? 2'h0 : _crtlsignals_T_36; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_40 = _crtlsignals_T_9 ? 1'h0 : _crtlsignals_T_11 | _crtlsignals_T_13; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_41 = _crtlsignals_T_7 ? 1'h0 : _crtlsignals_T_40; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_42 = _crtlsignals_T_5 ? 1'h0 : _crtlsignals_T_41; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_43 = _crtlsignals_T_3 ? 1'h0 : _crtlsignals_T_42; // @[Lookup.scala 34:39]
  wire [51:0] _I_T_3 = io_inst[31] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] I = {_I_T_3,io_inst[31:20]}; // @[Cat.scala 31:58]
  wire [43:0] _U_T_3 = io_inst[31] ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _U_T_4 = {_U_T_3,io_inst[31:12]}; // @[Cat.scala 31:58]
  wire [75:0] U = {_U_T_4, 12'h0}; // @[Decoder.scala 54:36]
  wire [62:0] _J_T_3 = io_inst[31] ? 63'h7fffffffffffffff : 63'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _J_T_4 = {_J_T_3,io_inst[31]}; // @[Cat.scala 31:58]
  wire [83:0] _J_T_5 = {_J_T_4, 20'h0}; // @[Decoder.scala 56:31]
  wire [19:0] _J_T_7 = {io_inst[19:12], 12'h0}; // @[Decoder.scala 56:55]
  wire [83:0] _GEN_0 = {{64'd0}, _J_T_7}; // @[Decoder.scala 56:37]
  wire [83:0] _J_T_8 = _J_T_5 | _GEN_0; // @[Decoder.scala 56:37]
  wire [11:0] _J_T_10 = {io_inst[20], 11'h0}; // @[Decoder.scala 56:75]
  wire [83:0] _GEN_1 = {{72'd0}, _J_T_10}; // @[Decoder.scala 56:61]
  wire [83:0] _J_T_11 = _J_T_8 | _GEN_1; // @[Decoder.scala 56:61]
  wire [10:0] _J_T_13 = {io_inst[30:21], 1'h0}; // @[Decoder.scala 56:99]
  wire [83:0] _GEN_2 = {{73'd0}, _J_T_13}; // @[Decoder.scala 56:81]
  wire [83:0] J = _J_T_11 | _GEN_2; // @[Decoder.scala 56:81]
  wire [63:0] _io_imm_T_1 = 2'h0 == ImmType ? I : 64'h0; // @[Mux.scala 81:58]
  wire [75:0] _io_imm_T_3 = 2'h1 == ImmType ? U : {{12'd0}, _io_imm_T_1}; // @[Mux.scala 81:58]
  wire [83:0] _io_imm_T_5 = 2'h2 == ImmType ? J : {{8'd0}, _io_imm_T_3}; // @[Mux.scala 81:58]
  assign io_ctrl_RegWen = _crtlsignals_T_1 | (_crtlsignals_T_3 | _crtlsignals_T_28); // @[Lookup.scala 34:39]
  assign io_ctrl_OP = _crtlsignals_T_1 ? 4'h0 : _crtlsignals_T_22; // @[Lookup.scala 34:39]
  assign io_ctrl_J_JUMP = _crtlsignals_T_1 ? 1'h0 : _crtlsignals_T_43; // @[Lookup.scala 34:39]
  assign io_reg_rs1 = io_ctrl_OP == 4'h7 ? 5'h0 : io_inst[19:15]; // @[Decoder.scala 68:20]
  assign io_reg_rs2 = io_inst[24:20]; // @[Decoder.scala 69:24]
  assign io_reg_rd = io_inst[11:7]; // @[Decoder.scala 70:24]
  assign io_imm = _io_imm_T_5[63:0]; // @[Decoder.scala 59:10]
endmodule
module Registers(
  input         clock,
  input         io_wen,
  input  [63:0] io_wdata,
  output [63:0] io_rdata1,
  output [63:0] io_rdata2,
  input  [4:0]  io_reg_rs1,
  input  [4:0]  io_reg_rs2,
  input  [4:0]  io_reg_rd,
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
  reg [63:0] registers [0:31]; // @[Register .scala 18:22]
  wire  registers_io_rdata1_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_rdata1_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_rdata1_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_rdata2_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_rdata2_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_rdata2_MPORT_data; // @[Register .scala 18:22]
  wire  registers_MPORT_1_en; // @[Register .scala 18:22]
  wire [4:0] registers_MPORT_1_addr; // @[Register .scala 18:22]
  wire [63:0] registers_MPORT_1_data; // @[Register .scala 18:22]
  wire  registers_io_regs_0_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_0_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_0_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_1_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_1_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_1_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_2_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_2_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_2_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_3_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_3_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_3_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_4_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_4_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_4_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_5_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_5_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_5_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_6_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_6_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_6_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_7_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_7_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_7_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_8_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_8_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_8_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_9_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_9_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_9_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_10_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_10_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_10_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_11_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_11_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_11_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_12_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_12_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_12_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_13_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_13_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_13_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_14_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_14_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_14_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_15_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_15_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_15_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_16_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_16_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_16_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_17_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_17_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_17_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_18_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_18_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_18_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_19_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_19_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_19_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_20_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_20_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_20_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_21_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_21_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_21_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_22_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_22_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_22_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_23_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_23_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_23_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_24_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_24_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_24_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_25_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_25_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_25_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_26_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_26_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_26_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_27_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_27_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_27_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_28_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_28_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_28_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_29_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_29_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_29_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_30_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_30_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_30_MPORT_data; // @[Register .scala 18:22]
  wire  registers_io_regs_31_MPORT_en; // @[Register .scala 18:22]
  wire [4:0] registers_io_regs_31_MPORT_addr; // @[Register .scala 18:22]
  wire [63:0] registers_io_regs_31_MPORT_data; // @[Register .scala 18:22]
  wire [63:0] registers_MPORT_data; // @[Register .scala 18:22]
  wire [4:0] registers_MPORT_addr; // @[Register .scala 18:22]
  wire  registers_MPORT_mask; // @[Register .scala 18:22]
  wire  registers_MPORT_en; // @[Register .scala 18:22]
  assign registers_io_rdata1_MPORT_en = 1'h1;
  assign registers_io_rdata1_MPORT_addr = io_reg_rs1;
  assign registers_io_rdata1_MPORT_data = registers[registers_io_rdata1_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_rdata2_MPORT_en = 1'h1;
  assign registers_io_rdata2_MPORT_addr = io_reg_rs2;
  assign registers_io_rdata2_MPORT_data = registers[registers_io_rdata2_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_MPORT_1_en = 1'h1;
  assign registers_MPORT_1_addr = io_reg_rd;
  assign registers_MPORT_1_data = registers[registers_MPORT_1_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_0_MPORT_en = 1'h1;
  assign registers_io_regs_0_MPORT_addr = 5'h0;
  assign registers_io_regs_0_MPORT_data = registers[registers_io_regs_0_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_1_MPORT_en = 1'h1;
  assign registers_io_regs_1_MPORT_addr = 5'h1;
  assign registers_io_regs_1_MPORT_data = registers[registers_io_regs_1_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_2_MPORT_en = 1'h1;
  assign registers_io_regs_2_MPORT_addr = 5'h2;
  assign registers_io_regs_2_MPORT_data = registers[registers_io_regs_2_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_3_MPORT_en = 1'h1;
  assign registers_io_regs_3_MPORT_addr = 5'h3;
  assign registers_io_regs_3_MPORT_data = registers[registers_io_regs_3_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_4_MPORT_en = 1'h1;
  assign registers_io_regs_4_MPORT_addr = 5'h4;
  assign registers_io_regs_4_MPORT_data = registers[registers_io_regs_4_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_5_MPORT_en = 1'h1;
  assign registers_io_regs_5_MPORT_addr = 5'h5;
  assign registers_io_regs_5_MPORT_data = registers[registers_io_regs_5_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_6_MPORT_en = 1'h1;
  assign registers_io_regs_6_MPORT_addr = 5'h6;
  assign registers_io_regs_6_MPORT_data = registers[registers_io_regs_6_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_7_MPORT_en = 1'h1;
  assign registers_io_regs_7_MPORT_addr = 5'h7;
  assign registers_io_regs_7_MPORT_data = registers[registers_io_regs_7_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_8_MPORT_en = 1'h1;
  assign registers_io_regs_8_MPORT_addr = 5'h8;
  assign registers_io_regs_8_MPORT_data = registers[registers_io_regs_8_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_9_MPORT_en = 1'h1;
  assign registers_io_regs_9_MPORT_addr = 5'h9;
  assign registers_io_regs_9_MPORT_data = registers[registers_io_regs_9_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_10_MPORT_en = 1'h1;
  assign registers_io_regs_10_MPORT_addr = 5'ha;
  assign registers_io_regs_10_MPORT_data = registers[registers_io_regs_10_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_11_MPORT_en = 1'h1;
  assign registers_io_regs_11_MPORT_addr = 5'hb;
  assign registers_io_regs_11_MPORT_data = registers[registers_io_regs_11_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_12_MPORT_en = 1'h1;
  assign registers_io_regs_12_MPORT_addr = 5'hc;
  assign registers_io_regs_12_MPORT_data = registers[registers_io_regs_12_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_13_MPORT_en = 1'h1;
  assign registers_io_regs_13_MPORT_addr = 5'hd;
  assign registers_io_regs_13_MPORT_data = registers[registers_io_regs_13_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_14_MPORT_en = 1'h1;
  assign registers_io_regs_14_MPORT_addr = 5'he;
  assign registers_io_regs_14_MPORT_data = registers[registers_io_regs_14_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_15_MPORT_en = 1'h1;
  assign registers_io_regs_15_MPORT_addr = 5'hf;
  assign registers_io_regs_15_MPORT_data = registers[registers_io_regs_15_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_16_MPORT_en = 1'h1;
  assign registers_io_regs_16_MPORT_addr = 5'h10;
  assign registers_io_regs_16_MPORT_data = registers[registers_io_regs_16_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_17_MPORT_en = 1'h1;
  assign registers_io_regs_17_MPORT_addr = 5'h11;
  assign registers_io_regs_17_MPORT_data = registers[registers_io_regs_17_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_18_MPORT_en = 1'h1;
  assign registers_io_regs_18_MPORT_addr = 5'h12;
  assign registers_io_regs_18_MPORT_data = registers[registers_io_regs_18_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_19_MPORT_en = 1'h1;
  assign registers_io_regs_19_MPORT_addr = 5'h13;
  assign registers_io_regs_19_MPORT_data = registers[registers_io_regs_19_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_20_MPORT_en = 1'h1;
  assign registers_io_regs_20_MPORT_addr = 5'h14;
  assign registers_io_regs_20_MPORT_data = registers[registers_io_regs_20_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_21_MPORT_en = 1'h1;
  assign registers_io_regs_21_MPORT_addr = 5'h15;
  assign registers_io_regs_21_MPORT_data = registers[registers_io_regs_21_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_22_MPORT_en = 1'h1;
  assign registers_io_regs_22_MPORT_addr = 5'h16;
  assign registers_io_regs_22_MPORT_data = registers[registers_io_regs_22_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_23_MPORT_en = 1'h1;
  assign registers_io_regs_23_MPORT_addr = 5'h17;
  assign registers_io_regs_23_MPORT_data = registers[registers_io_regs_23_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_24_MPORT_en = 1'h1;
  assign registers_io_regs_24_MPORT_addr = 5'h18;
  assign registers_io_regs_24_MPORT_data = registers[registers_io_regs_24_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_25_MPORT_en = 1'h1;
  assign registers_io_regs_25_MPORT_addr = 5'h19;
  assign registers_io_regs_25_MPORT_data = registers[registers_io_regs_25_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_26_MPORT_en = 1'h1;
  assign registers_io_regs_26_MPORT_addr = 5'h1a;
  assign registers_io_regs_26_MPORT_data = registers[registers_io_regs_26_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_27_MPORT_en = 1'h1;
  assign registers_io_regs_27_MPORT_addr = 5'h1b;
  assign registers_io_regs_27_MPORT_data = registers[registers_io_regs_27_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_28_MPORT_en = 1'h1;
  assign registers_io_regs_28_MPORT_addr = 5'h1c;
  assign registers_io_regs_28_MPORT_data = registers[registers_io_regs_28_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_29_MPORT_en = 1'h1;
  assign registers_io_regs_29_MPORT_addr = 5'h1d;
  assign registers_io_regs_29_MPORT_data = registers[registers_io_regs_29_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_30_MPORT_en = 1'h1;
  assign registers_io_regs_30_MPORT_addr = 5'h1e;
  assign registers_io_regs_30_MPORT_data = registers[registers_io_regs_30_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_io_regs_31_MPORT_en = 1'h1;
  assign registers_io_regs_31_MPORT_addr = 5'h1f;
  assign registers_io_regs_31_MPORT_data = registers[registers_io_regs_31_MPORT_addr]; // @[Register .scala 18:22]
  assign registers_MPORT_data = io_wen ? io_wdata : registers_MPORT_1_data;
  assign registers_MPORT_addr = io_reg_rd;
  assign registers_MPORT_mask = 1'h1;
  assign registers_MPORT_en = 1'h1;
  assign io_rdata1 = io_reg_rs1 == 5'h0 ? 64'h0 : registers_io_rdata1_MPORT_data; // @[Register .scala 20:19]
  assign io_rdata2 = io_reg_rs2 == 5'h0 ? 64'h0 : registers_io_rdata2_MPORT_data; // @[Register .scala 21:19]
  assign io_regs_0 = registers_io_regs_0_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_1 = registers_io_regs_1_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_2 = registers_io_regs_2_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_3 = registers_io_regs_3_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_4 = registers_io_regs_4_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_5 = registers_io_regs_5_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_6 = registers_io_regs_6_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_7 = registers_io_regs_7_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_8 = registers_io_regs_8_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_9 = registers_io_regs_9_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_10 = registers_io_regs_10_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_11 = registers_io_regs_11_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_12 = registers_io_regs_12_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_13 = registers_io_regs_13_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_14 = registers_io_regs_14_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_15 = registers_io_regs_15_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_16 = registers_io_regs_16_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_17 = registers_io_regs_17_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_18 = registers_io_regs_18_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_19 = registers_io_regs_19_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_20 = registers_io_regs_20_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_21 = registers_io_regs_21_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_22 = registers_io_regs_22_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_23 = registers_io_regs_23_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_24 = registers_io_regs_24_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_25 = registers_io_regs_25_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_26 = registers_io_regs_26_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_27 = registers_io_regs_27_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_28 = registers_io_regs_28_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_29 = registers_io_regs_29_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_30 = registers_io_regs_30_MPORT_data; // @[Register .scala 26:16]
  assign io_regs_31 = registers_io_regs_31_MPORT_data; // @[Register .scala 26:16]
  always @(posedge clock) begin
    if (registers_MPORT_en & registers_MPORT_mask) begin
      registers[registers_MPORT_addr] <= registers_MPORT_data; // @[Register .scala 18:22]
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
module Controller(
  input  [3:0] io_ControlIO_In_OP,
  output [3:0] io_AluCtrlIO_Out_alu_op
);
  assign io_AluCtrlIO_Out_alu_op = io_ControlIO_In_OP; // @[Controller.scala 18:31]
endmodule
module Top(
  input         clock,
  input         reset,
  output [63:0] io_pc,
  input  [31:0] io_inst,
  output        io_ctrl_RegWen,
  output [3:0]  io_ctrl_OP,
  output        io_ctrl_J_JUMP,
  output [63:0] io_resultALU,
  output [63:0] io_rs1,
  output [63:0] io_rs2,
  output [63:0] io_imm,
  output [3:0]  io_op
);
  wire  PC_clock; // @[TopMain.scala 24:26]
  wire  PC_reset; // @[TopMain.scala 24:26]
  wire [63:0] PC_io_pc; // @[TopMain.scala 24:26]
  wire  PC_io_is_j; // @[TopMain.scala 24:26]
  wire [63:0] PC_io_j_branch; // @[TopMain.scala 24:26]
  wire [3:0] alu_io_ctrl_alu_op; // @[TopMain.scala 25:26]
  wire [63:0] alu_io_in1; // @[TopMain.scala 25:26]
  wire [63:0] alu_io_in2; // @[TopMain.scala 25:26]
  wire [63:0] alu_io_imm; // @[TopMain.scala 25:26]
  wire [63:0] alu_io_out; // @[TopMain.scala 25:26]
  wire [63:0] alu_io_pc; // @[TopMain.scala 25:26]
  wire [63:0] alu_io_j_branch; // @[TopMain.scala 25:26]
  wire [31:0] decoder_io_inst; // @[TopMain.scala 26:26]
  wire  decoder_io_ctrl_RegWen; // @[TopMain.scala 26:26]
  wire [3:0] decoder_io_ctrl_OP; // @[TopMain.scala 26:26]
  wire  decoder_io_ctrl_J_JUMP; // @[TopMain.scala 26:26]
  wire [4:0] decoder_io_reg_rs1; // @[TopMain.scala 26:26]
  wire [4:0] decoder_io_reg_rs2; // @[TopMain.scala 26:26]
  wire [4:0] decoder_io_reg_rd; // @[TopMain.scala 26:26]
  wire [63:0] decoder_io_imm; // @[TopMain.scala 26:26]
  wire  registers_clock; // @[TopMain.scala 28:26]
  wire  registers_io_wen; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_wdata; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_rdata1; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_rdata2; // @[TopMain.scala 28:26]
  wire [4:0] registers_io_reg_rs1; // @[TopMain.scala 28:26]
  wire [4:0] registers_io_reg_rs2; // @[TopMain.scala 28:26]
  wire [4:0] registers_io_reg_rd; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_0; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_1; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_2; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_3; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_4; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_5; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_6; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_7; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_8; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_9; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_10; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_11; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_12; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_13; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_14; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_15; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_16; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_17; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_18; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_19; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_20; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_21; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_22; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_23; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_24; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_25; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_26; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_27; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_28; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_29; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_30; // @[TopMain.scala 28:26]
  wire [63:0] registers_io_regs_31; // @[TopMain.scala 28:26]
  wire [3:0] Controller_io_ControlIO_In_OP; // @[TopMain.scala 29:26]
  wire [3:0] Controller_io_AluCtrlIO_Out_alu_op; // @[TopMain.scala 29:26]
  wire [31:0] dpi_flag; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_0; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_1; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_2; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_3; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_4; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_5; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_6; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_7; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_8; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_9; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_10; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_11; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_12; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_13; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_14; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_15; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_16; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_17; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_18; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_19; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_20; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_21; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_22; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_23; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_24; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_25; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_26; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_27; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_28; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_29; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_30; // @[TopMain.scala 67:19]
  wire [63:0] dpi_rf_31; // @[TopMain.scala 67:19]
  wire [31:0] dpi_inst; // @[TopMain.scala 67:19]
  wire [63:0] dpi_pc; // @[TopMain.scala 67:19]
  PC PC ( // @[TopMain.scala 24:26]
    .clock(PC_clock),
    .reset(PC_reset),
    .io_pc(PC_io_pc),
    .io_is_j(PC_io_is_j),
    .io_j_branch(PC_io_j_branch)
  );
  Alu alu ( // @[TopMain.scala 25:26]
    .io_ctrl_alu_op(alu_io_ctrl_alu_op),
    .io_in1(alu_io_in1),
    .io_in2(alu_io_in2),
    .io_imm(alu_io_imm),
    .io_out(alu_io_out),
    .io_pc(alu_io_pc),
    .io_j_branch(alu_io_j_branch)
  );
  Decoder decoder ( // @[TopMain.scala 26:26]
    .io_inst(decoder_io_inst),
    .io_ctrl_RegWen(decoder_io_ctrl_RegWen),
    .io_ctrl_OP(decoder_io_ctrl_OP),
    .io_ctrl_J_JUMP(decoder_io_ctrl_J_JUMP),
    .io_reg_rs1(decoder_io_reg_rs1),
    .io_reg_rs2(decoder_io_reg_rs2),
    .io_reg_rd(decoder_io_reg_rd),
    .io_imm(decoder_io_imm)
  );
  Registers registers ( // @[TopMain.scala 28:26]
    .clock(registers_clock),
    .io_wen(registers_io_wen),
    .io_wdata(registers_io_wdata),
    .io_rdata1(registers_io_rdata1),
    .io_rdata2(registers_io_rdata2),
    .io_reg_rs1(registers_io_reg_rs1),
    .io_reg_rs2(registers_io_reg_rs2),
    .io_reg_rd(registers_io_reg_rd),
    .io_regs_0(registers_io_regs_0),
    .io_regs_1(registers_io_regs_1),
    .io_regs_2(registers_io_regs_2),
    .io_regs_3(registers_io_regs_3),
    .io_regs_4(registers_io_regs_4),
    .io_regs_5(registers_io_regs_5),
    .io_regs_6(registers_io_regs_6),
    .io_regs_7(registers_io_regs_7),
    .io_regs_8(registers_io_regs_8),
    .io_regs_9(registers_io_regs_9),
    .io_regs_10(registers_io_regs_10),
    .io_regs_11(registers_io_regs_11),
    .io_regs_12(registers_io_regs_12),
    .io_regs_13(registers_io_regs_13),
    .io_regs_14(registers_io_regs_14),
    .io_regs_15(registers_io_regs_15),
    .io_regs_16(registers_io_regs_16),
    .io_regs_17(registers_io_regs_17),
    .io_regs_18(registers_io_regs_18),
    .io_regs_19(registers_io_regs_19),
    .io_regs_20(registers_io_regs_20),
    .io_regs_21(registers_io_regs_21),
    .io_regs_22(registers_io_regs_22),
    .io_regs_23(registers_io_regs_23),
    .io_regs_24(registers_io_regs_24),
    .io_regs_25(registers_io_regs_25),
    .io_regs_26(registers_io_regs_26),
    .io_regs_27(registers_io_regs_27),
    .io_regs_28(registers_io_regs_28),
    .io_regs_29(registers_io_regs_29),
    .io_regs_30(registers_io_regs_30),
    .io_regs_31(registers_io_regs_31)
  );
  Controller Controller ( // @[TopMain.scala 29:26]
    .io_ControlIO_In_OP(Controller_io_ControlIO_In_OP),
    .io_AluCtrlIO_Out_alu_op(Controller_io_AluCtrlIO_Out_alu_op)
  );
  DPI dpi ( // @[TopMain.scala 67:19]
    .flag(dpi_flag),
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
    .inst(dpi_inst),
    .pc(dpi_pc)
  );
  assign io_pc = PC_io_pc; // @[TopMain.scala 57:9]
  assign io_ctrl_RegWen = decoder_io_ctrl_RegWen; // @[TopMain.scala 59:11]
  assign io_ctrl_OP = decoder_io_ctrl_OP; // @[TopMain.scala 59:11]
  assign io_ctrl_J_JUMP = decoder_io_ctrl_J_JUMP; // @[TopMain.scala 59:11]
  assign io_resultALU = alu_io_out; // @[TopMain.scala 64:16]
  assign io_rs1 = registers_io_rdata1; // @[TopMain.scala 60:16]
  assign io_rs2 = registers_io_rdata2; // @[TopMain.scala 61:16]
  assign io_imm = decoder_io_imm; // @[TopMain.scala 62:16]
  assign io_op = decoder_io_ctrl_OP; // @[TopMain.scala 63:13]
  assign PC_clock = clock;
  assign PC_reset = reset;
  assign PC_io_is_j = decoder_io_ctrl_J_JUMP; // @[TopMain.scala 35:14]
  assign PC_io_j_branch = alu_io_j_branch; // @[TopMain.scala 36:18]
  assign alu_io_ctrl_alu_op = Controller_io_AluCtrlIO_Out_alu_op; // @[TopMain.scala 47:15]
  assign alu_io_in1 = registers_io_rdata1; // @[TopMain.scala 48:14]
  assign alu_io_in2 = registers_io_rdata2; // @[TopMain.scala 49:14]
  assign alu_io_imm = decoder_io_imm; // @[TopMain.scala 50:14]
  assign alu_io_pc = PC_io_pc; // @[TopMain.scala 51:14]
  assign decoder_io_inst = io_inst; // @[TopMain.scala 39:19]
  assign registers_clock = clock;
  assign registers_io_wen = decoder_io_ctrl_RegWen; // @[TopMain.scala 44:20]
  assign registers_io_wdata = alu_io_out; // @[TopMain.scala 43:22]
  assign registers_io_reg_rs1 = decoder_io_reg_rs1; // @[TopMain.scala 42:20]
  assign registers_io_reg_rs2 = decoder_io_reg_rs2; // @[TopMain.scala 42:20]
  assign registers_io_reg_rd = decoder_io_reg_rd; // @[TopMain.scala 42:20]
  assign Controller_io_ControlIO_In_OP = decoder_io_ctrl_OP; // @[TopMain.scala 54:30]
  assign dpi_flag = decoder_io_ctrl_OP == 4'h4 | decoder_io_ctrl_OP == 4'h6 & decoder_io_reg_rd == 5'h0 ? 32'h1 : 32'h0; // @[TopMain.scala 68:21]
  assign dpi_rf_0 = registers_io_regs_0; // @[TopMain.scala 69:15]
  assign dpi_rf_1 = registers_io_regs_1; // @[TopMain.scala 70:15]
  assign dpi_rf_2 = registers_io_regs_2; // @[TopMain.scala 71:15]
  assign dpi_rf_3 = registers_io_regs_3; // @[TopMain.scala 72:15]
  assign dpi_rf_4 = registers_io_regs_4; // @[TopMain.scala 73:15]
  assign dpi_rf_5 = registers_io_regs_5; // @[TopMain.scala 74:15]
  assign dpi_rf_6 = registers_io_regs_6; // @[TopMain.scala 75:15]
  assign dpi_rf_7 = registers_io_regs_7; // @[TopMain.scala 76:15]
  assign dpi_rf_8 = registers_io_regs_8; // @[TopMain.scala 77:15]
  assign dpi_rf_9 = registers_io_regs_9; // @[TopMain.scala 78:15]
  assign dpi_rf_10 = registers_io_regs_10; // @[TopMain.scala 79:16]
  assign dpi_rf_11 = registers_io_regs_11; // @[TopMain.scala 80:16]
  assign dpi_rf_12 = registers_io_regs_12; // @[TopMain.scala 81:16]
  assign dpi_rf_13 = registers_io_regs_13; // @[TopMain.scala 82:16]
  assign dpi_rf_14 = registers_io_regs_14; // @[TopMain.scala 83:16]
  assign dpi_rf_15 = registers_io_regs_15; // @[TopMain.scala 84:16]
  assign dpi_rf_16 = registers_io_regs_16; // @[TopMain.scala 85:16]
  assign dpi_rf_17 = registers_io_regs_17; // @[TopMain.scala 86:16]
  assign dpi_rf_18 = registers_io_regs_18; // @[TopMain.scala 87:16]
  assign dpi_rf_19 = registers_io_regs_19; // @[TopMain.scala 88:16]
  assign dpi_rf_20 = registers_io_regs_20; // @[TopMain.scala 89:16]
  assign dpi_rf_21 = registers_io_regs_21; // @[TopMain.scala 90:16]
  assign dpi_rf_22 = registers_io_regs_22; // @[TopMain.scala 91:16]
  assign dpi_rf_23 = registers_io_regs_23; // @[TopMain.scala 92:16]
  assign dpi_rf_24 = registers_io_regs_24; // @[TopMain.scala 93:16]
  assign dpi_rf_25 = registers_io_regs_25; // @[TopMain.scala 94:16]
  assign dpi_rf_26 = registers_io_regs_26; // @[TopMain.scala 95:16]
  assign dpi_rf_27 = registers_io_regs_27; // @[TopMain.scala 96:16]
  assign dpi_rf_28 = registers_io_regs_28; // @[TopMain.scala 97:16]
  assign dpi_rf_29 = registers_io_regs_29; // @[TopMain.scala 98:16]
  assign dpi_rf_30 = registers_io_regs_30; // @[TopMain.scala 99:16]
  assign dpi_rf_31 = registers_io_regs_31; // @[TopMain.scala 100:16]
  assign dpi_inst = io_inst; // @[TopMain.scala 101:16]
  assign dpi_pc = io_pc; // @[TopMain.scala 102:16]
endmodule
