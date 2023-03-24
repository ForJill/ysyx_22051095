
import circt.stage._
import chisel3._
import scala.PC
object topPC extends App {
    def top = new PC()
    val useMFC = true // use MLIR-based firrtl compiler
    val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  if (useMFC) {
    (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
  } else {
    (new chisel3.stage.ChiselStage).execute(args, generator)
  }
}
