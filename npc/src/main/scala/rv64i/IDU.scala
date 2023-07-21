package rv64i

import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.BoringUtils
import scala.language.postfixOps

import utils._
import config.Configs._
import config.OP._
import config.Instructions._
import config.Imm._

class IDU extends Module {
  val io = IO(new Bundle {
    val es_allowin     = Input(Bool())
    val ds_allowin     = Output(Bool())
    val fs_to_ds_valid = Input(Bool())
    val ds_to_es_valid = Output(Bool())
    val fd_bus         = Flipped(new fd_bus)
    val de_bus         = Output(new de_bus)
    val br_bus         = Output(new br_bus)
    val rf_bus         = Flipped(new rf_bus)
    val es_dest_valid  = Flipped(new es_dest_valid)
    val ms_dest_valid  = Flipped(new ms_dest_valid)
    val ws_dest_valid  = Flipped(new ws_dest_valid)
  })
  val csr_index = Wire(UInt(3.W))

  val ds_valid    = RegInit(false.B)
  val ds_ready_go = Wire(Bool())
  val fd_bus_r    = RegInit(0.U.asTypeOf(new fd_bus))

  val ds_inst = Wire(UInt(32.W))
  val ds_pc   = Wire(UInt(32.W))
  ds_inst := fd_bus_r.inst
  ds_pc   := fd_bus_r.pc

  val rf_we    = Wire(Bool())
  val rf_waddr = Wire(UInt(5.W))
  val rf_wdata = Wire(UInt(64.W))
  rf_we    := io.rf_bus.rf_we
  rf_waddr := io.rf_bus.rf_waddr
  rf_wdata := io.rf_bus.rf_wdata

  val br_taken        = Wire(Bool())
  val br_target       = Wire(UInt(32.W))
  val br_taken_cancel = Wire(Bool())
  val rawblock        = Wire(Bool())
  io.br_bus.br_taken        := br_taken
  io.br_bus.br_target       := br_target
  io.br_bus.br_taken_cancel := br_taken_cancel

  io.ds_allowin     := (!ds_valid || ds_ready_go && io.es_allowin) && !rawblock
  io.ds_to_es_valid := ds_valid && ds_ready_go

  when(br_taken_cancel && io.ds_allowin) {
    ds_valid := false.B
  }.elsewhen(io.ds_allowin) {
    ds_valid := io.fs_to_ds_valid
  }

  when(io.fs_to_ds_valid && io.ds_allowin) {
    fd_bus_r := io.fd_bus
  }
  val rs1       = Wire(UInt(5.W))
  val rs2       = Wire(UInt(5.W))
  val rd        = Wire(UInt(5.W))
  val rf_rdata1 = Wire(UInt(64.W))
  val rf_rdata2 = Wire(UInt(64.W))

  val T = true.B
  val F = false.B

  val default =
    List(ALU_UNDEFINED, T, IMM_I, F, F, F, F, F); //op,regwen,immtype,j_jump, MemWen, MemLoad,INV, csr_wen, e_jump

  val map = Array(
    //R-t
    ADD -> List(ALU_ADD, T, IMM_I, F, F, F, F, F),
    ADDW -> List(ALU_ADDW, T, IMM_I, F, F, F, F, F),
    SUB -> List(ALU_SUB, T, IMM_I, F, F, F, F, F),
    SUBW -> List(ALU_SUBW, T, IMM_I, F, F, F, F, F),
    MUL -> List(ALU_MUL, T, IMM_I, F, F, F, F, F),
    MULW -> List(ALU_MULW, T, IMM_I, F, F, F, F, F),
    DIV -> List(ALU_DIV, T, IMM_I, F, F, F, F, F),
    DIVU -> List(ALU_DIVU, T, IMM_I, F, F, F, F, F),
    DIVW -> List(ALU_DIVW, T, IMM_I, F, F, F, F, F),
    DIVUW -> List(ALU_DIVUW, T, IMM_I, F, F, F, F, F),
    SLL -> List(ALU_SLL, T, IMM_I, F, F, F, F, F),
    SLT -> List(ALU_SLT, T, IMM_I, F, F, F, F, F),
    SLTU -> List(ALU_SLTU, T, IMM_I, F, F, F, F, F),
    SLLW -> List(ALU_SLLW, T, IMM_I, F, F, F, F, F),
    SRA -> List(ALU_SRA, T, IMM_I, F, F, F, F, F),
    SRAW -> List(ALU_SRAW, T, IMM_I, F, F, F, F, F),
    SRL -> List(ALU_SRL, T, IMM_I, F, F, F, F, F),
    SRLW -> List(ALU_SRLW, T, IMM_I, F, F, F, F, F),
    XOR -> List(ALU_XOR, T, IMM_I, F, F, F, F, F),
    AND -> List(ALU_AND, T, IMM_I, F, F, F, F, F),
    OR -> List(ALU_OR, T, IMM_I, F, F, F, F, F),
    REM -> List(ALU_REM, T, IMM_I, F, F, F, F, F),
    REMU -> List(ALU_REMU, T, IMM_I, F, F, F, F, F),
    REMW -> List(ALU_REMW, T, IMM_I, F, F, F, F, F),
    REMUW -> List(ALU_REMUW, T, IMM_I, F, F, F, F, F),
    //I-type
    ADDI -> List(ALU_ADDI, T, IMM_I, F, F, F, F, F),
    ADDIW -> List(ALU_ADDIW, T, IMM_I, F, F, F, F, F),
    JALR -> List(ALU_JALR, T, IMM_I, T, F, F, F, F),
    LB -> List(ALU_LB, T, IMM_I, F, F, T, F, F),
    LBU -> List(ALU_LBU, T, IMM_I, F, F, T, F, F),
    LH -> List(ALU_LH, T, IMM_I, F, F, T, F, F),
    LHU -> List(ALU_LHU, T, IMM_I, F, F, T, F, F),
    LW -> List(ALU_LW, T, IMM_I, F, F, T, F, F),
    LWU -> List(ALU_LWU, T, IMM_I, F, F, T, F, F),
    LD -> List(ALU_LD, T, IMM_I, F, F, T, F, F),
    SLLI -> List(ALU_SLLI, T, IMM_I, F, F, F, F, F),
    SLLIW -> List(ALU_SLLIW, T, IMM_I, F, F, F, F, F),
    SRLI -> List(ALU_SRLI, T, IMM_I, F, F, F, F, F),
    SRLIW -> List(ALU_SRLIW, T, IMM_I, F, F, F, F, F),
    SLTI -> List(ALU_SLTI, T, IMM_I, F, F, F, F, F),
    SLTIU -> List(ALU_SLTIU, T, IMM_I, F, F, F, F, F),
    ANDI -> List(ALU_ANDI, T, IMM_I, F, F, F, F, F),
    XORI -> List(ALU_XORI, T, IMM_I, F, F, F, F, F),
    ORI -> List(ALU_ORI, T, IMM_I, F, F, F, F, F),
    SRAI -> List(ALU_SRAI, T, IMM_I, F, F, F, F, F),
    SRAIW -> List(ALU_SRAIW, T, IMM_I, F, F, F, F, F),
    CSRRW -> List(ALU_CSRRW, T, IMM_I, F, F, F, T, F),
    CSRRS -> List(ALU_CSRRS, T, IMM_I, F, F, F, T, F),
    CSRRC -> List(ALU_CSRRC, T, IMM_I, F, F, F, T, F),
    ECALL -> List(ALU_ECALL, T, IMM_I, F, F, F, T, T),
    //S-type
    SD -> List(ALU_SD, F, IMM_S, F, T, F, F, F),
    SB -> List(ALU_SB, F, IMM_S, F, T, F, F, F),
    SH -> List(ALU_SH, F, IMM_S, F, T, F, F, F),
    SW -> List(ALU_SW, F, IMM_S, F, T, F, F, F),
    //B-type
    BEQ -> List(ALU_BEQ, F, IMM_B, F, F, F, F, F),
    BNE -> List(ALU_BNE, F, IMM_B, F, F, F, F, F),
    BLT -> List(ALU_BLT, F, IMM_B, F, F, F, F, F),
    BGE -> List(ALU_BGE, F, IMM_B, F, F, F, F, F),
    BGEU -> List(ALU_BGEU, F, IMM_B, F, F, F, F, F),
    BLTU -> List(ALU_BLTU, F, IMM_B, F, F, F, F, F),
    //U-type
    LUI -> List(ALU_LUI, T, IMM_U, F, F, F, F, F),
    AUIPC -> List(ALU_AUIPC, T, IMM_U, F, F, F, F, F),
    //J-type
    JAL -> List(ALU_JAL, T, IMM_J, T, F, F, F, F),
    //EXCEPTION
    MRET -> List(ALU_MRET, F, IMM_I, F, F, F, F, T),
    //N-type
    EBREAK -> List(ALU_EBREAK, F, IMM_I, F, F, F, F, F),
    INV -> List(ALU_UNDEFINED, F, IMM_I, F, F, F, F, F)
  )

  val crtlsignals = ListLookup(ds_inst, default, map)
  io.de_bus.OP           := crtlsignals(0)
  io.de_bus.gr_we        := crtlsignals(1)
  io.de_bus.J_JUMP       := crtlsignals(3)
  io.de_bus.MemWen       := crtlsignals(4)
  io.de_bus.res_from_mem := crtlsignals(5)
  io.de_bus.csr_wen      := crtlsignals(6)
  io.de_bus.E_JUMP       := crtlsignals(7)
  io.de_bus.ds_pc        := ds_pc
  io.de_bus.dest         := rd
  io.de_bus.rdata1       := rf_rdata1
  io.de_bus.rdata2       := rf_rdata2
  io.de_bus.inst         := ds_inst
  val ImmType = crtlsignals(2)

  val is_csr = WireInit(false.B)
  val csr_rdata_R = RegInit(0.U(64.W))

  def Sext(x: UInt, n: Int): UInt = Cat(Fill(64 - n, x(n - 1)), x)

  val I = Sext(ds_inst(31, 20), 12)
  val U = Sext(ds_inst(31, 12), 20) << 12
  val S = Sext(ds_inst(31, 25), 7) << 5 | ds_inst(11, 7)
  val J = Sext(ds_inst(31), 1) << 20 | ds_inst(20) << 11 | ds_inst(19, 12) << 12 | ds_inst(30, 21) << 1
  val B = Sext(ds_inst(31), 1) << 12 | ds_inst(7) << 11 | ds_inst(30, 25) << 5 | ds_inst(11, 8) << 1

  io.de_bus.imm := MuxLookup(
    ImmType,
    0.U(DATA_WIDTH.W),
    Array(
      IMM_I -> I,
      IMM_S -> S,
      IMM_B -> B,
      IMM_U -> U,
      IMM_J -> J
    )
  )
  io.de_bus.wmask := MuxLookup(
    io.de_bus.OP,
    0.U(DATA_WIDTH.W),
    Array(
      ALU_SB -> "b1".asUInt(8.W),
      ALU_SH -> "b11".asUInt(8.W),
      ALU_SW -> "hf".asUInt(8.W),
      ALU_SD -> "hff".asUInt(8.W)
    )
  )
  io.de_bus.ld_type := MuxLookup(
    io.de_bus.OP,
    0.U(3.W),
    Array(
      ALU_LB -> 0.U,
      ALU_LH -> 1.U,
      ALU_LW -> 2.U,
      ALU_LD -> 3.U,
      ALU_LBU -> 4.U,
      ALU_LHU -> 5.U,
      ALU_LWU -> 6.U
    )
  )
  csr_index := MuxLookup(
    I,
    0.U,
    Array(
      "h342".U -> 1.U, //mcause
      "h341".U -> 2.U, //mepc
      "h300".U -> 3.U, //mstatus
      "h305".U -> 4.U  //mtvec
    )
  )
  val eval = io.de_bus.OP === ALU_ECALL
  val mret = io.de_bus.OP === ALU_MRET
  io.de_bus.ds_ex := eval || fd_bus_r.fs_ex
  io.de_bus.csr_raddr := Mux(eval,4.U,Mux(mret,2.U,csr_index))
  io.de_bus.csr_waddr1 := Mux(eval, 1.U, csr_index)
  io.de_bus.csr_waddr2 := Mux(eval, 2.U, csr_index)
  io.de_bus.csr_ren    := eval || mret || csr_index =/= 0.U
  io.de_bus.eval      := eval
  io.de_bus.mret      := mret
  io.br_bus.eval      := eval
  io.br_bus.mret      := mret
  
  br_taken := MuxLookup(
    io.de_bus.OP,
    false.B,
    Array(
      ALU_BEQ -> ((rf_rdata1 === rf_rdata2) && ds_valid && !rawblock),
      ALU_BNE -> ((rf_rdata1 =/= rf_rdata2) && ds_valid && !rawblock),
      ALU_BLT -> ((rf_rdata1.asSInt < rf_rdata2.asSInt) && ds_valid && !rawblock),
      ALU_BGE -> ((rf_rdata1.asSInt >= rf_rdata2.asSInt) && ds_valid && !rawblock),
      ALU_BLTU -> ((rf_rdata1 < rf_rdata2) && ds_valid && !rawblock),
      ALU_BGEU -> ((rf_rdata1 >= rf_rdata2) && ds_valid && !rawblock),
      ALU_JAL -> (true.B && ds_valid && !rawblock),
      ALU_JALR -> (true.B && ds_valid && !rawblock),
    )
  )
  br_target := MuxLookup(
    io.de_bus.OP,
    0.U,
    Array(
      ALU_BEQ -> (ds_pc + io.de_bus.imm),
      ALU_BNE -> (ds_pc + io.de_bus.imm),
      ALU_BLT -> (ds_pc + io.de_bus.imm),
      ALU_BGE -> (ds_pc + io.de_bus.imm),
      ALU_BLTU -> (ds_pc + io.de_bus.imm),
      ALU_BGEU -> (ds_pc + io.de_bus.imm),
      ALU_JAL -> (ds_pc + io.de_bus.imm),
      ALU_JALR -> ((rf_rdata1 + io.de_bus.imm) & "hfffffffffffffffe".U),
    )
  )

  br_taken_cancel := (eval || mret || br_taken) && ds_ready_go

  rs1 := ds_inst(19, 15)
  rs2 := ds_inst(24, 20)
  rd  := ds_inst(11, 7)

  io.de_bus.is_ld       := io.de_bus.res_from_mem

  val es_rawblock = (rs1 === io.es_dest_valid.dest || rs2 === io.es_dest_valid.dest) && io.es_dest_valid.dest =/= 0.U && (io.es_dest_valid.es_is_ld) && ds_valid
  val ms_rawblock = (rs1 === io.ms_dest_valid.dest || rs2 === io.ms_dest_valid.dest) && io.ms_dest_valid.dest =/= 0.U && (io.ms_dest_valid.ms_is_ld) && ds_valid
  rawblock := io.es_dest_valid.es_valid && es_rawblock || io.ms_dest_valid.ms_valid && ms_rawblock
  ds_ready_go := !rawblock
  io.br_bus.rawblock        := rawblock
  //io.de_bus.csr_rdata := csr(csr_index)

  //寄存器堆操作
  val registers = Module(new Registers).io
  registers.wen   := rf_we
  registers.waddr := rf_waddr
  registers.wdata := rf_wdata
  registers.rs1   := Mux(!eval,rs1,17.U)
  registers.rs2   := rs2
  rf_rdata1 := MuxCase(
    registers.rdata1,
    Array(
      ((registers.rs1 === io.es_dest_valid.dest && io.es_dest_valid.dest =/= 0.U) && io.es_dest_valid.es_to_ms_valid && io.es_dest_valid.gr_we && io.es_dest_valid.es_ready_go ) -> io.es_dest_valid.es_forward_data,
      ((registers.rs1 === io.ms_dest_valid.dest && io.ms_dest_valid.dest =/= 0.U) && io.ms_dest_valid.ms_to_ws_valid && io.ms_dest_valid.gr_we && io.ms_dest_valid.ms_ready_go ) -> io.ms_dest_valid.ms_forward_data,
      ((registers.rs1 === io.ws_dest_valid.dest && io.ws_dest_valid.dest =/= 0.U) && io.ws_dest_valid.ws_valid && io.ws_dest_valid.gr_we ) -> io.ws_dest_valid.ws_forward_data
    )
  )
  rf_rdata2 := MuxCase(
    registers.rdata2,
    Array(
      ((rs2 === io.es_dest_valid.dest && io.es_dest_valid.dest =/= 0.U ) && io.es_dest_valid.es_to_ms_valid && io.es_dest_valid.gr_we  && io.es_dest_valid.es_ready_go ) -> io.es_dest_valid.es_forward_data,
      ((rs2 === io.ms_dest_valid.dest && io.ms_dest_valid.dest =/= 0.U) && io.ms_dest_valid.ms_to_ws_valid && io.ms_dest_valid.gr_we && io.ms_dest_valid.ms_ready_go ) -> io.ms_dest_valid.ms_forward_data,
      ((rs2 === io.ws_dest_valid.dest && io.ws_dest_valid.dest =/= 0.U) && io.ws_dest_valid.ws_valid && io.ws_dest_valid.gr_we) -> io.ws_dest_valid.ws_forward_data
    )
  )
  io.de_bus.regs := registers.regs
  val dpi_ebreak = Module(new DPI_EBREAK).io
  dpi_ebreak.flag := Mux(io.de_bus.OP === ALU_EBREAK && ds_valid, 1.U(32.W), 0.U(32.W))

  //csr操作
  val csr = Module (new CSR).io
  csr.waddr1 := io.rf_bus.csr_waddr1
  csr.waddr2 := Mux(io.rf_bus.eval,io.rf_bus.csr_waddr2,0.U)//向0号写等于不写
  csr.wdata1  := io.rf_bus.csr_wdata
  csr.wdata2  := io.rf_bus.wb_pc
  csr.ren    := io.de_bus.csr_ren//译码时读取csr值存入reg，执行时用reg值得到结果，将结果写回csr，将reg写回寄存器堆
  csr.raddr  := io.de_bus.csr_raddr
  csr.wen    := io.rf_bus.csr_wen
  io.de_bus.csr_rdata := csr.rdata
  io.br_bus.csr_rdata := csr.rdata
  io.de_bus.csrs := csr.csrs
  is_csr := io.rf_bus.csr_wen && !io.rf_bus.eval && !io.rf_bus.mret

  val dpi = Module(new DPI)
  dpi.io.rf_0  := registers.regs(0)
  dpi.io.rf_1  := registers.regs(1)
  dpi.io.rf_2  := registers.regs(2)
  dpi.io.rf_3  := registers.regs(3)
  dpi.io.rf_4  := registers.regs(4)
  dpi.io.rf_5  := registers.regs(5)
  dpi.io.rf_6  := registers.regs(6)
  dpi.io.rf_7  := registers.regs(7)
  dpi.io.rf_8  := registers.regs(8)
  dpi.io.rf_9  := registers.regs(9)
  dpi.io.rf_10 := registers.regs(10)
  dpi.io.rf_11 := registers.regs(11)
  dpi.io.rf_12 := registers.regs(12)
  dpi.io.rf_13 := registers.regs(13)
  dpi.io.rf_14 := registers.regs(14)
  dpi.io.rf_15 := registers.regs(15)
  dpi.io.rf_16 := registers.regs(16)
  dpi.io.rf_17 := registers.regs(17)
  dpi.io.rf_18 := registers.regs(18)
  dpi.io.rf_19 := registers.regs(19)
  dpi.io.rf_20 := registers.regs(20)
  dpi.io.rf_21 := registers.regs(21)
  dpi.io.rf_22 := registers.regs(22)
  dpi.io.rf_23 := registers.regs(23)
  dpi.io.rf_24 := registers.regs(24)
  dpi.io.rf_25 := registers.regs(25)
  dpi.io.rf_26 := registers.regs(26)
  dpi.io.rf_27 := registers.regs(27)
  dpi.io.rf_28 := registers.regs(28)
  dpi.io.rf_29 := registers.regs(29)
  dpi.io.rf_30 := registers.regs(30)
  dpi.io.rf_31 := registers.regs(31)
  dpi.io.inst  := io.rf_bus.wb_inst
  dpi.io.pc    := io.rf_bus.wb_pc
  dpi.io.csr_0 := csr.csrs(0)
  dpi.io.csr_1 := csr.csrs(1)
  dpi.io.csr_2 := csr.csrs(2)
  dpi.io.csr_3 := csr.csrs(3)
  dpi.io.csr_4 := csr.csrs(4)
  dpi.io.eval  := eval
}
