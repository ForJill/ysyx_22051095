package utils

import chisel3._
import chisel3.util._

class BOOTH_gen extends Module{
    val io = IO(new Bundle{
        val x = Input(UInt(132.W))
        val y = Input(UInt(3.W))
        val out = Output(UInt(132.W))
        val cout = Output(UInt(1.W))
    })
    val x = io.x
    val y = io.y
    //通过结果选择逻辑和booth选择信号模块来生成
    val r = VecInit(Seq.fill(132)(Module (new RS).io))
    val b = (Module (new BOOTH_S).io)
    val p = VecInit(Seq.fill(132)(0.U(1.W)))
    b.src := y  
    val cnt = RegInit(0.U(6.W))
    r(0).x := x(0)
    r(0).x_sub := 0.U(1.W)
    r(0).sel_negative := b.sel_negative
    r(0).sel_positive := b.sel_positive
    r(0).sel_double_negative := b.sel_double_negative
    r(0).sel_double_positive := b.sel_double_positive
    p(0) := r(0).p
    for (i <- 1 until 132){
        r(i).x := x(i)
        r(i).x_sub := x(i-1)
        r(i).sel_negative := b.sel_negative
        r(i).sel_positive := b.sel_positive
        r(i).sel_double_negative := b.sel_double_negative
        r(i).sel_double_positive := b.sel_double_positive
        p(i) := r(i).p
    }
    io.out := Cat(p.reverse)
    io.cout := b.cout
} 