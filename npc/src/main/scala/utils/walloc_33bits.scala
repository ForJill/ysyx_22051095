package utils

import chisel3._
import chisel3.util._

class walloc_33bits extends Module{
    val io = IO(new Bundle{
        val src_in = Input(UInt(33.W))
        val cin   = Input(UInt(30.W))
        val cout_group = Output(UInt(30.W))
        val cout = Output(UInt(1.W))
        val s    = Output(UInt(1.W))
    })
//第一层11个（33/3），第二层7个（22/3=7...1），第三层5个(15/3=5)，第四层3个(10/3=3...1)，第五层2个(7/3=2...1)，第六层1个(5/3=1...2)，第七层1个(4/3=1..1),第八层1个（3/3=1）
//共用了31个全加器
val c = Wire(UInt(30.W))
val csa = VecInit(Seq.fill(31)(Module(new csa()).io))

//第一层
val first_s = Wire(UInt(11.W))
csa(0).in := io.src_in(32,30)
csa(1).in := io.src_in(29,27)
csa(2).in := io.src_in(26,24)
csa(3).in := io.src_in(23,21)
csa(4).in := io.src_in(20,18)
csa(5).in := io.src_in(17,15)
csa(6).in := io.src_in(14,12)
csa(7).in := io.src_in(11,9)
csa(8).in := io.src_in(8,6)
csa(9).in := io.src_in(5,3)
csa(10).in := io.src_in(2,0)

for (i <- 0 until 11){
    c(i) := csa(10-i).cout 
    first_s(i) := csa(10-i).s
}

//第二层
val second_s = Wire(UInt(7.W))
csa(11).in := first_s(10,8)
csa(12).in := first_s(7,5)
csa(13).in := first_s(4,2)
csa(14).in := Cat(first_s(1,0),io.cin(9))
csa(15).in := io.cin(8,6)
csa(16).in := io.cin(5,3)
csa(17).in := io.cin(2,0)

for (i <- 0 until 7){
    c(11+i) := csa(17-i).cout 
    second_s(i) := csa(17-i).s
}

//第三层
val third_s = Wire(UInt(5.W))
csa(18).in := second_s(6,4)
csa(19).in := second_s(3,1)
csa(20).in := Cat(second_s(0), io.cin(17,16))
csa(21).in := io.cin(15,13)
csa(22).in := io.cin(12,10)

for (i <- 0 until 5){
    c(18+i) := csa(22-i).cout 
    third_s(i) := csa(22-i).s
}

//第四层
val fourth_s = Wire(UInt(3.W))
csa(23).in := third_s(4,2)
csa(24).in := Cat(third_s(1,0), io.cin(21))
csa(25).in := io.cin(20,18)

for (i <- 0 until 3){
    c(23+i) := csa(25-i).cout 
    fourth_s(i) := csa(25-i).s
}

//第五层
val fifth_s = Wire(UInt(2.W))
csa(26).in := fourth_s(2,0)
csa(27).in := io.cin(24,22)

for (i <- 0 until 2){
    c(26+i) := csa(27-i).cout 
    fifth_s(i) := csa(27-i).s
}

//第六层
val sixth_s = Wire(UInt(1.W))
csa(28).in := Cat(fifth_s(1,0), io.cin(25))

for (i <- 0 until 1){
    c(28+i) := csa(28-i).cout 
    sixth_s(i) := csa(28-i).s
}

//第七层
val seventh_s = Wire(UInt(1.W))
csa(29).in := Cat(sixth_s, io.cin(27,26))

for (i <- 0 until 1){
    c(29+i) := csa(29-i).cout 
    seventh_s(i) := csa(29-i).s
}

//第八层
val eighth_s = Wire(UInt(1.W))
csa(30).in := Cat(seventh_s, io.cin(29,28))

for (i <- 0 until 1){
    c(30+i) := csa(30-i).cout 
    eighth_s(i) := csa(30-i).s
}

io.cout_group := c


}