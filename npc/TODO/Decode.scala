import chisel3._
import chisel3.util._

import config._
import utils._

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

class Decoder() extends Module with HasInstrType{
    val io = IO(new Bundle{
        val in = Flipped(Decoupled(new BundleCtrlFlowIO))
        val out = Decoupled(new Bundledecode)
    })
    val hasInstr = Wire(Bool())
    val inst     = io.in.bits.instr
    val decodeList = ListLookup(inst, RV64IInstr.DecodeDefault ,RV64IInstr.DecodeTable)
    val instrType :: fuType :: fuOpType :: Nil = RV64IInstr.DecodeTable.zip(decodeList).map{
        case (a, b) => Mux(hasInstr, a, b)}

    io.out.bits := DontCare
    io.out.bits.control.fuType := fuType
    io.out.bits.control.fuOpType := fuOpType

    val SrcTypeTable = List(
        InstrR -> (SrcType.reg, SrcType.reg)
    )
    val src1Type = LookupTree(instrType, SrcTypeTable.map(x => (x._1 , x._2._1)))
    val src2Type = LookupTree(instrType, SrcTypeTable.map(x => (x._1 , x._2._2)))

    val (rs, rt, rd) = (inst(19, 15), inst(24, 20), inst(11, 7))
    val rs1 = inst(11,7)
    val rs2 = inst(6,2)
    
    
}