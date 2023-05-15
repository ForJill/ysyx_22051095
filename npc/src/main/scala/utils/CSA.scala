package utils

import chisel3._
import chisel3.util._

class csa extends Module{
    val io = IO(new Bundle{
        val in = Input(UInt(3.W))
        val cout = Output(UInt(1.W))
        val s   = Output(UInt(1.W))
    })
    val a = io.in(2)
    val b = io.in(1)
    val c = io.in(0)
    io.s   := a ^ b ^ c
    io.cout := (a & b) | (b & c) | (a & c)
}