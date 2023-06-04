package utils

import chisel3._
import chisel3.util._

class mul(len: Int) extends Module {
  val io = IO(new Bundle() {
    val mul_valid    = Input(Bool())
    val flush        = Input(Bool()) //1：cancel mul 0：not cancel
    val mulw         = Input(Bool()) //1:32bit, 0:64bit
    val mul_signed   = Input(UInt(2.W)) //11：signed signed 10:signed unsigned 01:unsigned signed 00:unsigned unsigned
    val multiplicand = Input(UInt(len.W))
    val multiplier   = Input(UInt(len.W))
    val mul_ready    = Output(Bool()) //1：ready to accept new input 0：not ready
    val out_valid    = Output(Bool()) //1：output is valid 0：output is not valid
    val result_hi    = Output(UInt(len.W))
    val result_lo    = Output(UInt(len.W))
  })
  /*
  //一位移位乘法器（移位加）
  //将乘法结果设置为零
  val multiplier = Wire(UInt(64.W))
  val multiplicand   = Wire(UInt(64.W))
  val result = RegInit(0.U(128.W))
  //将被乘数存入一个128bits寄存器的低64bits中（非 GPR )
  val multiplicand_reg = Reg(UInt(128.W))
  val multiplier_reg = Reg(UInt(64.W))
  val time = RegInit(0.U(6.W))
  val start = RegInit(false.B)
  multiplicand := io.multiplicand
  multiplier := io.multiplier
  io.out_valid := false.B
  io.mul_ready := false.B
  //执行 32 次步骤，在每个时钟周期判断乘数的最低位，如果是 1，将被乘数的加到结果中；如果乘数的最低位是 0，则不需要加入结果中。
  when(io.mul_valid){
    result := 0.U
    start  := true.B
    io.out_valid := false.B
    io.mul_ready := false.B
  }
  when(time === 32.U){
    io.out_valid := true.B
    io.mul_ready := true.B
    time := 1.U
    start := false.B
  }
  multiplier_reg := Mux(start === false.B && io.mul_valid, multiplier, multiplier_reg >> 1)
  multiplicand_reg := Mux(start === false.B && io.mul_valid, multiplicand, multiplicand_reg << 1)
  result := Mux(multiplier_reg(0) === 1.U && start === true.B, result + multiplicand_reg, result)
  time := Mux(start === true.B, time + 1.U, time)

  //如果乘数的最高位是 1，那么最后一步需要执行补码减法。
  when(io.mul_signed(1) === 1.U){
      result := result - multiplicand_reg
  }
  //输出结果
  io.result_hi := result(127, 64)
  io.result_lo := result(63, 0)
   */
  // Booth 乘法器
  // 初始化
  io.out_valid := false.B
  io.mul_ready := false.B
  //在乘数和被乘数最右侧补零
  val m1           = Wire(UInt(len.W))
  val m2           = Wire(UInt(len.W))
  val multiplier   = Wire(UInt((len+2).W))
  val multiplicand = Wire(UInt((len+2).W))
  m1           := io.multiplier
  m2           := io.multiplicand
  multiplier   := Cat(io.mul_signed(1) & m1((len-1)), m1, 0.U(1.W))
  multiplicand := Cat(io.mul_signed(0) & m2((len-1)), m2, 0.U(1.W))
  //被乘数放在132bits的寄存器中,乘数放在66bits的寄存器中
  val len_2 = len + len
  val multiplicand_reg = RegInit(0.U((len_2+4).W))
  val multiplier_reg   = RegInit(0.U((len+2).W))
  val result           = RegInit(0.U((len_2+4).W))
  val start            = RegInit(false.B)
  val end              = RegInit(false.B)
  //乘数为0时，输出结果
  when(io.mul_valid) {
    result       := 0.U
    start        := true.B
    io.out_valid := false.B
    io.mul_ready := false.B
  }
  when(multiplier_reg === 0.U && start === true.B) {
    io.out_valid := true.B
    io.mul_ready := true.B
    start        := false.B
    //end          := true.B
  }

  //when(end === true.B)
  //{
    //end := false.B
  //}
  multiplier_reg   := Mux(start === false.B && io.mul_valid, multiplier, multiplier_reg >> 2)
  multiplicand_reg := Mux(start === false.B && io.mul_valid, multiplicand, multiplicand_reg << 2)
  //把乘数的最低 3bits 和被乘数的 132bits 输入到部分积生成模块
  val bg = Module(new BOOTH_gen).io
  bg.y := multiplier_reg(2, 0)
  bg.x := multiplicand_reg
  //把部分积输出到部分积加法器
  result := Mux(start === true.B, result + bg.out + bg.cout, result)
  //根据乘数和被乘数的符号位，判断结果的符号位
  val result_sign = Wire(UInt(1.W))
  result_sign := m1((len-1)) ^ m2((len-1))
  //把部分积加法器的结果输出到结果寄存器
  io.result_hi := result((len_2-1), len)
  io.result_lo := Cat(result_sign,(result((len-1), 0) >> 1)(len-2, 0))
  //清零
  when(io.out_valid){
    result := 0.U
  }
  /*
  //华莱士树
  val sw = Module(new switch(33,132)).io
  sw.in := bg.out
  val ws =  VecInit(Seq.fill(132)(Module(new walloc_33bits).io))
  for(i <- 0 until 132){
    ws(i).src_in := sw.out(i)
  }
   */

}
object mul extends App {
  emitVerilog(new mul(64), Array("--target-dir", "vsrc"))
}
