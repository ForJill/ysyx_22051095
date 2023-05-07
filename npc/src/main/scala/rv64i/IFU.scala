package rv64i

import chisel3._
import chisel3.util._

class IFU extends Module {
  val io = IO(new Bundle {
    val pc = Input(UInt(64.W))
    val inst = Output(UInt(32.W))
  })
  val inst_mem = Module(new memory)
  //传给指令内存相应信号，对应inst_sram通道
  inst_mem.io.raddr := io.pc
  //取出指令
  io.inst := inst_mem.io.rdata(31,0)
}