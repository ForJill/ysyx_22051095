package utils

import chisel3._
import chisel3.util._
import config.Configs._

//连接控制模块的Bundle
class ControlIO extends Bundle {
  //val AluSrc = Output(Bool())
  //val Signed = Output(Bool())
  val RegWen = Output(Bool())
  val OP = Output(UInt(4.W))
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
  val alu_op = Input(UInt(4.W))
}
