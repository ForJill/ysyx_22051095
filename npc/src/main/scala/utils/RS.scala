package utils

import chisel3._
import chisel3.util._

class  RS extends Module{
    val io = IO(new Bundle{
        val sel_negative = Input(UInt(1.W))
        val sel_positive = Input(UInt(1.W))
        val sel_double_negative = Input(UInt(1.W))
        val sel_double_positive = Input(UInt(1.W))
        val x            = Input(UInt(1.W))
        val x_sub        = Input(UInt(1.W))
        val p            = Output(UInt(1.W))
    })
    io.p := 
        !(!(io.sel_negative & !io.x) 
        & !(io.sel_double_negative & !io.x_sub) 
        & !(io.sel_positive & io.x) 
        & !(io.sel_double_positive & io.x_sub))
}