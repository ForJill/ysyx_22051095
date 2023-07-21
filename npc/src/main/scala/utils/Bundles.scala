package utils

import chisel3._
import chisel3.util._
import config.Configs._

//br_bus
class br_bus extends Bundle {
  val br_taken = Output(Bool())
  val br_target = Output(UInt(32.W))
  val br_taken_cancel = Output(Bool())
  val rawblock = Output(Bool())
  val csr_rdata = Output(UInt(DATA_WIDTH.W))
  val eval = Output(Bool())
  val mret = Output(Bool())
}

//fs_to_ds_bus
class fd_bus extends Bundle {
  val inst = Output(UInt(32.W))
  val pc = Output(UInt(32.W))
  val fs_ex = Output(Bool())
}

//ds_to_es_bus
class de_bus extends Bundle {
  val OP = Output(UInt(8.W))
  val res_from_mem = Output(Bool())
  //val src1_is_pc = Output(Bool())
  //val src2_is_imm = Output(Bool())
  val gr_we = Output(Bool())
  val MemWen = Output(Bool())
  val J_JUMP = Output(Bool())
  val wmask = Output(UInt(8.W))
  val E_JUMP = Output(Bool())
  val ds_pc = Output(UInt(32.W))
  val dest = Output(UInt(5.W))
  val imm  = Output(UInt(DATA_WIDTH.W))
  //val eval = Output(Bool())
  val rdata1 = Output(UInt(DATA_WIDTH.W))
  val rdata2 = Output(UInt(DATA_WIDTH.W))
  val ld_type = Output(UInt(3.W))
  val inst   = Output(UInt(32.W))
  val regs   = Output(Vec(32, UInt(DATA_WIDTH.W)))
  val csr_rdata = Output(UInt(DATA_WIDTH.W))
  val csr_waddr1 = Output(UInt(3.W))
  val csr_waddr2 = Output(UInt(3.W))
  val csr_raddr = Output(UInt(3.W))
  val csr_ren = Output(Bool())
  val csr_wen = Output(Bool())
  val ds_ex = Output(Bool())
  val eval = Output(Bool())
  val mret = Output(Bool())
  val csrs = Output(Vec(5, UInt(DATA_WIDTH.W)))
  val is_ld = Output(Bool())
  //val is_csr = Output(Bool())
  //val reg17 = Output(UInt(DATA_WIDTH.W))
}

//rf_bus
class rf_bus extends Bundle {
  val rf_we = Output(Bool())
  val rf_waddr = Output(UInt(5.W))
  val rf_wdata = Output(UInt(64.W))
  val wb_pc = Output(UInt(32.W))
  val wb_inst = Output(UInt(32.W))
  val csr_wdata = Output(UInt(DATA_WIDTH.W))
  val csr_wen = Output(Bool())
  val csr_waddr1 = Output(UInt(3.W))
  val csr_waddr2 = Output(UInt(3.W))
  val csr_raddr = Output(UInt(3.W))
  val csr_ren = Output(Bool())
  val csr_rdata = Output(UInt(DATA_WIDTH.W))
  val eval = Output(Bool())
  val mret = Output(Bool())
}

//em_bus
class em_bus extends Bundle{
  val res_from_mem = Output(Bool())
  val gr_we = Output(Bool())
  val dest = Output(UInt(5.W))
  val alu_result = Output(UInt(DATA_WIDTH.W))
  val ex_pc = Output(UInt(32.W))
  val ld_type = Output(UInt(3.W))
  val inst   = Output(UInt(32.W))
  val regs   = Output(Vec(32, UInt(DATA_WIDTH.W)))
  val csr_wdata = Output(UInt(DATA_WIDTH.W))
  val csr_wen = Output(Bool())
  val csr_waddr1 = Output(UInt(3.W))
  val csr_waddr2 = Output(UInt(3.W))
  val csr_raddr = Output(UInt(3.W))
  val csr_ren = Output(Bool())
  val csr_rdata = Output(UInt(DATA_WIDTH.W))
  val es_ex = Output(Bool())
  val eval = Output(Bool())
  val mret = Output(Bool())
  val csrs = Output(Vec(5, UInt(DATA_WIDTH.W)))
  val is_ld = Output(Bool())
  val MemWen = Output(Bool())
  val Memwdata = Output(UInt(DATA_WIDTH.W))
  val wmask = Output(UInt(8.W))
  //val is_csr = Output(Bool())
}

//mw_bus
class mw_bus extends Bundle{
  val gr_we = Output(Bool())
  val dest = Output(UInt(5.W))
  val final_result = Output(UInt(DATA_WIDTH.W))
  val mem_pc = Output(UInt(32.W))
  val inst   = Output(UInt(32.W))
  val regs   = Output(Vec(32, UInt(DATA_WIDTH.W)))
  val csr_wdata = Output(UInt(DATA_WIDTH.W))
  val csr_wen = Output(Bool())
  val csr_waddr1 = Output(UInt(3.W))
  val csr_waddr2 = Output(UInt(3.W))
  val csr_raddr = Output(UInt(3.W))
  val csr_ren = Output(Bool())
  val csr_rdata = Output(UInt(DATA_WIDTH.W))
  val ms_ex = Output(Bool())
  val eval = Output(Bool())
  val mret = Output(Bool())
  val csrs = Output(Vec(5, UInt(DATA_WIDTH.W)))
}

class wf_bus extends Bundle{
  val ws_ex = Output(Bool())
  val ws_valid = Output(Bool())
  val mret = Output(Bool())
}

class ms_dest_valid extends Bundle{
  val gr_we = Output(Bool())
  val ms_valid = Output(Bool())
  val dest = Output(UInt(5.W))
  val ms_forward_data = Output(UInt(DATA_WIDTH.W))
  val ms_is_ld = Output(Bool())
  val ms_to_ws_valid = Output(Bool())
  val ms_ready_go = Output(Bool())
}

class es_dest_valid extends Bundle{
  val gr_we = Output(Bool())
  val es_valid = Output(Bool())
  val dest = Output(UInt(5.W))
  val es_forward_data = Output(UInt(DATA_WIDTH.W))
  val es_is_ld = Output(Bool())
  val es_ready_go = Output(Bool())
  val es_to_ms_valid = Output(Bool())
}

class ws_dest_valid extends Bundle{
  val gr_we = Output(Bool())
  val ws_valid = Output(Bool())
  val dest = Output(UInt(5.W))
  val ws_forward_data = Output(UInt(DATA_WIDTH.W))
}