package rv64i

import chisel3._
import chisel3.util._

import utils._

class ControllerIO extends Bundle {
  val ControlIO_In  = Flipped(new ControlIO)
  val AluCtrlIO_Out = Flipped(new AluCtrlIO)
  val Control_Out   = new ControlIO
}

class Controller extends Module {
  val io = IO(new ControllerIO)

  //alu
  io.AluCtrlIO_Out.alu_op     := io.ControlIO_In.OP
  
  io.Control_Out <> io.ControlIO_In
}
