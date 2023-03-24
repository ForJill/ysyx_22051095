package rv64i

import chisel3._
import chiseltest._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec

import config.Configs._
import config.OP_TYPES._

trait AluTestFunc{
    val OP_TYPES_LIST = Seq(
        OP_ADD
    )
    val oprand_list =
        Seq.fill(10)(scala.util.Random.nextInt().toLong & 0x00ffffffffL)
    def alu(a: Long, b: Long, op: UInt): Long = {
        op match {
            case OP_ADD => (a + b)
            case _      => 0L
        }  
    }
    def test(dut:Alu,in1:Long,in2:Long,op:UInt): Unit = {
        
        dut.io.in1.poke(in1.U)
        dut.io.in2.poke(in2.U)
        dut.io.ctrl.OP.poke(op)
        val (resultALU) = alu(in1,in2,dut.io.ctrl.OP)
        dut.io.out.expect(alu(in1,in2,op).U)
        dut.clock.step(1)
    }
    def testFn(dut: Alu): Unit = {
        for (op <- OP_TYPES_LIST){
            for (a <- oprand_list){
                for (b <- oprand_list){
                    test(dut,a,b,op)
                }
            }
        }
    }
}

class AluTest extends AnyFlatSpec with ChiselScalatestTester with AluTestFunc {
    "Alu" should "pass" in {
        test(new Alu) { dut =>
            testFn(dut)
        }
    }
}