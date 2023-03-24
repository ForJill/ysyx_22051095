package rv64i

import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.BoringUtils
import scala.collection.immutable.ArraySeq

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
  io.reg.rs1 := io.inst(19, 15)
  io.reg.rs2 := io.inst(24, 20)
  io.reg.rd  := io.inst(11, 7)
  val opcode = io.inst(6, 0)
  val funct3 = io.inst(14, 12)
  val funct7 = io.inst(31, 25)
  val imm31_12 = io.inst(31, 12)

  val T = true.B
  val F = false.B

  val default = List(ALU_ADD,T,IMM_I);//op,regwen,isimm,immtype

  val map = Array(
    ADD  -> List(ALU_ADD,T,IMM_I),
    ADDI -> List(ALU_ADDI,T,IMM_I),
    EBREAK -> List(ebreak,F,IMM_I)
  )

  val crtlsignals = ListLookup(io.inst, default, map)
  io.ctrl.OP := crtlsignals(0)
  io.ctrl.RegWen := crtlsignals(1)
  val ImmType = crtlsignals(2)

  val I = Cat(Fill(52, io.inst(31)), io.inst(31, 20))

  io.imm := MuxLookup(ImmType, 0.U(DATA_WIDTH.W), Array(
    IMM_I -> I
  ))
}
/*
object topdecoder extends App {
    (new ChiselStage).execute(args, Seq(
      ChiselGeneratorAnnotation(() => new Decoder)))
}*/
