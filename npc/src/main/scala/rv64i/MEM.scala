package rv64i

import chisel3._
import chisel3.util._
import utils._
import config.Configs._
class MEM extends Module {
  val io = IO(new Bundle {
    val ws_allowin        = Input(Bool())
    val ms_allowin        = Output(Bool())
    val es_to_ms_valid    = Input(Bool())
    val ms_to_ws_valid    = Output(Bool())
    val em_bus            = Flipped(new em_bus)
    val mw_bus            = Output(new mw_bus)
    val ms_dest_valid     = Output(new (ms_dest_valid))
    val data_sram_rdata   = Input(UInt(64.W))
    val mem_result        = Output(UInt(64.W))
    val ld_type           = Output(UInt(3.W))
    val data_sram_data_ok = Input(Bool())
  })

  def Sext(x: UInt, n: Int): UInt = Cat(Fill(64 - n, x(n - 1)), x)

  val ms_valid    = RegInit(false.B)
  val ms_ready_go = Wire(Bool())
  val em_bus_r    = RegInit(0.U.asTypeOf(new em_bus))

  ms_ready_go       := Mux(em_bus_r.res_from_mem || em_bus_r.MemWen, (io.data_sram_data_ok),true.B)
  io.ms_allowin     := !ms_valid || ms_ready_go && io.ws_allowin
  io.ms_to_ws_valid := ms_valid && ms_ready_go

  when(io.ms_allowin) {
    ms_valid := io.es_to_ms_valid
  }

  when(io.es_to_ms_valid && io.ms_allowin) {
    em_bus_r := io.em_bus
  }

  val res_from_mem          = em_bus_r.res_from_mem
  val gr_we                 = em_bus_r.gr_we
  val dest                  = em_bus_r.dest
  val alu_result            = em_bus_r.alu_result
  val mem_pc                = em_bus_r.ex_pc
  val final_result          = WireDefault(0.U(DATA_WIDTH.W))
  val data_sram_rdata_valid = WireDefault(false.B)
  val data_sram_rdata_R     = RegInit(0.U(64.W))
  val final_data_sram_rdata = WireDefault(0.U(64.W))

  when(!io.ws_allowin && io.data_sram_data_ok) {
    data_sram_rdata_R := io.data_sram_rdata
  }

  when(!io.ws_allowin && io.data_sram_data_ok) {
    data_sram_rdata_valid := true.B
  }.elsewhen(ms_ready_go && io.ms_allowin) {
    data_sram_rdata_valid := false.B
  }

  final_data_sram_rdata := Mux(data_sram_rdata_valid, data_sram_rdata_R,io.data_sram_rdata) //Mux(data_sram_rdata_valid === 1.U, data_sram_rdata_R, io.data_sram_rdata)

  io.mem_result := MuxLookup(
    io.ld_type,
    final_data_sram_rdata,
    Array(
      0.U -> Sext(final_data_sram_rdata(7, 0), 8),
      1.U -> Sext(final_data_sram_rdata(15, 0), 16),
      2.U -> Sext(final_data_sram_rdata(31, 0), 32),
      3.U -> final_data_sram_rdata(63, 0),
      4.U -> final_data_sram_rdata(7, 0),
      5.U -> final_data_sram_rdata(15, 0),
      6.U -> final_data_sram_rdata(31, 0)
    )
  )

  final_result                     := Mux(res_from_mem === 1.U, io.mem_result, alu_result)
  io.ms_dest_valid.ms_forward_data := final_result

  io.ms_dest_valid.gr_we    := gr_we
  io.ms_dest_valid.dest     := dest
  io.ms_dest_valid.ms_valid := ms_valid
  io.ms_dest_valid.ms_is_ld := io.em_bus.is_ld

  io.mw_bus.gr_we        := gr_we
  io.mw_bus.dest         := dest
  io.mw_bus.final_result := final_result
  io.mw_bus.mem_pc       := mem_pc
  io.mw_bus.inst         := em_bus_r.inst
  io.mw_bus.regs         := em_bus_r.regs
  io.mw_bus.csr_wdata    := em_bus_r.csr_wdata
  io.mw_bus.csr_wen      := em_bus_r.csr_wen
  io.mw_bus.csr_waddr1   := em_bus_r.csr_waddr1
  io.mw_bus.csr_waddr2   := em_bus_r.csr_waddr2
  io.mw_bus.csr_raddr    := em_bus_r.csr_raddr
  io.mw_bus.csr_ren      := em_bus_r.csr_ren
  io.mw_bus.eval         := em_bus_r.eval
  io.mw_bus.ms_ex        := em_bus_r.es_ex
  io.mw_bus.mret         := em_bus_r.mret
  io.mw_bus.csrs         := em_bus_r.csrs
  io.mw_bus.csr_rdata    := em_bus_r.csr_rdata
  io.ld_type             := em_bus_r.ld_type
}
