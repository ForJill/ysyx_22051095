package rv64i

import chisel3._
import chisel3.util._

class IFU extends Module {
  val io = IO(new Bundle {
    val pc = Input(UInt(64.W))
    val inst = Output(UInt(32.W))
    val raddr = Input(UInt(64.W))
    val rdata = Output(UInt(64.W))
    val waddr = Input(UInt(64.W))
    val wdata = Input(UInt(64.W))
    val wmask = Input(UInt(8.W))
    val wen   = Input(Bool())
  })
  val inst_mem = Module(new memory)
  inst_mem.io.raddr := io.pc
  io.inst := inst_mem.io.rdata(31,0)
  inst_mem.io.wen   := 0.U
  val data_mem = Module(new memory)
  data_mem.io.raddr := io.raddr
  io.rdata := data_mem.io.rdata
  data_mem.io.waddr := io.waddr
  data_mem.io.wdata := io.wdata
  data_mem.io.wmask := io.wmask
  data_mem.io.wen   := io.wen
}