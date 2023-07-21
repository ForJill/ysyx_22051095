package rv64i

import chisel3._
import chisel3.util._
import config.Configs._
//cache 行大小16字节(128bit)，一路4KB,offset=1bit
class icache extends Module {
  val io = IO(new Bundle {
    val valid = Input(Bool())
    //val op      = Input(UInt(1.W))
    val addr    = Input(UInt(64.W))
    val rdata   = Output(UInt(64.W))
    val addr_ok = Output(Bool())
    val data_ok = Output(Bool())
    val rd_req  = Output(Bool())
    val rd_addr = Output(UInt(32.W))
    val rd_rdy  = Input(Bool())
    val rd_data = Input(UInt(128.W))
    val inst_sram_addr_ok = Input(Bool())
    val inst_sram_data_ok = Input(Bool())
  })
  val s_idle :: s_lookup :: s_replace :: s_refill :: Nil = Enum(4)
  val state                                              = RegInit(s_idle)
  val idle                                               = state === s_idle
  val lookup                                             = state === s_lookup
  val replace                                            = state === s_replace
  val refill                                             = state === s_refill

  val hit      = Wire(Bool())
  val way0_hit = Wire(Bool())
  val way1_hit = Wire(Bool())

  val way   = WireDefault((0.U)(1.W))
  val dirty = Wire(Bool())

  val cpu_tag    = Wire(UInt(55.W))
  val cpu_index  = Wire(UInt(10.W))
  //val cpu_offset = Wire(UInt(3.W))

  val reg_rdata = RegInit(0.U(64.W))
  val delay    = RegInit(0.U(1.W))
  cpu_tag    := io.addr(63, 9)
  cpu_index  := Cat(io.addr(8, 0),0.U)
  //cpu_offset := io.addr(2,0)

  //184:V,183:D,[182,128]:TAG,[127,0]:DATA
  val cache_data = Reg(Vec(1024, UInt(185.W)))
  way0_hit := (cache_data(cpu_index)(184) === 1.U) && (cache_data(cpu_index)(182, 128) === cpu_tag)
  way1_hit := (cache_data(cpu_index + 1.U)(184) === 1.U) && (cache_data(cpu_index + 1.U)(182, 128) === cpu_tag)
  hit      := way0_hit || way1_hit
  dirty    := cache_data(cpu_index + way)(184, 183) === 3.U //V && D

  switch(state) {
    is(s_idle) {
      when(io.valid) {
        state := s_lookup
      }.otherwise {
        state := s_idle
      }
    }
    is(s_lookup) {
      when(io.valid) {
        when(hit) {
          state := s_lookup
        }.elsewhen(dirty) {
          state := s_replace
        }.otherwise {
          state := s_refill
        }
      }.otherwise {
        state := s_idle
      }
    }
    is(s_replace) {
      when(io.rd_rdy) {
        state := s_refill
      }.otherwise {
        state := s_replace
      }
    }
    is(s_refill) {
      when(io.inst_sram_data_ok) {
        state := s_lookup
      }.otherwise {
        state := s_refill
      }
    }
  }

  when(!hit) {
    way := MuxLookup(
      Cat(cache_data(cpu_index)(184), cache_data(cpu_index + 1.U)(184)),
      0.U,
      Array(
        0.U -> 0.U,
        1.U -> 0.U,
        2.U -> 1.U,
        3.U -> 1.U
      )
    )
  }

  when(lookup && hit && way0_hit) {
    //reg_rdata := MuxLookup(
    //  cpu_offset,
    //  cache_data(cpu_index)(63, 0),
    //  Array(
    //    0.U -> cache_data(cpu_index)(63, 0),
    //    4.U -> cache_data(cpu_index)(127, 64)
    //  )
    //)
    reg_rdata := cache_data(cpu_index)(63, 0)
  }

  when(lookup && hit && way1_hit) {
    //reg_rdata := MuxLookup(
    //  cpu_offset,
    //  cache_data(cpu_index + 1.U)(63, 0),
    //  Array(
    //    0.U -> cache_data(cpu_index + 1.U)(63, 0),
    //    4.U -> cache_data(cpu_index + 1.U)(127, 64)
    //  )
    //)
    reg_rdata := cache_data(cpu_index + 1.U)(63, 0)
  }

  //初始化
  when(reset.asBool()) {
    state := s_idle
    for (i <- 0 until 1024) {
      cache_data(i) := 0.U
    }
  }
  //update
  when(replace && io.inst_sram_data_ok ) {
    cache_data(cpu_index + way) := Cat(cache_data(cpu_index + way)(184),0.U, cache_data(cpu_index + way)(182, 0))
  }
  when(lookup && dirty) {
    cache_data(cpu_index + way) := Cat(cache_data(cpu_index + way)(184),1.U, cache_data(cpu_index + way)(182, 0))
  }
  when(refill && io.inst_sram_data_ok ) {
    cache_data(cpu_index + way) := Cat(1.U, cache_data(cpu_index + way)(183), cpu_tag, io.rd_data)
  }

  when(replace || refill) {
    io.rd_addr := io.addr
  }.otherwise {
    io.rd_addr := DontCare
  }

  when(refill) {
    io.rd_req := true.B
  }.otherwise(
    io.rd_req := false.B
  )

  io.addr_ok := lookup && hit
  io.data_ok := delay.asBool
  when(io.addr_ok){
    delay := 1.U
  }.otherwise{
    delay := 0.U
  }
  when(io.data_ok){
    io.rdata := reg_rdata
  }.otherwise{
    io.rdata := DontCare
  }




}
