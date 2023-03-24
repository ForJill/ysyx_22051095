package rv64i

import chisel3._
import chiseltest._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec

import java.io.PrintWriter
import java.io.File

import config.Configs._

trait TopTestFunc{
    def testFn(dut: Top): Unit = {
        dut.clock.setTimeout(0)
        println("++++++++++++++++++++")
        println("PC", dut.io.addr.peekInt().toLong.toHexString)
        println("inst", dut.io.inst.peekInt().toLong.toHexString)
        println("RS1:", dut.io.rs1.peekInt())
        println("RS2:", dut.io.rs2.peekInt())
        println("RESalu", dut.io.resultALU.peekInt())
        while (dut.io.inst.peekInt()!=0){
            dut.clock.step(1)
            println("PC", dut.io.addr.peekInt().toLong.toHexString)
            println("inst", dut.io.inst.peekInt().toLong.toHexString)
            println("RS1:", dut.io.rs1.peekInt())
            println("RS2:", dut.io.rs2.peekInt())
            println("RESalu", dut.io.resultALU.peekInt())
        }
    }
}
class TopTest extends AnyFlatSpec with ChiselScalatestTester with TopTestFunc {
    "Top" should "pass" in {
        test(new Top) { dut =>
            testFn(dut)
        }
    }
}