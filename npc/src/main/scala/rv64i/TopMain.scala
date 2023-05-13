package rv64i
import chisel3._
import utils._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.BoringUtils

import config.Configs._
import config.OP._

class TopIO extends Bundle {
  val pc        = Output(UInt(ADDR_WIDTH.W))
  val ctrl      = new ControlIO()
  val resultALU = Output(UInt(DATA_WIDTH.W))
  val rs1       = Output(UInt(DATA_WIDTH.W))
  val rs2       = Output(UInt(DATA_WIDTH.W))
  val rd        = Output(UInt(5.W))
  val imm       = Output(UInt(DATA_WIDTH.W))
  val op        = Output(UInt(8.W))
  val MemWen    = Output(Bool())
  val MemLoad   = Output(Bool())
  val inst      = Output(UInt(32.W))
  val is_b      = Output(Bool())
  val wmask     = Output(UInt(8.W))
  val rdata     = Output(UInt(64.W))
  val fmemwdata = Output(UInt(64.W))
  val is_e      = Output(Bool())
  val is_csr    = Output(Bool())
  val reg17     = Output(UInt(64.W))
  //val wronginst = Output(Bool())
}

class Top extends Module {
  val io        = IO(new TopIO)
  val PC        = Module(new PC)
  val alu       = Module(new EXU)
  val decoder   = Module(new IDU)
  val registers = Module(new Registers)
  val dpi       = Module(new DPI)
  val ifu       = Module(new IFU)
  val lsu       = Module(new LSU)
  val axi       = Module(new AXI)
  val inst_mem = Module(new memory)
  val data_mem = Module(new memory)

  def Sext(x: UInt, n: Int): UInt = Cat(Fill(64 - n, x(n - 1)), x)
  //PC in
  PC.io.is_j <> decoder.io.ctrl.J_JUMP
  PC.io.j_branch <> alu.io.j_branch
  PC.io.is_b <> alu.io.is_b
  PC.io.b_branch <> alu.io.out
  PC.io.is_e <> decoder.io.ctrl.E_JUMP
  PC.io.e_branch <> alu.io.e_branch

  //Decoder in
  decoder.io.inst <> ifu.io.inst

  //Register in
  registers.io.reg <> decoder.io.reg
  registers.io.wdata <> Mux(
    decoder.io.ctrl.MemLoad,
    Mux(
      decoder.io.ctrl.OP === ALU_LB,
      Sext(lsu.io.rdata(7, 0), 8),
      Mux(
        decoder.io.ctrl.OP === ALU_LBU,
        lsu.io.rdata(7, 0),
        Mux(
          decoder.io.ctrl.OP === ALU_LH,
          Sext(lsu.io.rdata(15, 0), 16),
          Mux(
            decoder.io.ctrl.OP === ALU_LHU,
            lsu.io.rdata(15, 0),
            Mux(
              decoder.io.ctrl.OP === ALU_LD,
              lsu.io.rdata(63, 0),
              Mux(
                decoder.io.ctrl.OP === ALU_LWU,
                lsu.io.rdata(31, 0),
                Mux(decoder.io.ctrl.OP === ALU_LW, Sext(lsu.io.rdata(31, 0), 32), alu.io.out)
              )
            )
          )
        )
      )
    ),
    alu.io.out
  )
  registers.io.wen <> decoder.io.ctrl.RegWen
  //Alu in
  alu.io.ctrl.alu_op <> decoder.io.ctrl.OP
  alu.io.ctrl.csr_wen <> decoder.io.ctrl.csr_wen
  alu.io.in1 <> registers.io.rdata1
  alu.io.in2 <> registers.io.rdata2
  alu.io.imm <> decoder.io.imm
  alu.io.pc <> PC.io.pc
  alu.io.csr_index <> decoder.io.reg.csr_index
  alu.io.reg17 <> registers.io.reg17

  //top
  io.pc <> PC.io.pc
  io.ctrl <> decoder.io.ctrl
  io.rs1 <> registers.io.rdata1
  io.rs2 <> registers.io.rdata2
  io.rd <> decoder.io.reg.rd
  io.imm <> decoder.io.imm
  io.op <> decoder.io.ctrl.OP
  io.resultALU <> alu.io.out
  io.MemWen <> decoder.io.ctrl.MemWen
  io.inst <> ifu.io.inst
  io.MemLoad <> decoder.io.ctrl.MemLoad
  io.is_b <> alu.io.is_b
  io.wmask <> decoder.io.ctrl.wmask
  io.rdata <> lsu.io.rdata
  io.fmemwdata <> Mux(
    decoder.io.ctrl.MemLoad,
    Mux(
      decoder.io.ctrl.OP === ALU_LB,
      Sext(lsu.io.rdata(7, 0), 8),
      Mux(
        decoder.io.ctrl.OP === ALU_LBU,
        lsu.io.rdata(7, 0),
        Mux(
          decoder.io.ctrl.OP === ALU_LH,
          Sext(lsu.io.rdata(15, 0), 16),
          Mux(
            decoder.io.ctrl.OP === ALU_LHU,
            lsu.io.rdata(15, 0),
            Mux(
              decoder.io.ctrl.OP === ALU_LD,
              lsu.io.rdata(63, 0),
              Mux(
                decoder.io.ctrl.OP === ALU_LWU,
                lsu.io.rdata(31, 0),
                Mux(decoder.io.ctrl.OP === ALU_LW, Sext(lsu.io.rdata(31, 0), 32), alu.io.out)
              )
            )
          )
        )
      )
    ),
    alu.io.out
  )
  io.is_e <> decoder.io.ctrl.E_JUMP
  io.is_csr <> decoder.io.ctrl.csr_wen
  io.reg17 <> registers.io.reg17
  //io.wronginst <> decoder.io.ctrl.wronginst

  //IFU in
  ifu.io.pc <> PC.io.pc

  //MEM in
  lsu.io.raddr <> alu.io.out
  lsu.io.waddr <> alu.io.out
  lsu.io.wdata <> registers.io.rdata2
  lsu.io.wen <> decoder.io.ctrl.MemWen
  lsu.io.ren <> decoder.io.ctrl.MemLoad
  lsu.io.wmask <> decoder.io.ctrl.wmask

  //DPI in
  dpi.io.flag  := Mux(decoder.io.ctrl.OP === ALU_EBREAK, 1.U(32.W), 0.U(32.W))
  dpi.io.rf_0  := registers.io.regs(0)
  dpi.io.rf_1  := registers.io.regs(1)
  dpi.io.rf_2  := registers.io.regs(2)
  dpi.io.rf_3  := registers.io.regs(3)
  dpi.io.rf_4  := registers.io.regs(4)
  dpi.io.rf_5  := registers.io.regs(5)
  dpi.io.rf_6  := registers.io.regs(6)
  dpi.io.rf_7  := registers.io.regs(7)
  dpi.io.rf_8  := registers.io.regs(8)
  dpi.io.rf_9  := registers.io.regs(9)
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
  dpi.io.csr_0 := alu.io.csr_regs(0)
  dpi.io.csr_1 := alu.io.csr_regs(1)
  dpi.io.csr_2 := alu.io.csr_regs(2)
  dpi.io.csr_3 := alu.io.csr_regs(3)
  dpi.io.csr_4 := alu.io.csr_regs(4)
  dpi.io.inst  := ifu.io.inst
  dpi.io.pc    := io.pc
  dpi.io.eval  := decoder.io.eval

  //inst_mem.io.arid := axi.io.arid
  inst_mem.io.araddr := axi.io.inst_sram_addr
  inst_mem.io.arvalid := axi.io.inst_sram_addr_ok
  inst_mem.io.rready := axi.io.inst_sram_data_ok
  axi.io.inst_sram_rdata := inst_mem.io.rdata
  inst_mem.io.awaddr := 0.U
  inst_mem.io.awvalid := false.B
  inst_mem.io.wdata := 0.U
  inst_mem.io.wstrb := 0.U
  inst_mem.io.wvalid := false.B
  inst_mem.io.bready := false.B

  //data_mem.io.arid := axi.io.arid
  data_mem.io.araddr := axi.io.data_sram_addr
  data_mem.io.arvalid := axi.io.data_sram_addr_ok
  data_mem.io.rready := axi.io.data_sram_data_ok
  axi.io.data_sram_rdata := data_mem.io.rdata
  data_mem.io.awaddr := axi.io.awaddr
  data_mem.io.awvalid := axi.io.awvalid
  data_mem.io.wdata := axi.io.wdata
  data_mem.io.wstrb := axi.io.wstrb
  data_mem.io.wvalid := axi.io.wvalid
  data_mem.io.bready := axi.io.bready
}

object TopMain extends App {
  emitVerilog(new Top(), Array("--target-dir", "vsrc"))
}
