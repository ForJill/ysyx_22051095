package rv64i
import chisel3._
import chisel3.util._
import config.Configs._

class PC extends Module {
  val io = IO(new Bundle {
    val pc        = Output(UInt(ADDR_WIDTH.W))
    val pc4       = Output(UInt(ADDR_WIDTH.W))
    val is_j      = Input(Bool());
    val is_b      = Input(Bool());
    val is_e      = Input(Bool());
    val j_branch  = Input(UInt(DATA_WIDTH.W))
    val b_branch  = Input(UInt(DATA_WIDTH.W))
    val e_branch  = Input(UInt(DATA_WIDTH.W))
  })
  val init = RegInit(START_ADDR.U(ADDR_WIDTH.W))
  io.pc  := init
  io.pc4 := io.pc + 4.U
  init   := Mux(io.is_j,io.j_branch,Mux(io.is_b,io.b_branch,Mux(io.is_e,io.e_branch,io.pc4)))
}
