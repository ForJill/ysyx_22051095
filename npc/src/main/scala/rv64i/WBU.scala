package rv64i

import chisel3._
import chisel3.util._
import config.Configs._
import utils._

class WBU extends Module {
  val io = IO(new Bundle {
    val ws_allowin     = Output(Bool())
    val ms_to_ws_valid = Input(Bool())
    val mw_bus         = Flipped(new mw_bus)
    val rf_bus         = Output(new rf_bus)
    val wf_bus         = Output(new wf_bus)
    val in_WB          = Output(Bool())
    val ws_dest_valid  = Output(new (ws_dest_valid))
    val wb_pc          = Output(UInt(DATA_WIDTH.W))
    val wb_inst        = Output(UInt(DATA_WIDTH.W))
  })

  val ws_valid    = RegInit(false.B)
  val mw_bus_r    = RegInit(0.U.asTypeOf(new mw_bus))

  val ws_ready_go   = true.B
  io.ws_allowin := !ws_valid || ws_ready_go
  io.in_WB      := ws_valid

  val rf_we    = WireDefault(0.U(1.W))
  val rf_waddr = WireDefault(0.U(5.W))
  val rf_wdata = WireDefault(0.U(DATA_WIDTH.W))
  val csrs     = Wire(Vec(5, UInt(DATA_WIDTH.W)))
  val regs         = Wire(Vec(32, UInt(DATA_WIDTH.W)))

  when(io.ws_allowin) {
    ws_valid := io.ms_to_ws_valid
  }

  when(io.ms_to_ws_valid && io.ws_allowin) {
    mw_bus_r := io.mw_bus
  }

  regs         := mw_bus_r.regs
  csrs         := mw_bus_r.csrs

  rf_we    := mw_bus_r.gr_we & ws_valid
  rf_waddr := mw_bus_r.dest
  rf_wdata := mw_bus_r.final_result

  io.rf_bus.rf_we    := rf_we
  io.rf_bus.rf_waddr := rf_waddr
  io.rf_bus.rf_wdata := rf_wdata
  io.rf_bus.wb_pc   := mw_bus_r.mem_pc
  io.rf_bus.wb_inst := mw_bus_r.inst
  io.rf_bus.eval    := mw_bus_r.eval
  io.wb_pc           := mw_bus_r.mem_pc
  io.wb_inst         := mw_bus_r.inst
  io.rf_bus.csr_wdata := mw_bus_r.csr_wdata
  io.rf_bus.csr_wen := mw_bus_r.csr_wen
  io.rf_bus.csr_ren := mw_bus_r.csr_ren
  io.rf_bus.csr_waddr1 := mw_bus_r.csr_waddr1
  io.rf_bus.csr_waddr2 := mw_bus_r.csr_waddr2
  io.rf_bus.csr_raddr := mw_bus_r.csr_raddr
  io.rf_bus.mret      := mw_bus_r.mret
  io.rf_bus.csr_rdata := mw_bus_r.csr_rdata
  

  io.wf_bus.ws_valid    := ws_valid
  io.wf_bus.ws_ex      := mw_bus_r.ms_ex
  io.wf_bus.mret      := mw_bus_r.mret

  io.ws_dest_valid.ws_valid        := ws_valid
  io.ws_dest_valid.gr_we           := mw_bus_r.gr_we
  io.ws_dest_valid.dest            := mw_bus_r.dest
  io.ws_dest_valid.ws_forward_data := mw_bus_r.final_result

  //val dpi = Module(new DPI)
  //dpi.io.rf_0  := regs(0)
  //dpi.io.rf_1  := regs(1)
  //dpi.io.rf_2  := regs(2)
  //dpi.io.rf_3  := regs(3)
  //dpi.io.rf_4  := regs(4)
  //dpi.io.rf_5  := regs(5)
  //dpi.io.rf_6  := regs(6)
  //dpi.io.rf_7  := regs(7)
  //dpi.io.rf_8  := regs(8)
  //dpi.io.rf_9  := regs(9)
  //dpi.io.rf_10 := regs(10)
  //dpi.io.rf_11 := regs(11)
  //dpi.io.rf_12 := regs(12)
  //dpi.io.rf_13 := regs(13)
  //dpi.io.rf_14 := regs(14)
  //dpi.io.rf_15 := regs(15)
  //dpi.io.rf_16 := regs(16)
  //dpi.io.rf_17 := regs(17)
  //dpi.io.rf_18 := regs(18)
  //dpi.io.rf_19 := regs(19)
  //dpi.io.rf_20 := regs(20)
  //dpi.io.rf_21 := regs(21)
  //dpi.io.rf_22 := regs(22)
  //dpi.io.rf_23 := regs(23)
  //dpi.io.rf_24 := regs(24)
  //dpi.io.rf_25 := regs(25)
  //dpi.io.rf_26 := regs(26)
  //dpi.io.rf_27 := regs(27)
  //dpi.io.rf_28 := regs(28)
  //dpi.io.rf_29 := regs(29)
  //dpi.io.rf_30 := regs(30)
  //dpi.io.rf_31 := regs(31)
  //dpi.io.inst  := mw_bus_r.inst
  //dpi.io.pc    := mw_bus_r.mem_pc
  //dpi.io.csr_0 := csrs(0)
  //dpi.io.csr_1 := csrs(1)
  //dpi.io.csr_2 := csrs(2)
  //dpi.io.csr_3 := csrs(3)
  //dpi.io.csr_4 := csrs(4)
  //dpi.io.eval  := mw_bus_r.eval
}
