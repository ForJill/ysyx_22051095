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
  val ALU_LUI    = 2.U(4.W)
  val ALU_AUIPC  = 3.U(4.W)
  val ALU_EBREAK = 4.U(4.W)
  val ALU_JAL    = 5.U(4.W)
  val ALU_JALR   = 6.U(4.W)
  val ALU_SD    = 7.U(4.W)
}

object Imm{
  val IMM_I = 0.U(2.W)
  val IMM_U = 1.U(2.W)
  val IMM_J = 2.U(2.W)
}
/*
object OP_TYPE{
    val R_TYPE = 0.U(2.W)
    val I_TYPE = 1.U(2.W)
    val S_TYPE = 2.U(2.W)
    val B_TYPE = 3.U(2.W)
    val U_TYPE = 4.U(2.W)
    val J_TYPE = 5.U(2.W)
    val N_TYPE = 6.U(2.W)
}
*/