package rv64i
import chisel3._
import chisel3.util._
import config.Configs._

class PC extends Module {
  val io = IO(new Bundle {
    val pc        = Output(UInt(ADDR_WIDTH.W))
    val pc4       = Output(UInt(ADDR_WIDTH.W))
  })
  val init = RegInit(START_ADDR.U(ADDR_WIDTH.W))
  init   := init + 4.U
  io.pc  := init
  io.pc4 := init + 4.U
}
