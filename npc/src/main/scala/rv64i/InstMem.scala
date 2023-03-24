package  rv64i
import chisel3._
import chisel3.util._
import chisel3.util.experimental.loadMemoryFromFile
import firrtl.annotations.MemoryLoadFileType

import config.Configs._

class InstMemIO extends Bundle {
  val addr = Input(UInt(ADDR_WIDTH.W)) // 指令地址
  val inst = Output(UInt(INST_WIDTH.W)) // 指令输出
}

class InstMem extends Module {
  val io = IO(new InstMemIO()) // 输入输出接口
  // 指令内存，能存放MEM_INST_SIZE条INST_WIDTH位的指令
  val mem = Mem(INST_Mem_SIZE, UInt(INST_WIDTH.W))
  mem.write("x80000000".U, "b00000001000001000000000010110011".U(32.W))
  mem.write("x80000004".U, "b00000000000100000000000010010011".U(32.W))
  mem.write("x80000008".U, "b00000000000100000000000001110011".U(32.W))
  /*loadMemoryFromFile(
    mem,
    "src/test/scala/rv64i/InstMem.hex",
    MemoryLoadFileType.Hex
  )*/
  io.inst := mem.read(io.addr) // 读取对应位置的指令并输出
}
