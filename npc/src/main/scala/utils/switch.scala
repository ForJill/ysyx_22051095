package utils

import chisel3._
import chisel3.util._

class switch(xlen:Int, ylen:Int) extends Module{
    val io = IO(new Bundle{
        val in  = Vec(xlen, Input(UInt(ylen.W)))
        val out = Vec(ylen, Output(UInt(xlen.W)))
    })
    for(i <- 0 until xlen){
        for(j <- 0 until ylen){
            io.out(j)(i) := io.in(i)(j)
        }
    }
}