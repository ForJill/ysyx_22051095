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

  val default = List(ALU_ADD, T, IMM_I, F); //op,regwen,immtype,j_jump

  val map = Array(
    ADD -> List(ALU_ADD, T, IMM_I, F),
    ADDI -> List(ALU_ADDI, T, IMM_I, F),
    EBREAK -> List(ALU_EBREAK, F, IMM_I, F),
    AUIPC -> List(ALU_AUIPC, T, IMM_U, F),
    LUI -> List(ALU_LUI, T, IMM_U, F),
    JAL -> List(ALU_JAL, T, IMM_J, T),
    JALR -> List(ALU_JALR, T, IMM_I, T),
    SD -> List(ALU_SD, T, IMM_I, F),//暂时为空指令
  )

  val crtlsignals = ListLookup(io.inst, default, map)
  io.ctrl.OP     := crtlsignals(0)
  io.ctrl.RegWen := crtlsignals(1)
  io.ctrl.J_JUMP := crtlsignals(3)
  val ImmType = crtlsignals(2)
  def Sext(x: UInt, n: Int): UInt = Cat(Fill(64-n,x(n-1)), x).asUInt

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
      IMM_U -> U,
      IMM_J -> J,
    )
  )
  io.reg.rs1 := Mux(io.ctrl.OP === ALU_SD, 0.U,io.inst(19, 15))
  io.reg.rs2 := io.inst(24, 20)
  io.reg.rd  := io.inst(11, 7)
}