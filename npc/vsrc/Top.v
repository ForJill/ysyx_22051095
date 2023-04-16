module PC(
  input         clock,
  input         reset,
  output [63:0] io_pc,
  input         io_is_j,
  input         io_is_b,
  input  [63:0] io_j_branch,
  input  [63:0] io_b_branch
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] init; // @[PC.scala 15:21]
  wire [63:0] _init_T_1 = io_pc + 64'h4; // @[PC.scala 16:66]
  assign io_pc = init; // @[PC.scala 17:10]
  always @(posedge clock) begin
    if (reset) begin // @[PC.scala 15:21]
      init <= 64'h80000000; // @[PC.scala 15:21]
    end else if (io_is_j) begin // @[PC.scala 16:16]
      init <= io_j_branch;
    end else if (io_is_b) begin // @[PC.scala 16:40]
      init <= io_b_branch;
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
  input  [5:0]  io_ctrl_alu_op,
  input  [63:0] io_in1,
  input  [63:0] io_in2,
  input  [63:0] io_imm,
  output [63:0] io_out,
  input  [63:0] io_pc,
  output [63:0] io_j_branch,
  output [63:0] io_is_b
);
  wire [63:0] _result_T_1 = io_in1 + io_in2; // @[Alu.scala 42:24]
  wire [31:0] _result_T_5 = io_in1[31:0] + io_in2[31:0]; // @[Alu.scala 43:36]
  wire [31:0] _result_T_8 = _result_T_5[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_9 = {_result_T_8,_result_T_5}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_11 = io_in1 - io_in2; // @[Alu.scala 44:24]
  wire [31:0] _result_T_15 = io_in1[31:0] - io_in2[31:0]; // @[Alu.scala 45:36]
  wire [31:0] _result_T_18 = _result_T_15[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_19 = {_result_T_18,_result_T_15}; // @[Cat.scala 31:58]
  wire [127:0] _result_T_20 = io_in1 * io_in2; // @[Alu.scala 46:24]
  wire [63:0] _result_T_23 = io_in1[31:0] * io_in2[31:0]; // @[Alu.scala 47:37]
  wire [31:0] _result_T_26 = _result_T_23[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [95:0] _result_T_27 = {_result_T_26,_result_T_23}; // @[Cat.scala 31:58]
  wire  _result_T_28 = io_in2 == 64'h0; // @[Alu.scala 48:27]
  wire [64:0] _result_T_32 = $signed(io_in1) / $signed(io_in2); // @[Alu.scala 48:69]
  wire [64:0] _result_T_33 = io_in2 == 64'h0 ? 65'h0 : _result_T_32; // @[Alu.scala 48:21]
  wire [63:0] _result_T_35 = io_in1 / io_in2; // @[Alu.scala 49:47]
  wire [63:0] _result_T_36 = _result_T_28 ? 64'h0 : _result_T_35; // @[Alu.scala 49:22]
  wire [31:0] _result_T_38 = io_in1[31:0]; // @[Alu.scala 50:36]
  wire [31:0] _result_T_40 = io_in2[31:0]; // @[Alu.scala 50:54]
  wire [32:0] _result_T_42 = $signed(_result_T_38) / $signed(_result_T_40); // @[Alu.scala 50:62]
  wire [31:0] _result_T_45 = _result_T_42[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [64:0] _result_T_46 = {_result_T_45,_result_T_42}; // @[Cat.scala 31:58]
  wire [31:0] _result_T_49 = io_in1[31:0] / io_in2[31:0]; // @[Alu.scala 51:35]
  wire [31:0] _result_T_52 = _result_T_49[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_53 = {_result_T_52,_result_T_49}; // @[Cat.scala 31:58]
  wire [126:0] _GEN_1 = {{63'd0}, io_in1}; // @[Alu.scala 52:24]
  wire [126:0] _result_T_55 = _GEN_1 << io_in2[5:0]; // @[Alu.scala 52:24]
  wire  _result_T_58 = $signed(io_in1) < $signed(io_in2); // @[Alu.scala 53:31]
  wire  _result_T_59 = io_in1 < io_in2; // @[Alu.scala 54:25]
  wire [62:0] _GEN_2 = {{31'd0}, io_in1[31:0]}; // @[Alu.scala 55:37]
  wire [62:0] _result_T_62 = _GEN_2 << io_in2[4:0]; // @[Alu.scala 55:37]
  wire [31:0] _result_T_65 = _result_T_62[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [94:0] _result_T_66 = {_result_T_65,_result_T_62}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_67 = io_in1 & io_in2; // @[Alu.scala 56:24]
  wire [63:0] _result_T_68 = io_in1 ^ io_in2; // @[Alu.scala 57:24]
  wire [63:0] _result_T_72 = $signed(io_in1) >>> io_in2[4:0]; // @[Alu.scala 58:45]
  wire [63:0] _result_T_73 = io_in1 | io_in2; // @[Alu.scala 59:23]
  wire [63:0] _result_T_77 = $signed(io_in1) % $signed(io_in2); // @[Alu.scala 60:46]
  wire [63:0] _GEN_5 = io_in1 % io_in2; // @[Alu.scala 61:25]
  wire [63:0] _result_T_78 = _GEN_5[63:0]; // @[Alu.scala 61:25]
  wire [31:0] _result_T_84 = $signed(_result_T_38) % $signed(_result_T_40); // @[Alu.scala 62:66]
  wire [31:0] _result_T_87 = _result_T_84[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_88 = {_result_T_87,_result_T_84}; // @[Cat.scala 31:58]
  wire [31:0] _GEN_6 = io_in1[31:0] % io_in2[31:0]; // @[Alu.scala 63:37]
  wire [31:0] _result_T_91 = _GEN_6[31:0]; // @[Alu.scala 63:37]
  wire [31:0] _result_T_94 = _result_T_91[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_95 = {_result_T_94,_result_T_91}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_97 = io_in1 >> io_in2[5:0]; // @[Alu.scala 64:24]
  wire [31:0] _result_T_102 = $signed(_result_T_38) >>> io_in2[4:0]; // @[Alu.scala 65:57]
  wire [31:0] _result_T_105 = _result_T_102[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_106 = {_result_T_105,_result_T_102}; // @[Cat.scala 31:58]
  wire [31:0] _result_T_109 = io_in1[31:0] >> io_in2[4:0]; // @[Alu.scala 66:36]
  wire [31:0] _result_T_112 = _result_T_109[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_113 = {_result_T_112,_result_T_109}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_115 = io_in1 + io_imm; // @[Alu.scala 68:25]
  wire [63:0] _GEN_0 = {{32'd0}, io_in1[31:0]}; // @[Alu.scala 69:38]
  wire [63:0] _result_T_118 = _GEN_0 + io_imm; // @[Alu.scala 69:38]
  wire [31:0] _result_T_122 = _result_T_118[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_123 = {_result_T_122,_result_T_118[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_125 = io_pc + 64'h4; // @[Alu.scala 70:26]
  wire  _result_T_128 = $signed(io_in1) < $signed(io_imm); // @[Alu.scala 71:32]
  wire  _result_T_129 = io_in1 < io_imm; // @[Alu.scala 72:26]
  wire [126:0] _GEN_3 = {{63'd0}, io_in1}; // @[Alu.scala 80:25]
  wire [126:0] _result_T_145 = _GEN_3 << io_imm[5:0]; // @[Alu.scala 80:25]
  wire [62:0] _GEN_4 = {{31'd0}, io_in1[31:0]}; // @[Alu.scala 81:39]
  wire [62:0] _result_T_148 = _GEN_4 << io_imm[4:0]; // @[Alu.scala 81:39]
  wire [31:0] _result_T_151 = _result_T_148[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [94:0] _result_T_152 = {_result_T_151,_result_T_148}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_154 = io_in1 >> io_imm[5:0]; // @[Alu.scala 82:25]
  wire [31:0] _result_T_157 = io_in1[31:0] >> io_imm[4:0]; // @[Alu.scala 83:39]
  wire [31:0] _result_T_160 = _result_T_157[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_161 = {_result_T_160,_result_T_157}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_163 = io_in1 & io_imm; // @[Alu.scala 85:25]
  wire [63:0] _result_T_164 = io_in1 ^ io_imm; // @[Alu.scala 86:25]
  wire [63:0] _result_T_165 = io_in1 | io_imm; // @[Alu.scala 87:24]
  wire [63:0] _result_T_169 = $signed(io_in1) >>> io_imm[5:0]; // @[Alu.scala 88:46]
  wire [31:0] _result_T_174 = $signed(_result_T_38) >>> io_imm[4:0]; // @[Alu.scala 89:60]
  wire [31:0] _result_T_177 = _result_T_174[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _result_T_178 = {_result_T_177,_result_T_174}; // @[Cat.scala 31:58]
  wire [63:0] _result_T_188 = io_pc + io_imm; // @[Alu.scala 96:25]
  wire [63:0] _result_T_204 = 6'h0 == io_ctrl_alu_op ? _result_T_1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _result_T_206 = 6'h1 == io_ctrl_alu_op ? _result_T_9 : _result_T_204; // @[Mux.scala 81:58]
  wire [63:0] _result_T_208 = 6'h2 == io_ctrl_alu_op ? _result_T_11 : _result_T_206; // @[Mux.scala 81:58]
  wire [63:0] _result_T_210 = 6'h3 == io_ctrl_alu_op ? _result_T_19 : _result_T_208; // @[Mux.scala 81:58]
  wire [127:0] _result_T_212 = 6'h4 == io_ctrl_alu_op ? _result_T_20 : {{64'd0}, _result_T_210}; // @[Mux.scala 81:58]
  wire [127:0] _result_T_214 = 6'h5 == io_ctrl_alu_op ? {{32'd0}, _result_T_27} : _result_T_212; // @[Mux.scala 81:58]
  wire [127:0] _result_T_216 = 6'h6 == io_ctrl_alu_op ? {{63'd0}, _result_T_33} : _result_T_214; // @[Mux.scala 81:58]
  wire [127:0] _result_T_218 = 6'h7 == io_ctrl_alu_op ? {{64'd0}, _result_T_36} : _result_T_216; // @[Mux.scala 81:58]
  wire [127:0] _result_T_220 = 6'h8 == io_ctrl_alu_op ? {{63'd0}, _result_T_46} : _result_T_218; // @[Mux.scala 81:58]
  wire [127:0] _result_T_222 = 6'h9 == io_ctrl_alu_op ? {{64'd0}, _result_T_53} : _result_T_220; // @[Mux.scala 81:58]
  wire [127:0] _result_T_224 = 6'ha == io_ctrl_alu_op ? {{1'd0}, _result_T_55} : _result_T_222; // @[Mux.scala 81:58]
  wire [127:0] _result_T_226 = 6'hb == io_ctrl_alu_op ? {{127'd0}, _result_T_58} : _result_T_224; // @[Mux.scala 81:58]
  wire [127:0] _result_T_228 = 6'hc == io_ctrl_alu_op ? {{127'd0}, _result_T_59} : _result_T_226; // @[Mux.scala 81:58]
  wire [127:0] _result_T_230 = 6'hd == io_ctrl_alu_op ? {{33'd0}, _result_T_66} : _result_T_228; // @[Mux.scala 81:58]
  wire [127:0] _result_T_232 = 6'h12 == io_ctrl_alu_op ? {{64'd0}, _result_T_67} : _result_T_230; // @[Mux.scala 81:58]
  wire [127:0] _result_T_234 = 6'h11 == io_ctrl_alu_op ? {{64'd0}, _result_T_68} : _result_T_232; // @[Mux.scala 81:58]
  wire [127:0] _result_T_236 = 6'h13 == io_ctrl_alu_op ? {{64'd0}, _result_T_72} : _result_T_234; // @[Mux.scala 81:58]
  wire [127:0] _result_T_238 = 6'h14 == io_ctrl_alu_op ? {{64'd0}, _result_T_73} : _result_T_236; // @[Mux.scala 81:58]
  wire [127:0] _result_T_240 = 6'h15 == io_ctrl_alu_op ? {{64'd0}, _result_T_77} : _result_T_238; // @[Mux.scala 81:58]
  wire [127:0] _result_T_242 = 6'h16 == io_ctrl_alu_op ? {{64'd0}, _result_T_78} : _result_T_240; // @[Mux.scala 81:58]
  wire [127:0] _result_T_244 = 6'h17 == io_ctrl_alu_op ? {{64'd0}, _result_T_88} : _result_T_242; // @[Mux.scala 81:58]
  wire [127:0] _result_T_246 = 6'h18 == io_ctrl_alu_op ? {{64'd0}, _result_T_95} : _result_T_244; // @[Mux.scala 81:58]
  wire [127:0] _result_T_248 = 6'hf == io_ctrl_alu_op ? {{64'd0}, _result_T_97} : _result_T_246; // @[Mux.scala 81:58]
  wire [127:0] _result_T_250 = 6'he == io_ctrl_alu_op ? {{64'd0}, _result_T_106} : _result_T_248; // @[Mux.scala 81:58]
  wire [127:0] _result_T_252 = 6'h10 == io_ctrl_alu_op ? {{64'd0}, _result_T_113} : _result_T_250; // @[Mux.scala 81:58]
  wire [127:0] _result_T_254 = 6'h19 == io_ctrl_alu_op ? {{64'd0}, _result_T_115} : _result_T_252; // @[Mux.scala 81:58]
  wire [127:0] _result_T_256 = 6'h1a == io_ctrl_alu_op ? {{64'd0}, _result_T_123} : _result_T_254; // @[Mux.scala 81:58]
  wire [127:0] _result_T_258 = 6'h1b == io_ctrl_alu_op ? {{64'd0}, _result_T_125} : _result_T_256; // @[Mux.scala 81:58]
  wire [127:0] _result_T_260 = 6'h29 == io_ctrl_alu_op ? {{127'd0}, _result_T_128} : _result_T_258; // @[Mux.scala 81:58]
  wire [127:0] _result_T_262 = 6'h2a == io_ctrl_alu_op ? {{127'd0}, _result_T_129} : _result_T_260; // @[Mux.scala 81:58]
  wire [127:0] _result_T_264 = 6'h1e == io_ctrl_alu_op ? {{64'd0}, _result_T_115} : _result_T_262; // @[Mux.scala 81:58]
  wire [127:0] _result_T_266 = 6'h1f == io_ctrl_alu_op ? {{64'd0}, _result_T_115} : _result_T_264; // @[Mux.scala 81:58]
  wire [127:0] _result_T_268 = 6'h20 == io_ctrl_alu_op ? {{64'd0}, _result_T_115} : _result_T_266; // @[Mux.scala 81:58]
  wire [127:0] _result_T_270 = 6'h21 == io_ctrl_alu_op ? {{64'd0}, _result_T_115} : _result_T_268; // @[Mux.scala 81:58]
  wire [127:0] _result_T_272 = 6'h22 == io_ctrl_alu_op ? {{64'd0}, _result_T_115} : _result_T_270; // @[Mux.scala 81:58]
  wire [127:0] _result_T_274 = 6'h1c == io_ctrl_alu_op ? {{64'd0}, _result_T_115} : _result_T_272; // @[Mux.scala 81:58]
  wire [127:0] _result_T_276 = 6'h1d == io_ctrl_alu_op ? {{64'd0}, _result_T_115} : _result_T_274; // @[Mux.scala 81:58]
  wire [127:0] _result_T_278 = 6'h23 == io_ctrl_alu_op ? {{1'd0}, _result_T_145} : _result_T_276; // @[Mux.scala 81:58]
  wire [127:0] _result_T_280 = 6'h24 == io_ctrl_alu_op ? {{33'd0}, _result_T_152} : _result_T_278; // @[Mux.scala 81:58]
  wire [127:0] _result_T_282 = 6'h25 == io_ctrl_alu_op ? {{64'd0}, _result_T_154} : _result_T_280; // @[Mux.scala 81:58]
  wire [127:0] _result_T_284 = 6'h26 == io_ctrl_alu_op ? {{64'd0}, _result_T_161} : _result_T_282; // @[Mux.scala 81:58]
  wire [127:0] _result_T_286 = 6'h2a == io_ctrl_alu_op ? {{127'd0}, _result_T_129} : _result_T_284; // @[Mux.scala 81:58]
  wire [127:0] _result_T_288 = 6'h2b == io_ctrl_alu_op ? {{64'd0}, _result_T_163} : _result_T_286; // @[Mux.scala 81:58]
  wire [127:0] _result_T_290 = 6'h2c == io_ctrl_alu_op ? {{64'd0}, _result_T_164} : _result_T_288; // @[Mux.scala 81:58]
  wire [127:0] _result_T_292 = 6'h2d == io_ctrl_alu_op ? {{64'd0}, _result_T_165} : _result_T_290; // @[Mux.scala 81:58]
  wire [127:0] _result_T_294 = 6'h27 == io_ctrl_alu_op ? {{64'd0}, _result_T_169} : _result_T_292; // @[Mux.scala 81:58]
  wire [127:0] _result_T_296 = 6'h28 == io_ctrl_alu_op ? {{64'd0}, _result_T_178} : _result_T_294; // @[Mux.scala 81:58]
  wire [127:0] _result_T_298 = 6'h2e == io_ctrl_alu_op ? {{64'd0}, _result_T_115} : _result_T_296; // @[Mux.scala 81:58]
  wire [127:0] _result_T_300 = 6'h31 == io_ctrl_alu_op ? {{64'd0}, _result_T_115} : _result_T_298; // @[Mux.scala 81:58]
  wire [127:0] _result_T_302 = 6'h2f == io_ctrl_alu_op ? {{64'd0}, _result_T_115} : _result_T_300; // @[Mux.scala 81:58]
  wire [127:0] _result_T_304 = 6'h30 == io_ctrl_alu_op ? {{64'd0}, _result_T_115} : _result_T_302; // @[Mux.scala 81:58]
  wire [127:0] _result_T_306 = 6'h32 == io_ctrl_alu_op ? {{64'd0}, _result_T_188} : _result_T_304; // @[Mux.scala 81:58]
  wire [127:0] _result_T_308 = 6'h33 == io_ctrl_alu_op ? {{64'd0}, _result_T_188} : _result_T_306; // @[Mux.scala 81:58]
  wire [127:0] _result_T_310 = 6'h36 == io_ctrl_alu_op ? {{64'd0}, _result_T_188} : _result_T_308; // @[Mux.scala 81:58]
  wire [127:0] _result_T_312 = 6'h34 == io_ctrl_alu_op ? {{64'd0}, _result_T_188} : _result_T_310; // @[Mux.scala 81:58]
  wire [127:0] _result_T_314 = 6'h35 == io_ctrl_alu_op ? {{64'd0}, _result_T_188} : _result_T_312; // @[Mux.scala 81:58]
  wire [127:0] _result_T_316 = 6'h37 == io_ctrl_alu_op ? {{64'd0}, _result_T_188} : _result_T_314; // @[Mux.scala 81:58]
  wire [127:0] _result_T_318 = 6'h38 == io_ctrl_alu_op ? {{64'd0}, io_imm} : _result_T_316; // @[Mux.scala 81:58]
  wire [127:0] _result_T_320 = 6'h39 == io_ctrl_alu_op ? {{64'd0}, _result_T_188} : _result_T_318; // @[Mux.scala 81:58]
  wire [127:0] _result_T_322 = 6'h3a == io_ctrl_alu_op ? {{64'd0}, _result_T_125} : _result_T_320; // @[Mux.scala 81:58]
  wire [31:0] _io_j_branch_T_5 = {_result_T_115[31:1],1'h0}; // @[Cat.scala 31:58]
  wire [63:0] _io_j_branch_T_7 = 6'h3a == io_ctrl_alu_op ? _result_T_188 : 64'h0; // @[Mux.scala 81:58]
  wire  _io_is_b_T = io_in1 == io_in2; // @[Alu.scala 123:24]
  wire  _io_is_b_T_1 = io_in1 != io_in2; // @[Alu.scala 124:24]
  wire  _io_is_b_T_7 = $signed(io_in1) >= $signed(io_in2); // @[Alu.scala 126:31]
  wire  _io_is_b_T_8 = io_in1 >= io_in2; // @[Alu.scala 127:25]
  wire  _io_is_b_T_13 = 6'h33 == io_ctrl_alu_op ? _io_is_b_T_1 : 6'h32 == io_ctrl_alu_op & _io_is_b_T; // @[Mux.scala 81:58]
  wire  _io_is_b_T_15 = 6'h36 == io_ctrl_alu_op ? _result_T_58 : _io_is_b_T_13; // @[Mux.scala 81:58]
  wire  _io_is_b_T_17 = 6'h34 == io_ctrl_alu_op ? _io_is_b_T_7 : _io_is_b_T_15; // @[Mux.scala 81:58]
  wire  _io_is_b_T_19 = 6'h35 == io_ctrl_alu_op ? _io_is_b_T_8 : _io_is_b_T_17; // @[Mux.scala 81:58]
  wire  _io_is_b_T_21 = 6'h37 == io_ctrl_alu_op ? _result_T_59 : _io_is_b_T_19; // @[Mux.scala 81:58]
  assign io_out = _result_T_322[63:0]; // @[Alu.scala 131:10]
  assign io_j_branch = 6'h1b == io_ctrl_alu_op ? {{32'd0}, _io_j_branch_T_5} : _io_j_branch_T_7; // @[Mux.scala 81:58]
  assign io_is_b = {{63'd0}, _io_is_b_T_21}; // @[Alu.scala 119:11]
endmodule
module Decoder(
  input  [31:0] io_inst,
  output        io_ctrl_RegWen,
  output [5:0]  io_ctrl_OP,
  output        io_ctrl_J_JUMP,
  output        io_ctrl_MemWen,
  output [7:0]  io_ctrl_wmask,
  output        io_ctrl_MemLoad,
  output [4:0]  io_reg_rs1,
  output [4:0]  io_reg_rs2,
  output [4:0]  io_reg_rd,
  output [63:0] io_imm
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
  wire  _crtlsignals_T_29 = 32'h4000503b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_31 = 32'h5033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_33 = 32'h503b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_35 = 32'h4033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_37 = 32'h7033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_39 = 32'h40005033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_41 = 32'h6033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_43 = 32'h2006033 == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_45 = 32'h200603b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_47 = 32'h2007033 == _crtlsignals_T; // @[Lookup.scala 31:38]
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
  wire  _crtlsignals_T_79 = 32'h40005013 == _crtlsignals_T_70; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_81 = 32'h4000501b == _crtlsignals_T; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_83 = 32'h2013 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_85 = 32'h3013 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_87 = 32'h7013 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_89 = 32'h4013 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_91 = 32'h3023 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_93 = 32'h23 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_95 = 32'h1023 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_97 = 32'h2023 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_99 = 32'h63 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_101 = 32'h1063 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_103 = 32'h5063 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_105 = 32'h4063 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_107 = 32'h6063 == _crtlsignals_T_50; // @[Lookup.scala 31:38]
  wire [31:0] _crtlsignals_T_108 = io_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_109 = 32'h17 == _crtlsignals_T_108; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_111 = 32'h37 == _crtlsignals_T_108; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_113 = 32'h6f == _crtlsignals_T_108; // @[Lookup.scala 31:38]
  wire  _crtlsignals_T_115 = 32'h100073 == io_inst; // @[Lookup.scala 31:38]
  wire [5:0] _crtlsignals_T_116 = _crtlsignals_T_115 ? 6'h3b : 6'h0; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_117 = _crtlsignals_T_113 ? 6'h3a : _crtlsignals_T_116; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_118 = _crtlsignals_T_111 ? 6'h38 : _crtlsignals_T_117; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_119 = _crtlsignals_T_109 ? 6'h39 : _crtlsignals_T_118; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_120 = _crtlsignals_T_107 ? 6'h37 : _crtlsignals_T_119; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_121 = _crtlsignals_T_105 ? 6'h36 : _crtlsignals_T_120; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_122 = _crtlsignals_T_103 ? 6'h34 : _crtlsignals_T_121; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_123 = _crtlsignals_T_101 ? 6'h33 : _crtlsignals_T_122; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_124 = _crtlsignals_T_99 ? 6'h32 : _crtlsignals_T_123; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_125 = _crtlsignals_T_97 ? 6'h31 : _crtlsignals_T_124; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_126 = _crtlsignals_T_95 ? 6'h30 : _crtlsignals_T_125; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_127 = _crtlsignals_T_93 ? 6'h2f : _crtlsignals_T_126; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_128 = _crtlsignals_T_91 ? 6'h2e : _crtlsignals_T_127; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_129 = _crtlsignals_T_89 ? 6'h2c : _crtlsignals_T_128; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_130 = _crtlsignals_T_87 ? 6'h2b : _crtlsignals_T_129; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_131 = _crtlsignals_T_85 ? 6'h2a : _crtlsignals_T_130; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_132 = _crtlsignals_T_83 ? 6'h29 : _crtlsignals_T_131; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_133 = _crtlsignals_T_81 ? 6'h28 : _crtlsignals_T_132; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_134 = _crtlsignals_T_79 ? 6'h27 : _crtlsignals_T_133; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_135 = _crtlsignals_T_77 ? 6'h26 : _crtlsignals_T_134; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_136 = _crtlsignals_T_75 ? 6'h25 : _crtlsignals_T_135; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_137 = _crtlsignals_T_73 ? 6'h24 : _crtlsignals_T_136; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_138 = _crtlsignals_T_71 ? 6'h23 : _crtlsignals_T_137; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_139 = _crtlsignals_T_69 ? 6'h20 : _crtlsignals_T_138; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_140 = _crtlsignals_T_67 ? 6'h22 : _crtlsignals_T_139; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_141 = _crtlsignals_T_65 ? 6'h21 : _crtlsignals_T_140; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_142 = _crtlsignals_T_63 ? 6'h1f : _crtlsignals_T_141; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_143 = _crtlsignals_T_61 ? 6'h1e : _crtlsignals_T_142; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_144 = _crtlsignals_T_59 ? 6'h1d : _crtlsignals_T_143; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_145 = _crtlsignals_T_57 ? 6'h1c : _crtlsignals_T_144; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_146 = _crtlsignals_T_55 ? 6'h1b : _crtlsignals_T_145; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_147 = _crtlsignals_T_53 ? 6'h1a : _crtlsignals_T_146; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_148 = _crtlsignals_T_51 ? 6'h19 : _crtlsignals_T_147; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_149 = _crtlsignals_T_49 ? 6'h18 : _crtlsignals_T_148; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_150 = _crtlsignals_T_47 ? 6'h16 : _crtlsignals_T_149; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_151 = _crtlsignals_T_45 ? 6'h17 : _crtlsignals_T_150; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_152 = _crtlsignals_T_43 ? 6'h15 : _crtlsignals_T_151; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_153 = _crtlsignals_T_41 ? 6'h14 : _crtlsignals_T_152; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_154 = _crtlsignals_T_39 ? 6'h13 : _crtlsignals_T_153; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_155 = _crtlsignals_T_37 ? 6'h12 : _crtlsignals_T_154; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_156 = _crtlsignals_T_35 ? 6'h11 : _crtlsignals_T_155; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_157 = _crtlsignals_T_33 ? 6'h10 : _crtlsignals_T_156; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_158 = _crtlsignals_T_31 ? 6'hf : _crtlsignals_T_157; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_159 = _crtlsignals_T_29 ? 6'he : _crtlsignals_T_158; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_160 = _crtlsignals_T_27 ? 6'hd : _crtlsignals_T_159; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_161 = _crtlsignals_T_25 ? 6'hc : _crtlsignals_T_160; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_162 = _crtlsignals_T_23 ? 6'hb : _crtlsignals_T_161; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_163 = _crtlsignals_T_21 ? 6'ha : _crtlsignals_T_162; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_164 = _crtlsignals_T_19 ? 6'h9 : _crtlsignals_T_163; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_165 = _crtlsignals_T_17 ? 6'h8 : _crtlsignals_T_164; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_166 = _crtlsignals_T_15 ? 6'h7 : _crtlsignals_T_165; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_167 = _crtlsignals_T_13 ? 6'h6 : _crtlsignals_T_166; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_168 = _crtlsignals_T_11 ? 6'h5 : _crtlsignals_T_167; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_169 = _crtlsignals_T_9 ? 6'h4 : _crtlsignals_T_168; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_170 = _crtlsignals_T_7 ? 6'h3 : _crtlsignals_T_169; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_171 = _crtlsignals_T_5 ? 6'h2 : _crtlsignals_T_170; // @[Lookup.scala 34:39]
  wire [5:0] _crtlsignals_T_172 = _crtlsignals_T_3 ? 6'h1 : _crtlsignals_T_171; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_173 = _crtlsignals_T_115 ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_177 = _crtlsignals_T_107 ? 1'h0 : _crtlsignals_T_109 | (_crtlsignals_T_111 | (_crtlsignals_T_113
     | _crtlsignals_T_173)); // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_178 = _crtlsignals_T_105 ? 1'h0 : _crtlsignals_T_177; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_179 = _crtlsignals_T_103 ? 1'h0 : _crtlsignals_T_178; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_180 = _crtlsignals_T_101 ? 1'h0 : _crtlsignals_T_179; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_181 = _crtlsignals_T_99 ? 1'h0 : _crtlsignals_T_180; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_182 = _crtlsignals_T_97 ? 1'h0 : _crtlsignals_T_181; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_183 = _crtlsignals_T_95 ? 1'h0 : _crtlsignals_T_182; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_184 = _crtlsignals_T_93 ? 1'h0 : _crtlsignals_T_183; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_185 = _crtlsignals_T_91 ? 1'h0 : _crtlsignals_T_184; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_215 = _crtlsignals_T_31 | (_crtlsignals_T_33 | (_crtlsignals_T_35 | (_crtlsignals_T_37 | (
    _crtlsignals_T_39 | (_crtlsignals_T_41 | (_crtlsignals_T_43 | (_crtlsignals_T_45 | (_crtlsignals_T_47 | (
    _crtlsignals_T_49 | (_crtlsignals_T_51 | (_crtlsignals_T_53 | (_crtlsignals_T_55 | (_crtlsignals_T_57 | (
    _crtlsignals_T_59 | (_crtlsignals_T_61 | (_crtlsignals_T_63 | (_crtlsignals_T_65 | (_crtlsignals_T_67 | (
    _crtlsignals_T_69 | (_crtlsignals_T_71 | (_crtlsignals_T_73 | (_crtlsignals_T_75 | (_crtlsignals_T_77 | (
    _crtlsignals_T_79 | (_crtlsignals_T_81 | (_crtlsignals_T_83 | (_crtlsignals_T_85 | (_crtlsignals_T_87 | (
    _crtlsignals_T_89 | _crtlsignals_T_185))))))))))))))))))))))))))))); // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_231 = _crtlsignals_T_113 ? 3'h4 : 3'h0; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_232 = _crtlsignals_T_111 ? 3'h3 : _crtlsignals_T_231; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_233 = _crtlsignals_T_109 ? 3'h3 : _crtlsignals_T_232; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_234 = _crtlsignals_T_107 ? 3'h2 : _crtlsignals_T_233; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_235 = _crtlsignals_T_105 ? 3'h2 : _crtlsignals_T_234; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_236 = _crtlsignals_T_103 ? 3'h2 : _crtlsignals_T_235; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_237 = _crtlsignals_T_101 ? 3'h2 : _crtlsignals_T_236; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_238 = _crtlsignals_T_99 ? 3'h2 : _crtlsignals_T_237; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_239 = _crtlsignals_T_97 ? 3'h1 : _crtlsignals_T_238; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_240 = _crtlsignals_T_95 ? 3'h1 : _crtlsignals_T_239; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_241 = _crtlsignals_T_93 ? 3'h1 : _crtlsignals_T_240; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_242 = _crtlsignals_T_91 ? 3'h1 : _crtlsignals_T_241; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_243 = _crtlsignals_T_89 ? 3'h0 : _crtlsignals_T_242; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_244 = _crtlsignals_T_87 ? 3'h0 : _crtlsignals_T_243; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_245 = _crtlsignals_T_85 ? 3'h0 : _crtlsignals_T_244; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_246 = _crtlsignals_T_83 ? 3'h0 : _crtlsignals_T_245; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_247 = _crtlsignals_T_81 ? 3'h0 : _crtlsignals_T_246; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_248 = _crtlsignals_T_79 ? 3'h0 : _crtlsignals_T_247; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_249 = _crtlsignals_T_77 ? 3'h0 : _crtlsignals_T_248; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_250 = _crtlsignals_T_75 ? 3'h0 : _crtlsignals_T_249; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_251 = _crtlsignals_T_73 ? 3'h0 : _crtlsignals_T_250; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_252 = _crtlsignals_T_71 ? 3'h0 : _crtlsignals_T_251; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_253 = _crtlsignals_T_69 ? 3'h0 : _crtlsignals_T_252; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_254 = _crtlsignals_T_67 ? 3'h0 : _crtlsignals_T_253; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_255 = _crtlsignals_T_65 ? 3'h0 : _crtlsignals_T_254; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_256 = _crtlsignals_T_63 ? 3'h0 : _crtlsignals_T_255; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_257 = _crtlsignals_T_61 ? 3'h0 : _crtlsignals_T_256; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_258 = _crtlsignals_T_59 ? 3'h0 : _crtlsignals_T_257; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_259 = _crtlsignals_T_57 ? 3'h0 : _crtlsignals_T_258; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_260 = _crtlsignals_T_55 ? 3'h0 : _crtlsignals_T_259; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_261 = _crtlsignals_T_53 ? 3'h0 : _crtlsignals_T_260; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_262 = _crtlsignals_T_51 ? 3'h0 : _crtlsignals_T_261; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_263 = _crtlsignals_T_49 ? 3'h0 : _crtlsignals_T_262; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_264 = _crtlsignals_T_47 ? 3'h0 : _crtlsignals_T_263; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_265 = _crtlsignals_T_45 ? 3'h0 : _crtlsignals_T_264; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_266 = _crtlsignals_T_43 ? 3'h0 : _crtlsignals_T_265; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_267 = _crtlsignals_T_41 ? 3'h0 : _crtlsignals_T_266; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_268 = _crtlsignals_T_39 ? 3'h0 : _crtlsignals_T_267; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_269 = _crtlsignals_T_37 ? 3'h0 : _crtlsignals_T_268; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_270 = _crtlsignals_T_35 ? 3'h0 : _crtlsignals_T_269; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_271 = _crtlsignals_T_33 ? 3'h0 : _crtlsignals_T_270; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_272 = _crtlsignals_T_31 ? 3'h0 : _crtlsignals_T_271; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_273 = _crtlsignals_T_29 ? 3'h0 : _crtlsignals_T_272; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_274 = _crtlsignals_T_27 ? 3'h0 : _crtlsignals_T_273; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_275 = _crtlsignals_T_25 ? 3'h0 : _crtlsignals_T_274; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_276 = _crtlsignals_T_23 ? 3'h0 : _crtlsignals_T_275; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_277 = _crtlsignals_T_21 ? 3'h0 : _crtlsignals_T_276; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_278 = _crtlsignals_T_19 ? 3'h0 : _crtlsignals_T_277; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_279 = _crtlsignals_T_17 ? 3'h0 : _crtlsignals_T_278; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_280 = _crtlsignals_T_15 ? 3'h0 : _crtlsignals_T_279; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_281 = _crtlsignals_T_13 ? 3'h0 : _crtlsignals_T_280; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_282 = _crtlsignals_T_11 ? 3'h0 : _crtlsignals_T_281; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_283 = _crtlsignals_T_9 ? 3'h0 : _crtlsignals_T_282; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_284 = _crtlsignals_T_7 ? 3'h0 : _crtlsignals_T_283; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_285 = _crtlsignals_T_5 ? 3'h0 : _crtlsignals_T_284; // @[Lookup.scala 34:39]
  wire [2:0] _crtlsignals_T_286 = _crtlsignals_T_3 ? 3'h0 : _crtlsignals_T_285; // @[Lookup.scala 34:39]
  wire [2:0] ImmType = _crtlsignals_T_1 ? 3'h0 : _crtlsignals_T_286; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_289 = _crtlsignals_T_111 ? 1'h0 : _crtlsignals_T_113; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_290 = _crtlsignals_T_109 ? 1'h0 : _crtlsignals_T_289; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_291 = _crtlsignals_T_107 ? 1'h0 : _crtlsignals_T_290; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_292 = _crtlsignals_T_105 ? 1'h0 : _crtlsignals_T_291; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_293 = _crtlsignals_T_103 ? 1'h0 : _crtlsignals_T_292; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_294 = _crtlsignals_T_101 ? 1'h0 : _crtlsignals_T_293; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_295 = _crtlsignals_T_99 ? 1'h0 : _crtlsignals_T_294; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_296 = _crtlsignals_T_97 ? 1'h0 : _crtlsignals_T_295; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_297 = _crtlsignals_T_95 ? 1'h0 : _crtlsignals_T_296; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_298 = _crtlsignals_T_93 ? 1'h0 : _crtlsignals_T_297; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_299 = _crtlsignals_T_91 ? 1'h0 : _crtlsignals_T_298; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_300 = _crtlsignals_T_89 ? 1'h0 : _crtlsignals_T_299; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_301 = _crtlsignals_T_87 ? 1'h0 : _crtlsignals_T_300; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_302 = _crtlsignals_T_85 ? 1'h0 : _crtlsignals_T_301; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_303 = _crtlsignals_T_83 ? 1'h0 : _crtlsignals_T_302; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_304 = _crtlsignals_T_81 ? 1'h0 : _crtlsignals_T_303; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_305 = _crtlsignals_T_79 ? 1'h0 : _crtlsignals_T_304; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_306 = _crtlsignals_T_77 ? 1'h0 : _crtlsignals_T_305; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_307 = _crtlsignals_T_75 ? 1'h0 : _crtlsignals_T_306; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_308 = _crtlsignals_T_73 ? 1'h0 : _crtlsignals_T_307; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_309 = _crtlsignals_T_71 ? 1'h0 : _crtlsignals_T_308; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_310 = _crtlsignals_T_69 ? 1'h0 : _crtlsignals_T_309; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_311 = _crtlsignals_T_67 ? 1'h0 : _crtlsignals_T_310; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_312 = _crtlsignals_T_65 ? 1'h0 : _crtlsignals_T_311; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_313 = _crtlsignals_T_63 ? 1'h0 : _crtlsignals_T_312; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_314 = _crtlsignals_T_61 ? 1'h0 : _crtlsignals_T_313; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_315 = _crtlsignals_T_59 ? 1'h0 : _crtlsignals_T_314; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_316 = _crtlsignals_T_57 ? 1'h0 : _crtlsignals_T_315; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_318 = _crtlsignals_T_53 ? 1'h0 : _crtlsignals_T_55 | _crtlsignals_T_316; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_319 = _crtlsignals_T_51 ? 1'h0 : _crtlsignals_T_318; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_320 = _crtlsignals_T_49 ? 1'h0 : _crtlsignals_T_319; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_321 = _crtlsignals_T_47 ? 1'h0 : _crtlsignals_T_320; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_322 = _crtlsignals_T_45 ? 1'h0 : _crtlsignals_T_321; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_323 = _crtlsignals_T_43 ? 1'h0 : _crtlsignals_T_322; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_324 = _crtlsignals_T_41 ? 1'h0 : _crtlsignals_T_323; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_325 = _crtlsignals_T_39 ? 1'h0 : _crtlsignals_T_324; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_326 = _crtlsignals_T_37 ? 1'h0 : _crtlsignals_T_325; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_327 = _crtlsignals_T_35 ? 1'h0 : _crtlsignals_T_326; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_328 = _crtlsignals_T_33 ? 1'h0 : _crtlsignals_T_327; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_329 = _crtlsignals_T_31 ? 1'h0 : _crtlsignals_T_328; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_330 = _crtlsignals_T_29 ? 1'h0 : _crtlsignals_T_329; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_331 = _crtlsignals_T_27 ? 1'h0 : _crtlsignals_T_330; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_332 = _crtlsignals_T_25 ? 1'h0 : _crtlsignals_T_331; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_333 = _crtlsignals_T_23 ? 1'h0 : _crtlsignals_T_332; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_334 = _crtlsignals_T_21 ? 1'h0 : _crtlsignals_T_333; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_335 = _crtlsignals_T_19 ? 1'h0 : _crtlsignals_T_334; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_336 = _crtlsignals_T_17 ? 1'h0 : _crtlsignals_T_335; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_337 = _crtlsignals_T_15 ? 1'h0 : _crtlsignals_T_336; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_338 = _crtlsignals_T_13 ? 1'h0 : _crtlsignals_T_337; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_339 = _crtlsignals_T_11 ? 1'h0 : _crtlsignals_T_338; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_340 = _crtlsignals_T_9 ? 1'h0 : _crtlsignals_T_339; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_341 = _crtlsignals_T_7 ? 1'h0 : _crtlsignals_T_340; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_342 = _crtlsignals_T_5 ? 1'h0 : _crtlsignals_T_341; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_343 = _crtlsignals_T_3 ? 1'h0 : _crtlsignals_T_342; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_357 = _crtlsignals_T_89 ? 1'h0 : _crtlsignals_T_91 | (_crtlsignals_T_93 | (_crtlsignals_T_95 |
    _crtlsignals_T_97)); // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_358 = _crtlsignals_T_87 ? 1'h0 : _crtlsignals_T_357; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_359 = _crtlsignals_T_85 ? 1'h0 : _crtlsignals_T_358; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_360 = _crtlsignals_T_83 ? 1'h0 : _crtlsignals_T_359; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_361 = _crtlsignals_T_81 ? 1'h0 : _crtlsignals_T_360; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_362 = _crtlsignals_T_79 ? 1'h0 : _crtlsignals_T_361; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_363 = _crtlsignals_T_77 ? 1'h0 : _crtlsignals_T_362; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_364 = _crtlsignals_T_75 ? 1'h0 : _crtlsignals_T_363; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_365 = _crtlsignals_T_73 ? 1'h0 : _crtlsignals_T_364; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_366 = _crtlsignals_T_71 ? 1'h0 : _crtlsignals_T_365; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_367 = _crtlsignals_T_69 ? 1'h0 : _crtlsignals_T_366; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_368 = _crtlsignals_T_67 ? 1'h0 : _crtlsignals_T_367; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_369 = _crtlsignals_T_65 ? 1'h0 : _crtlsignals_T_368; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_370 = _crtlsignals_T_63 ? 1'h0 : _crtlsignals_T_369; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_371 = _crtlsignals_T_61 ? 1'h0 : _crtlsignals_T_370; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_372 = _crtlsignals_T_59 ? 1'h0 : _crtlsignals_T_371; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_373 = _crtlsignals_T_57 ? 1'h0 : _crtlsignals_T_372; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_374 = _crtlsignals_T_55 ? 1'h0 : _crtlsignals_T_373; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_375 = _crtlsignals_T_53 ? 1'h0 : _crtlsignals_T_374; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_376 = _crtlsignals_T_51 ? 1'h0 : _crtlsignals_T_375; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_377 = _crtlsignals_T_49 ? 1'h0 : _crtlsignals_T_376; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_378 = _crtlsignals_T_47 ? 1'h0 : _crtlsignals_T_377; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_379 = _crtlsignals_T_45 ? 1'h0 : _crtlsignals_T_378; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_380 = _crtlsignals_T_43 ? 1'h0 : _crtlsignals_T_379; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_381 = _crtlsignals_T_41 ? 1'h0 : _crtlsignals_T_380; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_382 = _crtlsignals_T_39 ? 1'h0 : _crtlsignals_T_381; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_383 = _crtlsignals_T_37 ? 1'h0 : _crtlsignals_T_382; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_384 = _crtlsignals_T_35 ? 1'h0 : _crtlsignals_T_383; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_385 = _crtlsignals_T_33 ? 1'h0 : _crtlsignals_T_384; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_386 = _crtlsignals_T_31 ? 1'h0 : _crtlsignals_T_385; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_387 = _crtlsignals_T_29 ? 1'h0 : _crtlsignals_T_386; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_388 = _crtlsignals_T_27 ? 1'h0 : _crtlsignals_T_387; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_389 = _crtlsignals_T_25 ? 1'h0 : _crtlsignals_T_388; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_390 = _crtlsignals_T_23 ? 1'h0 : _crtlsignals_T_389; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_391 = _crtlsignals_T_21 ? 1'h0 : _crtlsignals_T_390; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_392 = _crtlsignals_T_19 ? 1'h0 : _crtlsignals_T_391; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_393 = _crtlsignals_T_17 ? 1'h0 : _crtlsignals_T_392; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_394 = _crtlsignals_T_15 ? 1'h0 : _crtlsignals_T_393; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_395 = _crtlsignals_T_13 ? 1'h0 : _crtlsignals_T_394; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_396 = _crtlsignals_T_11 ? 1'h0 : _crtlsignals_T_395; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_397 = _crtlsignals_T_9 ? 1'h0 : _crtlsignals_T_396; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_398 = _crtlsignals_T_7 ? 1'h0 : _crtlsignals_T_397; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_399 = _crtlsignals_T_5 ? 1'h0 : _crtlsignals_T_398; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_400 = _crtlsignals_T_3 ? 1'h0 : _crtlsignals_T_399; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_431 = _crtlsignals_T_55 ? 1'h0 : _crtlsignals_T_57 | (_crtlsignals_T_59 | (_crtlsignals_T_61 | (
    _crtlsignals_T_63 | (_crtlsignals_T_65 | (_crtlsignals_T_67 | _crtlsignals_T_69))))); // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_432 = _crtlsignals_T_53 ? 1'h0 : _crtlsignals_T_431; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_433 = _crtlsignals_T_51 ? 1'h0 : _crtlsignals_T_432; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_434 = _crtlsignals_T_49 ? 1'h0 : _crtlsignals_T_433; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_435 = _crtlsignals_T_47 ? 1'h0 : _crtlsignals_T_434; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_436 = _crtlsignals_T_45 ? 1'h0 : _crtlsignals_T_435; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_437 = _crtlsignals_T_43 ? 1'h0 : _crtlsignals_T_436; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_438 = _crtlsignals_T_41 ? 1'h0 : _crtlsignals_T_437; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_439 = _crtlsignals_T_39 ? 1'h0 : _crtlsignals_T_438; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_440 = _crtlsignals_T_37 ? 1'h0 : _crtlsignals_T_439; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_441 = _crtlsignals_T_35 ? 1'h0 : _crtlsignals_T_440; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_442 = _crtlsignals_T_33 ? 1'h0 : _crtlsignals_T_441; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_443 = _crtlsignals_T_31 ? 1'h0 : _crtlsignals_T_442; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_444 = _crtlsignals_T_29 ? 1'h0 : _crtlsignals_T_443; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_445 = _crtlsignals_T_27 ? 1'h0 : _crtlsignals_T_444; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_446 = _crtlsignals_T_25 ? 1'h0 : _crtlsignals_T_445; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_447 = _crtlsignals_T_23 ? 1'h0 : _crtlsignals_T_446; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_448 = _crtlsignals_T_21 ? 1'h0 : _crtlsignals_T_447; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_449 = _crtlsignals_T_19 ? 1'h0 : _crtlsignals_T_448; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_450 = _crtlsignals_T_17 ? 1'h0 : _crtlsignals_T_449; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_451 = _crtlsignals_T_15 ? 1'h0 : _crtlsignals_T_450; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_452 = _crtlsignals_T_13 ? 1'h0 : _crtlsignals_T_451; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_453 = _crtlsignals_T_11 ? 1'h0 : _crtlsignals_T_452; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_454 = _crtlsignals_T_9 ? 1'h0 : _crtlsignals_T_453; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_455 = _crtlsignals_T_7 ? 1'h0 : _crtlsignals_T_454; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_456 = _crtlsignals_T_5 ? 1'h0 : _crtlsignals_T_455; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_457 = _crtlsignals_T_3 ? 1'h0 : _crtlsignals_T_456; // @[Lookup.scala 34:39]
  wire [51:0] _I_T_3 = io_inst[31] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  wire [63:0] I = {_I_T_3,io_inst[31:20]}; // @[Cat.scala 31:58]
  wire [43:0] _U_T_3 = io_inst[31] ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _U_T_4 = {_U_T_3,io_inst[31:12]}; // @[Cat.scala 31:58]
  wire [75:0] U = {_U_T_4, 12'h0}; // @[Decoder.scala 123:36]
  wire [56:0] _S_T_3 = io_inst[31] ? 57'h1ffffffffffffff : 57'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _S_T_4 = {_S_T_3,io_inst[31:25]}; // @[Cat.scala 31:58]
  wire [68:0] _S_T_5 = {_S_T_4, 5'h0}; // @[Decoder.scala 124:35]
  wire [68:0] _GEN_0 = {{64'd0}, io_inst[11:7]}; // @[Decoder.scala 124:40]
  wire [68:0] S = _S_T_5 | _GEN_0; // @[Decoder.scala 124:40]
  wire [62:0] _J_T_3 = io_inst[31] ? 63'h7fffffffffffffff : 63'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _J_T_4 = {_J_T_3,io_inst[31]}; // @[Cat.scala 31:58]
  wire [83:0] _J_T_5 = {_J_T_4, 20'h0}; // @[Decoder.scala 125:31]
  wire [19:0] _J_T_7 = {io_inst[19:12], 12'h0}; // @[Decoder.scala 125:55]
  wire [83:0] _GEN_1 = {{64'd0}, _J_T_7}; // @[Decoder.scala 125:37]
  wire [83:0] _J_T_8 = _J_T_5 | _GEN_1; // @[Decoder.scala 125:37]
  wire [11:0] _J_T_10 = {io_inst[20], 11'h0}; // @[Decoder.scala 125:75]
  wire [83:0] _GEN_2 = {{72'd0}, _J_T_10}; // @[Decoder.scala 125:61]
  wire [83:0] _J_T_11 = _J_T_8 | _GEN_2; // @[Decoder.scala 125:61]
  wire [10:0] _J_T_13 = {io_inst[30:21], 1'h0}; // @[Decoder.scala 125:99]
  wire [83:0] _GEN_3 = {{73'd0}, _J_T_13}; // @[Decoder.scala 125:81]
  wire [83:0] J = _J_T_11 | _GEN_3; // @[Decoder.scala 125:81]
  wire [75:0] _B_T_5 = {_J_T_4, 12'h0}; // @[Decoder.scala 126:31]
  wire [11:0] _B_T_7 = {io_inst[7], 11'h0}; // @[Decoder.scala 126:50]
  wire [75:0] _GEN_4 = {{64'd0}, _B_T_7}; // @[Decoder.scala 126:37]
  wire [75:0] _B_T_8 = _B_T_5 | _GEN_4; // @[Decoder.scala 126:37]
  wire [10:0] _B_T_10 = {io_inst[30:25], 5'h0}; // @[Decoder.scala 126:74]
  wire [75:0] _GEN_5 = {{65'd0}, _B_T_10}; // @[Decoder.scala 126:56]
  wire [75:0] _B_T_11 = _B_T_8 | _GEN_5; // @[Decoder.scala 126:56]
  wire [4:0] _B_T_13 = {io_inst[11:8], 1'h0}; // @[Decoder.scala 126:96]
  wire [75:0] _GEN_6 = {{71'd0}, _B_T_13}; // @[Decoder.scala 126:79]
  wire [75:0] B = _B_T_11 | _GEN_6; // @[Decoder.scala 126:79]
  wire [63:0] _io_imm_T_1 = 3'h0 == ImmType ? I : 64'h0; // @[Mux.scala 81:58]
  wire [68:0] _io_imm_T_3 = 3'h1 == ImmType ? S : {{5'd0}, _io_imm_T_1}; // @[Mux.scala 81:58]
  wire [75:0] _io_imm_T_5 = 3'h2 == ImmType ? B : {{7'd0}, _io_imm_T_3}; // @[Mux.scala 81:58]
  wire [75:0] _io_imm_T_7 = 3'h3 == ImmType ? U : _io_imm_T_5; // @[Mux.scala 81:58]
  wire [83:0] _io_imm_T_9 = 3'h4 == ImmType ? J : {{8'd0}, _io_imm_T_7}; // @[Mux.scala 81:58]
  wire [63:0] _io_ctrl_wmask_T_1 = 6'h2f == io_ctrl_OP ? 64'h1 : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _io_ctrl_wmask_T_3 = 6'h30 == io_ctrl_OP ? 64'h3 : _io_ctrl_wmask_T_1; // @[Mux.scala 81:58]
  wire [63:0] _io_ctrl_wmask_T_5 = 6'h31 == io_ctrl_OP ? 64'hf : _io_ctrl_wmask_T_3; // @[Mux.scala 81:58]
  wire [63:0] _io_ctrl_wmask_T_7 = 6'h2e == io_ctrl_OP ? 64'hff : _io_ctrl_wmask_T_5; // @[Mux.scala 81:58]
  assign io_ctrl_RegWen = _crtlsignals_T_1 | (_crtlsignals_T_3 | (_crtlsignals_T_5 | (_crtlsignals_T_7 | (
    _crtlsignals_T_9 | (_crtlsignals_T_11 | (_crtlsignals_T_13 | (_crtlsignals_T_15 | (_crtlsignals_T_17 | (
    _crtlsignals_T_19 | (_crtlsignals_T_21 | (_crtlsignals_T_23 | (_crtlsignals_T_25 | (_crtlsignals_T_27 | (
    _crtlsignals_T_29 | _crtlsignals_T_215)))))))))))))); // @[Lookup.scala 34:39]
  assign io_ctrl_OP = _crtlsignals_T_1 ? 6'h0 : _crtlsignals_T_172; // @[Lookup.scala 34:39]
  assign io_ctrl_J_JUMP = _crtlsignals_T_1 ? 1'h0 : _crtlsignals_T_343; // @[Lookup.scala 34:39]
  assign io_ctrl_MemWen = _crtlsignals_T_1 ? 1'h0 : _crtlsignals_T_400; // @[Lookup.scala 34:39]
  assign io_ctrl_wmask = _io_ctrl_wmask_T_7[7:0]; // @[Decoder.scala 139:17]
  assign io_ctrl_MemLoad = _crtlsignals_T_1 ? 1'h0 : _crtlsignals_T_457; // @[Lookup.scala 34:39]
  assign io_reg_rs1 = io_inst[19:15]; // @[Decoder.scala 150:24]
  assign io_reg_rs2 = io_inst[24:20]; // @[Decoder.scala 151:24]
  assign io_reg_rd = io_inst[11:7]; // @[Decoder.scala 152:24]
  assign io_imm = _io_imm_T_9[63:0]; // @[Decoder.scala 128:10]
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
  input  [5:0] io_ControlIO_In_OP,
  output [5:0] io_AluCtrlIO_Out_alu_op
);
  assign io_AluCtrlIO_Out_alu_op = io_ControlIO_In_OP; // @[Controller.scala 18:31]
endmodule
module IFU(
  input  [63:0] io_pc,
  output [31:0] io_inst,
  input  [63:0] io_raddr,
  output [63:0] io_rdata,
  input  [63:0] io_waddr,
  input  [63:0] io_wdata,
  input  [7:0]  io_wmask,
  input         io_wen
);
  wire [63:0] inst_mem_raddr; // @[IFU.scala 17:24]
  wire [63:0] inst_mem_waddr; // @[IFU.scala 17:24]
  wire [63:0] inst_mem_wdata; // @[IFU.scala 17:24]
  wire [7:0] inst_mem_wmask; // @[IFU.scala 17:24]
  wire [63:0] inst_mem_rdata; // @[IFU.scala 17:24]
  wire  inst_mem_wen; // @[IFU.scala 17:24]
  wire [63:0] data_mem_raddr; // @[IFU.scala 21:24]
  wire [63:0] data_mem_waddr; // @[IFU.scala 21:24]
  wire [63:0] data_mem_wdata; // @[IFU.scala 21:24]
  wire [7:0] data_mem_wmask; // @[IFU.scala 21:24]
  wire [63:0] data_mem_rdata; // @[IFU.scala 21:24]
  wire  data_mem_wen; // @[IFU.scala 21:24]
  memory inst_mem ( // @[IFU.scala 17:24]
    .raddr(inst_mem_raddr),
    .waddr(inst_mem_waddr),
    .wdata(inst_mem_wdata),
    .wmask(inst_mem_wmask),
    .rdata(inst_mem_rdata),
    .wen(inst_mem_wen)
  );
  memory data_mem ( // @[IFU.scala 21:24]
    .raddr(data_mem_raddr),
    .waddr(data_mem_waddr),
    .wdata(data_mem_wdata),
    .wmask(data_mem_wmask),
    .rdata(data_mem_rdata),
    .wen(data_mem_wen)
  );
  assign io_inst = inst_mem_rdata[31:0]; // @[IFU.scala 19:31]
  assign io_rdata = data_mem_rdata; // @[IFU.scala 23:12]
  assign inst_mem_raddr = io_pc; // @[IFU.scala 18:21]
  assign inst_mem_waddr = 64'h0;
  assign inst_mem_wdata = 64'h0;
  assign inst_mem_wmask = 8'h0;
  assign inst_mem_wen = 1'h0; // @[IFU.scala 20:21]
  assign data_mem_raddr = io_raddr; // @[IFU.scala 22:21]
  assign data_mem_waddr = io_waddr; // @[IFU.scala 24:21]
  assign data_mem_wdata = io_wdata; // @[IFU.scala 25:21]
  assign data_mem_wmask = io_wmask; // @[IFU.scala 26:21]
  assign data_mem_wen = io_wen; // @[IFU.scala 27:21]
endmodule
module Top(
  input         clock,
  input         reset,
  output [63:0] io_pc,
  output        io_ctrl_RegWen,
  output [5:0]  io_ctrl_OP,
  output        io_ctrl_J_JUMP,
  output        io_ctrl_MemWen,
  output [7:0]  io_ctrl_wmask,
  output        io_ctrl_MemLoad,
  output [63:0] io_resultALU,
  output [63:0] io_rs1,
  output [63:0] io_rs2,
  output [63:0] io_imm,
  output [3:0]  io_op,
  output        io_MemWen,
  output        io_MemLoad,
  output [31:0] io_inst
);
  wire  PC_clock; // @[TopMain.scala 27:26]
  wire  PC_reset; // @[TopMain.scala 27:26]
  wire [63:0] PC_io_pc; // @[TopMain.scala 27:26]
  wire  PC_io_is_j; // @[TopMain.scala 27:26]
  wire  PC_io_is_b; // @[TopMain.scala 27:26]
  wire [63:0] PC_io_j_branch; // @[TopMain.scala 27:26]
  wire [63:0] PC_io_b_branch; // @[TopMain.scala 27:26]
  wire [5:0] alu_io_ctrl_alu_op; // @[TopMain.scala 28:26]
  wire [63:0] alu_io_in1; // @[TopMain.scala 28:26]
  wire [63:0] alu_io_in2; // @[TopMain.scala 28:26]
  wire [63:0] alu_io_imm; // @[TopMain.scala 28:26]
  wire [63:0] alu_io_out; // @[TopMain.scala 28:26]
  wire [63:0] alu_io_pc; // @[TopMain.scala 28:26]
  wire [63:0] alu_io_j_branch; // @[TopMain.scala 28:26]
  wire [63:0] alu_io_is_b; // @[TopMain.scala 28:26]
  wire [31:0] decoder_io_inst; // @[TopMain.scala 29:26]
  wire  decoder_io_ctrl_RegWen; // @[TopMain.scala 29:26]
  wire [5:0] decoder_io_ctrl_OP; // @[TopMain.scala 29:26]
  wire  decoder_io_ctrl_J_JUMP; // @[TopMain.scala 29:26]
  wire  decoder_io_ctrl_MemWen; // @[TopMain.scala 29:26]
  wire [7:0] decoder_io_ctrl_wmask; // @[TopMain.scala 29:26]
  wire  decoder_io_ctrl_MemLoad; // @[TopMain.scala 29:26]
  wire [4:0] decoder_io_reg_rs1; // @[TopMain.scala 29:26]
  wire [4:0] decoder_io_reg_rs2; // @[TopMain.scala 29:26]
  wire [4:0] decoder_io_reg_rd; // @[TopMain.scala 29:26]
  wire [63:0] decoder_io_imm; // @[TopMain.scala 29:26]
  wire  registers_clock; // @[TopMain.scala 31:26]
  wire  registers_io_wen; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_wdata; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_rdata1; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_rdata2; // @[TopMain.scala 31:26]
  wire [4:0] registers_io_reg_rs1; // @[TopMain.scala 31:26]
  wire [4:0] registers_io_reg_rs2; // @[TopMain.scala 31:26]
  wire [4:0] registers_io_reg_rd; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_0; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_1; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_2; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_3; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_4; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_5; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_6; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_7; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_8; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_9; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_10; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_11; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_12; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_13; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_14; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_15; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_16; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_17; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_18; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_19; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_20; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_21; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_22; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_23; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_24; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_25; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_26; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_27; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_28; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_29; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_30; // @[TopMain.scala 31:26]
  wire [63:0] registers_io_regs_31; // @[TopMain.scala 31:26]
  wire [5:0] Controller_io_ControlIO_In_OP; // @[TopMain.scala 32:26]
  wire [5:0] Controller_io_AluCtrlIO_Out_alu_op; // @[TopMain.scala 32:26]
  wire [31:0] dpi_flag; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_0; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_1; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_2; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_3; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_4; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_5; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_6; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_7; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_8; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_9; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_10; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_11; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_12; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_13; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_14; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_15; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_16; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_17; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_18; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_19; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_20; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_21; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_22; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_23; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_24; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_25; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_26; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_27; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_28; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_29; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_30; // @[TopMain.scala 33:19]
  wire [63:0] dpi_rf_31; // @[TopMain.scala 33:19]
  wire [31:0] dpi_inst; // @[TopMain.scala 33:19]
  wire [63:0] dpi_pc; // @[TopMain.scala 33:19]
  wire [63:0] ifu_io_pc; // @[TopMain.scala 34:19]
  wire [31:0] ifu_io_inst; // @[TopMain.scala 34:19]
  wire [63:0] ifu_io_raddr; // @[TopMain.scala 34:19]
  wire [63:0] ifu_io_rdata; // @[TopMain.scala 34:19]
  wire [63:0] ifu_io_waddr; // @[TopMain.scala 34:19]
  wire [63:0] ifu_io_wdata; // @[TopMain.scala 34:19]
  wire [7:0] ifu_io_wmask; // @[TopMain.scala 34:19]
  wire  ifu_io_wen; // @[TopMain.scala 34:19]
  wire [55:0] _registers_io_wdata_T_4 = ifu_io_rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _registers_io_wdata_T_5 = {_registers_io_wdata_T_4,ifu_io_rdata[7:0]}; // @[Cat.scala 31:58]
  wire [47:0] _registers_io_wdata_T_12 = ifu_io_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _registers_io_wdata_T_13 = {_registers_io_wdata_T_12,ifu_io_rdata[15:0]}; // @[Cat.scala 31:58]
  wire [63:0] _registers_io_wdata_T_17 = ifu_io_rdata; // @[TopMain.scala 54:71]
  wire [31:0] _registers_io_wdata_T_24 = ifu_io_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 74:12]
  wire [63:0] _registers_io_wdata_T_25 = {_registers_io_wdata_T_24,ifu_io_rdata[31:0]}; // @[Cat.scala 31:58]
  wire [63:0] _registers_io_wdata_T_26 = decoder_io_ctrl_OP == 6'h21 ? _registers_io_wdata_T_25 : alu_io_out; // @[TopMain.scala 56:28]
  wire [63:0] _registers_io_wdata_T_27 = decoder_io_ctrl_OP == 6'h22 ? {{32'd0}, ifu_io_rdata[31:0]} :
    _registers_io_wdata_T_26; // @[TopMain.scala 55:28]
  wire [63:0] _registers_io_wdata_T_28 = decoder_io_ctrl_OP == 6'h20 ? _registers_io_wdata_T_17 :
    _registers_io_wdata_T_27; // @[TopMain.scala 54:28]
  wire [63:0] _registers_io_wdata_T_29 = decoder_io_ctrl_OP == 6'h1f ? {{48'd0}, ifu_io_rdata[15:0]} :
    _registers_io_wdata_T_28; // @[TopMain.scala 53:28]
  wire [63:0] _registers_io_wdata_T_30 = decoder_io_ctrl_OP == 6'h1e ? _registers_io_wdata_T_13 :
    _registers_io_wdata_T_29; // @[TopMain.scala 52:28]
  wire [63:0] _registers_io_wdata_T_31 = decoder_io_ctrl_OP == 6'h1d ? {{56'd0}, ifu_io_rdata[7:0]} :
    _registers_io_wdata_T_30; // @[TopMain.scala 51:28]
  wire [63:0] _registers_io_wdata_T_32 = decoder_io_ctrl_OP == 6'h1c ? _registers_io_wdata_T_5 :
    _registers_io_wdata_T_31; // @[TopMain.scala 50:28]
  PC PC ( // @[TopMain.scala 27:26]
    .clock(PC_clock),
    .reset(PC_reset),
    .io_pc(PC_io_pc),
    .io_is_j(PC_io_is_j),
    .io_is_b(PC_io_is_b),
    .io_j_branch(PC_io_j_branch),
    .io_b_branch(PC_io_b_branch)
  );
  Alu alu ( // @[TopMain.scala 28:26]
    .io_ctrl_alu_op(alu_io_ctrl_alu_op),
    .io_in1(alu_io_in1),
    .io_in2(alu_io_in2),
    .io_imm(alu_io_imm),
    .io_out(alu_io_out),
    .io_pc(alu_io_pc),
    .io_j_branch(alu_io_j_branch),
    .io_is_b(alu_io_is_b)
  );
  Decoder decoder ( // @[TopMain.scala 29:26]
    .io_inst(decoder_io_inst),
    .io_ctrl_RegWen(decoder_io_ctrl_RegWen),
    .io_ctrl_OP(decoder_io_ctrl_OP),
    .io_ctrl_J_JUMP(decoder_io_ctrl_J_JUMP),
    .io_ctrl_MemWen(decoder_io_ctrl_MemWen),
    .io_ctrl_wmask(decoder_io_ctrl_wmask),
    .io_ctrl_MemLoad(decoder_io_ctrl_MemLoad),
    .io_reg_rs1(decoder_io_reg_rs1),
    .io_reg_rs2(decoder_io_reg_rs2),
    .io_reg_rd(decoder_io_reg_rd),
    .io_imm(decoder_io_imm)
  );
  Registers registers ( // @[TopMain.scala 31:26]
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
  Controller Controller ( // @[TopMain.scala 32:26]
    .io_ControlIO_In_OP(Controller_io_ControlIO_In_OP),
    .io_AluCtrlIO_Out_alu_op(Controller_io_AluCtrlIO_Out_alu_op)
  );
  DPI dpi ( // @[TopMain.scala 33:19]
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
  IFU ifu ( // @[TopMain.scala 34:19]
    .io_pc(ifu_io_pc),
    .io_inst(ifu_io_inst),
    .io_raddr(ifu_io_raddr),
    .io_rdata(ifu_io_rdata),
    .io_waddr(ifu_io_waddr),
    .io_wdata(ifu_io_wdata),
    .io_wmask(ifu_io_wmask),
    .io_wen(ifu_io_wen)
  );
  assign io_pc = PC_io_pc; // @[TopMain.scala 70:9]
  assign io_ctrl_RegWen = decoder_io_ctrl_RegWen; // @[TopMain.scala 71:11]
  assign io_ctrl_OP = decoder_io_ctrl_OP; // @[TopMain.scala 71:11]
  assign io_ctrl_J_JUMP = decoder_io_ctrl_J_JUMP; // @[TopMain.scala 71:11]
  assign io_ctrl_MemWen = decoder_io_ctrl_MemWen; // @[TopMain.scala 71:11]
  assign io_ctrl_wmask = decoder_io_ctrl_wmask; // @[TopMain.scala 71:11]
  assign io_ctrl_MemLoad = decoder_io_ctrl_MemLoad; // @[TopMain.scala 71:11]
  assign io_resultALU = alu_io_out; // @[TopMain.scala 76:16]
  assign io_rs1 = registers_io_rdata1; // @[TopMain.scala 72:16]
  assign io_rs2 = registers_io_rdata2; // @[TopMain.scala 73:16]
  assign io_imm = decoder_io_imm; // @[TopMain.scala 74:16]
  assign io_op = decoder_io_ctrl_OP[3:0]; // @[TopMain.scala 75:13]
  assign io_MemWen = decoder_io_ctrl_MemWen; // @[TopMain.scala 77:13]
  assign io_MemLoad = decoder_io_ctrl_MemLoad; // @[TopMain.scala 79:14]
  assign io_inst = ifu_io_inst; // @[TopMain.scala 78:11]
  assign PC_clock = clock;
  assign PC_reset = reset;
  assign PC_io_is_j = decoder_io_ctrl_J_JUMP; // @[TopMain.scala 39:14]
  assign PC_io_is_b = alu_io_is_b[0]; // @[TopMain.scala 41:14]
  assign PC_io_j_branch = alu_io_j_branch; // @[TopMain.scala 40:18]
  assign PC_io_b_branch = alu_io_out; // @[TopMain.scala 42:18]
  assign alu_io_ctrl_alu_op = Controller_io_AluCtrlIO_Out_alu_op; // @[TopMain.scala 60:15]
  assign alu_io_in1 = registers_io_rdata1; // @[TopMain.scala 61:14]
  assign alu_io_in2 = registers_io_rdata2; // @[TopMain.scala 62:14]
  assign alu_io_imm = decoder_io_imm; // @[TopMain.scala 63:14]
  assign alu_io_pc = PC_io_pc; // @[TopMain.scala 64:14]
  assign decoder_io_inst = ifu_io_inst; // @[TopMain.scala 45:19]
  assign registers_clock = clock;
  assign registers_io_wen = decoder_io_ctrl_RegWen; // @[TopMain.scala 57:20]
  assign registers_io_wdata = decoder_io_ctrl_MemLoad ? _registers_io_wdata_T_32 : alu_io_out; // @[TopMain.scala 49:28]
  assign registers_io_reg_rs1 = decoder_io_reg_rs1; // @[TopMain.scala 48:20]
  assign registers_io_reg_rs2 = decoder_io_reg_rs2; // @[TopMain.scala 48:20]
  assign registers_io_reg_rd = decoder_io_reg_rd; // @[TopMain.scala 48:20]
  assign Controller_io_ControlIO_In_OP = decoder_io_ctrl_OP; // @[TopMain.scala 67:30]
  assign dpi_flag = decoder_io_ctrl_OP == 6'h3b ? 32'h1 : 32'h0; // @[TopMain.scala 91:21]
  assign dpi_rf_0 = registers_io_regs_0; // @[TopMain.scala 92:15]
  assign dpi_rf_1 = registers_io_regs_1; // @[TopMain.scala 93:15]
  assign dpi_rf_2 = registers_io_regs_2; // @[TopMain.scala 94:15]
  assign dpi_rf_3 = registers_io_regs_3; // @[TopMain.scala 95:15]
  assign dpi_rf_4 = registers_io_regs_4; // @[TopMain.scala 96:15]
  assign dpi_rf_5 = registers_io_regs_5; // @[TopMain.scala 97:15]
  assign dpi_rf_6 = registers_io_regs_6; // @[TopMain.scala 98:15]
  assign dpi_rf_7 = registers_io_regs_7; // @[TopMain.scala 99:15]
  assign dpi_rf_8 = registers_io_regs_8; // @[TopMain.scala 100:15]
  assign dpi_rf_9 = registers_io_regs_9; // @[TopMain.scala 101:15]
  assign dpi_rf_10 = registers_io_regs_10; // @[TopMain.scala 102:16]
  assign dpi_rf_11 = registers_io_regs_11; // @[TopMain.scala 103:16]
  assign dpi_rf_12 = registers_io_regs_12; // @[TopMain.scala 104:16]
  assign dpi_rf_13 = registers_io_regs_13; // @[TopMain.scala 105:16]
  assign dpi_rf_14 = registers_io_regs_14; // @[TopMain.scala 106:16]
  assign dpi_rf_15 = registers_io_regs_15; // @[TopMain.scala 107:16]
  assign dpi_rf_16 = registers_io_regs_16; // @[TopMain.scala 108:16]
  assign dpi_rf_17 = registers_io_regs_17; // @[TopMain.scala 109:16]
  assign dpi_rf_18 = registers_io_regs_18; // @[TopMain.scala 110:16]
  assign dpi_rf_19 = registers_io_regs_19; // @[TopMain.scala 111:16]
  assign dpi_rf_20 = registers_io_regs_20; // @[TopMain.scala 112:16]
  assign dpi_rf_21 = registers_io_regs_21; // @[TopMain.scala 113:16]
  assign dpi_rf_22 = registers_io_regs_22; // @[TopMain.scala 114:16]
  assign dpi_rf_23 = registers_io_regs_23; // @[TopMain.scala 115:16]
  assign dpi_rf_24 = registers_io_regs_24; // @[TopMain.scala 116:16]
  assign dpi_rf_25 = registers_io_regs_25; // @[TopMain.scala 117:16]
  assign dpi_rf_26 = registers_io_regs_26; // @[TopMain.scala 118:16]
  assign dpi_rf_27 = registers_io_regs_27; // @[TopMain.scala 119:16]
  assign dpi_rf_28 = registers_io_regs_28; // @[TopMain.scala 120:16]
  assign dpi_rf_29 = registers_io_regs_29; // @[TopMain.scala 121:16]
  assign dpi_rf_30 = registers_io_regs_30; // @[TopMain.scala 122:16]
  assign dpi_rf_31 = registers_io_regs_31; // @[TopMain.scala 123:16]
  assign dpi_inst = ifu_io_inst; // @[TopMain.scala 124:16]
  assign dpi_pc = io_pc; // @[TopMain.scala 125:16]
  assign ifu_io_pc = PC_io_pc; // @[TopMain.scala 83:13]
  assign ifu_io_raddr = alu_io_out; // @[TopMain.scala 84:16]
  assign ifu_io_waddr = alu_io_out; // @[TopMain.scala 85:16]
  assign ifu_io_wdata = registers_io_rdata2; // @[TopMain.scala 86:16]
  assign ifu_io_wmask = decoder_io_ctrl_wmask; // @[TopMain.scala 87:16]
  assign ifu_io_wen = decoder_io_ctrl_MemWen; // @[TopMain.scala 88:16]
endmodule
