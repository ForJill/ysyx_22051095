
import chisel3._
import chisel3.util._
import config._

trait HasInstrType{
  def InstrR = "b0000".U
}

object SrcType{
  def reg = "b0".U
  def pc  = "b1".U
  def imm = "b1".U
  def apply() = UInt(1.W)
}

object FuOpType{
  def apply() = UInt(7.W)
}

object FuType extends Configs{
  def alu = "b000".U
  def apply() = UInt(log2Up(5).W)
}
object AluOpType{
  def add = "b0000".U
  def apply() = UInt(4.W)
}


object RV64IInstr extends HasInstrType with Configs{
  val DecodeDefault = List(InstrR, FuType.alu, AluOpType.add)
  def DecodeTable = RVIInstr.table
}

object RV64I_ALUInstr extends HasInstrType with Configs{
    def ADD     = BitPat("b0000000_?????_?????_000,?????_0110011")
    val table = Array(
        ADD            -> List(InstrR, FuType.alu, AluOpType.add)
    )
}

object RVIInstr extends Configs{
    val table = RV64I_ALUInstr.table
}

