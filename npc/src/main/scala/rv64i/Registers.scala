package rv64i
import chisel3._
import chisel3.util._

import config.Configs._
import utils._
//两个读端口一个写端口

class Registers extends Module {
  val io = IO(new Bundle {
    val wen    = Input(Bool())
    val wdata  = Input(UInt(DATA_WIDTH.W))
    val rdata1 = Output(UInt(DATA_WIDTH.W))
    val rdata2 = Output(UInt(DATA_WIDTH.W))
    val rs1    = Input(UInt(REG_WIDTH.W))
    val rs2    = Input(UInt(REG_WIDTH.W))
    val waddr  = Input(UInt(REG_WIDTH.W))
    val regs   = Output(Vec(32, UInt(64.W)))
    val reg17  = Output(UInt(DATA_WIDTH.W))
  })

  val registers = Mem(32, UInt(DATA_WIDTH.W))
  io.rdata1 := Mux(io.rs1 === 0.U, 0.U, registers(io.rs1))
  io.rdata2 := Mux(io.rs2 === 0.U, 0.U, registers(io.rs2))
  io.reg17  := registers(17)

  registers(io.waddr) := Mux(io.wen && io.waddr =/= 0.U, io.wdata, registers(io.waddr))
  //通过rf存储registers的值
  (0 until 32).foreach(i => io.regs(i) := registers(i))
}
