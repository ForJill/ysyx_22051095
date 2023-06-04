package rv64i

import chisel3._
import chisel3.util.HasBlackBoxInline

class DPI_EBREAK extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val flag  = Input(UInt(32.W))
  })
  //实现ebreak
  setInline(
    "DPI_EBREAK.v",
    """
      |import "DPI-C" function void ebreak (input int flag);
      |module DPI_EBREAK(
      |    input [31:0] flag
      |);
      |always@(*) begin
      |  ebreak(flag);
      |end
      |endmodule
    """.stripMargin
  )
}
