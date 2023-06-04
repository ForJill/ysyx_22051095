package rv64i
import chisel3._
import utils._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.BoringUtils

import config.Configs._
import config.OP._

class Top extends Module {
  val io = IO(new Bundle {
    val fs_pc      = Output(UInt(32.W))
    val op      = Output(UInt(7.W))
    val in_WB   = Output(Bool())
    val wb_pc   = Output(UInt(32.W))
    val wb_inst = Output(UInt(32.W))
    val ds_pc   = Output(UInt(32.W))
    val clock   = Input(UInt(1.W))
    val mem_result = Output(UInt(64.W))
    val ld_type = Output(UInt(3.W))
  })

  val ifu = Module(new IFU)
  val idu = Module(new IDU)
  val exu = Module(new EXU)
  val mem = Module(new MEM)
  val wbu = Module(new WBU)
  val dpi = Module(new DPI)

  // IFU
  val inst_mem = Module(new memory)
  ifu.io.ds_allowin <> idu.io.ds_allowin
  ifu.io.br_bus <> idu.io.br_bus
  ifu.io.inst_sram_rdata <> inst_mem.io.rdata

  ifu.io.wf_bus <> wbu.io.wf_bus

  //inst_mem.io.clock <> io.clock
  inst_mem.io.raddr <> ifu.io.inst_sram_addr
  inst_mem.io.wdata <> ifu.io.inst_sram_wdata
  inst_mem.io.ren <> ifu.io.inst_sram_en

  // IDU
  idu.io.es_allowin <> exu.io.es_allowin
  idu.io.fs_to_ds_valid <> ifu.io.fs_to_ds_valid
  idu.io.fd_bus <> ifu.io.fd_bus
  idu.io.rf_bus <> wbu.io.rf_bus
  idu.io.es_dest_valid <> exu.io.es_dest_valid
  idu.io.ms_dest_valid <> mem.io.ms_dest_valid
  idu.io.ws_dest_valid <> wbu.io.ws_dest_valid

  // EXU
  val data_sram = Module(new memory)
  exu.io.ms_allowin <> mem.io.ms_allowin
  exu.io.ds_to_es_valid <> idu.io.ds_to_es_valid
  exu.io.de_bus <> idu.io.de_bus

  // MEM
  mem.io.ws_allowin <> wbu.io.ws_allowin
  mem.io.es_to_ms_valid <> exu.io.es_to_ms_valid
  mem.io.em_bus <> exu.io.em_bus
  mem.io.data_sram_rdata <> data_sram.io.rdata

    //data_sram.io.clock <> io.clock
  data_sram.io.waddr <> mem.io.data_sram_addr
  data_sram.io.wdata <> mem.io.data_sram_wdata
  data_sram.io.ren <> mem.io.data_sram_en
  data_sram.io.wen <> mem.io.data_sram_we
  data_sram.io.raddr <> mem.io.data_sram_addr
  data_sram.io.wmask <> mem.io.data_sram_wmask

  // WBU
  wbu.io.ms_to_ws_valid <> mem.io.ms_to_ws_valid
  wbu.io.mw_bus <> mem.io.mw_bus

  // Top
  io.fs_pc   := ifu.io.fd_bus.pc
  io.op      := idu.io.de_bus.OP
  io.in_WB   := wbu.io.in_WB
  io.wb_pc   := wbu.io.wb_pc
  io.wb_inst := wbu.io.wb_inst
  io.ds_pc   := idu.io.de_bus.ds_pc
  io.mem_result := mem.io.mem_result
  io.ld_type := mem.io.ld_type
}

object TopMain extends App {
  emitVerilog(new Top(), Array("--target-dir", "vsrc"))
}
