package rv64i
import chisel3._
import chisel3.util._

import config.Configs._
import utils._
//两个读端口一个写端口
class RegisterIO extends Bundle {
  val wen        = Input(Bool())
  val wdata      = Input(UInt(DATA_WIDTH.W))
  val rdata1     = Output(UInt(DATA_WIDTH.W))
  val rdata2     = Output(UInt(DATA_WIDTH.W))
  val reg        = Input(Flipped(new RegIO))
  val regs       = Output(Vec(32, UInt(64.W)))
  val reg17      = Output(UInt(DATA_WIDTH.W))
}
class Registers extends Module {
  val io        = IO(new RegisterIO)
  val registers = Mem(32,UInt(DATA_WIDTH.W))

  io.rdata1 := Mux(io.reg.rs1 === 0.U, 0.U ,registers(io.reg.rs1))
  io.rdata2 := Mux(io.reg.rs2 === 0.U, 0.U, registers(io.reg.rs2))
  io.reg17  := registers(17)

  registers(io.reg.rd) := Mux(io.wen&&io.reg.rd=/=0.U, io.wdata, registers(io.reg.rd))
  //通过rf存储registers的值
  (0 until 32).foreach(i => io.regs(i) := registers(i))
}
