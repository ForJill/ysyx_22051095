package utils

import chisel3._
import chisel3.util._

class BOOTH_S extends Module{
    val io = IO(new Bundle{
        val sel_negative = Output(UInt(1.W))
        val sel_positive = Output(UInt(1.W))
        val sel_double_negative = Output(UInt(1.W))
        val sel_double_positive = Output(UInt(1.W))
        val cout = Output(UInt(1.W))
        val src = Input(UInt(3.W))
    })
    val y_add = io.src(2)
    val y     = io.src(1)
    val y_sub = io.src(0)
    io.sel_negative := y_add & (y & !y_sub | !y & y_sub)
    io.sel_positive := !y_add & (y & !y_sub | !y & y_sub)
    io.sel_double_negative := y_add & !y & !y_sub
    io.sel_double_positive := !y_add & y & y_sub
    io.cout := (y_add & !y & !y_sub) | (y_add & (y & !y_sub | !y & y_sub))
} 