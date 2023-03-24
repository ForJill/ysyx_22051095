
package rv64i

import chisel3._
import chisel3.util._

import config.Configs._
import utils._
import config.Configs._
import config.OP._

import utils.AluCtrlIO

class AluIO extends Bundle {
  val ctrl = new AluCtrlIO()
  val in1  = Input(UInt(DATA_WIDTH.W))
  val in2  = Input(UInt(DATA_WIDTH.W))
  val imm  = Input(UInt(DATA_WIDTH.W))
  val out  = Output(UInt(DATA_WIDTH.W))
}
class Alu extends Module {
  val io     = IO(new AluIO())
  val op1    = WireDefault(0.U(DATA_WIDTH.W))
  val op2    = WireDefault(0.U(DATA_WIDTH.W))
  val imm    = WireDefault(0.U(DATA_WIDTH.W))
  val result = WireDefault(0.U(DATA_WIDTH.W))

  op1 := io.in1
  op2 := io.in2
  imm := io.imm

  result := MuxLookup(io.ctrl.alu_op, 0.U, Array(
    ALU_ADD -> (op1 + op2),
    ALU_ADDI -> (op1 + imm)
  ))
  
  io.out := result
}
