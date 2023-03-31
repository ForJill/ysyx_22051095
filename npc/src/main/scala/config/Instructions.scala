package config

import chisel3.util.BitPat

object Instructions {
  //R-type 
  def ADD    = BitPat("b0000000_?????_?????_000_?????_0110011")
  def ADDW   = BitPat("b0000000_?????_?????_000_?????_0111011")
  def SUB    = BitPat("b0100000_?????_?????_000_?????_0110011")
  def SUBW   = BitPat("b0100000_?????_?????_000_?????_0111011")
  def MUL    = BitPat("b0000001_?????_?????_000_?????_0110011")
  def MULW   = BitPat("b0000001_?????_?????_000_?????_0111011")
  def DIV    = BitPat("b0000001_?????_?????_100_?????_0110011")
  def DIVW   = BitPat("b0000001_?????_?????_100_?????_0111011")
  def SLT    = BitPat("b0000000_?????_?????_010_?????_0110011")
  def SLTU   = BitPat("b0000000_?????_?????_011_?????_0110011")
  def SLLW   = BitPat("b0000000_?????_?????_001_?????_0111011")
  def SRAW   = BitPat("b0100000_?????_?????_101_?????_0111011")
  def SRLW   = BitPat("b0000000_?????_?????_101_?????_0111011")
  def XOR    = BitPat("b0000000_?????_?????_100_?????_0110011")
  def AND    = BitPat("b0000000_?????_?????_111_?????_0110011")
  def SRA    = BitPat("b0100000_?????_?????_101_?????_0110011")
  def OR     = BitPat("b0000000_?????_?????_110_?????_0110011")
  def REMW   = BitPat("b0000001_?????_?????_110_?????_0111011")
  //I-type
  def ADDI   = BitPat("b???????_?????_?????_000_?????_0010011")
  def ADDIW  = BitPat("b???????_?????_?????_000_?????_0011011")
  def JALR   = BitPat("b???????_?????_?????_000_?????_1100111") 
  def LBU    = BitPat("b???????_?????_?????_100_?????_0000011")
  def LH     = BitPat("b???????_?????_?????_001_?????_0000011")
  def LHU    = BitPat("b???????_?????_?????_101_?????_0000011")
  def LD     = BitPat("b???????_?????_?????_011_?????_0000011")
  def LW     = BitPat("b???????_?????_?????_010_?????_0000011")
  def SLLI   = BitPat("b000000?_?????_?????_001_?????_0010011")
  def SLLIW  = BitPat("b0000000_?????_?????_001_?????_0011011")
  def SRLI   = BitPat("b000000?_?????_?????_101_?????_0010011")
  def SRLIW  = BitPat("b0000000_?????_?????_101_?????_0011011")
  def SRAI   = BitPat("b010000?_?????_?????_101_?????_0010011")
  def SRAIW  = BitPat("b0100000_?????_?????_101_?????_0011011")
  def SLTIU  = BitPat("b???????_?????_?????_011_?????_0010011")
  def ANDI   = BitPat("b???????_?????_?????_111_?????_0010011")
  def XORI   = BitPat("b???????_?????_?????_100_?????_0010011")
  def ORI    = BitPat("b???????_?????_?????_110_?????_0010011")
  //S-type
  def SD     = BitPat("b???????_?????_?????_011_?????_0100011")
  def SW     = BitPat("b???????_?????_?????_010_?????_0100011")
  def SH     = BitPat("b???????_?????_?????_001_?????_0100011")
  def SB     = BitPat("b???????_?????_?????_000_?????_0100011")

  //B-type
  def BEQ    = BitPat("b???????_?????_?????_000_?????_1100011")
  def BNE    = BitPat("b???????_?????_?????_001_?????_1100011")
  def BGE    = BitPat("b???????_?????_?????_101_?????_1100011")
  def BLT    = BitPat("b???????_?????_?????_100_?????_1100011")
  def BLTU  = BitPat("b???????_?????_?????_110_?????_1100011")
  
  //U-type
  def AUIPC  = BitPat("b???????_?????_?????_???_?????_0010111")
  def LUI    = BitPat("b???????_?????_?????_???_?????_0110111")

  //J-type
  def JAL    = BitPat("b???????_?????_?????_???_?????_1101111")

  //N-type
  def EBREAK = BitPat("b0000000_00001_00000_000_00000_1110011")
}
