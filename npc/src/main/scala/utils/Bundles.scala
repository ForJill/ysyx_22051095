package utils

import chisel3._
import chisel3.util._
import config.Configs._

//连接控制模块的Bundle
class ControlIO extends Bundle {
  val RegWen = Output(Bool())
  val OP = Output(UInt(8.W))
  val J_JUMP = Output(Bool())
  val MemWen = Output(Bool())
  val wmask = Output(UInt(8.W))
  val MemLoad = Output(Bool())
  val csr_wen = Output(Bool())
  val E_JUMP = Output(Bool())
}

class RegIO extends Bundle {
  val rs1 = Output(UInt(REG_WIDTH.W))
  val rs2 = Output(UInt(REG_WIDTH.W))
  val rd  = Output(UInt(REG_WIDTH.W))
  val csr_index = Output(UInt(3.W))
}

class AluCtrlIO extends Bundle {
  val alu_op  = Input(UInt(8.W))
  val csr_wen = Input(Bool())
}
