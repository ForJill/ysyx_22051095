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
  val ctrl      = new ControlIO()
  val resultALU = Output(UInt(DATA_WIDTH.W))
  val rs1       = Output(UInt(DATA_WIDTH.W))
  val rs2       = Output(UInt(DATA_WIDTH.W))
  val imm      = Output(UInt(DATA_WIDTH.W))
  val op    = Output(UInt(8.W))
  val MemWen = Output(Bool())
  val MemLoad = Output(Bool())
  val inst = Output(UInt(32.W))
  val is_b = Output(Bool())
  //val wronginst = Output(Bool())
}

class Top extends Module {
  val io         = IO(new TopIO)
  val PC         = Module(new PC)
  val alu        = Module(new Alu)
  val decoder    = Module(new Decoder)
  //val instmem    = Module(new InstMem)
  val registers  = Module(new Registers)
  val Controller = Module(new Controller)
  val dpi = Module(new DPI)
  val ifu = Module(new IFU)
  

  def Sext(x: UInt, n: Int): UInt = Cat(Fill(64 - n, x(n - 1)), x)
  //PC in 
  PC.io.is_j <> decoder.io.ctrl.J_JUMP
  PC.io.j_branch <> alu.io.j_branch
  PC.io.is_b <> alu.io.is_b
  PC.io.b_branch <> alu.io.out

  //Decoder in
  decoder.io.inst <> ifu.io.inst
  
  //Register in
  registers.io.reg <> decoder.io.reg
  registers.io.wdata <> Mux(decoder.io.ctrl.MemLoad,
                        Mux(decoder.io.ctrl.OP === ALU_LB,Sext(ifu.io.rdata(7,0),8),
                        Mux(decoder.io.ctrl.OP === ALU_LBU,ifu.io.rdata(7,0),
                        Mux(decoder.io.ctrl.OP === ALU_LH,Sext(ifu.io.rdata(15,0),16),
                        Mux(decoder.io.ctrl.OP === ALU_LHU,ifu.io.rdata(15,0),
                        Mux(decoder.io.ctrl.OP === ALU_LD,ifu.io.rdata(63,0),
                        Mux(decoder.io.ctrl.OP === ALU_LWU,ifu.io.rdata(31,0),
                        Mux(decoder.io.ctrl.OP === ALU_LW,Sext(ifu.io.rdata(31,0),32),alu.io.out))))))),alu.io.out)
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
  io.ctrl <> decoder.io.ctrl
  io.rs1       <> registers.io.rdata1
  io.rs2       <> registers.io.rdata2
  io.imm       <> decoder.io.imm
  io.op     <> decoder.io.ctrl.OP
  io.resultALU <> alu.io.out
  io.MemWen <> decoder.io.ctrl.MemWen
  io.inst <> ifu.io.inst
  io.MemLoad <> decoder.io.ctrl.MemLoad
  io.is_b <> alu.io.is_b
  //io.wronginst <> decoder.io.ctrl.wronginst

  //IFU in 
  ifu.io.pc <> PC.io.pc
  ifu.io.raddr <> alu.io.out
  ifu.io.waddr <> alu.io.out
  ifu.io.wdata <> registers.io.rdata2
  ifu.io.wmask <> decoder.io.ctrl.wmask
  ifu.io.wen   <> decoder.io.ctrl.MemWen

  //DPI in
  dpi.io.flag := Mux(decoder.io.ctrl.OP === ALU_EBREAK, 1.U(32.W), 0.U(32.W))
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
  dpi.io.inst  := ifu.io.inst
  dpi.io.pc    := io.pc
  
}

object TopMain extends App {
  emitVerilog(new Top(), Array("--target-dir", "vsrc"))
}
