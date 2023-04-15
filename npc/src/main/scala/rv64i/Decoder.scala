package rv64i

import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.BoringUtils
import scala.collection.immutable.ArraySeq
import scala.language.postfixOps

import utils._
import config.Configs._
import config.OP._
import config.Instructions._
import config.Imm._

class DecoderIO extends Bundle {
  val inst = Input(UInt(INST_WIDTH.W))
  val ctrl = Output(new ControlIO)
  val reg  = Output(new RegIO)
  val imm  = Output(UInt(DATA_WIDTH.W))
}

class Decoder extends Module {
  val io = IO(new DecoderIO)
  val opcode   = io.inst(6, 0)
  val funct3   = io.inst(14, 12)
  val funct7   = io.inst(31, 25)
  val imm31_12 = io.inst(31, 12)

  val T = true.B
  val F = false.B

  val default = List(ALU_ADD, T, IMM_I, F, F, F, F); //op,regwen,immtype,j_jump, MemWen, MemLoad,INV

  val map = Array(
    //R-type
    ADD -> List(ALU_ADD, T, IMM_I, F, F, F, F),
    ADDW -> List(ALU_ADDW, T, IMM_I, F, F, F, F),
    SUB -> List(ALU_SUB, T, IMM_I, F, F, F, F),
    SUBW -> List(ALU_SUBW, T, IMM_I, F, F, F, F),
    MUL -> List(ALU_MUL, T, IMM_I, F, F, F, F),
    MULW -> List(ALU_MULW, T, IMM_I, F, F, F, F),
    DIV -> List(ALU_DIV, T, IMM_I, F, F, F, F),
    DIVU -> List(ALU_DIVU, T, IMM_I, F, F, F, F),
    DIVW -> List(ALU_DIVW, T, IMM_I, F, F, F, F),
    DIVUW -> List(ALU_DIVUW, T, IMM_I, F, F, F, F),
    SLL -> List(ALU_SLL, T, IMM_I, F, F, F, F),
    SLT -> List(ALU_SLT, T, IMM_I, F, F, F, F),
    SLTU -> List(ALU_SLTU, T, IMM_I, F, F, F, F),
    SLLW -> List(ALU_SLLW, T, IMM_I, F, F, F, F),
    SRAW -> List(ALU_SRAW, T, IMM_I, F, F, F, F),
    SRL -> List(ALU_SRL, T, IMM_I, F, F, F, F),
    SRLW -> List(ALU_SRLW, T, IMM_I, F, F, F, F),
    XOR -> List(ALU_XOR, T, IMM_I, F, F, F, F),
    AND -> List(ALU_AND, T, IMM_I, F, F, F, F),
    SRA -> List(ALU_SRA, T, IMM_I, F, F, F, F),
    OR -> List(ALU_OR, T, IMM_I, F, F, F, F),
    REM -> List(ALU_REM, T, IMM_I, F, F, F, F),
    REMW -> List(ALU_REMW, T, IMM_I, F, F, F, F),
    REMU -> List(ALU_REMU, T, IMM_I, F, F, F, F),
    REMUW -> List(ALU_REMUW, T, IMM_I, F, F, F, F),

    //I-type
    ADDI -> List(ALU_ADDI, T, IMM_I, F, F, F, F),
    ADDIW -> List(ALU_ADDIW, T, IMM_I, F, F, F, F),
    JALR -> List(ALU_JALR, T, IMM_I, T, F, F, F),
    LB -> List(ALU_LB, T, IMM_I, F, F, T, F),
    LBU -> List(ALU_LBU, T, IMM_I, F, F, T, F),
    LH -> List(ALU_LH, T, IMM_I, F, F, T, F),
    LHU -> List(ALU_LHU, T, IMM_I, F, F, T, F),
    LW -> List(ALU_LW, T, IMM_I, F, F, T, F),
    LWU -> List(ALU_LWU, T, IMM_I, F, F, T, F),
    LD -> List(ALU_LD, T, IMM_I, F, F, T, F),
    SLLI -> List(ALU_SLLI, T, IMM_I, F, F, F, F),
    SLLIW -> List(ALU_SLLIW, T, IMM_I, F, F, F, F),
    SRLI -> List(ALU_SRLI, T, IMM_I, F, F, F, F),
    SRLIW -> List(ALU_SRLIW, T, IMM_I, F, F, F, F),
    SRAI -> List(ALU_SRAI, T, IMM_I, F, F, F, F),
    SRAIW -> List(ALU_SRAIW, T, IMM_I, F, F, F, F),
    SLTI -> List(ALU_SLTI, T, IMM_I, F, F, F, F),
    SLTIU -> List(ALU_SLTIU, T, IMM_I, F, F, F, F),
    ANDI -> List(ALU_ANDI, T, IMM_I, F, F, F, F),
    XORI -> List(ALU_XORI, T, IMM_I, F, F, F, F),

    //S-type
    SD -> List(ALU_SD, F, IMM_S, F, T, F, F),
    SB -> List(ALU_SB, F, IMM_S, F, T, F, F),
    SH -> List(ALU_SH, F, IMM_S, F, T, F, F),
    SW -> List(ALU_SW, F, IMM_S, F, T, F, F),

    //B-type
    BEQ -> List(ALU_BEQ, F, IMM_B, F, F, F, F),
    BNE -> List(ALU_BNE, F, IMM_B, F, F, F, F),
    BGE -> List(ALU_BGE, F, IMM_B, F, F, F, F),
    BLT -> List(ALU_BLT, F, IMM_B, F, F, F, F),
    BLTU -> List(ALU_BLTU, F, IMM_B, F, F, F, F),

    //U-type
    AUIPC -> List(ALU_AUIPC, T, IMM_U, F, F, F, F),
    LUI -> List(ALU_LUI, T, IMM_U, F, F, F, F),

    //J-type
    JAL -> List(ALU_JAL, T, IMM_J, T, F, F, F),

    //N-type
    EBREAK -> List(ALU_EBREAK, F, IMM_I, F, F, F, F),
    //INV -> List(ALU_INV, F, IMM_I, F, F, F, T)

  )

  val crtlsignals = ListLookup(io.inst, default, map)
  io.ctrl.OP     := crtlsignals(0)
  io.ctrl.RegWen := crtlsignals(1)
  io.ctrl.J_JUMP := crtlsignals(3)
  io.ctrl.MemWen := crtlsignals(4)
  io.ctrl.MemLoad := crtlsignals(5)
  //io.ctrl.wronginst := crtlsignals(6)
  val ImmType = crtlsignals(2)

  def Sext(x: UInt, n: Int): UInt = Cat(Fill(64 - n, x(n - 1)), x)

  val I = Sext(io.inst(31, 20),12)
  val U = Sext(io.inst(31, 12),20) << 12
  val S = Sext(io.inst(31, 25),7) << 5 | io.inst(11, 7)
  val J = Sext(io.inst(31),1) << 20 | io.inst(19, 12) << 12 | io.inst(20) << 11 | io.inst(30, 21) << 1
  val B = Sext(io.inst(31),1) << 12 | io.inst(7) << 11 | io.inst(30, 25) << 5 | io.inst(11, 8) << 1

  io.imm := MuxLookup(
    ImmType,
    0.U(DATA_WIDTH.W),
    Array(
      IMM_I -> I,
      IMM_S -> S,
      IMM_B -> B,
      IMM_U -> U,
      IMM_J -> J
    )
  )
  io.ctrl.wmask := MuxLookup(
    io.ctrl.OP,
    0.U(DATA_WIDTH.W),
    Array(
      ALU_SB -> "b1".asUInt(8.W),
      ALU_SH -> "b11".asUInt(8.W),
      ALU_SW -> "b1111".asUInt(8.W),
      ALU_SD -> "b11111111".asUInt(8.W),
    )
  )

  io.reg.rs1 := io.inst(19, 15)
  io.reg.rs2 := io.inst(24, 20)
  io.reg.rd  := io.inst(11, 7)
}