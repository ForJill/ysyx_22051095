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
  //R-TYPE
  val ALU_ADD    = 0.U(6.W)
  val ALU_ADDW   = 1.U(6.W)
  val ALU_SUB    = 2.U(6.W)
  val ALU_SUBW   = 3.U(6.W)
  val ALU_MUL    = 4.U(6.W)
  val ALU_MULW   = 5.U(6.W)
  val ALU_DIV    = 6.U(6.W)
  val ALU_DIVU   = 7.U(6.W)
  val ALU_DIVW   = 8.U(6.W)
  val ALU_DIVUW  = 9.U(6.W)
  val ALU_SLL    = 10.U(6.W)
  val ALU_SLT    = 11.U(6.W)
  val ALU_SLTU   = 12.U(6.W)
  val ALU_SLLW   = 13.U(6.W)
  val ALU_SRAW   = 14.U(6.W)
  val ALU_SRLW   = 15.U(6.W)
  val ALU_XOR    = 16.U(6.W)
  val ALU_AND    = 17.U(6.W)
  val ALU_SRA    = 18.U(6.W)
  val ALU_OR     = 19.U(6.W)
  val ALU_REM    = 20.U(6.W)
  val ALU_REMU   = 21.U(6.W)
  val ALU_REMW   = 22.U(6.W)
  val ALU_REMUW  = 23.U(6.W)
  //I-TYPE
  val ALU_ADDI   = 24.U(6.W)
  val ALU_ADDIW  = 25.U(6.W)
  val ALU_JALR   = 26.U(6.W)
  val ALU_LB     = 27.U(6.W)
  val ALU_LBU    = 28.U(6.W)
  val ALU_LH     = 29.U(6.W)
  val ALU_LHU    = 30.U(6.W)
  val ALU_LD     = 31.U(6.W)
  val ALU_LW     = 32.U(6.W)
  val ALU_LWU    = 33.U(6.W)
  val ALU_SLLI   = 34.U(6.W)
  val ALU_SLLIW  = 35.U(6.W)
  val ALU_SRLI   = 36.U(6.W)
  val ALU_SRLIW  = 37.U(6.W)
  val ALU_SRAI   = 38.U(6.W)
  val ALU_SRAIW  = 39.U(6.W)
  val ALU_SLTIU  = 40.U(6.W)
  val ALU_ANDI   = 41.U(6.W)
  val ALU_XORI   = 42.U(6.W)
  val ALU_ORI    = 43.U(6.W)
  //S-TYPE
  val ALU_SD     = 44.U(6.W)
  val ALU_SB     = 45.U(6.W)
  val ALU_SH     = 46.U(6.W)
  val ALU_SW     = 47.U(6.W)
  //B-TYPE
  val ALU_BEQ    = 48.U(6.W)
  val ALU_BNE    = 49.U(6.W)
  val ALU_BGE    = 50.U(6.W)
  val ALU_BGEU   = 51.U(6.W)
  val ALU_BLT    = 52.U(6.W)
  val ALU_BLTU   = 53.U(6.W)
  //U-TYPE
  val ALU_LUI    = 54.U(6.W)
  val ALU_AUIPC  = 55.U(6.W)
  //J-TYPE
  val ALU_JAL    = 56.U(6.W)
  //N-TYPE
  val ALU_EBREAK = 57.U(6.W)
}

object Imm{
  val IMM_I = 0.U(3.W)
  val IMM_S = 1.U(3.W)
  val IMM_B = 2.U(3.W)
  val IMM_U = 3.U(3.W)
  val IMM_J = 4.U(3.W)
}
/*
object OP_TYPE{
    val R_TYPE = 0.U(3.W)
    val I_TYPE = 1.U(3.W)
    val S_TYPE = 2.U(3.W)
    val B_TYPE = 3.U(3.W)
    val U_TYPE = 4.U(3.W)
    val J_TYPE = 5.U(3.W)
    val N_TYPE = 6.U(3.W)
}
*/