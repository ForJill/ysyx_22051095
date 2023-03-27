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
  val inst      = Input(UInt(INST_WIDTH.W))
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
  //val instmem    = Module(new InstMem)
  val registers  = Module(new Registers)
  val Controller = Module(new Controller)

  //InstMem in
  //instmem.io.addr <> PC.io.pc

  //PC in 
  PC.io.is_j <> decoder.io.ctrl.J_JUMP
  PC.io.j_branch <> alu.io.j_branch

  //Decoder in
  decoder.io.inst <> io.inst//io.inst
  
  //Register in
  registers.io.reg <> decoder.io.reg
  registers.io.wdata <> alu.io.out
  registers.io.wen <> decoder.io.ctrl.RegWen

  //Alu in
  alu.io.ctrl <> Controller.io.AluCtrlIO_Out
  alu.io.in1 <> registers.io.rdata1
  alu.io.in2 <> registers.io.rdata2
  alu.io.imm <> decoder.io.imm
  alu.io.pc  <> PC.io.pc

  //controller in
  Controller.io.ControlIO_In <> decoder.io.ctrl

  //top
  io.pc <> PC.io.pc
  //io.inst <> instmem.io.inst
  io.ctrl <> decoder.io.ctrl
  io.rs1       <> registers.io.rdata1
  io.rs2       <> registers.io.rdata2
  io.imm       <> decoder.io.imm
  io.op     <> decoder.io.ctrl.OP
  io.resultALU <> alu.io.out

  //DPI in
  val dpi = Module(new DPI)
  dpi.io.flag := Mux(decoder.io.ctrl.OP === ALU_EBREAK || decoder.io.ctrl.OP === ALU_JALR && decoder.io.reg.rd === 0.U , 1.U(32.W), 0.U(32.W))
  dpi.io.rf_0 := registers.io.regs(0)
  dpi.io.rf_1 := registers.io.regs(1)
  dpi.io.rf_2 := registers.io.regs(2)
  dpi.io.rf_3 := registers.io.regs(3)
  dpi.io.rf_4 := registers.io.regs(4) 
  dpi.io.rf_5 := registers.io.regs(5) 
  dpi.io.rf_6 := registers.io.regs(6) 
  dpi.io.rf_7 := registers.io.regs(7) 
  dpi.io.rf_8 := registers.io.regs(8) 
  dpi.io.rf_9 := registers.io.regs(9) 
  dpi.io.rf_10 := registers.io.regs(10) 
  dpi.io.rf_11 := registers.io.regs(11) 
  dpi.io.rf_12 := registers.io.regs(12) 
  dpi.io.rf_13 := registers.io.regs(13) 
  dpi.io.rf_14 := registers.io.regs(14) 
  dpi.io.rf_15 := registers.io.regs(15) 
  dpi.io.rf_16 := registers.io.regs(16) 
  dpi.io.rf_17 := registers.io.regs(17) 
  dpi.io.rf_18 := registers.io.regs(18) 
  dpi.io.rf_19 := registers.io.regs(19) 
  dpi.io.rf_20 := registers.io.regs(20) 
  dpi.io.rf_21 := registers.io.regs(21) 
  dpi.io.rf_22 := registers.io.regs(22) 
  dpi.io.rf_23 := registers.io.regs(23) 
  dpi.io.rf_24 := registers.io.regs(24) 
  dpi.io.rf_25 := registers.io.regs(25) 
  dpi.io.rf_26 := registers.io.regs(26) 
  dpi.io.rf_27 := registers.io.regs(27) 
  dpi.io.rf_28 := registers.io.regs(28) 
  dpi.io.rf_29 := registers.io.regs(29) 
  dpi.io.rf_30 := registers.io.regs(30) 
  dpi.io.rf_31 := registers.io.regs(31)
  dpi.io.inst  := io.inst
  dpi.io.pc    := io.pc
}

object TopMain extends App {
  emitVerilog(new Top(), Array("--target-dir", "vsrc"))
}
