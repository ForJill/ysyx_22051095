package config

import chisel3._

object Configs {
  val ADDR_WIDTH          = 64
  val ADDR_BYTE_WIDTH     = 8
  val DATA_WIDTH          = 64
  val DATA_WDITH_H        = 16
  val DATA_WIDTH_B        = 8
  val START_ADDR          = "x80000000"
  val INST_WIDTH          = 32
  val INST_BYTE_WIDTH     = 4
  val INST_BYTE_WIDTH_LOG = 2
  val INST_Mem_SIZE       = 1024
  val REG_WIDTH           = 5
}

object OP {
  val ALU_ADD    = 0.U(4.W)
  val ALU_ADDI   = 1.U(4.W)
  val ebreak     = 2.U(4.W)
}

object Imm{
    val IMM_I = 0.U(2.W)
}
