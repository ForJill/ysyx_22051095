package utils

import chisel3._
import chisel3.util._

class div(len:Int) extends Module {
  val io = IO(new Bundle {
    val dividend   = Input(UInt(len.W))
    val divisor    = Input(UInt(len.W))
    val div_valid  = Input(Bool())
    val divw       = Input(Bool())
    val div_signed = Input(UInt(1.W))
    val flush      = Input(Bool())
    val div_ready  = Output(Bool())
    val out_valid  = Output(Bool())
    val quotient   = Output(UInt(len.W))
    val remainder  = Output(UInt(len.W))
  })
  val dividend = Wire(UInt(len.W))
  val divisor  = Wire(UInt(len.W))
  val dividend_reg = Reg(UInt(len.W))
  val divisor_reg  = Reg(UInt(len.W))
  val start    = RegInit(false.B)
  val diving   = RegInit(false.B)
  val delay   = RegInit(0.U(8.W))
  val len_2   = len + len
  val clear   = RegInit(0.U(2.W))
  io.out_valid := false.B
  io.div_ready := false.B
  //计算除数和被除数的绝对值
  dividend := Mux((io.div_signed & io.dividend(len-1)).asBool, ((~io.dividend) + 1.U), io.dividend)
  divisor  := Mux((io.div_signed & io.divisor(len-1)).asBool, ((~io.divisor) + 1.U), io.divisor)
  when(start){
    dividend_reg := dividend
    divisor_reg  := divisor
    diving := true.B
  }.otherwise{
    dividend_reg := dividend_reg
    divisor_reg  := divisor_reg
  }
  //根据被除数和除数确定商和余数的符号,1为负数，0为正数
  val quotient_sign  = RegInit(0.U(1.W))
  val remainder_sign = RegInit(0.U(1.W))
  quotient_sign  := Mux(io.div_valid, io.div_signed & (io.dividend(len-1) ^ io.divisor(len-1)), remainder_sign)
  remainder_sign := Mux(io.div_valid, io.div_signed & io.dividend(len-1),remainder_sign)

  //将被除数前面补64个0， 记为A[63:0]，记除数为B，得到的商记为S， 余数即为 R .
  val A = RegInit(0.U(len_2.W))
  val B = RegInit(0.U(len.W))
  val S_tmp = VecInit(Seq.fill(len)(0.U(1.W)))
  val S = RegInit(0.U(len.W))
  val cnt = RegInit(0.U(8.W))

  A := Cat(0.U(len.W), dividend_reg)
  B := divisor_reg

  //迭代
  when(delay < 2.U && !io.out_valid && start){
    delay := delay + 1.U
  }.elsewhen(delay >= 2.U && !io.out_valid){
    S_tmp(cnt) := (Mux(A(len_2-1, len-1) >= Cat(0.U, B), 1.U, 0.U))
    A :=  Mux((A(len_2-1, len-1) >= Cat(0.U, B)),((Cat(0.U((len+1).W),A(len-2,0))) | ((A(len_2-1, len-1) - Cat(0.U, B)) << (len-1))),A) << 1
    cnt := cnt + 1.U
    S := Cat(S_tmp) | S
  }
  when(io.div_valid){
    start := true.B
    io.out_valid := false.B
    io.div_ready := false.B
  }
  when(cnt === (len).U && start){
    start := false.B
    io.out_valid := true.B
    io.div_ready := true.B
  }
  when(io.out_valid){
    clear := clear + 1.U
  }
  when(clear === 1.U){
    cnt := 0.U
    quotient_sign  := 0.U
    remainder_sign := 0.U
    A := 0.U
    B := 0.U
    S := 0.U
    dividend_reg := 0.U
    divisor_reg  := 0.U
    delay := 0.U
    clear := 0.U
  }
  //调整最终商和余数
  io.quotient  := Mux(quotient_sign.asBool, ((~S) + 1.U), S)
  io.remainder := Mux(remainder_sign.asBool,((~A(len_2-1,len)) + 1.U), A(len_2-1,len))
}
object div extends App {
  emitVerilog(new div(64), Array("--target-dir", "vsrc"))
}
