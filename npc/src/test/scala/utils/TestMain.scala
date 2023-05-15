package utils

//表明是mypack的包
import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class TestMain extends AnyFlatSpec with ChiselScalatestTester{
    "DUT" should "pass" in {
        test(new mul_test).withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
            dut.io.a.poke(4.U(64.W))
            dut.io.b.poke(14.U(64.W))
            dut.clock.step(33)
            dut.io.out.expect(56.U(128.W))
            println("mul_test--------")
        }
    }
}
