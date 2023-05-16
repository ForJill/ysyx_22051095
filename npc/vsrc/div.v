module div(
  input         clock,
  input         reset,
  input  [63:0] io_dividend,
  input  [63:0] io_divisor,
  input         io_div_valid,
  input         io_divw,
  input         io_div_signed,
  input         io_flush,
  output        io_div_ready,
  output        io_out_valid,
  output [63:0] io_quotient,
  output [63:0] io_remainder
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [127:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  start; // @[DIV.scala 21:25]
  reg  end_; // @[DIV.scala 22:24]
  wire  _dividend_T_1 = io_div_signed & io_dividend[63]; // @[DIV.scala 26:34]
  wire [63:0] _dividend_T_3 = ~io_dividend; // @[DIV.scala 26:63]
  wire [63:0] _dividend_T_5 = _dividend_T_3 + 64'h1; // @[DIV.scala 26:77]
  wire [63:0] dividend = io_div_signed & io_dividend[63] ? _dividend_T_5 : io_dividend; // @[DIV.scala 26:18]
  wire [63:0] _divisor_T_3 = ~io_divisor; // @[DIV.scala 27:62]
  wire [63:0] _divisor_T_5 = _divisor_T_3 + 64'h1; // @[DIV.scala 27:75]
  wire  quotient_sign = io_div_signed & ~(io_dividend[63] ^ io_divisor[63]); // @[DIV.scala 31:40]
  reg [127:0] A; // @[DIV.scala 35:18]
  reg [63:0] B; // @[DIV.scala 36:18]
  reg [63:0] S; // @[DIV.scala 37:18]
  reg [63:0] R; // @[DIV.scala 39:18]
  wire [127:0] _A_T = {64'h0,dividend}; // @[Cat.scala 31:58]
  wire [64:0] _M_T_1 = {1'h0,B}; // @[Cat.scala 31:58]
  wire  M = A[127:63] >= _M_T_1; // @[DIV.scala 47:28]
  wire [127:0] _A_T_2 = {64'h0,A[63:0]}; // @[Cat.scala 31:58]
  wire [64:0] _A_T_6 = A[127:63] - _M_T_1; // @[DIV.scala 49:56]
  wire [127:0] _A_T_7 = {_A_T_6, 63'h0}; // @[DIV.scala 49:71]
  wire [127:0] _A_T_8 = _A_T_2 | _A_T_7; // @[DIV.scala 49:41]
  wire [128:0] _A_T_9 = {_A_T_8, 1'h0}; // @[DIV.scala 49:79]
  wire  S_tmp_63 = start & ~end_ & M; // @[DIV.scala 45:22 48:21 38:22]
  wire [128:0] _GEN_1 = start & ~end_ ? _A_T_9 : {{1'd0}, _A_T}; // @[DIV.scala 45:22 49:11 41:5]
  wire [7:0] S_lo_lo_lo = {S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63}; // @[Cat.scala 31:58]
  wire [15:0] S_lo_lo = {S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_lo_lo_lo}; // @[Cat.scala 31:58]
  wire [31:0] S_lo = {S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_tmp_63,S_lo_lo_lo,S_lo_lo}; // @[Cat.scala 31:58]
  wire [63:0] _S_T = {S_lo,S_lo}; // @[Cat.scala 31:58]
  wire  _GEN_66 = io_div_valid | start; // @[DIV.scala 55:21 56:11 21:25]
  wire  _GEN_69 = A[63:0] == 64'h0 & start | end_; // @[DIV.scala 22:24 60:33 62:9]
  wire [63:0] _io_quotient_T_2 = ~S; // @[DIV.scala 67:54]
  wire [63:0] _io_quotient_T_4 = _io_quotient_T_2 + 64'h1; // @[DIV.scala 67:58]
  wire [63:0] _io_remainder_T_2 = ~R; // @[DIV.scala 68:55]
  wire [63:0] _io_remainder_T_4 = _io_remainder_T_2 + 64'h1; // @[DIV.scala 68:59]
  wire [128:0] _GEN_71 = reset ? 129'h0 : _GEN_1; // @[DIV.scala 35:{18,18}]
  assign io_div_ready = A[63:0] == 64'h0 & start; // @[DIV.scala 60:24]
  assign io_out_valid = A[63:0] == 64'h0 & start; // @[DIV.scala 60:24]
  assign io_quotient = end_ & quotient_sign ? _io_quotient_T_4 : S; // @[DIV.scala 67:22]
  assign io_remainder = end_ & _dividend_T_1 ? _io_remainder_T_4 : R; // @[DIV.scala 68:22]
  always @(posedge clock) begin
    if (reset) begin // @[DIV.scala 21:25]
      start <= 1'h0; // @[DIV.scala 21:25]
    end else if (A[63:0] == 64'h0 & start) begin // @[DIV.scala 60:33]
      start <= 1'h0; // @[DIV.scala 61:11]
    end else begin
      start <= _GEN_66;
    end
    if (reset) begin // @[DIV.scala 22:24]
      end_ <= 1'h0; // @[DIV.scala 22:24]
    end else begin
      end_ <= _GEN_69;
    end
    A <= _GEN_71[127:0]; // @[DIV.scala 35:{18,18}]
    if (reset) begin // @[DIV.scala 36:18]
      B <= 64'h0; // @[DIV.scala 36:18]
    end else if (io_div_signed & io_divisor[63]) begin // @[DIV.scala 27:18]
      B <= _divisor_T_5;
    end else begin
      B <= io_divisor;
    end
    if (reset) begin // @[DIV.scala 37:18]
      S <= 64'h0; // @[DIV.scala 37:18]
    end else begin
      S <= _S_T; // @[DIV.scala 54:5]
    end
    if (reset) begin // @[DIV.scala 39:18]
      R <= 64'h0; // @[DIV.scala 39:18]
    end else begin
      R <= A[127:64]; // @[DIV.scala 53:5]
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
  start = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  end_ = _RAND_1[0:0];
  _RAND_2 = {4{`RANDOM}};
  A = _RAND_2[127:0];
  _RAND_3 = {2{`RANDOM}};
  B = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  S = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  R = _RAND_5[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
