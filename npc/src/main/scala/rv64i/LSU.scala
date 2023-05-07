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
    val wen   = Input(Bool())
  })
val data_mem = Module(new memory)
//传给数据内存相应信号，对应data_sram通道
  data_mem.io.raddr := io.raddr
  data_mem.io.waddr := io.waddr
  data_mem.io.wdata := io.wdata
  data_mem.io.wmask := io.wmask
  data_mem.io.wen   := io.wen
//取出数据
  io.rdata := data_mem.io.rdata
}