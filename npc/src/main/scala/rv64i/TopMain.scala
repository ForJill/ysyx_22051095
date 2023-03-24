
package rv64i
import chisel3._
import utils._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.BoringUtils

import config.Configs._
import config.OP._

class TopIO extends Bundle {
  val pc      = Output(UInt(ADDR_WIDTH.W))
  val inst      = Output(UInt(INST_WIDTH.W))
  val ctrl      = new ControlIO()
  val resultALU = Output(UInt(DATA_WIDTH.W))
  val rs1       = Output(UInt(DATA_WIDTH.W))
  val rs2       = Output(UInt(DATA_WIDTH.W))
  val imm      = Output(UInt(DATA_WIDTH.W))
  val op    = Output(UInt(4.W))
}

class Top extends Module {
  val io         = IO(new TopIO)
  val PC         = Module(new PC)
  val alu        = Module(new Alu)
  val decoder    = Module(new Decoder)
  val instmem    = Module(new InstMem)
  val registers  = Module(new Registers)
  val Controller = Module(new Controller)

  //InstMem in
  instmem.io.addr <> PC.io.pc

  //Decoder in
  decoder.io.inst <> instmem.io.inst//io.inst
  
  //Register in
  registers.io.reg <> decoder.io.reg
  registers.io.wdata <> alu.io.out
  registers.io.wen <> decoder.io.ctrl.RegWen

  //Alu in
  alu.io.ctrl <> Controller.io.AluCtrlIO_Out
  alu.io.in1 <> registers.io.rdata1
  alu.io.in2 <> registers.io.rdata2
  alu.io.imm <> decoder.io.imm

  //controller in
  Controller.io.ControlIO_In <> decoder.io.ctrl

  //top
  io.pc <> PC.io.pc
  io.inst <> instmem.io.inst
  io.ctrl <> decoder.io.ctrl
  io.rs1       <> registers.io.rdata1
  io.rs2       <> registers.io.rdata2
  io.imm       <> decoder.io.imm
  io.op     <> decoder.io.ctrl.OP
  io.resultALU <> alu.io.out

  //DPI in
  val dpi = Module(new DPI)
  dpi.io.flag := Mux(decoder.io.ctrl.OP === ebreak, 1.U, 0.U)
}

object TopMain extends App {
  emitVerilog(new Top(), Array("--target-dir", "buildCPU"))
}
