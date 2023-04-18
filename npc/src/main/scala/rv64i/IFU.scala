package rv64i

import chisel3._
import chisel3.util._

class IFU extends Module {
  val io = IO(new Bundle {
    val pc = Input(UInt(64.W))
    val inst = Output(UInt(32.W))
  })
  val inst_mem = Module(new memory)
  inst_mem.io.raddr := io.pc
  io.inst := inst_mem.io.rdata(31,0)
}