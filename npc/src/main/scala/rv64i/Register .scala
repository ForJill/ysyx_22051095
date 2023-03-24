package rv64i
import chisel3._
import chisel3.util._

import config.Configs._
import utils._
//两个读端口一个写端口
class RegisterIO extends Bundle {
  val wen    = Input(Bool())
  val wdata  = Input(UInt(DATA_WIDTH.W))
  val rdata1 = Output(UInt(DATA_WIDTH.W))
  val rdata2 = Output(UInt(DATA_WIDTH.W))
  val reg    = Input(Flipped(new RegIO))
}
class Registers extends Module {
  val io        = IO(new RegisterIO)
  val registers = Mem(32,UInt(DATA_WIDTH.W))

  io.rdata1 := Mux(io.reg.rs1 === 0.U, 0.U ,registers(io.reg.rs1))
  io.rdata2 := Mux(io.reg.rs2 === 0.U, 0.U, registers(io.reg.rs2))

  registers(io.reg.rd) := Mux(io.wen, io.wdata, registers(io.reg.rd))
}
