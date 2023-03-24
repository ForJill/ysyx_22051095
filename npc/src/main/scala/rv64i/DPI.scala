package rv64i

import chisel3._
import chisel3.util.HasBlackBoxInline

class DPI extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val flag = Input(UInt(1.W))
  })
  //实现ebreak
  setInline("DPI.v",
    """
       |import "DPI-C" function void ebreak (input int flag);
       |module DPI(
       |    input flag
       |);
       |always@(*) begin
       |  ebreak(flag);
       |end
       |endmodule
    """.stripMargin)
}