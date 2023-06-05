
import chisel3._
import chisel3.util.HasBlackBoxInline
import utils._
import chisel3.util._
import chisel3.stage._

class memory extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val raddr = Input(UInt(64.W))
    val waddr = Input(UInt(64.W))
    val wdata = Input(UInt(64.W))
    val wmask = Input(UInt(8.W))
    val rdata = Output(UInt(64.W))
    val wen   = Input(Bool())
    val ren   = Input(Bool())
  })
  setInline(
    "memory.v",
    """
      |import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
      |import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
      |module memory(
      |    input [63:0] raddr,
      |    input [63: 0] waddr,
      |    input [63:0] wdata,
      |    input [7:0] wmask,
      |    input wen,
      |    input ren,
      |    output [63:0] rdata
      |);
      |//利用状态机实现延迟
      |always@(*) begin
      |  if(ren)begin
      |     pmem_read(raddr, rdata);
      |  end
      |  if(wen)begin
      |      pmem_write(waddr, wdata, wmask);
      |  end
      |end
      |endmodule
      """.stripMargin
  )
}
