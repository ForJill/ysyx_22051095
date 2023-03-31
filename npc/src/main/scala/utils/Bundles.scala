package utils

import chisel3._
import chisel3.util._
import config.Configs._

//连接控制模块的Bundle
class ControlIO extends Bundle {
  //val AluSrc = Output(Bool())
  //val Signed = Output(Bool())
  val RegWen = Output(Bool())
  val OP = Output(UInt(6.W))
  val J_JUMP = Output(Bool())
  val MemWen = Output(Bool())
  val wmask = Output(UInt(8.W))
  val MemLoad = Output(Bool())
  //val OPType = Output(UInt(3.W))
  //val IsImm = Output(Bool())
  //val ImmType = Output(UInt(2.W))
}

class RegIO extends Bundle {
  val rs1 = Output(UInt(REG_WIDTH.W))
  val rs2 = Output(UInt(REG_WIDTH.W))
  val rd  = Output(UInt(REG_WIDTH.W))
  //val imm = Output(UInt(DATA_WIDTH.W))
}

class AluCtrlIO extends Bundle {
  val alu_op = Input(UInt(6.W))
  //val op_type = Input(UInt(3.W))
}
