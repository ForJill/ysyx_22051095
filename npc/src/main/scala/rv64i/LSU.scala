package rv64i

import chisel3._
import chisel3.util._

class LSU extends Module {
  val io = IO(new Bundle {
    val raddr = Input(UInt(64.W))
    val rdata = Output(UInt(64.W))
    val waddr = Input(UInt(64.W))
    val wdata = Input(UInt(64.W))
    val wmask = Input(UInt(8.W))
    val ren  = Input(Bool())
    val wen  = Input(Bool())
  })
  val axi = Module(new AXI)
  //传给axi相应信号
  axi.io.data_sram_req := io.ren || io.wen
  axi.io.data_sram_wr  := io.wen
  axi.io.data_sram_addr:= Mux(io.wen,io.waddr,io.raddr)
  axi.io.data_sram_wstrb:= io.wmask
  axi.io.data_sram_wdata:= io.wdata
  //从axi接收的信号
  io.rdata := axi.io.data_sram_rdata
}