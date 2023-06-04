package rv64i
import chisel3._
import chisel3.util._

import config.Configs._
import utils._

class CSR extends Module {
  val io = IO(new Bundle {
    val wen    = Input(Bool())
    val ren    = Input(Bool())
    val wdata1 = Input(UInt(DATA_WIDTH.W))
    val wdata2 = Input(UInt(DATA_WIDTH.W))
    val rdata  = Output(UInt(DATA_WIDTH.W))
    val waddr1 = Input(UInt(REG_WIDTH.W))
    val waddr2 = Input(UInt(REG_WIDTH.W))
    val raddr  = Input(UInt(REG_WIDTH.W))
    val csrs   = Output(Vec(5, UInt(64.W)))
  })

  val csr = Mem(5, UInt(DATA_WIDTH.W))
  io.rdata := Mux(io.ren, csr(io.raddr), 0.U)

  csr(io.waddr1) := Mux(io.wen && io.waddr1 =/= 0.U, io.wdata1, csr(io.waddr1))
  csr(io.waddr2) := Mux(io.wen && io.waddr2 =/= 0.U, io.wdata2, csr(io.waddr2))
  //通过rf存储registers的值
  (0 until 5).foreach(i => io.csrs(i) := csr(i))
}
