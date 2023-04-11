package rv64i

import chisel3._
import chisel3.util._

import config.Configs._
import utils._
import config.Configs._
import config.OP._

import utils.AluCtrlIO

class AluIO extends Bundle {
  val ctrl     = new AluCtrlIO()
  val in1      = Input(UInt(DATA_WIDTH.W))
  val in2      = Input(UInt(DATA_WIDTH.W))
  val imm      = Input(UInt(DATA_WIDTH.W))
  val out      = Output(UInt(DATA_WIDTH.W))
  val pc       = Input(UInt(DATA_WIDTH.W))
  val j_branch = Output(UInt(DATA_WIDTH.W))
  val is_b     = Output(UInt(DATA_WIDTH.W))
}
class Alu extends Module {
  val io      = IO(new AluIO())
  val src1    = WireDefault(0.U(DATA_WIDTH.W))
  val src2    = WireDefault(0.U(DATA_WIDTH.W))
  val imm     = WireDefault(0.U(DATA_WIDTH.W))
  val result  = WireDefault(0.U(DATA_WIDTH.W))
  val default = WireDefault(0.U(DATA_WIDTH.W))

  def Sext(x: UInt, n: Int): UInt = Cat(Fill(64 - n, x(n - 1)), x)
  default := io.in1
  imm     := io.imm
  src1    := io.in1
  src2    := io.in2

  result := MuxLookup(
    io.ctrl.alu_op,
    0.U,
    Array(
      //R-type
      ALU_ADD -> (src1 + src2),
      ALU_ADDW -> Sext((src1 + src2)(31, 0), 32),
      ALU_SUB -> (src1 - src2),
      ALU_SUBW -> Sext((src1 - src2)(31, 0), 32),
      ALU_MUL -> (src1 * src2),
      ALU_MULW -> Sext((src1 * src2)(31, 0), 32),
      ALU_DIV -> Mux(src2 === 0.U, 0.U, (src1.asSInt / src2.asSInt).asUInt),//有符号数
      ALU_DIVU -> Mux(src2 === 0.U, 0.U, src1 / src2),
      ALU_DIVW -> Sext(Mux(src2(31, 0) === 0.U, 0.U, src1(31, 0) / src2(31, 0)), 32),
      ALU_SLL -> (src1 << src2(5,0)),
      ALU_SLT -> (src1.asSInt < src2.asSInt),
      ALU_SLTU -> (src1 < src2),
      ALU_SLLW -> Sext((src1 << src2(5, 0))(31, 0), 32),
      ALU_AND -> (src1 & src2),
      ALU_XOR -> (src1 ^ src2),
      ALU_SRA -> (src1 >> src2),
      ALU_OR -> (src1 | src2),
      ALU_REM -> (src1.asSInt % src2.asSInt).asUInt,
      ALU_REMU -> (src1 % src2),
      ALU_REMW -> Sext(Mux(src2(31, 0) === 0.U, 0.U, src1(31, 0) % src2(31, 0)), 32),
      ALU_REMUW -> Sext(Mux(src2(31, 0) === 0.U, 0.U, src1(31, 0) % src2(31, 0)), 32),
      ALU_SRAW -> Sext((src1(31,0).asSInt() >> src2(4,0)).asUInt(), 32),
      ALU_SRLW -> Sext((src1(31, 0) >> src2(4, 0)), 32),
      //I_type
      ALU_ADDI -> (src1 + imm),
      ALU_ADDIW -> Sext((src1 + imm)(31, 0), 32),
      ALU_JALR -> (io.pc + 4.U),
      ALU_SLTIU -> (src1 < imm),
      ALU_LH -> (src1 + imm),
      ALU_LHU -> (src1 + imm),
      ALU_LD -> (src1 + imm),
      ALU_LW -> (src1 + imm),
      ALU_LWU -> (src1 + imm),
      ALU_LB -> (src1 + imm),
      ALU_LBU -> (src1 + imm),
      ALU_SLLI -> (src1 << imm(5, 0)),
      ALU_SLLIW -> (Sext((src1 << imm(4, 0))(31, 0), 32)),
      ALU_SRLI -> (src1 >> imm(5, 0)),
      ALU_SRLIW -> (Sext((src1(31, 0) >> imm(4, 0)), 32)),
      ALU_SRAIW -> (Sext((src1.asSInt(31, 0) >> imm(4, 0)), 32)),
      ALU_SLTIU -> (src1 < imm),
      ALU_ANDI -> (src1 & imm),
      ALU_XORI -> (src1 ^ imm),
      ALU_ORI -> (src1 | imm),
      ALU_SRAI -> (src1 >> imm.asSInt(5, 0)),
      //S_type
      ALU_SD -> (src1 + imm),
      ALU_SW -> (src1 + imm),
      ALU_SB -> (src1 + imm),
      ALU_SH -> (src1 + imm),
      //B_type
      ALU_BEQ -> (io.pc + imm),
      ALU_BNE -> (io.pc + imm),
      ALU_BLT -> (io.pc + imm),
      ALU_BGE -> (io.pc + imm),
      ALU_BGEU -> (io.pc + imm),
      ALU_BLTU -> (io.pc + imm),
      //U_type
      ALU_LUI -> (imm),
      ALU_AUIPC -> (io.pc + imm),
      //J_type
      ALU_JAL -> (io.pc + 4.U)
    )
  )

  io.j_branch := MuxLookup(
    io.ctrl.alu_op,
    0.U,
    Array(
      ALU_JAL -> (io.pc + imm),
      ALU_JALR -> (Cat((src1 + imm)(31, 1), 0.U))
    )
  )

  io.is_b := MuxLookup(
    io.ctrl.alu_op,
    0.U,
    Array(
      ALU_BEQ -> (src1 === src2),
      ALU_BNE -> (src1 =/= src2),
      ALU_BLT -> (src1.asSInt < src2.asSInt),
      ALU_BGE -> (src1.asSInt >= src2.asSInt),
      ALU_BGEU -> (src1 >= src2),
      ALU_BLTU -> (src1 < src2)
    )
  )
  io.out := result
}
