package rv64i
import chisel3._
import chisel3.util._
import config.Configs._

class PC extends Module {
  val io = IO(new Bundle {
    val pc        = Output(UInt(ADDR_WIDTH.W))
    val pc4       = Output(UInt(ADDR_WIDTH.W))
    val is_j      = Input(Bool());
    val j_branch  = Input(UInt(ADDR_WIDTH.W))
  })
  val init = RegInit(START_ADDR.U(ADDR_WIDTH.W))
  init   := Mux(io.is_j,io.j_branch,io.pc+4.U)
  io.pc  := init
  io.pc4 := init + 4.U
}
