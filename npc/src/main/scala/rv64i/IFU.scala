package rv64i

import chisel3._
import chisel3.util._
import config.Configs._
import utils._

class IFU extends Module {
  val io = IO(new Bundle {
    val fd_bus            = Output(new fd_bus())
    val ds_allowin        = Input(Bool())
    val fs_to_ds_valid    = Output(Bool())
    val br_bus            = Flipped(new br_bus)
    val wf_bus            = Flipped(new wf_bus)
    val inst_sram_req     = Output(Bool())
    val inst_sram_wr      = Output(Bool())
    val inst_sram_addr    = Output(UInt(64.W))
    val inst_sram_rdata   = Input(UInt(64.W))
    val inst_sram_addr_ok = Input(Bool())
    val inst_sram_data_ok = Input(Bool())
  })
  val fs_valid    = RegInit(false.B)
  val fs_ready_go = Wire(Bool())
  val fs_allow_in = Wire(Bool())
  val to_fs_valid = Wire(Bool())
  val prefs_ready_go = Wire(Bool())

  val fs_inst = RegInit(0.U(32.W))
  val fs_pc   = RegInit(START_ADDR.U(ADDR_WIDTH.W))
  io.fd_bus.inst  := fs_inst
  io.fd_bus.pc    := fs_pc
  io.fd_bus.fs_ex := false.B
  prefs_ready_go  := io.inst_sram_req && io.inst_sram_addr_ok

  val br_taken        = Wire(Bool())
  val br_target       = Wire(UInt(32.W))
  val br_taken_cancel = Wire(Bool())
  val eval            = Wire(Bool())
  val mret            = Wire(Bool())
  val csr_rdata       = Wire(UInt(64.W))
  br_taken        := io.br_bus.br_taken
  br_target       := io.br_bus.br_target
  br_taken_cancel := io.br_bus.br_taken_cancel
  eval            := io.br_bus.eval
  mret            := io.br_bus.mret
  csr_rdata       := io.br_bus.csr_rdata

  val seq_pc = Wire(UInt(32.W))
  val nextpc = Wire(UInt(32.W))

  seq_pc := fs_pc + 4.U
  nextpc := Mux(eval, csr_rdata, Mux(mret, csr_rdata + 4.U, Mux(br_taken, br_target, seq_pc)))

  to_fs_valid       := true.B//prefs_ready_go
  fs_ready_go       := io.inst_sram_data_ok
  fs_allow_in       := !fs_valid || fs_ready_go && io.ds_allowin
  io.fs_to_ds_valid := fs_valid && fs_ready_go
//目前未接入总线，ram总是能一拍返回
  when(fs_allow_in) {
    fs_valid := to_fs_valid
  }.elsewhen(br_taken_cancel) {
    fs_valid := false.B
  }

  when(fs_allow_in && prefs_ready_go) {
    fs_pc := nextpc
  }

  val mid_handshake_inst = RegInit(false.B)
  when(io.inst_sram_data_ok) {
    mid_handshake_inst := false.B
  }.elsewhen(io.inst_sram_addr_ok && io.inst_sram_req) {
    mid_handshake_inst := true.B
  }

  io.inst_sram_req   := fs_allow_in && !io.br_bus.rawblock && !mid_handshake_inst
  io.inst_sram_wr    := 0.U
  io.inst_sram_addr  := fs_pc

  when(fs_ready_go && !io.ds_allowin && io.inst_sram_data_ok) {
    fs_inst := io.inst_sram_rdata(31, 0)
  }
}
