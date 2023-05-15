module PC(
  input         clock,
  input         reset,
  output [63:0] io_pc,
  output [63:0] io_pc4,
  input         io_is_j,
  input         io_is_b,
  input         io_is_e,
  input  [63:0] io_j_branch,
  input  [63:0] io_b_branch,
  input  [63:0] io_e_branch
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] init; // @[PC.scala 17:21]
  assign io_pc = init; // @[PC.scala 18:10]
  assign io_pc4 = io_pc + 64'h4; // @[PC.scala 19:19]
  always @(posedge clock) begin
    if (reset) begin // @[PC.scala 17:21]
      init <= 64'h80000000; // @[PC.scala 17:21]
    end else if (io_is_j) begin // @[PC.scala 20:16]
      init <= io_j_branch;
    end else if (io_is_b) begin // @[PC.scala 20:40]
      init <= io_b_branch;
    end else if (io_is_e) begin // @[PC.scala 20:64]
      init <= io_e_branch;
    end else begin
      init <= io_pc4;
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
module EXU(
  input         clock,
  input  [7:0]  io_ctrl_alu_op,
  input         io_ctrl_csr_wen,
  input  [63:0] io_in1,
  input  [63:0] io_in2,
  input  [63:0] io_imm,
  output [63:0] io_out,
  input  [63:0] io_pc,
  output [63:0] io_j_branch,
  output [63:0] io_e_branch,
  output [63:0] io_is_b,
  input  [2:0]  io_csr_index,
  input  [63:0] io_reg17,
  output [63:0] io_csr_regs_0,
  output [63:0] io_csr_regs_1,
  output [63:0] io_csr_regs_2,
  output [63:0] io_csr_regs_3,
  output [63:0] io_csr_regs_4
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
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] CSR [0:4]; // @[EXU.scala 36:22]
  wire  CSR_result_MPORT_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_result_MPORT_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_result_MPORT_data; // @[EXU.scala 36:22]
  wire  CSR_result_MPORT_1_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_result_MPORT_1_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_result_MPORT_1_data; // @[EXU.scala 36:22]
  wire  CSR_result_MPORT_2_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_result_MPORT_2_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_result_MPORT_2_data; // @[EXU.scala 36:22]
  wire  CSR_csr_wdata_MPORT_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_csr_wdata_MPORT_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_csr_wdata_MPORT_data; // @[EXU.scala 36:22]
  wire  CSR_csr_wdata_MPORT_1_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_csr_wdata_MPORT_1_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_csr_wdata_MPORT_1_data; // @[EXU.scala 36:22]
  wire  CSR_MPORT_1_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_MPORT_1_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_MPORT_1_data; // @[EXU.scala 36:22]
  wire  CSR_MPORT_3_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_MPORT_3_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_MPORT_3_data; // @[EXU.scala 36:22]
  wire  CSR_MPORT_5_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_MPORT_5_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_MPORT_5_data; // @[EXU.scala 36:22]
  wire  CSR_io_e_branch_MPORT_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_io_e_branch_MPORT_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_io_e_branch_MPORT_data; // @[EXU.scala 36:22]
  wire  CSR_io_e_branch_MPORT_1_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_io_e_branch_MPORT_1_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_io_e_branch_MPORT_1_data; // @[EXU.scala 36:22]
  wire  CSR_io_csr_regs_0_MPORT_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_io_csr_regs_0_MPORT_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_io_csr_regs_0_MPORT_data; // @[EXU.scala 36:22]
  wire  CSR_io_csr_regs_1_MPORT_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_io_csr_regs_1_MPORT_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_io_csr_regs_1_MPORT_data; // @[EXU.scala 36:22]
  wire  CSR_io_csr_regs_2_MPORT_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_io_csr_regs_2_MPORT_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_io_csr_regs_2_MPORT_data; // @[EXU.scala 36:22]
  wire  CSR_io_csr_regs_3_MPORT_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_io_csr_regs_3_MPORT_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_io_csr_regs_3_MPORT_data; // @[EXU.scala 36:22]
  wire  CSR_io_csr_regs_4_MPORT_en; // @[EXU.scala 36:22]
  wire [2:0] CSR_io_csr_regs_4_MPORT_addr; // @[EXU.scala 36:22]
  wire [63:0] CSR_io_csr_regs_4_MPORT_data; // @[EXU.scala 36:22]
  wire [63:0] CSR_MPORT_data; // @[EXU.scala 36:22]
  wire [2:0] CSR_MPORT_addr; // @[EXU.scala 36:22]
  wire  CSR_MPORT_mask; // @[EXU.scala 36:22]
  wire  CSR_MPORT_en; // @[EXU.scala 36:22]
  wire [63:0] CSR_MPORT_2_data; // @[EXU.scala 36:22]
  wire [2:0] CSR_MPORT_2_addr; // @[EXU.scala 36:22]
  wire  CSR_MPORT_2_mask; // @[EXU.scala 36:22]
  wire  CSR_MPORT_2_en; // @[EXU.scala 36:22]
  wire [63:0] CSR_MPORT_4_data; // @[EXU.scala 36:22]
  wire [2:0] CSR_MPORT_4_addr; // @[EXU.scala 36:22]
  wire  CSR_MPORT_4_mask; // @[EXU.scala 36:22]
  wire  CSR_MPORT_4_en; // @[EXU.scala 36:22]
  wire [63:0] _result_T_1 = io_in1 + io_in2; // @[EXU.scala 50:24]
  wire [31:0] _result_T_5 = io_in1[31:0] + io_in2[31:0]; // @[EXU.scala 51:37]
  wire [31:0] _result_T_8 = _result_T_5[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_10 = {_result_T_8,_result_T_5}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_12 = io_in1 - io_in2; // @[EXU.scala 52:24]
  wire [31:0] _result_T_16 = io_in1[31:0] - io_in2[31:0]; // @[EXU.scala 53:36]
  wire [31:0] _result_T_19 = _result_T_16[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_21 = {_result_T_19,_result_T_16}; // @[Cat.scala 31:58]
  wire [127:0] _result_T_22 = io_in1 * io_in2; // @[EXU.scala 54:24]
  wire [63:0] _result_T_26 = io_in1[31:0] * io_in2[31:0]; // @[EXU.scala 55:37]
  wire [31:0] _result_T_29 = _result_T_26[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_31 = {_result_T_29,_result_T_26[31:0]}; // @[Cat.scala 31:58]
  wire  _result_T_32 = io_in2 == 64'h0; // @[EXU.scala 56:27]
  wire [64:0] _result_T_36 = $signed(io_in1) / $signed(io_in2); // @[EXU.scala 56:69]
  wire [64:0] _result_T_37 = io_in2 == 64'h0 ? 65'h0 : _result_T_36; // @[EXU.scala 56:21]
  wire [63:0] _result_T_39 = io_in1 / io_in2; // @[EXU.scala 57:47]
  wire [63:0] _result_T_40 = _result_T_32 ? 64'h0 : _result_T_39; // @[EXU.scala 57:22]
  wire [31:0] _result_T_42 = io_in1[31:0]; // @[EXU.scala 58:36]
  wire [31:0] _result_T_44 = io_in2[31:0]; // @[EXU.scala 58:54]
  wire [32:0] _result_T_46 = $signed(_result_T_42) / $signed(_result_T_44); // @[EXU.scala 58:62]
  wire [31:0] _result_T_49 = _result_T_46[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_51 = {_result_T_49,_result_T_46[31:0]}; // @[Cat.scala 31:58]
  wire [31:0] _result_T_54 = io_in1[31:0] / io_in2[31:0]; // @[EXU.scala 59:36]
  wire [31:0] _result_T_57 = _result_T_54[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_59 = {_result_T_57,_result_T_54}; // @[Cat.scala 31:58]
  wire [126:0] _GEN_1 = {{63'd0}, io_in1}; // @[EXU.scala 60:24]
  wire [126:0] _result_T_61 = _GEN_1 << io_in2[5:0]; // @[EXU.scala 60:24]
  wire  _result_T_64 = $signed(io_in1) < $signed(io_in2); // @[EXU.scala 61:35]
  wire  _result_T_66 = io_in1 < io_in2; // @[EXU.scala 62:29]
  wire [62:0] _GEN_2 = {{31'd0}, io_in1[31:0]}; // @[EXU.scala 63:37]
  wire [62:0] _result_T_70 = _GEN_2 << io_in2[4:0]; // @[EXU.scala 63:37]
  wire [31:0] _result_T_73 = _result_T_70[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_75 = {_result_T_73,_result_T_70[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_79 = $signed(io_in1) >>> io_in2[5:0]; // @[EXU.scala 64:45]
  wire [31:0] _result_T_84 = $signed(_result_T_42) >>> io_in2[4:0]; // @[EXU.scala 65:57]
  wire [31:0] _result_T_87 = _result_T_84[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_89 = {_result_T_87,_result_T_84}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_91 = io_in1 >> io_in2[5:0]; // @[EXU.scala 66:24]
  wire [31:0] _result_T_94 = io_in1[31:0] >> io_in2[4:0]; // @[EXU.scala 67:36]
  wire [31:0] _result_T_97 = _result_T_94[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_99 = {_result_T_97,_result_T_94}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_100 = io_in1 ^ io_in2; // @[EXU.scala 68:24]
  wire [63:0] _result_T_101 = io_in1 & io_in2; // @[EXU.scala 69:24]
  wire [63:0] _result_T_102 = io_in1 | io_in2; // @[EXU.scala 70:23]
  wire [63:0] _result_T_106 = $signed(io_in1) % $signed(io_in2); // @[EXU.scala 71:46]
  wire [63:0] _result_T_107 = io_in1 % io_in2; // @[EXU.scala 72:25]
  wire [31:0] _result_T_113 = $signed(_result_T_42) % $signed(_result_T_44); // @[EXU.scala 73:66]
  wire [31:0] _result_T_116 = _result_T_113[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_118 = {_result_T_116,_result_T_113}; // @[Cat.scala 31:58]
  wire [31:0] _result_T_121 = io_in1[31:0] % io_in2[31:0]; // @[EXU.scala 74:37]
  wire [31:0] _result_T_124 = _result_T_121[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_126 = {_result_T_124,_result_T_121}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_128 = io_in1 + io_imm; // @[EXU.scala 76:25]
  wire [63:0] _GEN_0 = {{32'd0}, io_in1[31:0]}; // @[EXU.scala 77:38]
  wire [63:0] _result_T_131 = _GEN_0 + io_imm; // @[EXU.scala 77:38]
  wire [31:0] _result_T_134 = _result_T_131[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_136 = {_result_T_134,_result_T_131[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_138 = io_pc + 64'h4; // @[EXU.scala 78:26]
  wire [126:0] _GEN_3 = {{63'd0}, io_in1}; // @[EXU.scala 86:25]
  wire [126:0] _result_T_154 = _GEN_3 << io_imm[5:0]; // @[EXU.scala 86:25]
  wire [62:0] _GEN_4 = {{31'd0}, io_in1[31:0]}; // @[EXU.scala 87:39]
  wire [62:0] _result_T_157 = _GEN_4 << io_imm[4:0]; // @[EXU.scala 87:39]
  wire [31:0] _result_T_160 = _result_T_157[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_162 = {_result_T_160,_result_T_157[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_164 = io_in1 >> io_imm[5:0]; // @[EXU.scala 88:25]
  wire [31:0] _result_T_167 = io_in1[31:0] >> io_imm[4:0]; // @[EXU.scala 89:39]
  wire [31:0] _result_T_170 = _result_T_167[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_172 = {_result_T_170,_result_T_167}; // @[Cat.scala 31:58]
  wire  _result_T_175 = $signed(io_in1) < $signed(io_imm); // @[EXU.scala 90:36]
  wire  _result_T_177 = io_in1 < io_imm; // @[EXU.scala 91:30]
  wire [63:0] _result_T_179 = io_in1 & io_imm; // @[EXU.scala 92:25]
  wire [63:0] _result_T_180 = io_in1 ^ io_imm; // @[EXU.scala 93:25]
  wire [63:0] _result_T_181 = io_in1 | io_imm; // @[EXU.scala 94:24]
  wire [63:0] _result_T_185 = $signed(io_in1) >>> io_imm[5:0]; // @[EXU.scala 95:46]
  wire [31:0] _result_T_190 = $signed(_result_T_42) >>> io_imm[4:0]; // @[EXU.scala 96:60]
  wire [31:0] _result_T_193 = _result_T_190[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_195 = {_result_T_193,_result_T_190}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_205 = io_pc + io_imm; // @[EXU.scala 106:25]
  wire [63:0] _result_T_221 = 8'h0 == io_ctrl_alu_op ? _result_T_1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _result_T_223 = 8'h1 == io_ctrl_alu_op ? _result_T_10 : _result_T_221; // @[Mux.scala 81:58]
  wire [63:0] _result_T_225 = 8'h2 == io_ctrl_alu_op ? _result_T_12 : _result_T_223; // @[Mux.scala 81:58]
  wire [63:0] _result_T_227 = 8'h3 == io_ctrl_alu_op ? _result_T_21 : _result_T_225; // @[Mux.scala 81:58]
  wire [63:0] _result_T_229 = 8'h4 == io_ctrl_alu_op ? _result_T_22[63:0] : _result_T_227; // @[Mux.scala 81:58]
  wire [63:0] _result_T_231 = 8'h5 == io_ctrl_alu_op ? _result_T_31 : _result_T_229; // @[Mux.scala 81:58]
  wire [64:0] _result_T_233 = 8'h6 == io_ctrl_alu_op ? _result_T_37 : {{1'd0}, _result_T_231}; // @[Mux.scala 81:58]
  wire [64:0] _result_T_235 = 8'h7 == io_ctrl_alu_op ? {{1'd0}, _result_T_40} : _result_T_233; // @[Mux.scala 81:58]
  wire [64:0] _result_T_237 = 8'h8 == io_ctrl_alu_op ? {{1'd0}, _result_T_51} : _result_T_235; // @[Mux.scala 81:58]
  wire [64:0] _result_T_239 = 8'h9 == io_ctrl_alu_op ? {{1'd0}, _result_T_59} : _result_T_237; // @[Mux.scala 81:58]
  wire [126:0] _result_T_241 = 8'ha == io_ctrl_alu_op ? _result_T_61 : {{62'd0}, _result_T_239}; // @[Mux.scala 81:58]
  wire [126:0] _result_T_243 = 8'hb == io_ctrl_alu_op ? {{126'd0}, _result_T_64} : _result_T_241; // @[Mux.scala 81:58]
  wire [126:0] _result_T_245 = 8'hc == io_ctrl_alu_op ? {{126'd0}, _result_T_66} : _result_T_243; // @[Mux.scala 81:58]
  wire [126:0] _result_T_247 = 8'hd == io_ctrl_alu_op ? {{63'd0}, _result_T_75} : _result_T_245; // @[Mux.scala 81:58]
  wire [126:0] _result_T_249 = 8'h13 == io_ctrl_alu_op ? {{63'd0}, _result_T_79} : _result_T_247; // @[Mux.scala 81:58]
  wire [126:0] _result_T_251 = 8'he == io_ctrl_alu_op ? {{63'd0}, _result_T_89} : _result_T_249; // @[Mux.scala 81:58]
  wire [126:0] _result_T_253 = 8'hf == io_ctrl_alu_op ? {{63'd0}, _result_T_91} : _result_T_251; // @[Mux.scala 81:58]
  wire [126:0] _result_T_255 = 8'h10 == io_ctrl_alu_op ? {{63'd0}, _result_T_99} : _result_T_253; // @[Mux.scala 81:58]
  wire [126:0] _result_T_257 = 8'h11 == io_ctrl_alu_op ? {{63'd0}, _result_T_100} : _result_T_255; // @[Mux.scala 81:58]
  wire [126:0] _result_T_259 = 8'h12 == io_ctrl_alu_op ? {{63'd0}, _result_T_101} : _result_T_257; // @[Mux.scala 81:58]
  wire [126:0] _result_T_261 = 8'h14 == io_ctrl_alu_op ? {{63'd0}, _result_T_102} : _result_T_259; // @[Mux.scala 81:58]
  wire [126:0] _result_T_263 = 8'h15 == io_ctrl_alu_op ? {{63'd0}, _result_T_106} : _result_T_261; // @[Mux.scala 81:58]
  wire [126:0] _result_T_265 = 8'h16 == io_ctrl_alu_op ? {{63'd0}, _result_T_107} : _result_T_263; // @[Mux.scala 81:58]
  wire [126:0] _result_T_267 = 8'h17 == io_ctrl_alu_op ? {{63'd0}, _result_T_118} : _result_T_265; // @[Mux.scala 81:58]
  wire [126:0] _result_T_269 = 8'h18 == io_ctrl_alu_op ? {{63'd0}, _result_T_126} : _result_T_267; // @[Mux.scala 81:58]
  wire [126:0] _result_T_271 = 8'h19 == io_ctrl_alu_op ? {{63'd0}, _result_T_128} : _result_T_269; // @[Mux.scala 81:58]
  wire [126:0] _result_T_273 = 8'h1a == io_ctrl_alu_op ? {{63'd0}, _result_T_136} : _result_T_271; // @[Mux.scala 81:58]
  wire [126:0] _result_T_275 = 8'h1b == io_ctrl_alu_op ? {{63'd0}, _result_T_138} : _result_T_273; // @[Mux.scala 81:58]
  wire [126:0] _result_T_277 = 8'h1c == io_ctrl_alu_op ? {{63'd0}, _result_T_128} : _result_T_275; // @[Mux.scala 81:58]
  wire [126:0] _result_T_279 = 8'h1d == io_ctrl_alu_op ? {{63'd0}, _result_T_128} : _result_T_277; // @[Mux.scala 81:58]
  wire [126:0] _result_T_281 = 8'h1e == io_ctrl_alu_op ? {{63'd0}, _result_T_128} : _result_T_279; // @[Mux.scala 81:58]
  wire [126:0] _result_T_283 = 8'h1f == io_ctrl_alu_op ? {{63'd0}, _result_T_128} : _result_T_281; // @[Mux.scala 81:58]
  wire [126:0] _result_T_285 = 8'h21 == io_ctrl_alu_op ? {{63'd0}, _result_T_128} : _result_T_283; // @[Mux.scala 81:58]
  wire [126:0] _result_T_287 = 8'h22 == io_ctrl_alu_op ? {{63'd0}, _result_T_128} : _result_T_285; // @[Mux.scala 81:58]
  wire [126:0] _result_T_289 = 8'h20 == io_ctrl_alu_op ? {{63'd0}, _result_T_128} : _result_T_287; // @[Mux.scala 81:58]
  wire [126:0] _result_T_291 = 8'h23 == io_ctrl_alu_op ? _result_T_154 : _result_T_289; // @[Mux.scala 81:58]
  wire [126:0] _result_T_293 = 8'h24 == io_ctrl_alu_op ? {{63'd0}, _result_T_162} : _result_T_291; // @[Mux.scala 81:58]
  wire [126:0] _result_T_295 = 8'h25 == io_ctrl_alu_op ? {{63'd0}, _result_T_164} : _result_T_293; // @[Mux.scala 81:58]
  wire [126:0] _result_T_297 = 8'h26 == io_ctrl_alu_op ? {{63'd0}, _result_T_172} : _result_T_295; // @[Mux.scala 81:58]
  wire [126:0] _result_T_299 = 8'h29 == io_ctrl_alu_op ? {{126'd0}, _result_T_175} : _result_T_297; // @[Mux.scala 81:58]
  wire [126:0] _result_T_301 = 8'h2a == io_ctrl_alu_op ? {{126'd0}, _result_T_177} : _result_T_299; // @[Mux.scala 81:58]
  wire [126:0] _result_T_303 = 8'h2b == io_ctrl_alu_op ? {{63'd0}, _result_T_179} : _result_T_301; // @[Mux.scala 81:58]
  wire [126:0] _result_T_305 = 8'h2c == io_ctrl_alu_op ? {{63'd0}, _result_T_180} : _result_T_303; // @[Mux.scala 81:58]
  wire [126:0] _result_T_307 = 8'h2d == io_ctrl_alu_op ? {{63'd0}, _result_T_181} : _result_T_305; // @[Mux.scala 81:58]
  wire [126:0] _result_T_309 = 8'h27 == io_ctrl_alu_op ? {{63'd0}, _result_T_185} : _result_T_307; // @[Mux.scala 81:58]
  wire [126:0] _result_T_311 = 8'h28 == io_ctrl_alu_op ? {{63'd0}, _result_T_195} : _result_T_309; // @[Mux.scala 81:58]
  wire [126:0] _result_T_313 = 8'h3c == io_ctrl_alu_op ? {{63'd0}, CSR_result_MPORT_data} : _result_T_311; // @[Mux.scala 81:58]
  wire [126:0] _result_T_315 = 8'h3d == io_ctrl_alu_op ? {{63'd0}, CSR_result_MPORT_1_data} : _result_T_313; // @[Mux.scala 81:58]
  wire [126:0] _result_T_317 = 8'h3e == io_ctrl_alu_op ? {{63'd0}, CSR_result_MPORT_2_data} : _result_T_315; // @[Mux.scala 81:58]
  wire [126:0] _result_T_319 = 8'h2e == io_ctrl_alu_op ? {{63'd0}, _result_T_128} : _result_T_317; // @[Mux.scala 81:58]
  wire [126:0] _result_T_321 = 8'h31 == io_ctrl_alu_op ? {{63'd0}, _result_T_128} : _result_T_319; // @[Mux.scala 81:58]
  wire [126:0] _result_T_323 = 8'h30 == io_ctrl_alu_op ? {{63'd0}, _result_T_128} : _result_T_321; // @[Mux.scala 81:58]
  wire [126:0] _result_T_325 = 8'h2f == io_ctrl_alu_op ? {{63'd0}, _result_T_128} : _result_T_323; // @[Mux.scala 81:58]
  wire [126:0] _result_T_327 = 8'h32 == io_ctrl_alu_op ? {{63'd0}, _result_T_205} : _result_T_325; // @[Mux.scala 81:58]
  wire [126:0] _result_T_329 = 8'h33 == io_ctrl_alu_op ? {{63'd0}, _result_T_205} : _result_T_327; // @[Mux.scala 81:58]
  wire [126:0] _result_T_331 = 8'h36 == io_ctrl_alu_op ? {{63'd0}, _result_T_205} : _result_T_329; // @[Mux.scala 81:58]
  wire [126:0] _result_T_333 = 8'h34 == io_ctrl_alu_op ? {{63'd0}, _result_T_205} : _result_T_331; // @[Mux.scala 81:58]
  wire [126:0] _result_T_335 = 8'h35 == io_ctrl_alu_op ? {{63'd0}, _result_T_205} : _result_T_333; // @[Mux.scala 81:58]
  wire [126:0] _result_T_337 = 8'h37 == io_ctrl_alu_op ? {{63'd0}, _result_T_205} : _result_T_335; // @[Mux.scala 81:58]
  wire [126:0] _result_T_339 = 8'h38 == io_ctrl_alu_op ? {{63'd0}, io_imm} : _result_T_337; // @[Mux.scala 81:58]
  wire [126:0] _result_T_341 = 8'h39 == io_ctrl_alu_op ? {{63'd0}, _result_T_205} : _result_T_339; // @[Mux.scala 81:58]
  wire [126:0] _result_T_343 = 8'h3a == io_ctrl_alu_op ? {{63'd0}, _result_T_138} : _result_T_341; // @[Mux.scala 81:58]
  wire [63:0] _csr_wdata_T = CSR_csr_wdata_MPORT_data | io_in1; // @[EXU.scala 126:36]
  wire [63:0] _csr_wdata_T_1 = ~io_in1; // @[EXU.scala 127:38]
  wire [63:0] _csr_wdata_T_2 = CSR_csr_wdata_MPORT_1_data & _csr_wdata_T_1; // @[EXU.scala 127:36]
  wire [63:0] _csr_wdata_T_4 = 8'h3c == io_ctrl_alu_op ? io_in1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _csr_wdata_T_6 = 8'h3d == io_ctrl_alu_op ? _csr_wdata_T : _csr_wdata_T_4; // @[Mux.scala 81:58]
  wire [63:0] csr_wdata = 8'h3e == io_ctrl_alu_op ? _csr_wdata_T_2 : _csr_wdata_T_6; // @[Mux.scala 81:58]
  wire [63:0] _io_j_branch_T_4 = _result_T_128 & 64'hfffffffffffffffe; // @[EXU.scala 136:33]
  wire [63:0] _io_j_branch_T_6 = 8'h3a == io_ctrl_alu_op ? _result_T_205 : 64'h0; // @[Mux.scala 81:58]
  wire  _io_is_b_T = io_in1 == io_in2; // @[EXU.scala 144:28]
  wire  _io_is_b_T_2 = io_in1 != io_in2; // @[EXU.scala 145:28]
  wire  _io_is_b_T_10 = $signed(io_in1) >= $signed(io_in2); // @[EXU.scala 147:35]
  wire  _io_is_b_T_12 = io_in1 >= io_in2; // @[EXU.scala 148:29]
  wire  _io_is_b_T_19 = 8'h33 == io_ctrl_alu_op ? _io_is_b_T_2 : 8'h32 == io_ctrl_alu_op & _io_is_b_T; // @[Mux.scala 81:58]
  wire  _io_is_b_T_21 = 8'h36 == io_ctrl_alu_op ? _result_T_64 : _io_is_b_T_19; // @[Mux.scala 81:58]
  wire  _io_is_b_T_23 = 8'h34 == io_ctrl_alu_op ? _io_is_b_T_10 : _io_is_b_T_21; // @[Mux.scala 81:58]
  wire  _io_is_b_T_25 = 8'h35 == io_ctrl_alu_op ? _io_is_b_T_12 : _io_is_b_T_23; // @[Mux.scala 81:58]
  wire  _io_is_b_T_27 = 8'h37 == io_ctrl_alu_op ? _result_T_66 : _io_is_b_T_25; // @[Mux.scala 81:58]
  wire  _T = io_ctrl_alu_op == 8'h3f; // @[EXU.scala 152:34]
  wire [63:0] _io_e_branch_T_1 = CSR_io_e_branch_MPORT_1_data + 64'h4; // @[EXU.scala 161:29]
  wire [63:0] _io_e_branch_T_3 = 8'h3f == io_ctrl_alu_op ? CSR_io_e_branch_MPORT_data : 64'h0; // @[Mux.scala 81:58]
  assign CSR_result_MPORT_en = 1'h1;
  assign CSR_result_MPORT_addr = io_csr_index;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_result_MPORT_data = CSR[CSR_result_MPORT_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_result_MPORT_data = CSR_result_MPORT_addr >= 3'h5 ? _RAND_1[63:0] : CSR[CSR_result_MPORT_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_result_MPORT_1_en = 1'h1;
  assign CSR_result_MPORT_1_addr = io_csr_index;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_result_MPORT_1_data = CSR[CSR_result_MPORT_1_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_result_MPORT_1_data = CSR_result_MPORT_1_addr >= 3'h5 ? _RAND_2[63:0] : CSR[CSR_result_MPORT_1_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_result_MPORT_2_en = 1'h1;
  assign CSR_result_MPORT_2_addr = io_csr_index;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_result_MPORT_2_data = CSR[CSR_result_MPORT_2_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_result_MPORT_2_data = CSR_result_MPORT_2_addr >= 3'h5 ? _RAND_3[63:0] : CSR[CSR_result_MPORT_2_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_csr_wdata_MPORT_en = 1'h1;
  assign CSR_csr_wdata_MPORT_addr = io_csr_index;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_csr_wdata_MPORT_data = CSR[CSR_csr_wdata_MPORT_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_csr_wdata_MPORT_data = CSR_csr_wdata_MPORT_addr >= 3'h5 ? _RAND_4[63:0] : CSR[CSR_csr_wdata_MPORT_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_csr_wdata_MPORT_1_en = 1'h1;
  assign CSR_csr_wdata_MPORT_1_addr = io_csr_index;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_csr_wdata_MPORT_1_data = CSR[CSR_csr_wdata_MPORT_1_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_csr_wdata_MPORT_1_data = CSR_csr_wdata_MPORT_1_addr >= 3'h5 ? _RAND_5[63:0] :
    CSR[CSR_csr_wdata_MPORT_1_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_MPORT_1_en = 1'h1;
  assign CSR_MPORT_1_addr = 3'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_MPORT_1_data = CSR[CSR_MPORT_1_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_MPORT_1_data = CSR_MPORT_1_addr >= 3'h5 ? _RAND_6[63:0] : CSR[CSR_MPORT_1_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_MPORT_3_en = 1'h1;
  assign CSR_MPORT_3_addr = 3'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_MPORT_3_data = CSR[CSR_MPORT_3_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_MPORT_3_data = CSR_MPORT_3_addr >= 3'h5 ? _RAND_7[63:0] : CSR[CSR_MPORT_3_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_MPORT_5_en = 1'h1;
  assign CSR_MPORT_5_addr = io_csr_index;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_MPORT_5_data = CSR[CSR_MPORT_5_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_MPORT_5_data = CSR_MPORT_5_addr >= 3'h5 ? _RAND_8[63:0] : CSR[CSR_MPORT_5_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_e_branch_MPORT_en = 1'h1;
  assign CSR_io_e_branch_MPORT_addr = 3'h4;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_e_branch_MPORT_data = CSR[CSR_io_e_branch_MPORT_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_io_e_branch_MPORT_data = CSR_io_e_branch_MPORT_addr >= 3'h5 ? _RAND_9[63:0] :
    CSR[CSR_io_e_branch_MPORT_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_e_branch_MPORT_1_en = 1'h1;
  assign CSR_io_e_branch_MPORT_1_addr = 3'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_e_branch_MPORT_1_data = CSR[CSR_io_e_branch_MPORT_1_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_io_e_branch_MPORT_1_data = CSR_io_e_branch_MPORT_1_addr >= 3'h5 ? _RAND_10[63:0] :
    CSR[CSR_io_e_branch_MPORT_1_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_csr_regs_0_MPORT_en = 1'h1;
  assign CSR_io_csr_regs_0_MPORT_addr = 3'h0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_csr_regs_0_MPORT_data = CSR[CSR_io_csr_regs_0_MPORT_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_io_csr_regs_0_MPORT_data = CSR_io_csr_regs_0_MPORT_addr >= 3'h5 ? _RAND_11[63:0] :
    CSR[CSR_io_csr_regs_0_MPORT_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_csr_regs_1_MPORT_en = 1'h1;
  assign CSR_io_csr_regs_1_MPORT_addr = 3'h1;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_csr_regs_1_MPORT_data = CSR[CSR_io_csr_regs_1_MPORT_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_io_csr_regs_1_MPORT_data = CSR_io_csr_regs_1_MPORT_addr >= 3'h5 ? _RAND_12[63:0] :
    CSR[CSR_io_csr_regs_1_MPORT_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_csr_regs_2_MPORT_en = 1'h1;
  assign CSR_io_csr_regs_2_MPORT_addr = 3'h2;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_csr_regs_2_MPORT_data = CSR[CSR_io_csr_regs_2_MPORT_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_io_csr_regs_2_MPORT_data = CSR_io_csr_regs_2_MPORT_addr >= 3'h5 ? _RAND_13[63:0] :
    CSR[CSR_io_csr_regs_2_MPORT_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_csr_regs_3_MPORT_en = 1'h1;
  assign CSR_io_csr_regs_3_MPORT_addr = 3'h3;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_csr_regs_3_MPORT_data = CSR[CSR_io_csr_regs_3_MPORT_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_io_csr_regs_3_MPORT_data = CSR_io_csr_regs_3_MPORT_addr >= 3'h5 ? _RAND_14[63:0] :
    CSR[CSR_io_csr_regs_3_MPORT_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_csr_regs_4_MPORT_en = 1'h1;
  assign CSR_io_csr_regs_4_MPORT_addr = 3'h4;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_io_csr_regs_4_MPORT_data = CSR[CSR_io_csr_regs_4_MPORT_addr]; // @[EXU.scala 36:22]
  `else
  assign CSR_io_csr_regs_4_MPORT_data = CSR_io_csr_regs_4_MPORT_addr >= 3'h5 ? _RAND_15[63:0] :
    CSR[CSR_io_csr_regs_4_MPORT_addr]; // @[EXU.scala 36:22]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign CSR_MPORT_data = _T ? io_reg17 : CSR_MPORT_1_data;
  assign CSR_MPORT_addr = 3'h1;
  assign CSR_MPORT_mask = 1'h1;
  assign CSR_MPORT_en = 1'h1;
  assign CSR_MPORT_2_data = _T ? io_pc : CSR_MPORT_3_data;
  assign CSR_MPORT_2_addr = 3'h2;
  assign CSR_MPORT_2_mask = 1'h1;
  assign CSR_MPORT_2_en = 1'h1;
  assign CSR_MPORT_4_data = io_ctrl_csr_wen ? csr_wdata : CSR_MPORT_5_data;
  assign CSR_MPORT_4_addr = io_csr_index;
  assign CSR_MPORT_4_mask = 1'h1;
  assign CSR_MPORT_4_en = 1'h1;
  assign io_out = _result_T_343[63:0]; // @[EXU.scala 167:10]
  assign io_j_branch = 8'h1b == io_ctrl_alu_op ? _io_j_branch_T_4 : _io_j_branch_T_6; // @[Mux.scala 81:58]
  assign io_e_branch = 8'h40 == io_ctrl_alu_op ? _io_e_branch_T_1 : _io_e_branch_T_3; // @[Mux.scala 81:58]
  assign io_is_b = {{63'd0}, _io_is_b_T_27}; // @[EXU.scala 140:11]
  assign io_csr_regs_0 = CSR_io_csr_regs_0_MPORT_data; // @[EXU.scala 165:43]
  assign io_csr_regs_1 = CSR_io_csr_regs_1_MPORT_data; // @[EXU.scala 165:43]
  assign io_csr_regs_2 = CSR_io_csr_regs_2_MPORT_data; // @[EXU.scala 165:43]
  assign io_csr_regs_3 = CSR_io_csr_regs_3_MPORT_data; // @[EXU.scala 165:43]
  assign io_csr_regs_4 = CSR_io_csr_regs_4_MPORT_data; // @[EXU.scala 165:43]
  always @(posedge clock) begin
    if (CSR_MPORT_en & CSR_MPORT_mask) begin
      CSR[CSR_MPORT_addr] <= CSR_MPORT_data; // @[EXU.scala 36:22]
    end
    if (CSR_MPORT_2_en & CSR_MPORT_2_mask) begin
      CSR[CSR_MPORT_2_addr] <= CSR_MPORT_2_data; // @[EXU.scala 36:22]
    end
    if (CSR_MPORT_4_en & CSR_MPORT_4_mask) begin
      CSR[CSR_MPORT_4_addr] <= CSR_MPORT_4_data; // @[EXU.scala 36:22]
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
  _RAND_9 = {2{`RANDOM}};
  _RAND_10 = {2{`RANDOM}};
  _RAND_11 = {2{`RANDOM}};
  _RAND_12 = {2{`RANDOM}};
  _RAND_13 = {2{`RANDOM}};
  _RAND_14 = {2{`RANDOM}};
  _RAND_15 = {2{`RANDOM}};
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 5; initvar = initvar+1)
    CSR[initvar] = _RAND_0[63:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IDU(
  input  [31:0] io_inst,
  output        io_ctrl_RegWen,
  output [7:0]  io_ctrl_OP,
  output        io_ctrl_J_JUMP,
  output        io_ctrl_MemWen,
  output [7:0]  io_ctrl_wmask,
  output        io_ctrl_MemLoad,
  output        io_ctrl_csr_wen,
  output        io_ctrl_E_JUMP,
  output [4:0]  io_reg_rs1,
  output [4:0]  io_reg_rs2,
  output [4:0]  io_reg_rd,
  output [2:0]  io_reg_csr_index,
  output [63:0] io_imm,
  output        io_eval
);
  wire [31:0] _crtlsignals_T = io_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
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
  wire [31:0] _crtlsignals_T_50 = io_inst & 32'h707f; // @[Lookup.scala 31:38]
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
  wire [31:0] _crtlsignals_T_70 = io_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
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
  wire  _crtlsignals_T_99 = 32'h73 == io_inst; // @[Lookup.scala 31:38]
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
  wire [31:0] _crtlsignals_T_120 = io_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_121 = 32'h37 == _crtlsignals_T_120; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_123 = 32'h17 == _crtlsignals_T_120; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_125 = 32'h6f == _crtlsignals_T_120; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_127 = 32'h30200073 == io_inst; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_129 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
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
  wire  _crtlsignals_T_331 = _crtlsignals_T_123 ? 1'h0 : _crtlsignals_T_125; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_332 = _crtlsignals_T_121 ? 1'h0 : _crtlsignals_T_331; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_333 = _crtlsignals_T_119 ? 1'h0 : _crtlsignals_T_332; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_334 = _crtlsignals_T_117 ? 1'h0 : _crtlsignals_T_333; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_335 = _crtlsignals_T_115 ? 1'h0 : _crtlsignals_T_334; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_336 = _crtlsignals_T_113 ? 1'h0 : _crtlsignals_T_335; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_337 = _crtlsignals_T_111 ? 1'h0 : _crtlsignals_T_336; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_338 = _crtlsignals_T_109 ? 1'h0 : _crtlsignals_T_337; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_339 = _crtlsignals_T_107 ? 1'h0 : _crtlsignals_T_338; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_340 = _crtlsignals_T_105 ? 1'h0 : _crtlsignals_T_339; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_341 = _crtlsignals_T_103 ? 1'h0 : _crtlsignals_T_340; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_342 = _crtlsignals_T_101 ? 1'h0 : _crtlsignals_T_341; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_343 = _crtlsignals_T_99 ? 1'h0 : _crtlsignals_T_342; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_344 = _crtlsignals_T_97 ? 1'h0 : _crtlsignals_T_343; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_345 = _crtlsignals_T_95 ? 1'h0 : _crtlsignals_T_344; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_346 = _crtlsignals_T_93 ? 1'h0 : _crtlsignals_T_345; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_347 = _crtlsignals_T_91 ? 1'h0 : _crtlsignals_T_346; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_348 = _crtlsignals_T_89 ? 1'h0 : _crtlsignals_T_347; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_349 = _crtlsignals_T_87 ? 1'h0 : _crtlsignals_T_348; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_350 = _crtlsignals_T_85 ? 1'h0 : _crtlsignals_T_349; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_351 = _crtlsignals_T_83 ? 1'h0 : _crtlsignals_T_350; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_352 = _crtlsignals_T_81 ? 1'h0 : _crtlsignals_T_351; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_353 = _crtlsignals_T_79 ? 1'h0 : _crtlsignals_T_352; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_354 = _crtlsignals_T_77 ? 1'h0 : _crtlsignals_T_353; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_355 = _crtlsignals_T_75 ? 1'h0 : _crtlsignals_T_354; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_356 = _crtlsignals_T_73 ? 1'h0 : _crtlsignals_T_355; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_357 = _crtlsignals_T_71 ? 1'h0 : _crtlsignals_T_356; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_358 = _crtlsignals_T_69 ? 1'h0 : _crtlsignals_T_357; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_359 = _crtlsignals_T_67 ? 1'h0 : _crtlsignals_T_358; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_360 = _crtlsignals_T_65 ? 1'h0 : _crtlsignals_T_359; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_361 = _crtlsignals_T_63 ? 1'h0 : _crtlsignals_T_360; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_362 = _crtlsignals_T_61 ? 1'h0 : _crtlsignals_T_361; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_363 = _crtlsignals_T_59 ? 1'h0 : _crtlsignals_T_362; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_364 = _crtlsignals_T_57 ? 1'h0 : _crtlsignals_T_363; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_366 = _crtlsignals_T_53 ? 1'h0 : _crtlsignals_T_55 | _crtlsignals_T_364; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_367 = _crtlsignals_T_51 ? 1'h0 : _crtlsignals_T_366; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_368 = _crtlsignals_T_49 ? 1'h0 : _crtlsignals_T_367; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_369 = _crtlsignals_T_47 ? 1'h0 : _crtlsignals_T_368; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_370 = _crtlsignals_T_45 ? 1'h0 : _crtlsignals_T_369; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_371 = _crtlsignals_T_43 ? 1'h0 : _crtlsignals_T_370; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_372 = _crtlsignals_T_41 ? 1'h0 : _crtlsignals_T_371; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_373 = _crtlsignals_T_39 ? 1'h0 : _crtlsignals_T_372; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_374 = _crtlsignals_T_37 ? 1'h0 : _crtlsignals_T_373; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_375 = _crtlsignals_T_35 ? 1'h0 : _crtlsignals_T_374; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_376 = _crtlsignals_T_33 ? 1'h0 : _crtlsignals_T_375; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_377 = _crtlsignals_T_31 ? 1'h0 : _crtlsignals_T_376; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_378 = _crtlsignals_T_29 ? 1'h0 : _crtlsignals_T_377; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_379 = _crtlsignals_T_27 ? 1'h0 : _crtlsignals_T_378; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_380 = _crtlsignals_T_25 ? 1'h0 : _crtlsignals_T_379; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_381 = _crtlsignals_T_23 ? 1'h0 : _crtlsignals_T_380; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_382 = _crtlsignals_T_21 ? 1'h0 : _crtlsignals_T_381; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_383 = _crtlsignals_T_19 ? 1'h0 : _crtlsignals_T_382; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_384 = _crtlsignals_T_17 ? 1'h0 : _crtlsignals_T_383; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_385 = _crtlsignals_T_15 ? 1'h0 : _crtlsignals_T_384; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_386 = _crtlsignals_T_13 ? 1'h0 : _crtlsignals_T_385; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_387 = _crtlsignals_T_11 ? 1'h0 : _crtlsignals_T_386; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_388 = _crtlsignals_T_9 ? 1'h0 : _crtlsignals_T_387; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_389 = _crtlsignals_T_7 ? 1'h0 : _crtlsignals_T_388; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_390 = _crtlsignals_T_5 ? 1'h0 : _crtlsignals_T_389; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_391 = _crtlsignals_T_3 ? 1'h0 : _crtlsignals_T_390; // @[Lookup.scala 34:39]
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
  wire  _crtlsignals_T_542 = _crtlsignals_T_91 ? 1'h0 : _crtlsignals_T_93 | (_crtlsignals_T_95 | _crtlsignals_T_97); // @[Lookup.scala 34:39]
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
  wire  _crtlsignals_T_590 = _crtlsignals_T_125 ? 1'h0 : _crtlsignals_T_127; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_591 = _crtlsignals_T_123 ? 1'h0 : _crtlsignals_T_590; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_592 = _crtlsignals_T_121 ? 1'h0 : _crtlsignals_T_591; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_593 = _crtlsignals_T_119 ? 1'h0 : _crtlsignals_T_592; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_594 = _crtlsignals_T_117 ? 1'h0 : _crtlsignals_T_593; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_595 = _crtlsignals_T_115 ? 1'h0 : _crtlsignals_T_594; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_596 = _crtlsignals_T_113 ? 1'h0 : _crtlsignals_T_595; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_597 = _crtlsignals_T_111 ? 1'h0 : _crtlsignals_T_596; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_598 = _crtlsignals_T_109 ? 1'h0 : _crtlsignals_T_597; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_599 = _crtlsignals_T_107 ? 1'h0 : _crtlsignals_T_598; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_600 = _crtlsignals_T_105 ? 1'h0 : _crtlsignals_T_599; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_601 = _crtlsignals_T_103 ? 1'h0 : _crtlsignals_T_600; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_602 = _crtlsignals_T_101 ? 1'h0 : _crtlsignals_T_601; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_604 = _crtlsignals_T_97 ? 1'h0 : _crtlsignals_T_99 | _crtlsignals_T_602; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_605 = _crtlsignals_T_95 ? 1'h0 : _crtlsignals_T_604; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_606 = _crtlsignals_T_93 ? 1'h0 : _crtlsignals_T_605; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_607 = _crtlsignals_T_91 ? 1'h0 : _crtlsignals_T_606; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_608 = _crtlsignals_T_89 ? 1'h0 : _crtlsignals_T_607; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_609 = _crtlsignals_T_87 ? 1'h0 : _crtlsignals_T_608; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_610 = _crtlsignals_T_85 ? 1'h0 : _crtlsignals_T_609; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_611 = _crtlsignals_T_83 ? 1'h0 : _crtlsignals_T_610; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_612 = _crtlsignals_T_81 ? 1'h0 : _crtlsignals_T_611; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_613 = _crtlsignals_T_79 ? 1'h0 : _crtlsignals_T_612; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_614 = _crtlsignals_T_77 ? 1'h0 : _crtlsignals_T_613; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_615 = _crtlsignals_T_75 ? 1'h0 : _crtlsignals_T_614; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_616 = _crtlsignals_T_73 ? 1'h0 : _crtlsignals_T_615; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_617 = _crtlsignals_T_71 ? 1'h0 : _crtlsignals_T_616; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_618 = _crtlsignals_T_69 ? 1'h0 : _crtlsignals_T_617; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_619 = _crtlsignals_T_67 ? 1'h0 : _crtlsignals_T_618; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_620 = _crtlsignals_T_65 ? 1'h0 : _crtlsignals_T_619; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_621 = _crtlsignals_T_63 ? 1'h0 : _crtlsignals_T_620; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_622 = _crtlsignals_T_61 ? 1'h0 : _crtlsignals_T_621; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_623 = _crtlsignals_T_59 ? 1'h0 : _crtlsignals_T_622; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_624 = _crtlsignals_T_57 ? 1'h0 : _crtlsignals_T_623; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_625 = _crtlsignals_T_55 ? 1'h0 : _crtlsignals_T_624; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_626 = _crtlsignals_T_53 ? 1'h0 : _crtlsignals_T_625; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_627 = _crtlsignals_T_51 ? 1'h0 : _crtlsignals_T_626; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_628 = _crtlsignals_T_49 ? 1'h0 : _crtlsignals_T_627; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_629 = _crtlsignals_T_47 ? 1'h0 : _crtlsignals_T_628; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_630 = _crtlsignals_T_45 ? 1'h0 : _crtlsignals_T_629; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_631 = _crtlsignals_T_43 ? 1'h0 : _crtlsignals_T_630; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_632 = _crtlsignals_T_41 ? 1'h0 : _crtlsignals_T_631; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_633 = _crtlsignals_T_39 ? 1'h0 : _crtlsignals_T_632; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_634 = _crtlsignals_T_37 ? 1'h0 : _crtlsignals_T_633; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_635 = _crtlsignals_T_35 ? 1'h0 : _crtlsignals_T_634; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_636 = _crtlsignals_T_33 ? 1'h0 : _crtlsignals_T_635; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_637 = _crtlsignals_T_31 ? 1'h0 : _crtlsignals_T_636; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_638 = _crtlsignals_T_29 ? 1'h0 : _crtlsignals_T_637; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_639 = _crtlsignals_T_27 ? 1'h0 : _crtlsignals_T_638; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_640 = _crtlsignals_T_25 ? 1'h0 : _crtlsignals_T_639; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_641 = _crtlsignals_T_23 ? 1'h0 : _crtlsignals_T_640; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_642 = _crtlsignals_T_21 ? 1'h0 : _crtlsignals_T_641; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_643 = _crtlsignals_T_19 ? 1'h0 : _crtlsignals_T_642; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_644 = _crtlsignals_T_17 ? 1'h0 : _crtlsignals_T_643; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_645 = _crtlsignals_T_15 ? 1'h0 : _crtlsignals_T_644; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_646 = _crtlsignals_T_13 ? 1'h0 : _crtlsignals_T_645; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_647 = _crtlsignals_T_11 ? 1'h0 : _crtlsignals_T_646; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_648 = _crtlsignals_T_9 ? 1'h0 : _crtlsignals_T_647; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_649 = _crtlsignals_T_7 ? 1'h0 : _crtlsignals_T_648; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_650 = _crtlsignals_T_5 ? 1'h0 : _crtlsignals_T_649; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_651 = _crtlsignals_T_3 ? 1'h0 : _crtlsignals_T_650; // @[Lookup.scala 34:39]
  wire [51:0] _I_T_3 = io_inst[31] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] I = {_I_T_3,io_inst[31:20]}; // @[Cat.scala 31:58]
  wire [43:0] _U_T_3 = io_inst[31] ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _U_T_4 = {_U_T_3,io_inst[31:12]}; // @[Cat.scala 31:58]
  wire [75:0] U = {_U_T_4, 12'h0}; // @[IDU.scala 127:37]
  wire [56:0] _S_T_3 = io_inst[31] ? 57'h1ffffffffffffff : 57'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _S_T_4 = {_S_T_3,io_inst[31:25]}; // @[Cat.scala 31:58]
  wire [68:0] _S_T_5 = {_S_T_4, 5'h0}; // @[IDU.scala 128:36]
  wire [68:0] _GEN_0 = {{64'd0}, io_inst[11:7]}; // @[IDU.scala 128:41]
  wire [68:0] S = _S_T_5 | _GEN_0; // @[IDU.scala 128:41]
  wire [62:0] _J_T_3 = io_inst[31] ? 63'h7fffffffffffffff : 63'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _J_T_4 = {_J_T_3,io_inst[31]}; // @[Cat.scala 31:58]
  wire [83:0] _J_T_5 = {_J_T_4, 20'h0}; // @[IDU.scala 129:32]
  wire [11:0] _J_T_7 = {io_inst[20], 11'h0}; // @[IDU.scala 129:53]
  wire [83:0] _GEN_1 = {{72'd0}, _J_T_7}; // @[IDU.scala 129:38]
  wire [83:0] _J_T_8 = _J_T_5 | _GEN_1; // @[IDU.scala 129:38]
  wire [19:0] _J_T_10 = {io_inst[19:12], 12'h0}; // @[IDU.scala 129:77]
  wire [83:0] _GEN_2 = {{64'd0}, _J_T_10}; // @[IDU.scala 129:59]
  wire [83:0] _J_T_11 = _J_T_8 | _GEN_2; // @[IDU.scala 129:59]
  wire [10:0] _J_T_13 = {io_inst[30:21], 1'h0}; // @[IDU.scala 129:101]
  wire [83:0] _GEN_3 = {{73'd0}, _J_T_13}; // @[IDU.scala 129:83]
  wire [83:0] J = _J_T_11 | _GEN_3; // @[IDU.scala 129:83]
  wire [75:0] _B_T_5 = {_J_T_4, 12'h0}; // @[IDU.scala 130:32]
  wire [11:0] _B_T_7 = {io_inst[7], 11'h0}; // @[IDU.scala 130:51]
  wire [75:0] _GEN_4 = {{64'd0}, _B_T_7}; // @[IDU.scala 130:38]
  wire [75:0] _B_T_8 = _B_T_5 | _GEN_4; // @[IDU.scala 130:38]
  wire [10:0] _B_T_10 = {io_inst[30:25], 5'h0}; // @[IDU.scala 130:75]
  wire [75:0] _GEN_5 = {{65'd0}, _B_T_10}; // @[IDU.scala 130:57]
  wire [75:0] _B_T_11 = _B_T_8 | _GEN_5; // @[IDU.scala 130:57]
  wire [4:0] _B_T_13 = {io_inst[11:8], 1'h0}; // @[IDU.scala 130:97]
  wire [75:0] _GEN_6 = {{71'd0}, _B_T_13}; // @[IDU.scala 130:80]
  wire [75:0] B = _B_T_11 | _GEN_6; // @[IDU.scala 130:80]
  wire [63:0] _io_imm_T_1 = 3'h0 == ImmType ? I : 64'h0; // @[Mux.scala 81:58]
  wire [68:0] _io_imm_T_3 = 3'h1 == ImmType ? S : {{5'd0}, _io_imm_T_1}; // @[Mux.scala 81:58]
  wire [75:0] _io_imm_T_5 = 3'h2 == ImmType ? B : {{7'd0}, _io_imm_T_3}; // @[Mux.scala 81:58]
  wire [75:0] _io_imm_T_7 = 3'h3 == ImmType ? U : _io_imm_T_5; // @[Mux.scala 81:58]
  wire [83:0] _io_imm_T_9 = 3'h4 == ImmType ? J : {{8'd0}, _io_imm_T_7}; // @[Mux.scala 81:58]
  wire [63:0] _io_ctrl_wmask_T_1 = 8'h2f == io_ctrl_OP ? 64'h1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_ctrl_wmask_T_3 = 8'h30 == io_ctrl_OP ? 64'h3 : _io_ctrl_wmask_T_1; // @[Mux.scala 81:58]
  wire [63:0] _io_ctrl_wmask_T_5 = 8'h31 == io_ctrl_OP ? 64'hf : _io_ctrl_wmask_T_3; // @[Mux.scala 81:58]
  wire [63:0] _io_ctrl_wmask_T_7 = 8'h2e == io_ctrl_OP ? 64'hff : _io_ctrl_wmask_T_5; // @[Mux.scala 81:58]
  wire [1:0] _io_reg_csr_index_T_3 = 64'h341 == I ? 2'h2 : {{1'd0}, 64'h342 == I}; // @[Mux.scala 81:58]
  wire [1:0] _io_reg_csr_index_T_5 = 64'h300 == I ? 2'h3 : _io_reg_csr_index_T_3; // @[Mux.scala 81:58]
  assign io_ctrl_RegWen = _crtlsignals_T_1 | (_crtlsignals_T_3 | (_crtlsignals_T_5 | (_crtlsignals_T_7 | (
    _crtlsignals_T_9 | (_crtlsignals_T_11 | (_crtlsignals_T_13 | (_crtlsignals_T_15 | (_crtlsignals_T_17 | (
    _crtlsignals_T_19 | (_crtlsignals_T_21 | (_crtlsignals_T_23 | (_crtlsignals_T_25 | (_crtlsignals_T_27 | (
    _crtlsignals_T_29 | (_crtlsignals_T_31 | (_crtlsignals_T_33 | (_crtlsignals_T_35 | (_crtlsignals_T_37 | (
    _crtlsignals_T_39 | _crtlsignals_T_242))))))))))))))))))); // @[Lookup.scala 34:39]
  assign io_ctrl_OP = _crtlsignals_T_1 ? 8'h0 : _crtlsignals_T_196; // @[Lookup.scala 34:39]
  assign io_ctrl_J_JUMP = _crtlsignals_T_1 ? 1'h0 : _crtlsignals_T_391; // @[Lookup.scala 34:39]
  assign io_ctrl_MemWen = _crtlsignals_T_1 ? 1'h0 : _crtlsignals_T_456; // @[Lookup.scala 34:39]
  assign io_ctrl_wmask = _io_ctrl_wmask_T_7[7:0]; // @[IDU.scala 143:17]
  assign io_ctrl_MemLoad = _crtlsignals_T_1 ? 1'h0 : _crtlsignals_T_521; // @[Lookup.scala 34:39]
  assign io_ctrl_csr_wen = _crtlsignals_T_1 ? 1'h0 : _crtlsignals_T_586; // @[Lookup.scala 34:39]
  assign io_ctrl_E_JUMP = _crtlsignals_T_1 ? 1'h0 : _crtlsignals_T_651; // @[Lookup.scala 34:39]
  assign io_reg_rs1 = io_inst[19:15]; // @[IDU.scala 165:24]
  assign io_reg_rs2 = io_inst[24:20]; // @[IDU.scala 166:24]
  assign io_reg_rd = io_inst[11:7]; // @[IDU.scala 167:24]
  assign io_reg_csr_index = 64'h305 == I ? 3'h4 : {{1'd0}, _io_reg_csr_index_T_5}; // @[Mux.scala 81:58]
  assign io_imm = _io_imm_T_9[63:0]; // @[IDU.scala 132:10]
  assign io_eval = io_ctrl_OP == 8'h3f; // @[IDU.scala 163:25]
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
  output [63:0] io_regs_31,
  output [63:0] io_reg17
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] registers [0:31]; // @[Register .scala 19:22]
  wire  registers_io_rdata1_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_rdata1_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_rdata1_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_rdata2_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_rdata2_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_rdata2_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_reg17_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_reg17_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_reg17_MPORT_data; // @[Register .scala 19:22]
  wire  registers_MPORT_1_en; // @[Register .scala 19:22]
  wire [4:0] registers_MPORT_1_addr; // @[Register .scala 19:22]
  wire [63:0] registers_MPORT_1_data; // @[Register .scala 19:22]
  wire  registers_io_regs_0_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_0_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_0_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_1_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_1_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_1_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_2_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_2_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_2_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_3_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_3_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_3_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_4_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_4_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_4_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_5_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_5_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_5_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_6_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_6_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_6_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_7_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_7_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_7_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_8_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_8_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_8_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_9_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_9_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_9_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_10_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_10_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_10_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_11_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_11_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_11_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_12_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_12_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_12_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_13_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_13_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_13_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_14_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_14_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_14_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_15_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_15_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_15_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_16_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_16_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_16_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_17_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_17_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_17_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_18_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_18_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_18_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_19_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_19_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_19_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_20_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_20_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_20_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_21_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_21_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_21_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_22_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_22_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_22_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_23_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_23_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_23_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_24_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_24_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_24_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_25_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_25_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_25_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_26_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_26_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_26_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_27_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_27_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_27_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_28_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_28_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_28_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_29_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_29_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_29_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_30_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_30_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_30_MPORT_data; // @[Register .scala 19:22]
  wire  registers_io_regs_31_MPORT_en; // @[Register .scala 19:22]
  wire [4:0] registers_io_regs_31_MPORT_addr; // @[Register .scala 19:22]
  wire [63:0] registers_io_regs_31_MPORT_data; // @[Register .scala 19:22]
  wire [63:0] registers_MPORT_data; // @[Register .scala 19:22]
  wire [4:0] registers_MPORT_addr; // @[Register .scala 19:22]
  wire  registers_MPORT_mask; // @[Register .scala 19:22]
  wire  registers_MPORT_en; // @[Register .scala 19:22]
  wire  _T_1 = io_wen & io_reg_rd != 5'h0; // @[Register .scala 25:37]
  assign registers_io_rdata1_MPORT_en = 1'h1;
  assign registers_io_rdata1_MPORT_addr = io_reg_rs1;
  assign registers_io_rdata1_MPORT_data = registers[registers_io_rdata1_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_rdata2_MPORT_en = 1'h1;
  assign registers_io_rdata2_MPORT_addr = io_reg_rs2;
  assign registers_io_rdata2_MPORT_data = registers[registers_io_rdata2_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_reg17_MPORT_en = 1'h1;
  assign registers_io_reg17_MPORT_addr = 5'h11;
  assign registers_io_reg17_MPORT_data = registers[registers_io_reg17_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_MPORT_1_en = 1'h1;
  assign registers_MPORT_1_addr = io_reg_rd;
  assign registers_MPORT_1_data = registers[registers_MPORT_1_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_0_MPORT_en = 1'h1;
  assign registers_io_regs_0_MPORT_addr = 5'h0;
  assign registers_io_regs_0_MPORT_data = registers[registers_io_regs_0_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_1_MPORT_en = 1'h1;
  assign registers_io_regs_1_MPORT_addr = 5'h1;
  assign registers_io_regs_1_MPORT_data = registers[registers_io_regs_1_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_2_MPORT_en = 1'h1;
  assign registers_io_regs_2_MPORT_addr = 5'h2;
  assign registers_io_regs_2_MPORT_data = registers[registers_io_regs_2_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_3_MPORT_en = 1'h1;
  assign registers_io_regs_3_MPORT_addr = 5'h3;
  assign registers_io_regs_3_MPORT_data = registers[registers_io_regs_3_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_4_MPORT_en = 1'h1;
  assign registers_io_regs_4_MPORT_addr = 5'h4;
  assign registers_io_regs_4_MPORT_data = registers[registers_io_regs_4_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_5_MPORT_en = 1'h1;
  assign registers_io_regs_5_MPORT_addr = 5'h5;
  assign registers_io_regs_5_MPORT_data = registers[registers_io_regs_5_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_6_MPORT_en = 1'h1;
  assign registers_io_regs_6_MPORT_addr = 5'h6;
  assign registers_io_regs_6_MPORT_data = registers[registers_io_regs_6_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_7_MPORT_en = 1'h1;
  assign registers_io_regs_7_MPORT_addr = 5'h7;
  assign registers_io_regs_7_MPORT_data = registers[registers_io_regs_7_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_8_MPORT_en = 1'h1;
  assign registers_io_regs_8_MPORT_addr = 5'h8;
  assign registers_io_regs_8_MPORT_data = registers[registers_io_regs_8_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_9_MPORT_en = 1'h1;
  assign registers_io_regs_9_MPORT_addr = 5'h9;
  assign registers_io_regs_9_MPORT_data = registers[registers_io_regs_9_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_10_MPORT_en = 1'h1;
  assign registers_io_regs_10_MPORT_addr = 5'ha;
  assign registers_io_regs_10_MPORT_data = registers[registers_io_regs_10_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_11_MPORT_en = 1'h1;
  assign registers_io_regs_11_MPORT_addr = 5'hb;
  assign registers_io_regs_11_MPORT_data = registers[registers_io_regs_11_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_12_MPORT_en = 1'h1;
  assign registers_io_regs_12_MPORT_addr = 5'hc;
  assign registers_io_regs_12_MPORT_data = registers[registers_io_regs_12_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_13_MPORT_en = 1'h1;
  assign registers_io_regs_13_MPORT_addr = 5'hd;
  assign registers_io_regs_13_MPORT_data = registers[registers_io_regs_13_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_14_MPORT_en = 1'h1;
  assign registers_io_regs_14_MPORT_addr = 5'he;
  assign registers_io_regs_14_MPORT_data = registers[registers_io_regs_14_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_15_MPORT_en = 1'h1;
  assign registers_io_regs_15_MPORT_addr = 5'hf;
  assign registers_io_regs_15_MPORT_data = registers[registers_io_regs_15_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_16_MPORT_en = 1'h1;
  assign registers_io_regs_16_MPORT_addr = 5'h10;
  assign registers_io_regs_16_MPORT_data = registers[registers_io_regs_16_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_17_MPORT_en = 1'h1;
  assign registers_io_regs_17_MPORT_addr = 5'h11;
  assign registers_io_regs_17_MPORT_data = registers[registers_io_regs_17_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_18_MPORT_en = 1'h1;
  assign registers_io_regs_18_MPORT_addr = 5'h12;
  assign registers_io_regs_18_MPORT_data = registers[registers_io_regs_18_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_19_MPORT_en = 1'h1;
  assign registers_io_regs_19_MPORT_addr = 5'h13;
  assign registers_io_regs_19_MPORT_data = registers[registers_io_regs_19_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_20_MPORT_en = 1'h1;
  assign registers_io_regs_20_MPORT_addr = 5'h14;
  assign registers_io_regs_20_MPORT_data = registers[registers_io_regs_20_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_21_MPORT_en = 1'h1;
  assign registers_io_regs_21_MPORT_addr = 5'h15;
  assign registers_io_regs_21_MPORT_data = registers[registers_io_regs_21_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_22_MPORT_en = 1'h1;
  assign registers_io_regs_22_MPORT_addr = 5'h16;
  assign registers_io_regs_22_MPORT_data = registers[registers_io_regs_22_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_23_MPORT_en = 1'h1;
  assign registers_io_regs_23_MPORT_addr = 5'h17;
  assign registers_io_regs_23_MPORT_data = registers[registers_io_regs_23_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_24_MPORT_en = 1'h1;
  assign registers_io_regs_24_MPORT_addr = 5'h18;
  assign registers_io_regs_24_MPORT_data = registers[registers_io_regs_24_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_25_MPORT_en = 1'h1;
  assign registers_io_regs_25_MPORT_addr = 5'h19;
  assign registers_io_regs_25_MPORT_data = registers[registers_io_regs_25_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_26_MPORT_en = 1'h1;
  assign registers_io_regs_26_MPORT_addr = 5'h1a;
  assign registers_io_regs_26_MPORT_data = registers[registers_io_regs_26_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_27_MPORT_en = 1'h1;
  assign registers_io_regs_27_MPORT_addr = 5'h1b;
  assign registers_io_regs_27_MPORT_data = registers[registers_io_regs_27_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_28_MPORT_en = 1'h1;
  assign registers_io_regs_28_MPORT_addr = 5'h1c;
  assign registers_io_regs_28_MPORT_data = registers[registers_io_regs_28_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_29_MPORT_en = 1'h1;
  assign registers_io_regs_29_MPORT_addr = 5'h1d;
  assign registers_io_regs_29_MPORT_data = registers[registers_io_regs_29_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_30_MPORT_en = 1'h1;
  assign registers_io_regs_30_MPORT_addr = 5'h1e;
  assign registers_io_regs_30_MPORT_data = registers[registers_io_regs_30_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_io_regs_31_MPORT_en = 1'h1;
  assign registers_io_regs_31_MPORT_addr = 5'h1f;
  assign registers_io_regs_31_MPORT_data = registers[registers_io_regs_31_MPORT_addr]; // @[Register .scala 19:22]
  assign registers_MPORT_data = _T_1 ? io_wdata : registers_MPORT_1_data;
  assign registers_MPORT_addr = io_reg_rd;
  assign registers_MPORT_mask = 1'h1;
  assign registers_MPORT_en = 1'h1;
  assign io_rdata1 = io_reg_rs1 == 5'h0 ? 64'h0 : registers_io_rdata1_MPORT_data; // @[Register .scala 21:19]
  assign io_rdata2 = io_reg_rs2 == 5'h0 ? 64'h0 : registers_io_rdata2_MPORT_data; // @[Register .scala 22:19]
  assign io_regs_0 = registers_io_regs_0_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_1 = registers_io_regs_1_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_2 = registers_io_regs_2_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_3 = registers_io_regs_3_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_4 = registers_io_regs_4_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_5 = registers_io_regs_5_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_6 = registers_io_regs_6_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_7 = registers_io_regs_7_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_8 = registers_io_regs_8_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_9 = registers_io_regs_9_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_10 = registers_io_regs_10_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_11 = registers_io_regs_11_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_12 = registers_io_regs_12_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_13 = registers_io_regs_13_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_14 = registers_io_regs_14_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_15 = registers_io_regs_15_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_16 = registers_io_regs_16_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_17 = registers_io_regs_17_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_18 = registers_io_regs_18_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_19 = registers_io_regs_19_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_20 = registers_io_regs_20_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_21 = registers_io_regs_21_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_22 = registers_io_regs_22_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_23 = registers_io_regs_23_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_24 = registers_io_regs_24_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_25 = registers_io_regs_25_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_26 = registers_io_regs_26_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_27 = registers_io_regs_27_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_28 = registers_io_regs_28_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_29 = registers_io_regs_29_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_30 = registers_io_regs_30_MPORT_data; // @[Register .scala 27:40]
  assign io_regs_31 = registers_io_regs_31_MPORT_data; // @[Register .scala 27:40]
  assign io_reg17 = registers_io_reg17_MPORT_data; // @[Register .scala 23:13]
  always @(posedge clock) begin
    if (registers_MPORT_en & registers_MPORT_mask) begin
      registers[registers_MPORT_addr] <= registers_MPORT_data; // @[Register .scala 19:22]
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
module IFU(
  input  [63:0] io_pc,
  output [31:0] io_inst
);
  wire [63:0] inst_mem_raddr; // @[IFU.scala 11:24]
  wire [63:0] inst_mem_waddr; // @[IFU.scala 11:24]
  wire [63:0] inst_mem_wdata; // @[IFU.scala 11:24]
  wire [7:0] inst_mem_wmask; // @[IFU.scala 11:24]
  wire [63:0] inst_mem_rdata; // @[IFU.scala 11:24]
  wire  inst_mem_wen; // @[IFU.scala 11:24]
  memory inst_mem ( // @[IFU.scala 11:24]
    .raddr(inst_mem_raddr),
    .waddr(inst_mem_waddr),
    .wdata(inst_mem_wdata),
    .wmask(inst_mem_wmask),
    .rdata(inst_mem_rdata),
    .wen(inst_mem_wen)
  );
  assign io_inst = inst_mem_rdata[31:0]; // @[IFU.scala 15:31]
  assign inst_mem_raddr = io_pc; // @[IFU.scala 13:21]
  assign inst_mem_waddr = 64'h0;
  assign inst_mem_wdata = 64'h0;
  assign inst_mem_wmask = 8'h0;
  assign inst_mem_wen = 1'h0;
endmodule
module LSU(
  input  [63:0] io_raddr,
  output [63:0] io_rdata,
  input  [63:0] io_waddr,
  input  [63:0] io_wdata,
  input  [7:0]  io_wmask,
  input         io_wen
);
  wire [63:0] data_mem_raddr; // @[LSU.scala 15:22]
  wire [63:0] data_mem_waddr; // @[LSU.scala 15:22]
  wire [63:0] data_mem_wdata; // @[LSU.scala 15:22]
  wire [7:0] data_mem_wmask; // @[LSU.scala 15:22]
  wire [63:0] data_mem_rdata; // @[LSU.scala 15:22]
  wire  data_mem_wen; // @[LSU.scala 15:22]
  memory data_mem ( // @[LSU.scala 15:22]
    .raddr(data_mem_raddr),
    .waddr(data_mem_waddr),
    .wdata(data_mem_wdata),
    .wmask(data_mem_wmask),
    .rdata(data_mem_rdata),
    .wen(data_mem_wen)
  );
  assign io_rdata = data_mem_rdata; // @[LSU.scala 23:12]
  assign data_mem_raddr = io_raddr; // @[LSU.scala 17:21]
  assign data_mem_waddr = io_waddr; // @[LSU.scala 18:21]
  assign data_mem_wdata = io_wdata; // @[LSU.scala 19:21]
  assign data_mem_wmask = io_wmask; // @[LSU.scala 20:21]
  assign data_mem_wen = io_wen; // @[LSU.scala 21:21]
endmodule
module Top(
  input         clock,
  input         reset,
  output [63:0] io_pc,
  output        io_ctrl_RegWen,
  output [7:0]  io_ctrl_OP,
  output        io_ctrl_J_JUMP,
  output        io_ctrl_MemWen,
  output [7:0]  io_ctrl_wmask,
  output        io_ctrl_MemLoad,
  output        io_ctrl_csr_wen,
  output        io_ctrl_E_JUMP,
  output [63:0] io_resultALU,
  output [63:0] io_rs1,
  output [63:0] io_rs2,
  output [4:0]  io_rd,
  output [63:0] io_imm,
  output [7:0]  io_op,
  output        io_MemWen,
  output        io_MemLoad,
  output [31:0] io_inst,
  output        io_is_b,
  output [7:0]  io_wmask,
  output [63:0] io_rdata,
  output [63:0] io_fmemwdata,
  output        io_is_e,
  output        io_is_csr,
  output [63:0] io_reg17
);
  wire  PC_clock; // @[TopMain.scala 35:26]
  wire  PC_reset; // @[TopMain.scala 35:26]
  wire [63:0] PC_io_pc; // @[TopMain.scala 35:26]
  wire [63:0] PC_io_pc4; // @[TopMain.scala 35:26]
  wire  PC_io_is_j; // @[TopMain.scala 35:26]
  wire  PC_io_is_b; // @[TopMain.scala 35:26]
  wire  PC_io_is_e; // @[TopMain.scala 35:26]
  wire [63:0] PC_io_j_branch; // @[TopMain.scala 35:26]
  wire [63:0] PC_io_b_branch; // @[TopMain.scala 35:26]
  wire [63:0] PC_io_e_branch; // @[TopMain.scala 35:26]
  wire  alu_clock; // @[TopMain.scala 36:26]
  wire [7:0] alu_io_ctrl_alu_op; // @[TopMain.scala 36:26]
  wire  alu_io_ctrl_csr_wen; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_in1; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_in2; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_imm; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_out; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_pc; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_j_branch; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_e_branch; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_is_b; // @[TopMain.scala 36:26]
  wire [2:0] alu_io_csr_index; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_reg17; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_csr_regs_0; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_csr_regs_1; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_csr_regs_2; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_csr_regs_3; // @[TopMain.scala 36:26]
  wire [63:0] alu_io_csr_regs_4; // @[TopMain.scala 36:26]
  wire [31:0] decoder_io_inst; // @[TopMain.scala 37:26]
  wire  decoder_io_ctrl_RegWen; // @[TopMain.scala 37:26]
  wire [7:0] decoder_io_ctrl_OP; // @[TopMain.scala 37:26]
  wire  decoder_io_ctrl_J_JUMP; // @[TopMain.scala 37:26]
  wire  decoder_io_ctrl_MemWen; // @[TopMain.scala 37:26]
  wire [7:0] decoder_io_ctrl_wmask; // @[TopMain.scala 37:26]
  wire  decoder_io_ctrl_MemLoad; // @[TopMain.scala 37:26]
  wire  decoder_io_ctrl_csr_wen; // @[TopMain.scala 37:26]
  wire  decoder_io_ctrl_E_JUMP; // @[TopMain.scala 37:26]
  wire [4:0] decoder_io_reg_rs1; // @[TopMain.scala 37:26]
  wire [4:0] decoder_io_reg_rs2; // @[TopMain.scala 37:26]
  wire [4:0] decoder_io_reg_rd; // @[TopMain.scala 37:26]
  wire [2:0] decoder_io_reg_csr_index; // @[TopMain.scala 37:26]
  wire [63:0] decoder_io_imm; // @[TopMain.scala 37:26]
  wire  decoder_io_eval; // @[TopMain.scala 37:26]
  wire  registers_clock; // @[TopMain.scala 39:26]
  wire  registers_io_wen; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_wdata; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_rdata1; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_rdata2; // @[TopMain.scala 39:26]
  wire [4:0] registers_io_reg_rs1; // @[TopMain.scala 39:26]
  wire [4:0] registers_io_reg_rs2; // @[TopMain.scala 39:26]
  wire [4:0] registers_io_reg_rd; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_0; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_1; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_2; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_3; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_4; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_5; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_6; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_7; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_8; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_9; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_10; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_11; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_12; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_13; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_14; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_15; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_16; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_17; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_18; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_19; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_20; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_21; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_22; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_23; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_24; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_25; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_26; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_27; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_28; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_29; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_30; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_regs_31; // @[TopMain.scala 39:26]
  wire [63:0] registers_io_reg17; // @[TopMain.scala 39:26]
  wire [31:0] dpi_flag; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_0; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_1; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_2; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_3; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_4; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_5; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_6; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_7; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_8; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_9; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_10; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_11; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_12; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_13; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_14; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_15; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_16; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_17; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_18; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_19; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_20; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_21; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_22; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_23; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_24; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_25; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_26; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_27; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_28; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_29; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_30; // @[TopMain.scala 40:19]
  wire [63:0] dpi_rf_31; // @[TopMain.scala 40:19]
  wire [63:0] dpi_csr_0; // @[TopMain.scala 40:19]
  wire [63:0] dpi_csr_1; // @[TopMain.scala 40:19]
  wire [63:0] dpi_csr_2; // @[TopMain.scala 40:19]
  wire [63:0] dpi_csr_3; // @[TopMain.scala 40:19]
  wire [63:0] dpi_csr_4; // @[TopMain.scala 40:19]
  wire [31:0] dpi_inst; // @[TopMain.scala 40:19]
  wire [63:0] dpi_pc; // @[TopMain.scala 40:19]
  wire [31:0] dpi_eval; // @[TopMain.scala 40:19]
  wire [63:0] ifu_io_pc; // @[TopMain.scala 41:19]
  wire [31:0] ifu_io_inst; // @[TopMain.scala 41:19]
  wire [63:0] lsu_io_raddr; // @[TopMain.scala 42:19]
  wire [63:0] lsu_io_rdata; // @[TopMain.scala 42:19]
  wire [63:0] lsu_io_waddr; // @[TopMain.scala 42:19]
  wire [63:0] lsu_io_wdata; // @[TopMain.scala 42:19]
  wire [7:0] lsu_io_wmask; // @[TopMain.scala 42:19]
  wire  lsu_io_wen; // @[TopMain.scala 42:19]
  wire [55:0] _registers_io_wdata_T_4 = lsu_io_rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _registers_io_wdata_T_5 = {_registers_io_wdata_T_4,lsu_io_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [47:0] _registers_io_wdata_T_12 = lsu_io_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _registers_io_wdata_T_13 = {_registers_io_wdata_T_12,lsu_io_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [63:0] _registers_io_wdata_T_17 = lsu_io_rdata; // @[TopMain.scala 64:71]
  wire [31:0] _registers_io_wdata_T_24 = lsu_io_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _registers_io_wdata_T_25 = {_registers_io_wdata_T_24,lsu_io_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _registers_io_wdata_T_26 = decoder_io_ctrl_OP == 8'h21 ? _registers_io_wdata_T_25 : alu_io_out; // @[TopMain.scala 66:28]
  wire [63:0] _registers_io_wdata_T_27 = decoder_io_ctrl_OP == 8'h22 ? {{32'd0}, lsu_io_rdata[31:0]} :
    _registers_io_wdata_T_26; // @[TopMain.scala 65:28]
  wire [63:0] _registers_io_wdata_T_28 = decoder_io_ctrl_OP == 8'h20 ? _registers_io_wdata_T_17 :
    _registers_io_wdata_T_27; // @[TopMain.scala 64:28]
  wire [63:0] _registers_io_wdata_T_29 = decoder_io_ctrl_OP == 8'h1f ? {{48'd0}, lsu_io_rdata[15:0]} :
    _registers_io_wdata_T_28; // @[TopMain.scala 63:28]
  wire [63:0] _registers_io_wdata_T_30 = decoder_io_ctrl_OP == 8'h1e ? _registers_io_wdata_T_13 :
    _registers_io_wdata_T_29; // @[TopMain.scala 62:28]
  wire [63:0] _registers_io_wdata_T_31 = decoder_io_ctrl_OP == 8'h1d ? {{56'd0}, lsu_io_rdata[7:0]} :
    _registers_io_wdata_T_30; // @[TopMain.scala 61:28]
  wire [63:0] _registers_io_wdata_T_32 = decoder_io_ctrl_OP == 8'h1c ? _registers_io_wdata_T_5 :
    _registers_io_wdata_T_31; // @[TopMain.scala 60:28]
  PC PC ( // @[TopMain.scala 35:26]
    .clock(PC_clock),
    .reset(PC_reset),
    .io_pc(PC_io_pc),
    .io_pc4(PC_io_pc4),
    .io_is_j(PC_io_is_j),
    .io_is_b(PC_io_is_b),
    .io_is_e(PC_io_is_e),
    .io_j_branch(PC_io_j_branch),
    .io_b_branch(PC_io_b_branch),
    .io_e_branch(PC_io_e_branch)
  );
  EXU alu ( // @[TopMain.scala 36:26]
    .clock(alu_clock),
    .io_ctrl_alu_op(alu_io_ctrl_alu_op),
    .io_ctrl_csr_wen(alu_io_ctrl_csr_wen),
    .io_in1(alu_io_in1),
    .io_in2(alu_io_in2),
    .io_imm(alu_io_imm),
    .io_out(alu_io_out),
    .io_pc(alu_io_pc),
    .io_j_branch(alu_io_j_branch),
    .io_e_branch(alu_io_e_branch),
    .io_is_b(alu_io_is_b),
    .io_csr_index(alu_io_csr_index),
    .io_reg17(alu_io_reg17),
    .io_csr_regs_0(alu_io_csr_regs_0),
    .io_csr_regs_1(alu_io_csr_regs_1),
    .io_csr_regs_2(alu_io_csr_regs_2),
    .io_csr_regs_3(alu_io_csr_regs_3),
    .io_csr_regs_4(alu_io_csr_regs_4)
  );
  IDU decoder ( // @[TopMain.scala 37:26]
    .io_inst(decoder_io_inst),
    .io_ctrl_RegWen(decoder_io_ctrl_RegWen),
    .io_ctrl_OP(decoder_io_ctrl_OP),
    .io_ctrl_J_JUMP(decoder_io_ctrl_J_JUMP),
    .io_ctrl_MemWen(decoder_io_ctrl_MemWen),
    .io_ctrl_wmask(decoder_io_ctrl_wmask),
    .io_ctrl_MemLoad(decoder_io_ctrl_MemLoad),
    .io_ctrl_csr_wen(decoder_io_ctrl_csr_wen),
    .io_ctrl_E_JUMP(decoder_io_ctrl_E_JUMP),
    .io_reg_rs1(decoder_io_reg_rs1),
    .io_reg_rs2(decoder_io_reg_rs2),
    .io_reg_rd(decoder_io_reg_rd),
    .io_reg_csr_index(decoder_io_reg_csr_index),
    .io_imm(decoder_io_imm),
    .io_eval(decoder_io_eval)
  );
  Registers registers ( // @[TopMain.scala 39:26]
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
    .io_regs_31(registers_io_regs_31),
    .io_reg17(registers_io_reg17)
  );
  DPI dpi ( // @[TopMain.scala 40:19]
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
    .csr_0(dpi_csr_0),
    .csr_1(dpi_csr_1),
    .csr_2(dpi_csr_2),
    .csr_3(dpi_csr_3),
    .csr_4(dpi_csr_4),
    .inst(dpi_inst),
    .pc(dpi_pc),
    .eval(dpi_eval)
  );
  IFU ifu ( // @[TopMain.scala 41:19]
    .io_pc(ifu_io_pc),
    .io_inst(ifu_io_inst)
  );
  LSU lsu ( // @[TopMain.scala 42:19]
    .io_raddr(lsu_io_raddr),
    .io_rdata(lsu_io_rdata),
    .io_waddr(lsu_io_waddr),
    .io_wdata(lsu_io_wdata),
    .io_wmask(lsu_io_wmask),
    .io_wen(lsu_io_wen)
  );
  assign io_pc = PC_io_pc; // @[TopMain.scala 79:9]
  assign io_ctrl_RegWen = decoder_io_ctrl_RegWen; // @[TopMain.scala 80:11]
  assign io_ctrl_OP = decoder_io_ctrl_OP; // @[TopMain.scala 80:11]
  assign io_ctrl_J_JUMP = decoder_io_ctrl_J_JUMP; // @[TopMain.scala 80:11]
  assign io_ctrl_MemWen = decoder_io_ctrl_MemWen; // @[TopMain.scala 80:11]
  assign io_ctrl_wmask = decoder_io_ctrl_wmask; // @[TopMain.scala 80:11]
  assign io_ctrl_MemLoad = decoder_io_ctrl_MemLoad; // @[TopMain.scala 80:11]
  assign io_ctrl_csr_wen = decoder_io_ctrl_csr_wen; // @[TopMain.scala 80:11]
  assign io_ctrl_E_JUMP = decoder_io_ctrl_E_JUMP; // @[TopMain.scala 80:11]
  assign io_resultALU = alu_io_out; // @[TopMain.scala 86:16]
  assign io_rs1 = registers_io_rdata1; // @[TopMain.scala 81:16]
  assign io_rs2 = registers_io_rdata2; // @[TopMain.scala 82:16]
  assign io_rd = decoder_io_reg_rd; // @[TopMain.scala 83:16]
  assign io_imm = decoder_io_imm; // @[TopMain.scala 84:16]
  assign io_op = decoder_io_ctrl_OP; // @[TopMain.scala 85:13]
  assign io_MemWen = decoder_io_ctrl_MemWen; // @[TopMain.scala 87:13]
  assign io_MemLoad = decoder_io_ctrl_MemLoad; // @[TopMain.scala 89:14]
  assign io_inst = ifu_io_inst; // @[TopMain.scala 88:11]
  assign io_is_b = alu_io_is_b[0]; // @[TopMain.scala 90:11]
  assign io_wmask = decoder_io_ctrl_wmask; // @[TopMain.scala 91:12]
  assign io_rdata = lsu_io_rdata; // @[TopMain.scala 92:12]
  assign io_fmemwdata = decoder_io_ctrl_MemLoad ? _registers_io_wdata_T_32 : alu_io_out; // @[TopMain.scala 93:22]
  assign io_is_e = decoder_io_ctrl_E_JUMP; // @[TopMain.scala 101:11]
  assign io_is_csr = decoder_io_ctrl_csr_wen; // @[TopMain.scala 102:13]
  assign io_reg17 = registers_io_reg17; // @[TopMain.scala 103:12]
  assign PC_clock = clock;
  assign PC_reset = reset;
  assign PC_io_is_j = decoder_io_ctrl_J_JUMP; // @[TopMain.scala 47:14]
  assign PC_io_is_b = alu_io_is_b[0]; // @[TopMain.scala 49:14]
  assign PC_io_is_e = decoder_io_ctrl_E_JUMP; // @[TopMain.scala 51:14]
  assign PC_io_j_branch = alu_io_j_branch; // @[TopMain.scala 48:18]
  assign PC_io_b_branch = alu_io_out; // @[TopMain.scala 50:18]
  assign PC_io_e_branch = alu_io_e_branch; // @[TopMain.scala 52:18]
  assign alu_clock = clock;
  assign alu_io_ctrl_alu_op = decoder_io_ctrl_OP; // @[TopMain.scala 69:22]
  assign alu_io_ctrl_csr_wen = decoder_io_ctrl_csr_wen; // @[TopMain.scala 70:23]
  assign alu_io_in1 = registers_io_rdata1; // @[TopMain.scala 71:14]
  assign alu_io_in2 = registers_io_rdata2; // @[TopMain.scala 72:14]
  assign alu_io_imm = decoder_io_imm; // @[TopMain.scala 73:14]
  assign alu_io_pc = PC_io_pc; // @[TopMain.scala 74:14]
  assign alu_io_csr_index = decoder_io_reg_csr_index; // @[TopMain.scala 75:20]
  assign alu_io_reg17 = registers_io_reg17; // @[TopMain.scala 76:16]
  assign decoder_io_inst = ifu_io_inst; // @[TopMain.scala 55:19]
  assign registers_clock = clock;
  assign registers_io_wen = decoder_io_ctrl_RegWen; // @[TopMain.scala 67:20]
  assign registers_io_wdata = decoder_io_ctrl_MemLoad ? _registers_io_wdata_T_32 : alu_io_out; // @[TopMain.scala 59:28]
  assign registers_io_reg_rs1 = decoder_io_reg_rs1; // @[TopMain.scala 58:20]
  assign registers_io_reg_rs2 = decoder_io_reg_rs2; // @[TopMain.scala 58:20]
  assign registers_io_reg_rd = decoder_io_reg_rd; // @[TopMain.scala 58:20]
  assign dpi_flag = decoder_io_ctrl_OP == 8'h3b ? 32'h1 : 32'h0; // @[TopMain.scala 117:21]
  assign dpi_rf_0 = registers_io_regs_0; // @[TopMain.scala 118:15]
  assign dpi_rf_1 = registers_io_regs_1; // @[TopMain.scala 119:15]
  assign dpi_rf_2 = registers_io_regs_2; // @[TopMain.scala 120:15]
  assign dpi_rf_3 = registers_io_regs_3; // @[TopMain.scala 121:15]
  assign dpi_rf_4 = registers_io_regs_4; // @[TopMain.scala 122:15]
  assign dpi_rf_5 = registers_io_regs_5; // @[TopMain.scala 123:15]
  assign dpi_rf_6 = registers_io_regs_6; // @[TopMain.scala 124:15]
  assign dpi_rf_7 = registers_io_regs_7; // @[TopMain.scala 125:15]
  assign dpi_rf_8 = registers_io_regs_8; // @[TopMain.scala 126:15]
  assign dpi_rf_9 = registers_io_regs_9; // @[TopMain.scala 127:15]
  assign dpi_rf_10 = registers_io_regs_10; // @[TopMain.scala 128:16]
  assign dpi_rf_11 = registers_io_regs_11; // @[TopMain.scala 129:16]
  assign dpi_rf_12 = registers_io_regs_12; // @[TopMain.scala 130:16]
  assign dpi_rf_13 = registers_io_regs_13; // @[TopMain.scala 131:16]
  assign dpi_rf_14 = registers_io_regs_14; // @[TopMain.scala 132:16]
  assign dpi_rf_15 = registers_io_regs_15; // @[TopMain.scala 133:16]
  assign dpi_rf_16 = registers_io_regs_16; // @[TopMain.scala 134:16]
  assign dpi_rf_17 = registers_io_regs_17; // @[TopMain.scala 135:16]
  assign dpi_rf_18 = registers_io_regs_18; // @[TopMain.scala 136:16]
  assign dpi_rf_19 = registers_io_regs_19; // @[TopMain.scala 137:16]
  assign dpi_rf_20 = registers_io_regs_20; // @[TopMain.scala 138:16]
  assign dpi_rf_21 = registers_io_regs_21; // @[TopMain.scala 139:16]
  assign dpi_rf_22 = registers_io_regs_22; // @[TopMain.scala 140:16]
  assign dpi_rf_23 = registers_io_regs_23; // @[TopMain.scala 141:16]
  assign dpi_rf_24 = registers_io_regs_24; // @[TopMain.scala 142:16]
  assign dpi_rf_25 = registers_io_regs_25; // @[TopMain.scala 143:16]
  assign dpi_rf_26 = registers_io_regs_26; // @[TopMain.scala 144:16]
  assign dpi_rf_27 = registers_io_regs_27; // @[TopMain.scala 145:16]
  assign dpi_rf_28 = registers_io_regs_28; // @[TopMain.scala 146:16]
  assign dpi_rf_29 = registers_io_regs_29; // @[TopMain.scala 147:16]
  assign dpi_rf_30 = registers_io_regs_30; // @[TopMain.scala 148:16]
  assign dpi_rf_31 = registers_io_regs_31; // @[TopMain.scala 149:16]
  assign dpi_csr_0 = alu_io_csr_regs_0; // @[TopMain.scala 150:16]
  assign dpi_csr_1 = alu_io_csr_regs_1; // @[TopMain.scala 151:16]
  assign dpi_csr_2 = alu_io_csr_regs_2; // @[TopMain.scala 152:16]
  assign dpi_csr_3 = alu_io_csr_regs_3; // @[TopMain.scala 153:16]
  assign dpi_csr_4 = alu_io_csr_regs_4; // @[TopMain.scala 154:16]
  assign dpi_inst = ifu_io_inst; // @[TopMain.scala 155:16]
  assign dpi_pc = io_pc; // @[TopMain.scala 156:16]
  assign dpi_eval = {{31'd0}, decoder_io_eval}; // @[TopMain.scala 157:16]
  assign ifu_io_pc = PC_io_pc; // @[TopMain.scala 107:13]
  assign lsu_io_raddr = alu_io_out; // @[TopMain.scala 110:16]
  assign lsu_io_waddr = alu_io_out; // @[TopMain.scala 111:16]
  assign lsu_io_wdata = registers_io_rdata2; // @[TopMain.scala 112:16]
  assign lsu_io_wmask = decoder_io_ctrl_wmask; // @[TopMain.scala 114:16]
  assign lsu_io_wen = decoder_io_ctrl_MemWen; // @[TopMain.scala 113:14]
endmodule
