package rv64i

import chisel3._
import chisel3.util._
import config.Configs._

class Cache extends Module {
  val io = IO(new Bundle {
    //interact with CPU
    val valid  = Input(Bool())
    val op     = Input(UInt(1.W))
    val index  = Input(UInt(8.W))
    val tag    = Input(UInt(20.W))
    val offset = Input(UInt(4.W))
    //val wstrb   = Input(UInt(4.W))
    //val wdata   = Input(UInt(64.W))
    val rdata   = Output(UInt(64.W))
    val addr_ok = Output(Bool())
    val data_ok = Output(Bool())

    //interact with AXI
    val rd_req    = Output(Bool())
    val rd_type   = Output(UInt(3.W))
    val rd_addr   = Output(UInt(64.W))
    val rd_rdy    = Input(Bool())
    val ret_valid = Input(Bool())
    val ret_last  = Input(Bool())
    val ret_data  = Input(UInt(64.W))
    val wr_rdy    = Input(Bool())
    val wr_req    = Output(Bool())
    val wr_type   = Output(UInt(3.W))
    val wr_addr   = Output(UInt(64.W))
    val wr_wstrb  = Output(UInt(4.W))
    val wr_data   = Output(UInt(64.W))
  })
  /*---------------------------状态机相关信号的定义和赋值------------------------------*/
//主状态机状态定义
  val s_idle :: s_lookup :: s_miss :: s_replace :: s_refill :: Nil = Enum(5)
  val state                                                        = RegInit(s_idle)

  val idle    = (state === s_idle).asBool
  val lookup  = (state === s_lookup).asBool
  val miss    = (state === s_miss).asBool
  val replace = (state === s_replace).asBool
  val refill  = (state === s_refill).asBool

//Write Buffer状态机的状态变量
  val s_wr_idle :: s_wr_write :: Nil = Enum(2)
  val wr_state                       = RegInit(s_wr_idle)
  val wr_idle                        = (wr_state === s_wr_idle).asBool
  val wr_write                       = (wr_state === s_wr_write).asBool

  /*-----------------cache RAM相关信号的定义和赋值-----------------*/

  val D_way0      = RegInit(0.U(256.W))
  val D_way1      = RegInit(0.U(256.W))
  val dirty_index = RegInit(0.U(8.W))

  val tag_way0_addr    = WireDefault(0.U(8.W))
  val tag_way0_wdata   = WireDefault(0.U(21.W))
  val tag_way0_rdata   = WireDefault(0.U(21.W))
  val tag_way0_wen     = WireDefault(false.B)
  val bank0_way0_addr  = WireDefault(0.U(8.W))
  val bank0_way0_wdata = WireDefault(0.U(64.W))
  val bank0_way0_rdata = WireDefault(0.U(64.W))
  val bank0_way0_wen   = WireDefault(0.U(4.W))
  val bank1_way0_addr  = WireDefault(0.U(8.W))
  val bank1_way0_wdata = WireDefault(0.U(64.W))
  val bank1_way0_rdata = WireDefault(0.U(64.W))
  val bank1_way0_wen   = WireDefault(0.U(4.W))
  val bank2_way0_addr  = WireDefault(0.U(8.W))
  val bank2_way0_wdata = WireDefault(0.U(64.W))
  val bank2_way0_rdata = WireDefault(0.U(64.W))
  val bank2_way0_wen   = WireDefault(0.U(4.W))
  val bank3_way0_addr  = WireDefault(0.U(8.W))
  val bank3_way0_wdata = WireDefault(0.U(64.W))
  val bank3_way0_rdata = WireDefault(0.U(64.W))
  val bank3_way0_wen   = WireDefault(0.U(4.W))

  val tag_way1_addr    = WireDefault(0.U(8.W))
  val tag_way1_wdata   = WireDefault(0.U(21.W))
  val tag_way1_rdata   = WireDefault(0.U(21.W))
  val tag_way1_wen     = WireDefault(false.B)
  val bank0_way1_addr  = WireDefault(0.U(8.W))
  val bank0_way1_wdata = WireDefault(0.U(64.W))
  val bank0_way1_rdata = WireDefault(0.U(64.W))
  val bank0_way1_wen   = WireDefault(0.U(4.W))
  val bank1_way1_addr  = WireDefault(0.U(8.W))
  val bank1_way1_wdata = WireDefault(0.U(64.W))
  val bank1_way1_rdata = WireDefault(0.U(64.W))
  val bank1_way1_wen   = WireDefault(0.U(4.W))
  val bank2_way1_addr  = WireDefault(0.U(8.W))
  val bank2_way1_wdata = WireDefault(0.U(64.W))
  val bank2_way1_rdata = WireDefault(0.U(64.W))
  val bank2_way1_wen   = WireDefault(0.U(4.W))
  val bank3_way1_addr  = WireDefault(0.U(8.W))
  val bank3_way1_wdata = WireDefault(0.U(64.W))
  val bank3_way1_rdata = WireDefault(0.U(64.W))
  val bank3_way1_wen   = WireDefault(0.U(4.W))

  /*-----------------Write Buffer数据通路-----------------*/
//val wr_way_r = RegInit(0.U(1.W))
//val wr_tag_r = RegInit(0.U(20.W))
//val wr_bank_r = RegInit(0.U(2.W))
//val wr_index_r = RegInit(0.U(8.W))
//val wr_wstrb_r = RegInit(0.U(4.W))
//val wr_wdata_r = RegInit(0.U(64.W))
//val wr_offset_r = RegInit(0.U(4.W))
//val wr_bank0_hit = Wire(0.U(1.W))
//val wr_bank1_hit = Wire(0.U(1.W))
//val wr_bank2_hit = Wire(0.U(1.W))
//val wr_bank3_hit = Wire(0.U(1.W))
  /*-----------------Request Buffer数据通路-----------------*/
  val reg_op          = RegInit(0.U(1.W))
  val reg_index       = RegInit(0.U(8.W))
  val reg_tag         = RegInit(0.U(20.W))
  val reg_offset      = RegInit(0.U(4.W))
  val reg_wstrb       = RegInit(0.U(4.W))
  val reg_wdata       = RegInit(0.U(64.W))
  val reg_replace_way = RegInit(0.U(1.W))

  /*-----------------Tag Compare数据通路-----------------*/
  val hit_way     = WireDefault(0.U(1.W))
  val way0_hit    = WireDefault(0.U(1.W))
  val way1_hit    = WireDefault(0.U(1.W))
  val wr_way0_hit = WireDefault(0.U(1.W))
  val wr_way1_hit = WireDefault(0.U(1.W))
  val cache_hit   = WireDefault(0.U(1.W))

  /*-----------------Data Select数据通路-----------------*/
  val way0_load_data = WireDefault(0.U(64.W))
  val way1_load_data = WireDefault(0.U(64.W))
  val load_res       = WireDefault(0.U(64.W))
  val replace_data   = WireDefault(0.U(64.W))
  val replace_tag    = WireDefault(0.U(20.W))
  val replace_data_r = RegInit(0.U(64.W))
  val replace_tag_r  = RegInit(0.U(20.W))

  /*-----------------Miss Buffer数据通路-----------------*/
  val num_ret_data = RegInit(0.U(4.W))

  /*-----------------LFSR数据通路-----------------*/
  val pseudo_random = RegInit(340.U(23.W))

  /*-----------------读Cache-----------------*/
  val way0_v    = WireDefault(0.U(1.W))
  val way1_v    = WireDefault(0.U(1.W))
  val way0_tag  = WireDefault(0.U(20.W))
  val way1_tag  = WireDefault(0.U(20.W))
  val way0_data = WireDefault(0.U(256.W))
  val way1_data = WireDefault(0.U(256.W))

  /*---------------------------------------赋值---------------------------------------*/

  /*-----------------读Cache-----------------*/
  way0_v    := tag_way0_rdata(0)
  way0_tag  := tag_way0_rdata(20, 1)
  way0_data := Cat(bank0_way0_rdata, bank1_way0_rdata, bank2_way0_rdata, bank3_way0_rdata)

  way1_v    := tag_way1_rdata(0)
  way1_tag  := tag_way1_rdata(20, 1)
  way1_data := Cat(bank0_way1_rdata, bank1_way1_rdata, bank2_way1_rdata, bank3_way1_rdata)

  /*-----------------Tag Compare数据通路赋值-----------------*/
  way0_hit  := (way0_v === 1.U) && (way0_tag === reg_tag)
  way1_hit  := (way1_v === 1.U) && (way1_tag === reg_tag)
  cache_hit := way0_hit.asBool || way1_hit.asBool
  hit_way   := Mux(way0_hit.asBool, 0.U, 1.U)

//wr_way0_hit := (way0_v === 1.U) && (way0_tag === wr_tag_r)
//wr_way1_hit := (way1_v === 1.U) && (way1_tag === wr_tag_r)

  /*-----------------主状态机-----------------*/

  switch(state) {
    is(s_idle) {
      when(io.valid) {
        state := s_lookup
      }.otherwise(
        state := s_idle
      )
    }
    is(s_lookup) {
      when(cache_hit.asBool && !io.valid) {
        state := s_idle
      }.elsewhen(cache_hit.asBool && io.valid) {
        state := s_lookup
      }.otherwise(state := s_miss)
    }
    is(s_miss) {
      when(io.wr_rdy) {
        state := s_replace
      }.otherwise {
        state := s_miss
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
      when(io.ret_valid && io.ret_last) {
        state := s_idle
      }.otherwise {
        state := s_refill
      }
    }
  }

  /*-----------------Write Buffer状态机-----------------*/
//val hit_write = lookup && cache_hit.asBool && reg_op.asBool
//
//switch(wr_state){
//  is(s_wr_idle){
//    when(hit_write){
//      wr_state := s_wr_write
//    }.otherwise{
//      wr_state := s_wr_idle
//    }
//  }
//  is(s_wr_write){
//    when(!hit_write){
//      wr_state := s_wr_idle
//    }.otherwise{
//      wr_state := s_wr_write
//    }
//  }
//}

  /*-------------------- handle valid --------------------*/
  val handling_valid = RegInit(false.B)
  when(handling_valid && io.data_ok) {
    handling_valid := false.B
  }.elsewhen(idle && io.valid) {
    handling_valid := true.B
  }

  /*-------------------- Bank Selection --------------------*/
//wr_bank0_hit := wr_offset_r(3,2) === 0.U
//wr_bank1_hit := wr_offset_r(3,2) === 1.U
//wr_bank2_hit := wr_offset_r(3,2) === 2.U
//wr_bank3_hit := wr_offset_r(3,2) === 3.U

//dirty
  dirty_index := Mux(handling_valid, reg_index, Mux(io.valid, io.index, 0.U))

  when(lookup && reg_op.asBool) {
    when(way0_hit.asBool) {
      //将dirty_index位置1
      D_way0 := D_way0 | (1.U << dirty_index)
    }
  }.elsewhen(refill) {
    when(!reg_replace_way) {
      D_way0 := D_way0 | (1.U << reg_op)
    }
  }
  when(lookup && reg_op.asBool) {
    when(way1_hit.asBool) {
      //将dirty_index位置1
      D_way1 := D_way1 | (1.U << dirty_index)
    }
  }.elsewhen(refill) {
    when(!reg_replace_way) {
      D_way1 := D_way1 | (1.U << reg_op)
    }
  }

  /*-------------------- LFSR --------------------*/
  pseudo_random := Cat(pseudo_random(21, 0), pseudo_random(22) ^ pseudo_random(17))

  /*-------------------- Request Buffer --------------------*/
  val rq_we = idle && io.valid || lookup && cache_hit.asBool && io.valid
  when(rq_we) {
    reg_op     := io.op
    reg_index  := io.index
    reg_tag    := io.tag
    reg_offset := io.offset
    //reg_wstrb := io.wstrb
    //reg_wdata := io.wdata
    reg_replace_way := pseudo_random(0)
  }

  /*-------------------- Miss Buffer --------------------*/
  when(io.ret_last && io.ret_valid) {
    num_ret_data := 0.U
  }.elsewhen(io.ret_valid) {
    num_ret_data := num_ret_data + 1.U
  }

  /*-----------------Data Select数据通路-----------------*/
  way0_load_data := MuxLookup(
    reg_offset(3, 2),
    0.U(64.W),
    Array(
      0.U(2.W) -> way0_data(63, 0),
      1.U(2.W) -> way0_data(127, 64),
      2.U(2.W) -> way0_data(191, 128),
      3.U(2.W) -> way0_data(255, 192)
    )
  )
  way1_load_data := MuxLookup(
    reg_offset(3, 2),
    0.U(64.W),
    Array(
      0.U(2.W) -> way1_data(63, 0),
      1.U(2.W) -> way1_data(127, 64),
      2.U(2.W) -> way1_data(191, 128),
      3.U(2.W) -> way1_data(255, 192)
    )
  )
  load_res := Fill(64, way0_hit) & way0_load_data | Fill(64, way1_hit) & way1_load_data

  replace_data := Mux(reg_replace_way.asBool, way1_data, way0_data)
  replace_tag  := Mux(reg_replace_way.asBool, way1_tag, way0_tag)

  when(lookup && !cache_hit.asBool) {
    replace_data_r := replace_data
    replace_tag_r  := replace_tag
  }

  /*-------------------- Write Buffer信号赋值 --------------------*/
//when(lookup && hit_write){
//  wr_tag_r := reg_tag
//  wr_way_r := hit_way
//  wr_bank_r := reg_offset(3,2)
//  wr_index_r := reg_index
//  wr_wstrb_r := reg_wstrb
//  wr_wdata_r := reg_wdata
//  wr_offset_r := reg_offset
//}

  /*-------------------- CPU 接口信号赋值 --------------------*/
  io.addr_ok := idle && io.valid || lookup && cache_hit.asBool && io.valid
  io.data_ok := lookup && cache_hit.asBool || refill && io.ret_valid && num_ret_data === reg_offset(3, 2)
  io.rdata   := Mux(lookup, load_res, Mux(refill && io.ret_valid, reg_wdata, 0.U(64.W)))

  /*-------------------- AXI 接口信号赋值 --------------------*/
  io.rd_req  := replace
  io.rd_type := 4.U(3.W)
  io.rd_addr := Cat(reg_tag, reg_index, 0.U(4.W))

  val reg_wr_req = RegInit(false.B)
  val is_dirty   = Mux(reg_replace_way.asBool, D_way1(dirty_index), D_way0(dirty_index))
  when(miss && is_dirty && !reg_wr_req) {
    reg_wr_req := true.B
  }.elsewhen(io.wr_rdy && reg_wr_req) {
    reg_wr_req := false.B
  }

  io.wr_req   := reg_wr_req
  io.wr_type  := 4.U(3.W)
  io.wr_addr  := Cat(replace_tag_r, reg_index, 0.U(4.W))
  io.wr_wstrb := "xff".U(8.W)
  io.wr_data  := replace_data

  /*-------------------- Tag RAM 信号赋值 --------------------*/
//tag_way0_addr :=  Mux(wr_write, wr_index_r, Mux(idle && io.valid || lookup && cache_hit.asBool && io.valid, io.index, reg_index))
  tag_way0_addr  := Mux(idle && io.valid || lookup && cache_hit.asBool && io.valid, io.index, reg_index)
  tag_way0_wen   := refill && !reg_replace_way //|| wr_write && !wr_way_r
  tag_way0_wdata := Mux(wr_write, Cat(way0_tag, 1.U), Cat(reg_tag, 1.U))

//tag_way1_addr :=  Mux(wr_write, wr_index_r, Mux(idle && io.valid || lookup && cache_hit.asBool && io.valid, io.index, reg_index))
  tag_way1_addr  := Mux(idle && io.valid || lookup && cache_hit.asBool && io.valid, io.index, reg_index)
  tag_way1_wen   := refill && reg_replace_way.asBool // || wr_write && wr_way_r.asBool
  tag_way1_wdata := Mux(wr_write, Cat(way1_tag, 1.U), Cat(reg_tag, 1.U))

//bank_addr
//val bank_addr = Mux(wr_write, wr_index_r,Mux(handling_valid,reg_index,io.index))
val bank_addr = Mux(handling_valid, reg_index, io.index)
  bank0_way0_addr := bank_addr
  bank1_way0_addr := bank_addr
  bank2_way0_addr := bank_addr
  bank3_way0_addr := bank_addr
  bank0_way1_addr := bank_addr
  bank1_way1_addr := bank_addr
  bank2_way1_addr := bank_addr
  bank3_way1_addr := bank_addr

//bank_wen
  /*
bank0_way0_wen := Mux(wr_write && wr_bank0_hit.asBool && wr_way0_hit.asBool, wr_wstrb_r, Mux(refill && num_ret_data === 0.U && io.ret_valid && !reg_replace_way.asBool, 15.U(4.W), 0.U(4.W)))
bank1_way0_wen := Mux(wr_write && wr_bank1_hit.asBool && wr_way0_hit.asBool, wr_wstrb_r, Mux(refill && num_ret_data === 1.U && io.ret_valid && !reg_replace_way.asBool, 15.U(4.W), 0.U(4.W)))
bank2_way0_wen := Mux(wr_write && wr_bank2_hit.asBool && wr_way0_hit.asBool, wr_wstrb_r, Mux(refill && num_ret_data === 2.U && io.ret_valid && !reg_replace_way.asBool, 15.U(4.W), 0.U(4.W)))
bank3_way0_wen := Mux(wr_write && wr_bank3_hit.asBool && wr_way0_hit.asBool, wr_wstrb_r, Mux(refill && num_ret_data === 3.U && io.ret_valid && !reg_replace_way.asBool, 15.U(4.W), 0.U(4.W)))
bank0_way1_wen := Mux(wr_write && wr_bank0_hit.asBool && wr_way1_hit.asBool, wr_wstrb_r, Mux(refill && num_ret_data === 0.U && io.ret_valid && reg_replace_way.asBool, 15.U(4.W), 0.U(4.W)))
bank1_way1_wen := Mux(wr_write && wr_bank1_hit.asBool && wr_way1_hit.asBool, wr_wstrb_r, Mux(refill && num_ret_data === 1.U && io.ret_valid && reg_replace_way.asBool, 15.U(4.W), 0.U(4.W)))
bank2_way1_wen := Mux(wr_write && wr_bank2_hit.asBool && wr_way1_hit.asBool, wr_wstrb_r, Mux(refill && num_ret_data === 2.U && io.ret_valid && reg_replace_way.asBool, 15.U(4.W), 0.U(4.W)))
bank3_way1_wen := Mux(wr_write && wr_bank3_hit.asBool && wr_way1_hit.asBool, wr_wstrb_r, Mux(refill && num_ret_data === 3.U && io.ret_valid && reg_replace_way.asBool, 15.U(4.W), 0.U(4.W)))
   */
  bank0_way0_wen := Mux(refill && num_ret_data === 0.U && io.ret_valid && !reg_replace_way.asBool, 15.U(4.W), 0.U(4.W))
  bank1_way0_wen := Mux(refill && num_ret_data === 1.U && io.ret_valid && !reg_replace_way.asBool, 15.U(4.W), 0.U(4.W))
  bank2_way0_wen := Mux(refill && num_ret_data === 2.U && io.ret_valid && !reg_replace_way.asBool, 15.U(4.W), 0.U(4.W))
  bank3_way0_wen := Mux(refill && num_ret_data === 3.U && io.ret_valid && !reg_replace_way.asBool, 15.U(4.W), 0.U(4.W))
  bank0_way1_wen := Mux(refill && num_ret_data === 0.U && io.ret_valid && reg_replace_way.asBool, 15.U(4.W), 0.U(4.W))
  bank1_way1_wen := Mux(refill && num_ret_data === 1.U && io.ret_valid && reg_replace_way.asBool, 15.U(4.W), 0.U(4.W))
  bank2_way1_wen := Mux(refill && num_ret_data === 2.U && io.ret_valid && reg_replace_way.asBool, 15.U(4.W), 0.U(4.W))
  bank3_way1_wen := Mux(refill && num_ret_data === 3.U && io.ret_valid && reg_replace_way.asBool, 15.U(4.W), 0.U(4.W))
//wdata
  val refill_data = MuxLookup(
    reg_wstrb,
    0.U(64.W),
    Array(
      "b00000000".asUInt(8.W) -> io.ret_data,
      "b00000001".asUInt(8.W) -> Cat(io.ret_data(63, 8), reg_wdata(7, 0)),
      "b00000011".asUInt(8.W) -> Cat(io.ret_data(63, 16), reg_wdata(15, 0)),
      "b00000111".asUInt(8.W) -> Cat(io.ret_data(63, 24), reg_wdata(23, 0)),
      "b00001111".asUInt(8.W) -> Cat(io.ret_data(63, 32), reg_wdata(31, 0)),
      "b00011111".asUInt(8.W) -> Cat(io.ret_data(63, 40), reg_wdata(39, 0)),
      "b00111111".asUInt(8.W) -> Cat(io.ret_data(63, 48), reg_wdata(47, 0)),
      "b01111111".asUInt(8.W) -> Cat(io.ret_data(63, 56), reg_wdata(55, 0)),
      "b11111111".asUInt(8.W) -> reg_wdata
    )
  )
  /*
bank0_way0_wdata := Mux(wr_write && !wr_way_r.asBool, wr_wdata_r, Mux(refill && reg_offset(3,2)=== 0.U, refill_data, io.ret_data))
bank1_way0_wdata := Mux(wr_write && !wr_way_r.asBool, wr_wdata_r, Mux(refill && reg_offset(3,2)=== 1.U, refill_data, io.ret_data))
bank2_way0_wdata := Mux(wr_write && !wr_way_r.asBool, wr_wdata_r, Mux(refill && reg_offset(3,2)=== 2.U, refill_data, io.ret_data))
bank3_way0_wdata := Mux(wr_write && !wr_way_r.asBool, wr_wdata_r, Mux(refill && reg_offset(3,2)=== 3.U, refill_data, io.ret_data))
bank0_way1_wdata := Mux(wr_write && wr_way_r.asBool, wr_wdata_r, Mux(refill && reg_offset(3,2)=== 0.U, refill_data, io.ret_data))
bank1_way1_wdata := Mux(wr_write && wr_way_r.asBool, wr_wdata_r, Mux(refill && reg_offset(3,2)=== 1.U, refill_data, io.ret_data))
bank2_way1_wdata := Mux(wr_write && wr_way_r.asBool, wr_wdata_r, Mux(refill && reg_offset(3,2)=== 2.U, refill_data, io.ret_data))
bank3_way1_wdata := Mux(wr_write && wr_way_r.asBool, wr_wdata_r, Mux(refill && reg_offset(3,2)=== 3.U, refill_data, io.ret_data))
   */
  bank0_way0_wdata := Mux(refill && reg_offset(3, 2) === 0.U, refill_data, io.ret_data)
  bank1_way0_wdata := Mux(refill && reg_offset(3, 2) === 1.U, refill_data, io.ret_data)
  bank2_way0_wdata := Mux(refill && reg_offset(3, 2) === 2.U, refill_data, io.ret_data)
  bank3_way0_wdata := Mux(refill && reg_offset(3, 2) === 3.U, refill_data, io.ret_data)
  bank0_way1_wdata := Mux(refill && reg_offset(3, 2) === 0.U, refill_data, io.ret_data)
  bank1_way1_wdata := Mux(refill && reg_offset(3, 2) === 1.U, refill_data, io.ret_data)
  bank2_way1_wdata := Mux(refill && reg_offset(3, 2) === 2.U, refill_data, io.ret_data)
  bank3_way1_wdata := Mux(refill && reg_offset(3, 2) === 3.U, refill_data, io.ret_data)

}
