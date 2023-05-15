import chisel3._
import chisel3.util._
import chiseltest._
import chisel3.experimental.BundleLiterals._
import chiseltest.formal._
import chiseltest.formal.BoundedCheck
import utest._

class Sub extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(4.W))
    val b = Input(UInt(4.W))
    val c = Output(UInt(4.W))
  })
  //val cnt = Counter(true.B, 16)._1
  //io.c := io.a + ~io.b + Mux(cnt === 3.U, 2.U, 1.U)
  io.c := io.a + ~io.b 
  val ref = io.a - io.b
  chisel3.assert(io.c === ref)
}

object Sub extends TestSuite {
  val tests: Tests = Tests {
    test("mytest") {
      new Formal with HasTestName {
        def getTestName: String = s"sub"
      }.verify(new Sub, Seq(BoundedCheck(1)))
    }
  }
}