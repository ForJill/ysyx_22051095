module PC(
  input         clock,
  input         reset,
  output [63:0] io_pc
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] init; // @[PC.scala 11:21]
  wire [63:0] _init_T_1 = init + 64'h4; // @[PC.scala 12:18]
  assign io_pc = init; // @[PC.scala 13:10]
  always @(posedge clock) begin
    if (reset) begin // @[PC.scala 11:21]
      init <= 64'h80000000; // @[PC.scala 11:21]
    end else begin
      init <= _init_T_1; // @[PC.scala 12:10]
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
  output [63:0] io_out
);
  wire [63:0] _result_T_1 = io_in1 + io_in2; // @[Alu.scala 33:21]
  wire [63:0] _result_T_3 = io_in1 + io_imm; // @[Alu.scala 34:22]
  wire [63:0] _result_T_5 = 4'h0 == io_ctrl_alu_op ? _result_T_1 : 64'h0; // @[Mux.scala 81:58]
  assign io_out = 4'h1 == io_ctrl_alu_op ? _result_T_3 : _result_T_5; // @[Mux.scala 81:58]
endmodule
module Decoder(
  input  [31:0] io_inst,
  output        io_ctrl_RegWen,
  output [3:0]  io_ctrl_OP,
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
  wire [3:0] _crtlsignals_T_6 = _crtlsignals_T_5 ? 4'h2 : 4'h0; // @[Lookup.scala 34:39]
  wire [3:0] _crtlsignals_T_7 = _crtlsignals_T_3 ? 4'h1 : _crtlsignals_T_6; // @[Lookup.scala 34:39]
  wire  _crtlsignals_T_8 = _crtlsignals_T_5 ? 1'h0 : 1'h1; // @[Lookup.scala 34:39]
  wire [51:0] _I_T_2 = io_inst[31] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 74:12]
  assign io_ctrl_RegWen = _crtlsignals_T_1 | (_crtlsignals_T_3 | _crtlsignals_T_8); // @[Lookup.scala 34:39]
  assign io_ctrl_OP = _crtlsignals_T_1 ? 4'h0 : _crtlsignals_T_7; // @[Lookup.scala 34:39]
  assign io_reg_rs1 = io_inst[19:15]; // @[Decoder.scala 24:24]
  assign io_reg_rs2 = io_inst[24:20]; // @[Decoder.scala 25:24]
  assign io_reg_rd = io_inst[11:7]; // @[Decoder.scala 26:24]
  assign io_imm = {_I_T_2,io_inst[31:20]}; // @[Cat.scala 31:58]
endmodule
module InstMem(
  input         clock,
  input  [63:0] io_addr,
  output [31:0] io_inst
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [31:0] mem [0:1023]; // @[InstMem.scala 17:16]
  wire  mem_io_inst_MPORT_en; // @[InstMem.scala 17:16]
  wire [9:0] mem_io_inst_MPORT_addr; // @[InstMem.scala 17:16]
  wire [31:0] mem_io_inst_MPORT_data; // @[InstMem.scala 17:16]
  wire [31:0] mem_MPORT_data; // @[InstMem.scala 17:16]
  wire [9:0] mem_MPORT_addr; // @[InstMem.scala 17:16]
  wire  mem_MPORT_mask; // @[InstMem.scala 17:16]
  wire  mem_MPORT_en; // @[InstMem.scala 17:16]
  wire [31:0] mem_MPORT_1_data; // @[InstMem.scala 17:16]
  wire [9:0] mem_MPORT_1_addr; // @[InstMem.scala 17:16]
  wire  mem_MPORT_1_mask; // @[InstMem.scala 17:16]
  wire  mem_MPORT_1_en; // @[InstMem.scala 17:16]
  wire [31:0] mem_MPORT_2_data; // @[InstMem.scala 17:16]
  wire [9:0] mem_MPORT_2_addr; // @[InstMem.scala 17:16]
  wire  mem_MPORT_2_mask; // @[InstMem.scala 17:16]
  wire  mem_MPORT_2_en; // @[InstMem.scala 17:16]
  assign mem_io_inst_MPORT_en = 1'h1;
  assign mem_io_inst_MPORT_addr = io_addr[9:0];
  assign mem_io_inst_MPORT_data = mem[mem_io_inst_MPORT_addr]; // @[InstMem.scala 17:16]
  assign mem_MPORT_data = 32'h10400b3;
  assign mem_MPORT_addr = 10'h0;
  assign mem_MPORT_mask = 1'h1;
  assign mem_MPORT_en = 1'h1;
  assign mem_MPORT_1_data = 32'h100093;
  assign mem_MPORT_1_addr = 10'h4;
  assign mem_MPORT_1_mask = 1'h1;
  assign mem_MPORT_1_en = 1'h1;
  assign mem_MPORT_2_data = 32'h100073;
  assign mem_MPORT_2_addr = 10'h8;
  assign mem_MPORT_2_mask = 1'h1;
  assign mem_MPORT_2_en = 1'h1;
  assign io_inst = mem_io_inst_MPORT_data; // @[InstMem.scala 26:11]
  always @(posedge clock) begin
    if (mem_MPORT_en & mem_MPORT_mask) begin
      mem[mem_MPORT_addr] <= mem_MPORT_data; // @[InstMem.scala 17:16]
    end
    if (mem_MPORT_1_en & mem_MPORT_1_mask) begin
      mem[mem_MPORT_1_addr] <= mem_MPORT_1_data; // @[InstMem.scala 17:16]
    end
    if (mem_MPORT_2_en & mem_MPORT_2_mask) begin
      mem[mem_MPORT_2_addr] <= mem_MPORT_2_data; // @[InstMem.scala 17:16]
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
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
`endif // RANDOMIZE_MEM_INIT
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
  input  [4:0]  io_reg_rs1,
  input  [4:0]  io_reg_rs2,
  input  [4:0]  io_reg_rd
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [63:0] registers [0:31]; // @[Register .scala 17:22]
  wire  registers_io_rdata1_MPORT_en; // @[Register .scala 17:22]
  wire [4:0] registers_io_rdata1_MPORT_addr; // @[Register .scala 17:22]
  wire [63:0] registers_io_rdata1_MPORT_data; // @[Register .scala 17:22]
  wire  registers_io_rdata2_MPORT_en; // @[Register .scala 17:22]
  wire [4:0] registers_io_rdata2_MPORT_addr; // @[Register .scala 17:22]
  wire [63:0] registers_io_rdata2_MPORT_data; // @[Register .scala 17:22]
  wire  registers_MPORT_1_en; // @[Register .scala 17:22]
  wire [4:0] registers_MPORT_1_addr; // @[Register .scala 17:22]
  wire [63:0] registers_MPORT_1_data; // @[Register .scala 17:22]
  wire [63:0] registers_MPORT_data; // @[Register .scala 17:22]
  wire [4:0] registers_MPORT_addr; // @[Register .scala 17:22]
  wire  registers_MPORT_mask; // @[Register .scala 17:22]
  wire  registers_MPORT_en; // @[Register .scala 17:22]
  assign registers_io_rdata1_MPORT_en = 1'h1;
  assign registers_io_rdata1_MPORT_addr = io_reg_rs1;
  assign registers_io_rdata1_MPORT_data = registers[registers_io_rdata1_MPORT_addr]; // @[Register .scala 17:22]
  assign registers_io_rdata2_MPORT_en = 1'h1;
  assign registers_io_rdata2_MPORT_addr = io_reg_rs2;
  assign registers_io_rdata2_MPORT_data = registers[registers_io_rdata2_MPORT_addr]; // @[Register .scala 17:22]
  assign registers_MPORT_1_en = 1'h1;
  assign registers_MPORT_1_addr = io_reg_rd;
  assign registers_MPORT_1_data = registers[registers_MPORT_1_addr]; // @[Register .scala 17:22]
  assign registers_MPORT_data = io_wen ? io_wdata : registers_MPORT_1_data;
  assign registers_MPORT_addr = io_reg_rd;
  assign registers_MPORT_mask = 1'h1;
  assign registers_MPORT_en = 1'h1;
  assign io_rdata1 = io_reg_rs1 == 5'h0 ? 64'h0 : registers_io_rdata1_MPORT_data; // @[Register .scala 19:19]
  assign io_rdata2 = io_reg_rs2 == 5'h0 ? 64'h0 : registers_io_rdata2_MPORT_data; // @[Register .scala 20:19]
  always @(posedge clock) begin
    if (registers_MPORT_en & registers_MPORT_mask) begin
      registers[registers_MPORT_addr] <= registers_MPORT_data; // @[Register .scala 17:22]
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
  output [31:0] io_inst,
  output        io_ctrl_RegWen,
  output [3:0]  io_ctrl_OP,
  output [63:0] io_resultALU,
  output [63:0] io_rs1,
  output [63:0] io_rs2,
  output [63:0] io_imm,
  output [3:0]  io_op
);
  wire  PC_clock; // @[TopMain.scala 25:26]
  wire  PC_reset; // @[TopMain.scala 25:26]
  wire [63:0] PC_io_pc; // @[TopMain.scala 25:26]
  wire [3:0] alu_io_ctrl_alu_op; // @[TopMain.scala 26:26]
  wire [63:0] alu_io_in1; // @[TopMain.scala 26:26]
  wire [63:0] alu_io_in2; // @[TopMain.scala 26:26]
  wire [63:0] alu_io_imm; // @[TopMain.scala 26:26]
  wire [63:0] alu_io_out; // @[TopMain.scala 26:26]
  wire [31:0] decoder_io_inst; // @[TopMain.scala 27:26]
  wire  decoder_io_ctrl_RegWen; // @[TopMain.scala 27:26]
  wire [3:0] decoder_io_ctrl_OP; // @[TopMain.scala 27:26]
  wire [4:0] decoder_io_reg_rs1; // @[TopMain.scala 27:26]
  wire [4:0] decoder_io_reg_rs2; // @[TopMain.scala 27:26]
  wire [4:0] decoder_io_reg_rd; // @[TopMain.scala 27:26]
  wire [63:0] decoder_io_imm; // @[TopMain.scala 27:26]
  wire  instmem_clock; // @[TopMain.scala 28:26]
  wire [63:0] instmem_io_addr; // @[TopMain.scala 28:26]
  wire [31:0] instmem_io_inst; // @[TopMain.scala 28:26]
  wire  registers_clock; // @[TopMain.scala 29:26]
  wire  registers_io_wen; // @[TopMain.scala 29:26]
  wire [63:0] registers_io_wdata; // @[TopMain.scala 29:26]
  wire [63:0] registers_io_rdata1; // @[TopMain.scala 29:26]
  wire [63:0] registers_io_rdata2; // @[TopMain.scala 29:26]
  wire [4:0] registers_io_reg_rs1; // @[TopMain.scala 29:26]
  wire [4:0] registers_io_reg_rs2; // @[TopMain.scala 29:26]
  wire [4:0] registers_io_reg_rd; // @[TopMain.scala 29:26]
  wire [3:0] Controller_io_ControlIO_In_OP; // @[TopMain.scala 30:26]
  wire [3:0] Controller_io_AluCtrlIO_Out_alu_op; // @[TopMain.scala 30:26]
  wire  dpi_flag; // @[TopMain.scala 63:19]
  PC PC ( // @[TopMain.scala 25:26]
    .clock(PC_clock),
    .reset(PC_reset),
    .io_pc(PC_io_pc)
  );
  Alu alu ( // @[TopMain.scala 26:26]
    .io_ctrl_alu_op(alu_io_ctrl_alu_op),
    .io_in1(alu_io_in1),
    .io_in2(alu_io_in2),
    .io_imm(alu_io_imm),
    .io_out(alu_io_out)
  );
  Decoder decoder ( // @[TopMain.scala 27:26]
    .io_inst(decoder_io_inst),
    .io_ctrl_RegWen(decoder_io_ctrl_RegWen),
    .io_ctrl_OP(decoder_io_ctrl_OP),
    .io_reg_rs1(decoder_io_reg_rs1),
    .io_reg_rs2(decoder_io_reg_rs2),
    .io_reg_rd(decoder_io_reg_rd),
    .io_imm(decoder_io_imm)
  );
  InstMem instmem ( // @[TopMain.scala 28:26]
    .clock(instmem_clock),
    .io_addr(instmem_io_addr),
    .io_inst(instmem_io_inst)
  );
  Registers registers ( // @[TopMain.scala 29:26]
    .clock(registers_clock),
    .io_wen(registers_io_wen),
    .io_wdata(registers_io_wdata),
    .io_rdata1(registers_io_rdata1),
    .io_rdata2(registers_io_rdata2),
    .io_reg_rs1(registers_io_reg_rs1),
    .io_reg_rs2(registers_io_reg_rs2),
    .io_reg_rd(registers_io_reg_rd)
  );
  Controller Controller ( // @[TopMain.scala 30:26]
    .io_ControlIO_In_OP(Controller_io_ControlIO_In_OP),
    .io_AluCtrlIO_Out_alu_op(Controller_io_AluCtrlIO_Out_alu_op)
  );
  DPI dpi ( // @[TopMain.scala 63:19]
    .flag(dpi_flag)
  );
  assign io_pc = PC_io_pc; // @[TopMain.scala 53:9]
  assign io_inst = instmem_io_inst; // @[TopMain.scala 54:11]
  assign io_ctrl_RegWen = decoder_io_ctrl_RegWen; // @[TopMain.scala 55:11]
  assign io_ctrl_OP = decoder_io_ctrl_OP; // @[TopMain.scala 55:11]
  assign io_resultALU = alu_io_out; // @[TopMain.scala 60:16]
  assign io_rs1 = registers_io_rdata1; // @[TopMain.scala 56:16]
  assign io_rs2 = registers_io_rdata2; // @[TopMain.scala 57:16]
  assign io_imm = decoder_io_imm; // @[TopMain.scala 58:16]
  assign io_op = decoder_io_ctrl_OP; // @[TopMain.scala 59:13]
  assign PC_clock = clock;
  assign PC_reset = reset;
  assign alu_io_ctrl_alu_op = Controller_io_AluCtrlIO_Out_alu_op; // @[TopMain.scala 44:15]
  assign alu_io_in1 = registers_io_rdata1; // @[TopMain.scala 45:14]
  assign alu_io_in2 = registers_io_rdata2; // @[TopMain.scala 46:14]
  assign alu_io_imm = decoder_io_imm; // @[TopMain.scala 47:14]
  assign decoder_io_inst = instmem_io_inst; // @[TopMain.scala 36:19]
  assign instmem_clock = clock;
  assign instmem_io_addr = PC_io_pc; // @[TopMain.scala 33:19]
  assign registers_clock = clock;
  assign registers_io_wen = decoder_io_ctrl_RegWen; // @[TopMain.scala 41:20]
  assign registers_io_wdata = alu_io_out; // @[TopMain.scala 40:22]
  assign registers_io_reg_rs1 = decoder_io_reg_rs1; // @[TopMain.scala 39:20]
  assign registers_io_reg_rs2 = decoder_io_reg_rs2; // @[TopMain.scala 39:20]
  assign registers_io_reg_rd = decoder_io_reg_rd; // @[TopMain.scala 39:20]
  assign Controller_io_ControlIO_In_OP = decoder_io_ctrl_OP; // @[TopMain.scala 50:30]
  assign dpi_flag = decoder_io_ctrl_OP == 4'h2; // @[TopMain.scala 64:41]
endmodule
