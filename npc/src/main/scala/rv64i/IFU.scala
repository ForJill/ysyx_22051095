package rv64i

import chisel3._
import chisel3.util._

class IFU extends Module {
  val io = IO(new Bundle {
    val pc = Input(UInt(64.W))
    val inst = Output(UInt(32.W))
  })
  val axi = Module(new AXI)
  //传给axi相应信号
  axi.io.inst_sram_addr := io.pc
  axi.io.inst_sram_req := true.B
  axi.io.inst_sram_wr  := false.B
  //从axi接收的信号
  io.inst := axi.io.inst_sram_rdata(31,0)
}