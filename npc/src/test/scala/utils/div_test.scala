package utils

import chisel3._
import chisel3.util._
import utils.div

class div_test extends Module{
    val io = IO(new Bundle{
        val a = Input(UInt(64.W))
        val b = Input(UInt(64.W))
        val q = Output(UInt(64.W))
        val r = Output(UInt(64.W))
    })
    val div_valid = true.B
    val flush = false.B
    val divw = false.B
    val div_signed  = 1.U(1.W)
    val div = (Module(new div).io)
    div.div_valid := div_valid
    div.flush := flush
    div.divw := divw
    div.div_signed := div_signed
    div.dividend := io.a
    div.divisor := io.b
    io.q := div.quotient
    io.r := div.remainder
    val ref_q = io.a / io.b
    val ref_r = io.a % io.b
    //chisel3.assert(io.q === ref_q)
    //chisel3.assert(io.r === ref_r)
    
}