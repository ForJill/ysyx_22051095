

import chisel3._
import chiseltest._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec

import src.config.Configs._

trait PCTestFunc{
    val target_list =
        Seq.fill(10)(scala.util.Random.nextInt().toLong & 0x00ffffffffL)
    def testFn(dut: PCR): Unit = {
        // 初始化状态
        dut.io.pc_branch.poke(false.B)
        dut.io.pc_jump.poke(false.B)
        dut.io.pc_branch_taken.poke(false.B)
        dut.io.pc_target.poke(START_ADDR)
        dut.io.pc.expect(START_ADDR)
        
        var addr: Long = START_ADDR

        // 正常自增功能
        for (target <- target_list) {
            dut.io.pc.poke(target.U)
            addr += ADDR_BYTE_WIDTH
            dut.clock.step()
            dut.io.pc.expect(addr.U)
        }
    }
}
class PCTest extends AnyFlatSpec with ChiselScalatestTester with PCTestFunc {
    "PC" should "pass" in {
        test(new PC) { dut =>
            testFn(dut)
        } 
    }
}