package rv64i

import chisel3._
import chisel3.util._

import config.Configs._
import utils._
import config.Configs._
import config.OP._

import utils._

class EXU extends Module {
  val io = IO(new Bundle {
    val ms_allowin      = Input(Bool())
    val es_allowin      = Output(Bool())
    val ds_to_es_valid  = Input(Bool())
    val es_to_ms_valid  = Output(Bool())
    val de_bus          = Flipped(new de_bus)
    val em_bus          = Output(new em_bus)
    val es_dest_valid   = Output(new (es_dest_valid))
    val data_sram_req     = Output(Bool())
    val data_sram_en      = Output(Bool())
    val data_sram_we      = Output(Bool())
    val data_sram_addr    = Output(UInt(32.W))
    val data_sram_wdata   = Output(UInt(64.W))
    val data_sram_wmask   = Output(UInt(8.W))
    val data_sram_addr_ok = Input(Bool())
  })
  val de_bus_r    = RegInit(0.U.asTypeOf(new de_bus))
  val es_valid    = RegInit(false.B)
  val es_ready_go = Wire(Bool())

  when(io.es_allowin) {
    es_valid := io.ds_to_es_valid
  }

  when(io.ds_to_es_valid && io.es_allowin) {
    de_bus_r := io.de_bus
  }

  val src1    = WireDefault(0.U(DATA_WIDTH.W))
  val src2    = WireDefault(0.U(DATA_WIDTH.W))
  val imm     = WireDefault(0.U(DATA_WIDTH.W))
  val ex_pc   = WireDefault(0.U(DATA_WIDTH.W))
  val result  = WireDefault(0.U(DATA_WIDTH.W))
  val ld_type = WireDefault(0.U(3.W))
  val default = WireDefault(0.U(DATA_WIDTH.W))
  //io.csr_regs := VecInit(Seq.fill(5)(0.U(64.W)))
  def Sext(x: UInt, n: Int): UInt = Cat(Fill(64 - n, x(n - 1)), x(n - 1, 0))
  default := 0.U
  imm     := de_bus_r.imm
  src1    := de_bus_r.rdata1
  src2    := de_bus_r.rdata2
  ex_pc   := de_bus_r.ds_pc
  ld_type := de_bus_r.ld_type

  val mul_64 = (Module(new mul(64)).io)
  val mul_32 = (Module(new mul(32)).io)
  val is_mul_64 = de_bus_r.OP === ALU_MUL
  val is_mul_32 = de_bus_r.OP === ALU_MULW

  mul_64.mul_valid := is_mul_64
  mul_64.flush := false.B
  mul_64.mulw := false.B
  mul_64.mul_signed := 3.U
  mul_64.multiplicand := src1
  mul_64.multiplier := src2

  mul_32.mul_valid := is_mul_32
  mul_32.flush := false.B
  mul_32.mulw := true.B
  mul_32.mul_signed := 0.U
  mul_32.multiplicand := src1(31, 0)
  mul_32.multiplier := src2(31, 0)

  val div_64 = (Module(new div(64)).io)
  val div_32 = (Module(new div(32)).io)
  val is_div_64 = de_bus_r.OP === ALU_DIV || de_bus_r.OP === ALU_DIVU
  val is_div_32 = de_bus_r.OP === ALU_DIVW || de_bus_r.OP === ALU_DIVUW
  val is_rem_64 = de_bus_r.OP === ALU_REM || de_bus_r.OP === ALU_REMU
  val is_rem_32 = de_bus_r.OP === ALU_REMW || de_bus_r.OP === ALU_REMUW

  div_64.div_valid := is_div_64 || is_rem_64
  div_64.flush := false.B
  div_64.divw := false.B
  div_64.div_signed := de_bus_r.OP === ALU_DIV || de_bus_r.OP === ALU_REM
  div_64.dividend := src1
  div_64.divisor := src2

  div_32.div_valid := is_div_32 || is_rem_32
  div_32.flush := false.B
  div_32.divw := true.B
  div_32.div_signed := de_bus_r.OP === ALU_DIVW || de_bus_r.OP === ALU_REMW
  div_32.dividend := src1(31, 0)
  div_32.divisor := src2(31, 0)

  result := MuxLookup(
    de_bus_r.OP,
    0.U,
    Array(
      //R-type
      ALU_ADD -> (src1 + src2),
      ALU_ADDW -> Sext((src1(31, 0) + src2(31, 0)), 32),
      ALU_SUB -> (src1 - src2),
      ALU_SUBW -> Sext(src1(31, 0) - src2(31, 0), 32),
      ALU_MUL -> mul_64.result_lo,//(src1 * src2)(63, 0),
      ALU_MULW ->Sext(mul_32.result_lo,32),
      ALU_DIV -> div_64.quotient,//Mux(src2 === 0.U, 0.U, (src1.asSInt / src2.asSInt).asUInt), //有符号数
      ALU_DIVU -> div_64.quotient,//Mux(src2 === 0.U, 0.U, src1 / src2),
      ALU_DIVW -> Sext(div_32.quotient,32),//Sext((src1(31, 0).asSInt / src2(31, 0).asSInt).asUInt, 32),
      ALU_DIVUW -> Sext(div_32.quotient,32),//Sext((src1(31, 0) / src2(31, 0)), 32),
      ALU_SLL -> (src1 << src2(5, 0)),
      ALU_SLT -> Mux((src1.asSInt < src2.asSInt), 1.U, 0.U),
      ALU_SLTU -> Mux((src1 < src2), 1.U, 0.U),
      ALU_SLLW -> Sext((src1(31, 0) << src2(4, 0)), 32),
      ALU_SRA -> (src1.asSInt >> src2(5, 0)).asUInt,
      ALU_SRAW -> Sext((src1(31, 0).asSInt >> src2(4, 0)).asUInt, 32),
      ALU_SRL -> (src1 >> src2(5, 0)),
      ALU_SRLW -> Sext((src1(31, 0) >> src2(4, 0)), 32),
      ALU_XOR -> (src1 ^ src2),
      ALU_AND -> (src1 & src2),
      ALU_OR -> (src1 | src2),
      ALU_REM -> div_64.remainder,//(src1.asSInt % src2.asSInt).asUInt,
      ALU_REMU -> div_64.remainder,//(src1 % src2),
      ALU_REMW -> Sext(div_32.remainder,32),//Sext((src1(31, 0).asSInt % src2(31, 0).asSInt).asUInt, 32),
      ALU_REMUW -> Sext(div_32.remainder,32),//Sext(src1(31, 0) % src2(31, 0), 32),
      //I_type
      ALU_ADDI -> (src1 + imm),
      ALU_ADDIW -> Sext((src1(31, 0) + imm), 32),
      ALU_JALR -> (ex_pc + 4.U),
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
      ALU_SLTI -> Mux((src1.asSInt < imm.asSInt), 1.U, 0.U),
      ALU_SLTIU -> Mux((src1 < imm), 1.U, 0.U),
      ALU_ANDI -> (src1 & imm),
      ALU_XORI -> (src1 ^ imm),
      ALU_ORI -> (src1 | imm),
      ALU_SRAI -> (src1.asSInt >> imm(5, 0)).asUInt,
      ALU_SRAIW -> (Sext((src1(31, 0).asSInt >> imm(4, 0)).asUInt, 32)),
      ALU_CSRRW -> de_bus_r.csr_rdata,
      ALU_CSRRS -> de_bus_r.csr_rdata,
      ALU_CSRRC -> de_bus_r.csr_rdata,
      //S_type
      ALU_SD -> (src1 + imm),
      ALU_SW -> (src1 + imm),
      ALU_SH -> (src1 + imm),
      ALU_SB -> (src1 + imm),
      //U_type
      ALU_LUI -> (imm),
      ALU_AUIPC -> (ex_pc + imm),
      //J_type
      ALU_JAL -> (ex_pc + 4.U)
    )
  )
  val csr_wdata = MuxLookup(
    de_bus_r.OP,
    0.U,
    Array(
      ALU_CSRRW -> src1,
      ALU_CSRRS -> (de_bus_r.csr_rdata | src1),
      ALU_CSRRC -> (de_bus_r.csr_rdata & ~src1),
      ALU_ECALL -> src1//de_bus_r.regs(17),//需要前递
    )
  )

  io.em_bus.res_from_mem := de_bus_r.res_from_mem
  io.em_bus.gr_we        := de_bus_r.gr_we
  io.em_bus.dest         := de_bus_r.dest
  io.em_bus.ex_pc        := ex_pc
  io.em_bus.alu_result   := result
  io.em_bus.ld_type      := ld_type
  io.em_bus.inst         := de_bus_r.inst
  io.em_bus.regs         := de_bus_r.regs
  io.em_bus.csr_wdata    := csr_wdata
  io.em_bus.csr_wen      := de_bus_r.csr_wen
  io.em_bus.es_ex        := de_bus_r.ds_ex 
  io.em_bus.csr_raddr    := de_bus_r.csr_raddr
  io.em_bus.csr_ren     := de_bus_r.csr_ren
  io.em_bus.csr_waddr1  := de_bus_r.csr_waddr1
  io.em_bus.csr_waddr2  := de_bus_r.csr_waddr2
  io.em_bus.csr_raddr   := de_bus_r.csr_raddr
  io.em_bus.eval       := de_bus_r.eval
  io.em_bus.mret        := de_bus_r.mret
  io.em_bus.csrs        := de_bus_r.csrs
  io.em_bus.is_ld       := de_bus_r.is_ld
  io.em_bus.csr_rdata   := de_bus_r.csr_rdata
  io.em_bus.MemWen     := de_bus_r.MemWen

  io.es_dest_valid.es_forward_data := result
  io.es_dest_valid.gr_we           := de_bus_r.gr_we
  io.es_dest_valid.dest            := de_bus_r.dest
  io.es_dest_valid.es_valid        := es_valid
  io.es_dest_valid.es_is_ld        := de_bus_r.is_ld
  io.es_dest_valid.es_ready_go     := es_ready_go

  io.data_sram_en    := de_bus_r.res_from_mem
  io.data_sram_we    := de_bus_r.MemWen
  io.data_sram_addr  := result
  io.data_sram_wdata := src2
  io.data_sram_wmask := de_bus_r.wmask
  io.data_sram_req   := (de_bus_r.res_from_mem || de_bus_r.MemWen) && es_valid
  
  val mul_end = mul_64.out_valid || mul_32.out_valid
  val muling  = (is_mul_64 && !mul_64.out_valid) || (is_mul_32 && !mul_32.out_valid)
  val div_end = div_64.out_valid || div_32.out_valid
  val diving  = (is_div_64 && !div_64.out_valid) || (is_div_32 && !div_32.out_valid)
  val reming  = (is_rem_64 && !div_64.out_valid) || (is_rem_32 && !div_32.out_valid)
  es_ready_go       := Mux(mul_end || div_end,true.B,
                       Mux(muling || diving || reming,false.B,
                       Mux(de_bus_r.res_from_mem || de_bus_r.MemWen, io.data_sram_req && io.data_sram_addr_ok, true.B)))
  io.es_allowin     := !es_valid || es_ready_go && io.ms_allowin
  io.es_to_ms_valid := es_valid && es_ready_go
}
