
import .configpackage top
import chisel3._
import chisel3.stage._
import chisel3.util._
import scala.config._

import .{MyConfig, Helloworld}object topHelloworld extends App {
  implicit val parames: Config = (new MyConfig).toInstance
  (new ChiselStage).execute(args, Seq(ChiselGeneratorAnnotation(() => new Helloworld()(parames))))
}
