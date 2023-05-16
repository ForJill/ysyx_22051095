package rv64i

import chisel3._
import chisel3.util._

import config.Configs._
import utils._
import config.Configs._
import config.OP._

import utils.AluCtrlIO

class AluIO extends Bundle {
  val ctrl     = new AluCtrlIO()
  val in1      = Input(UInt(DATA_WIDTH.W))
  val in2      = Input(UInt(DATA_WIDTH.W))
  val imm      = Input(UInt(DATA_WIDTH.W))
  val out      = Output(UInt(DATA_WIDTH.W))
  val pc       = Input(UInt(DATA_WIDTH.W))
  val j_branch = Output(UInt(DATA_WIDTH.W))
  val e_branch = Output(UInt(DATA_WIDTH.W))
  val is_b     = Output(UInt(DATA_WIDTH.W))
  val csr_index= Input(UInt(3.W))
  val reg17    = Input(UInt(DATA_WIDTH.W))
  val csr_regs = Output(Vec(5, UInt(64.W)))
}
class EXU extends Module {
  val io        = IO(new AluIO())
  val src1      = WireDefault(0.U(DATA_WIDTH.W))
  val src2      = WireDefault(0.U(DATA_WIDTH.W))
  val imm       = WireDefault(0.U(DATA_WIDTH.W))
  val result    = WireDefault(0.U(DATA_WIDTH.W))
  val default   = WireDefault(0.U(DATA_WIDTH.W))
  val csr_addr  = WireDefault(0.U(12.W))
  val csr_index = WireDefault(0.U(3.W))
  val CSR       = Mem(5, UInt(64.W))
  io.csr_regs := VecInit(Seq.fill(5)(0.U(64.W)))
  def Sext(x: UInt, n: Int): UInt = Cat(Fill(64 - n, x(n - 1)), x(n-1,0))
  default   := 0.U
  imm       := io.imm
  src1      := io.in1
  src2      := io.in2
  csr_index := io.csr_index

  val mul_64 = (Module(new MUL(64)).io)
  val mul_32 = (Module(new MUL(32)).io)
  val is_mul_64 = io.ctrl.alu_op === ALU_MUL
  val is_mul_32 = io.ctrl.alu_op === ALU_MULW

  mul_64.mul_valid := is_mul_64
  mul_64.flush := false.B
  mul_64.mulw := false.B
  mul_64.mul_signed := false.B
  mul_64.multiplicand := src1
  mul_64.multiplier := src2
  
  mul_32.mul_valid := is_mul_32
  mul_32.flush := false.B
  mul_32.mulw := true.B
  mul_32.mul_signed := false.B
  mul_32.multiplicand := src1(31, 0)
  mul_32.multiplier := src2(31, 0)



  val div_64 = (Module(new div(64)).io)
  val div_32 = (Module(new div(32)).io)
  val is_div_64 = io.ctrl.alu_op === ALU_DIV || io.ctrl.alu_op === ALU_DIVU
  val is_div_32 = io.ctrl.alu_op === ALU_DIVW || io.ctrl.alu_op === ALU_DIVUW
  val is_rem_64 = io.ctrl.alu_op === ALU_REM || io.ctrl.alu_op === ALU_REMU
  val is_rem_32 = io.ctrl.alu_op === ALU_REMW || io.ctrl.alu_op === ALU_REMUW

  div_64.div_valid := is_div_64 || is_rem_64
  div_64.flush := false.B
  div_64.divw := false.B
  div_64.div_signed := io.ctrl.alu_op === ALU_DIV || io.ctrl.alu_op === ALU_REM
  div_64.dividend := src1
  div_64.divisor := src2

  div_32.div_valid := is_div_32 || is_rem_32
  div_32.flush := false.B
  div_32.divw := true.B
  div_32.div_signed := io.ctrl.alu_op === ALU_DIVW || io.ctrl.alu_op === ALU_REMW
  div_32.dividend := src1(31, 0)
  div_32.divisor := src2(31, 0)

  result := MuxLookup(
    io.ctrl.alu_op,
    0.U,
    Array(
      //R-type
      ALU_ADD -> (src1 + src2),
      ALU_ADDW -> Sext((src1(31, 0) + src2(31, 0)), 32),
      ALU_SUB -> (src1 - src2),
      ALU_SUBW -> Sext(src1(31, 0) - src2(31, 0), 32),
      ALU_MUL -> (src1 * src2)(63,0),
      ALU_MULW -> Sext((src1(31, 0) * src2(31, 0)), 32),
      ALU_DIV -> Mux(src2 === 0.U, 0.U, (src1.asSInt / src2.asSInt).asUInt),//有符号数
      ALU_DIVU -> Mux(src2 === 0.U, 0.U, src1 / src2),
      ALU_DIVW -> Sext(div_32.quotient,32),//Sext((src1(31,0).asSInt/src2(31,0).asSInt).asUInt, 32),
      ALU_DIVUW -> Sext(div_32.quotient,32),//Sext((src1(31,0)/src2(31,0)), 32),
      ALU_SLL -> (src1 << src2(5,0)),
      ALU_SLT -> Mux((src1.asSInt < src2.asSInt),1.U,0.U),
      ALU_SLTU -> Mux((src1 < src2),1.U,0.U),
      ALU_SLLW -> Sext((src1(31, 0) << src2(4, 0)), 32),
      ALU_SRA -> (src1.asSInt >> src2(5,0)).asUInt,
      ALU_SRAW -> Sext((src1(31,0).asSInt >> src2(4,0)).asUInt, 32),
      ALU_SRL -> (src1 >> src2(5,0)),
      ALU_SRLW -> Sext((src1(31,0) >> src2(4,0)), 32),
      ALU_XOR -> (src1 ^ src2),
      ALU_AND -> (src1 & src2),
      ALU_OR -> (src1 | src2),
      ALU_REM -> div_64.remainder,//(src1.asSInt % src2.asSInt).asUInt,
      ALU_REMU -> div_64.remainder,//(src1 % src2),
      ALU_REMW -> div_32.remainder,//Sext((src1(31, 0).asSInt % src2(31, 0).asSInt).asUInt, 32),
      ALU_REMUW -> div_32.remainder,//Sext(src1(31, 0) % src2(31, 0), 32),
      //I_type
      ALU_ADDI -> (src1 + imm),
      ALU_ADDIW -> Sext((src1(31, 0) + imm), 32),
      ALU_JALR -> (io.pc + 4.U),
      ALU_LB -> (src1 + imm),
      ALU_LBU -> (src1 + imm),
      ALU_LH -> (src1 + imm),
      ALU_LHU -> (src1 + imm),
      ALU_LW -> (src1 + imm),
      ALU_LWU -> (src1 + imm),
      ALU_LD -> (src1 + imm),
      ALU_SLLI -> (src1 << imm(5, 0)),
      ALU_SLLIW -> (Sext((src1(31, 0) << imm(4, 0)), 32)),
      ALU_SRLI -> (src1 >> imm(5, 0)),
      ALU_SRLIW -> (Sext((src1(31, 0) >> imm(4, 0)), 32)),
      ALU_SLTI -> Mux((src1.asSInt < imm.asSInt),1.U,0.U),
      ALU_SLTIU -> Mux((src1 < imm),1.U, 0.U),
      ALU_ANDI -> (src1 & imm),
      ALU_XORI -> (src1 ^ imm),
      ALU_ORI -> (src1 | imm),
      ALU_SRAI -> (src1.asSInt >> imm(5, 0)).asUInt,
      ALU_SRAIW -> (Sext((src1(31, 0).asSInt >> imm(4, 0)).asUInt, 32)),
      ALU_CSRRW -> CSR(csr_index),
      ALU_CSRRS -> CSR(csr_index),
      ALU_CSRRC -> CSR(csr_index),
      //S_type
      ALU_SD -> (src1 + imm),
      ALU_SW -> (src1 + imm),
      ALU_SH -> (src1 + imm),
      ALU_SB -> (src1 + imm),
      //B_type
      ALU_BEQ -> (io.pc + imm),
      ALU_BNE -> (io.pc + imm),
      ALU_BLT -> (io.pc + imm),
      ALU_BGE -> (io.pc + imm),
      ALU_BGEU -> (io.pc + imm),
      ALU_BLTU -> (io.pc + imm),
      //U_type
      ALU_LUI -> (imm),
      ALU_AUIPC -> (io.pc + imm),
      //J_type
      ALU_JAL -> (io.pc + 4.U)
      
    )
  )

  val csr_wdata = MuxLookup(
    io.ctrl.alu_op,
    0.U,
    Array(
      ALU_CSRRW -> src1,
      ALU_CSRRS -> (CSR(csr_index) | src1),
      ALU_CSRRC -> (CSR(csr_index) & ~src1)
    )
  )

  io.j_branch := MuxLookup(
    io.ctrl.alu_op,
    0.U,
    Array(
      ALU_JAL -> (io.pc + imm),
      ALU_JALR -> ((src1 + imm) & "hfffffffffffffffe".U)
    )
  )

  io.is_b := MuxLookup(
    io.ctrl.alu_op,
    0.U,
    Array(
      ALU_BEQ -> Mux((src1 === src2),1.U,0.U),
      ALU_BNE -> Mux((src1 =/= src2),1.U,0.U),
      ALU_BLT -> Mux((src1.asSInt < src2.asSInt),1.U,0.U),
      ALU_BGE -> Mux((src1.asSInt >= src2.asSInt),1.U,0.U),
      ALU_BGEU -> Mux((src1 >= src2),1.U,0.U),
      ALU_BLTU -> Mux((src1 < src2),1.U,0.U)
    )
  )
  CSR(1.U) := Mux(io.ctrl.alu_op === ALU_ECALL, io.reg17, CSR(1.U))
  CSR(2.U) := Mux(io.ctrl.alu_op === ALU_ECALL, io.pc, CSR(2.U))
  CSR(csr_index) := Mux(io.ctrl.csr_wen, csr_wdata, CSR(csr_index))

  io.e_branch := MuxLookup(
    io.ctrl.alu_op,
    0.U,
    Array(
      ALU_ECALL -> CSR(4.U),
      ALU_MRET  -> (CSR(2.U)+4.U),
    )
  )

  (0 until 5).foreach(i => io.csr_regs(i) := CSR(i))

  io.out := result
}
