package rv64i

import chisel3._
import chisel3.util._
import config.Configs._
import utils._

class IFU extends Module {
  val io = IO(new Bundle {
    val reset             = Input(UInt(1.W))
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
  val fs_valid           = RegInit(false.B)
  val fs_ready_go        = Wire(Bool())
  val fs_allow_in        = Wire(Bool())
  val to_fs_valid        = Wire(Bool())
  val prefs_ready_go     = Wire(Bool())
  val mid_handshake_inst = RegInit(false.B)
  val inst_valid         = RegInit(false.B)
  val fs_inst            = RegInit(0.U(32.W))
  val fs_pc              = RegInit(START_ADDR.U(ADDR_WIDTH.W))
  val next_pc_R          = RegInit(START_ADDR.U(ADDR_WIDTH.W))
  val br_taken_R         = RegInit(false.B)
  val ex_taken_R         = RegInit(false.B)
  val final_next_pc      = Wire(UInt(32.W))
  io.fd_bus.inst  := Mux(inst_valid, fs_inst, io.inst_sram_rdata(31, 0))
  io.fd_bus.pc    := fs_pc
  io.fd_bus.fs_ex := false.B
  prefs_ready_go  := io.inst_sram_req && io.inst_sram_addr_ok

  val br_taken        = Wire(Bool())
  val br_target       = Wire(UInt(32.W))
  val br_taken_cancel = Wire(Bool())
  val eval            = Wire(Bool())
  val mret            = Wire(Bool())
  val csr_rdata       = Wire(UInt(64.W))
  val seq_pc          = Wire(UInt(32.W))
  val nextpc          = Wire(UInt(32.W))

  br_taken        := io.br_bus.br_taken
  br_target       := io.br_bus.br_target
  br_taken_cancel := io.br_bus.br_taken_cancel
  eval            := io.br_bus.eval
  mret            := io.br_bus.mret
  csr_rdata       := io.br_bus.csr_rdata

  when(br_taken || mret || eval) {
    next_pc_R := nextpc
  }

  when(br_taken_R && io.inst_sram_req && io.inst_sram_addr_ok && fs_allow_in) {
    br_taken_R := false.B

  }.elsewhen(~(io.inst_sram_req && io.inst_sram_addr_ok) && br_taken) {
    br_taken_R := true.B
  }

  when(ex_taken_R && io.inst_sram_req && io.inst_sram_addr_ok && fs_allow_in) {
    ex_taken_R := false.B

  }.elsewhen(~(io.inst_sram_req && io.inst_sram_addr_ok) && (mret || eval)) {
    ex_taken_R := true.B
  }

  seq_pc        := fs_pc + 4.U
  nextpc        := Mux(eval, csr_rdata, Mux(mret, csr_rdata + 4.U, Mux(br_taken, br_target, seq_pc)))
  final_next_pc := Mux(br_taken_R || ex_taken_R, next_pc_R, nextpc)

  to_fs_valid       := !io.reset && prefs_ready_go
  fs_ready_go       := io.inst_sram_data_ok || inst_valid
  fs_allow_in       := !fs_valid || fs_ready_go && io.ds_allowin
  io.fs_to_ds_valid := fs_valid && fs_ready_go && !br_taken
//目前未接入总线，ram总是能一拍返回
  when(fs_allow_in) {
    fs_valid := to_fs_valid
  }

  when(fs_allow_in && io.inst_sram_addr_ok) {
    fs_pc := final_next_pc
  }

  when(io.inst_sram_data_ok) {
    mid_handshake_inst := false.B
  }.elsewhen(io.inst_sram_addr_ok && io.inst_sram_req && !fs_allow_in) {
    mid_handshake_inst := true.B
  }.elsewhen(fs_allow_in) {
    mid_handshake_inst := false.B
  }

  when(fs_ready_go && io.ds_allowin) {
    inst_valid := false.B
  }.elsewhen(io.inst_sram_data_ok && !io.ds_allowin) {
    inst_valid := true.B
  }

  io.inst_sram_req  := !io.reset && fs_allow_in && !io.br_bus.rawblock && !mid_handshake_inst
  io.inst_sram_wr   := 0.U
  io.inst_sram_addr := final_next_pc

  when(fs_ready_go && !io.ds_allowin && io.inst_sram_data_ok) {
    fs_inst := io.inst_sram_rdata(31, 0)
  }
}
