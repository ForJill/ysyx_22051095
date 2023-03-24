

import chisel3._
import chiseltest._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec

import java.io.PrintWriter
import java.io.File

import config.Configs._

trait InstMemTestFunc {
    // 生成INST_Mem_SIZE条随机指令进行测试
    val inst_list =
        Seq.fill(INST_Mem_SIZE)(scala.util.Random.nextInt().toLong & 0x00ffffffffL)

    // 为随机指令生成hex文本文件
    def genInstMemHex(): Unit = {
        val memFile = new File(
          System.getProperty("user.dir") + "/src/test/scala/rv64i/randInstMem.hex"
        )
        memFile.createNewFile()
        val memPrintWriter = new PrintWriter(memFile)
        for (i <- 0 to INST_Mem_SIZE - 1) {
            memPrintWriter.println(inst_list(i).toHexString)
        }
        memPrintWriter.close()
    }

    def testFn(dut: InstMem): Unit = {
        // 依次读取所有的指令，与inst_list进行匹配
        for (i <- 0 to INST_Mem_SIZE - 1) {
            dut.io.addr.poke((i * INST_BYTE_WIDTH).U)   // 作为地址，应该左移两位，即乘以4
            dut.io.inst.expect(inst_list(i).U)
        }
    }
}

class InstMemTest extends AnyFlatSpec with ChiselScalatestTester with InstMemTestFunc {
    "InstMem" should "pass" in {
        // 先生成随机hex文件，再进行测试
        genInstMemHex()
        test(new InstMem(true)) { dut =>
            testFn(dut)
        } 
    }
}