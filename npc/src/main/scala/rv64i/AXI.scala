package rv64i

import chisel3._
import chisel3.util._
import config.Configs._

class AXI extends Module {
  val io = IO(new Bundle {
    //读请求通道
    val arid    = Output(UInt(4.W))//0:inst_sram 1:data_sram 2:其他
    val araddr  = Output(UInt(64.W))
    //val arsize  = Output(UInt(3.W))
    val arvalid = Output(Bool())
    val arready = Input(Bool())

    //读响应通道
    //val rid    = Input(UInt(4.W))
    val rdata  = Input(UInt(64.W))
    //val rresp  = Input(UInt(2.W))
    val rvalid = Input(Bool())
    val rready = Output(Bool())

    //写请求通道
    val awid    = Output(UInt(4.W))
    val awaddr  = Output(UInt(64.W))
    //val awlen   = Output(UInt(8.W))
    //val awsize  = Output(UInt(3.W))
    //val awburst = Output(UInt(2.W))
    //val awlock  = Output(UInt(1.W))
    //val awcache = Output(UInt(4.W))
    //val awprot  = Output(UInt(3.W))
    val awvalid = Output(Bool())
    val awready = Input(Bool())

    //写数据通道
    //val wid    = Output(UInt(4.W))
    val wdata  = Output(UInt(64.W))
    val wstrb  = Output(UInt(8.W))
    //val wlast  = Output(Bool())
    val wvalid = Output(Bool())
    val wready = Input(Bool())

    //写响应通道
    //val bid    = Input(UInt(4.W))
    //val bresp  = Input(UInt(2.W))
    val bvalid = Input(Bool())
    val bready = Output(Bool())

    //指令内存通道
    val inst_sram_req     = Input(Bool())
    val inst_sram_wr      = Input(Bool())
    val inst_sram_addr    = Input(UInt(64.W))
    val inst_sram_rdata   = Output(UInt(64.W))
    val inst_sram_addr_ok = Output(Bool())
    val inst_sram_data_ok = Output(Bool())

    //数据内存通道
    val data_sram_req     = Input(Bool())
    val data_sram_wr      = Input(Bool())
    val data_sram_wstrb   = Input(UInt(8.W))
    val data_sram_addr    = Input(UInt(64.W))
    val data_sram_wdata   = Input(UInt(64.W))
    val data_sram_rdata   = Output(UInt(64.W))
    val data_sram_addr_ok = Output(Bool())
    val data_sram_data_ok = Output(Bool())
  })

  /*-----------------状态机相关信号的定义和赋值-----------------*/
  //读事务状态机相关信号
  val sIdle :: sReadAddr :: sReadData :: Nil = Enum(3)
  val rstate                                 = RegInit(sIdle)

  val read_ainit  = (rstate === sIdle).asBool
  val read_araddr = (rstate === sReadAddr).asBool
  val read_rdata  = (rstate === sReadData).asBool

  val reading_inst_sram = RegInit(false.B)
  val reading_data_sram = RegInit(false.B)

  val rdata_R = RegInit(0.U(64.W))

  //写事务状态机相关信号
  val sWriteIdle :: sWriteAddr :: sWriteData :: sWriteResp :: Nil = Enum(4)
  val wstate                                                      = RegInit(sWriteIdle)

  val write_init = (wstate === sWriteIdle).asBool
  val write_addr = (wstate === sWriteAddr).asBool
  val write_data = (wstate === sWriteData).asBool
  val write_resp = (wstate === sWriteResp).asBool

  val writing_data_sram = RegInit(0.U(2.W))

  /*-----------------读请求通道状态机-----------------*/
  switch(rstate) {
    is(sIdle) {
      when(((io.data_sram_req && !io.data_sram_wr) || (io.inst_sram_req && !io.inst_sram_wr)) && write_init) {
        rstate := sReadAddr
      }.otherwise {
        rstate := sIdle
      }
    }
    is(sReadAddr) {
      when(io.arready) {
        rstate := sReadData
      }.otherwise {
        rstate := sReadAddr
      }
    }
    is(sReadData) {
      when(io.rvalid) {
        rstate := sIdle
      }.otherwise{
        rstate := sReadData
      }
    }
  }
  //表示正在处理读指令事务，不允许其他操作,取数据优先级比取指令高
  when(!io.data_sram_req && io.inst_sram_req && !io.inst_sram_wr && write_init && read_ainit) {
    reading_inst_sram := true.B
  }.elsewhen(read_rdata && io.rvalid && io.rready) {
    reading_inst_sram := false.B
  }.otherwise {
    reading_inst_sram := reading_inst_sram
  }

  //表示正在处理读数据事务，不允许其他操作
  when(io.data_sram_req && !io.data_sram_wr && write_init && read_ainit) {
    reading_data_sram := true.B
  }.elsewhen(read_rdata && io.rvalid && io.rready) {
    reading_data_sram := false.B
  }

  //读事务输出信号赋值
  io.arid    := Mux(read_araddr && reading_data_sram, 1.U, Mux(read_araddr && reading_inst_sram, 0.U, 2.U))
  io.arvalid := read_araddr
  io.araddr := Mux(
    read_araddr && reading_data_sram,
    io.data_sram_addr,
    Mux(read_araddr && reading_inst_sram, io.inst_sram_addr, 0.U)
  )
  io.rready := read_rdata

  /*-----------------写请求通道状态机-----------------*/
  switch(wstate) {
    is(sWriteIdle) {
      when((io.data_sram_req && io.data_sram_wr)) {
        wstate := sWriteAddr
      }.otherwise {
        wstate := sWriteIdle
      }
    }
    is(sWriteAddr) {
      when(io.awready) {
        wstate := sWriteData
      }.otherwise {
        wstate := sWriteAddr
      }
    }
    is(sWriteData) {
      when(io.wready) {
        wstate := sWriteResp
      }.otherwise {
        wstate := sWriteData
      }
    }
    is(sWriteResp) {
      when(io.bvalid) {
        wstate := sWriteIdle
      }
    }
  }

  //表示正在处理写数据事务，不允许其他操作
  when((writing_data_sram == 2.U).asBool) {
    writing_data_sram := 0.U
  }.elsewhen(io.awready || io.wready) {
    writing_data_sram := writing_data_sram + 1.U
  }

  //写事务输出信号赋值
  io.awid    := 1.U
  io.awvalid := write_addr
  io.awaddr  := Mux(write_addr, io.data_sram_addr, 0.U)

  io.wvalid := write_data
  io.wdata  := Mux(write_data, io.data_sram_wdata, 0.U)
  io.wstrb  := Mux(write_data, io.data_sram_wstrb, 0.U)
  io.bready := write_resp

  /*----------------返回CPU的信号-----------------*/
  io.inst_sram_addr_ok := reading_inst_sram && io.arready
  io.data_sram_addr_ok := reading_data_sram && io.arready || writing_data_sram === 2.U
  io.inst_sram_data_ok := reading_inst_sram && io.rvalid
  io.data_sram_data_ok := reading_data_sram && io.rvalid || io.bvalid
  io.inst_sram_rdata   := io.rdata
  io.data_sram_rdata   := io.rdata
}
