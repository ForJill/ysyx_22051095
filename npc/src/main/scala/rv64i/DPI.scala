package rv64i

import chisel3._
import chisel3.util.HasBlackBoxInline

class DPI extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val flag = Input(UInt(32.W))
    val rf_0 = Input(UInt(64.W))
    val rf_1 = Input(UInt(64.W))
    val rf_2 = Input(UInt(64.W))
    val rf_3 = Input(UInt(64.W))
    val rf_4 = Input(UInt(64.W))
    val rf_5 = Input(UInt(64.W))
    val rf_6 = Input(UInt(64.W))
    val rf_7 = Input(UInt(64.W))
    val rf_8 = Input(UInt(64.W))
    val rf_9 = Input(UInt(64.W))
    val rf_10 = Input(UInt(64.W))
    val rf_11 = Input(UInt(64.W))
    val rf_12 = Input(UInt(64.W))
    val rf_13 = Input(UInt(64.W))
    val rf_14 = Input(UInt(64.W)) 
    val rf_15 = Input(UInt(64.W)) 
    val rf_16 = Input(UInt(64.W)) 
    val rf_17 = Input(UInt(64.W)) 
    val rf_18 = Input(UInt(64.W)) 
    val rf_19 = Input(UInt(64.W)) 
    val rf_20 = Input(UInt(64.W)) 
    val rf_21 = Input(UInt(64.W)) 
    val rf_22 = Input(UInt(64.W)) 
    val rf_23 = Input(UInt(64.W)) 
    val rf_24 = Input(UInt(64.W)) 
    val rf_25 = Input(UInt(64.W)) 
    val rf_26 = Input(UInt(64.W)) 
    val rf_27 = Input(UInt(64.W)) 
    val rf_28 = Input(UInt(64.W)) 
    val rf_29 = Input(UInt(64.W)) 
    val rf_30 = Input(UInt(64.W)) 
    val rf_31 = Input(UInt(64.W)) 
    val inst  = Input(UInt(32.W))
    val pc    = Input(UInt(64.W))
  })
  //实现ebreak
  setInline("DPI.v",
    """
       |import "DPI-C" function void ebreak (input int flag);
       |import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
       |import "DPI-C" function void get_inst(input longint inst);
       |import "DPI-C" function void get_pc(input longint pc);
       |module DPI(
       |    input [31:0] flag,
       |    input [63:0] rf_0,
       |    input [63:0] rf_1,
       |    input [63:0] rf_2,
       |    input [63:0] rf_3,
       |    input [63:0] rf_4,
       |    input [63:0] rf_5,
       |    input [63:0] rf_6,
       |    input [63:0] rf_7,
       |    input [63:0] rf_8,
       |    input [63:0] rf_9,
       |    input [63:0] rf_10,
       |    input [63:0] rf_11,
       |    input [63:0] rf_12,
       |    input [63:0] rf_13,
       |    input [63:0] rf_14,
       |    input [63:0] rf_15,
       |    input [63:0] rf_16,
       |    input [63:0] rf_17,
       |    input [63:0] rf_18,
       |    input [63:0] rf_19,
       |    input [63:0] rf_20,
       |    input [63:0] rf_21,
       |    input [63:0] rf_22,
       |    input [63:0] rf_23,
       |    input [63:0] rf_24,
       |    input [63:0] rf_25,
       |    input [63:0] rf_26,
       |    input [63:0] rf_27,
       |    input [63:0] rf_28,
       |    input [63:0] rf_29,
       |    input [63:0] rf_30,
       |    input [63:0] rf_31,
       |    input [63:0] inst,
       |    input [63:0] pc
       |);
       |wire [63:0]rf[31:0];
       |assign rf[0] = rf_0;
       |assign rf[1] = rf_1;
       |assign rf[2] = rf_2;
       |assign rf[3] = rf_3; 
       |assign rf[4] = rf_4; 
       |assign rf[5] = rf_5; 
       |assign rf[6] = rf_6; 
       |assign rf[7] = rf_7; 
       |assign rf[8] = rf_8; 
       |assign rf[9] = rf_9; 
       |assign rf[10] = rf_10; 
       |assign rf[11] = rf_11; 
       |assign rf[12] = rf_12; 
       |assign rf[13] = rf_13; 
       |assign rf[14] = rf_14; 
       |assign rf[15] = rf_15; 
       |assign rf[16] = rf_16; 
       |assign rf[17] = rf_17; 
       |assign rf[18] = rf_18; 
       |assign rf[19] = rf_19; 
       |assign rf[20] = rf_20; 
       |assign rf[21] = rf_21; 
       |assign rf[22] = rf_22; 
       |assign rf[23] = rf_23; 
       |assign rf[24] = rf_24; 
       |assign rf[25] = rf_25; 
       |assign rf[26] = rf_26; 
       |assign rf[27] = rf_27; 
       |assign rf[28] = rf_28; 
       |assign rf[29] = rf_29; 
       |assign rf[30] = rf_30; 
       |assign rf[31] = rf_31;
       |initial set_gpr_ptr(rf); 
       |always@(*) begin
       |  ebreak(flag);
       |  get_inst(inst);
       |  get_pc(pc);
       |end
       |endmodule
    """.stripMargin)
}
