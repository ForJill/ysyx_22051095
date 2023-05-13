package rv64i

import chisel3._
import chisel3.util.HasBlackBoxInline
import utils._
import chisel3.util._
import chisel3.stage._

class memory extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    //val arid  = Input(UInt(4.W))
    val arvalid = Input(Bool())
    val araddr = Input(UInt(64.W))
    val arready = Output(Bool())
    val rdata = Output(UInt(64.W))
    val rresp = Output(UInt(2.W))
    val rvalid = Output(Bool())
    val rready = Input(Bool())
    val awaddr = Input(UInt(64.W))
    val awvalid = Input(Bool())
    val awready = Output(Bool())
    val wdata = Input(UInt(64.W))
    val wstrb = Input(UInt(8.W))
    val wvalid = Input(Bool())
    val wready = Output(Bool())
    val bresp = Output(UInt(2.W))
    val bvalid = Output(Bool())
    val bready = Input(Bool())
  })
  setInline(
    "memory.v",
    """
      |import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
      |import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
      |module memory(
      | input clk,
      | //input [3:0] arid,
      | input arvalid,
      | input [63:0] araddr,
      | output arready,
      | output [63:0] rdata,
      | output [1:0] rresp,
      | output rvalid,
      | input rready,
      | input [63:0] awaddr,
      | input awvalid,
      | output awready,
      | input [63:0] wdata,
      | input [7:0] wstrb,
      | input wvalid,
      | output wready,
      | output [1:0] bresp,
      | output bvalid,
      | input bready  
      |);
      |reg [63:0] rdata_reg;
      |localparam READ_AINIT = 2'b01;
      |localparam READ_AREADY = 2'b10;
      |reg [1:0] rstate;
      |reg [1:0] rstate_next;
      |always @(posedge clk) begin
      |  rstate <= rstate_next;
      |end
      |always @(posedge clk) begin
      |  if (arvalid) begin
      |    rstate_next <= READ_AINIT;
      |  end else begin
      |    rstate_next <= rstate;
      |  end
      |end
      |always @(posedge clk) begin
      |  case(rstate)
      |   READ_AINIT: begin
      |     rstate_next <= READ_AREADY;
      |     pmem_read(araddr, rdata_reg);
      |     arready <= 1'b1;
      |   end
      |   READ_AREADY: begin
      |     if (rready) begin
      |     rstate_next <= READ_AINIT;
      |     rdata_reg <= rdata_reg;
      |     rvalid <= 1'b1;
      |     rresp <= 2'b0;
      |     end
      |   end
      |  endcase
      |end
      |//延时一拍后将rdata_reg赋值给rdata
      |always @(posedge clk) begin
      |  rdata <= rdata_reg;
      |end
      |always @(posedge clk)
      |reg [63:0]waddr_reg;
      |reg [63:0]wdata_reg;
      |reg [7:0]wstrb_reg;
      |localparam WRITE_AINIT = 2'b01;
      |localparam WRITE_AREADY = 2'b10;
      |localparam WRITE_ADATA  = 2'b11;
      |reg [1:0] wstate;
      |reg [1:0] wstate_next;
      |always @(posedge clk) begin
      |  wstate <= wstate_next;
      |end
      |always @(posedge clk) begin
      |  if (awvalid) begin
      |    wstate_next <= WRITE_AINIT;
      |  end else begin
      |    wstate_next <= wstate;
      |  end
      |end
      |always @(posedge clk) begin
      |  case(wstate)
      |   WRITE_AINIT: begin
      |     wstate_next <= WRITE_AREADY;
      |     waddr_reg <= awaddr;
      |   WRITE_AREADY: begin
      |     if (wvalid) begin
      |       wstate_next <= WRITE_ADATA;
      |       wdata_reg <= wdata;
      |       wstrb_reg <= wstrb;
      |       awready <= 1'b1;
      |     end
      |   end
      |   WRITE_ADATA: begin
      |     if (wready) begin
      |       wstate_next <= WRITE_AINIT;
      |       bvalid <= 1'b1;
      |       bresp <= 2'b0;
      |     end
      |   end
      |  endcase
      |end
      |//延时一拍后将waddr_reg, wdata_reg, wstrb_reg赋值给pmem_write
      |always @(posedge clk) begin
      |  if (wstate == WRITE_ADATA) begin
      |  pmem_write(waddr_reg, wdata_reg, wstrb_reg);
      |  end
      |end
      |endmodule
      """.stripMargin
  )
}
