
import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
module AXI_mem(
    input reset,
    input clock,
    input [3:0] arid,
    input [63:0] araddr,
    //input [2:0] arsize,
    input arvalid,
    output arready,
    //output [3:0] rid,
    output [63:0] rdata,
    //output [1:0] rresp,
    output rvalid,
    input rready,
    input [3:0] awid,
    input [63:0] awaddr,
    //input [7:0] awlen,
    //input [2:0] awsize,
    //input [1:0] awburst,
    //input awlock,
    //input [3:0] awcache,
    //input [2:0] awprot,
    input awvalid,
    output awready,
    //input [3:0] wid,
    input [63:0] wdata,
    input [7:0] wstrb,
    //input wlast,
    input wvalid,
    output wready,
    //output [3:0] bid,
    //output [1:0] bresp,
    output bvalid,
    input bready
);
localparam READ_AINIT  = 3'b001;
localparam READ_ARADDR = 3'b010;
localparam READ_RDATA  = 3'b011;
reg [2:0] read_state;
reg [2:0] read_next_state;
wire read_ainit = (read_state == READ_AINIT);
wire read_araddr = (read_state == READ_ARADDR);
wire read_rdata = (read_state == READ_RDATA);
always@(posedge clock) begin
   if(reset) begin
       read_state <= READ_AINIT;
   end
   else begin
       read_state <= read_next_state;
   end
end
always@(*) begin
   case(read_state)
       READ_AINIT: begin
           if(arvalid) begin
               read_next_state = READ_ARADDR;
           end
           else begin
               read_next_state = READ_AINIT;
           end
       end
       READ_ARADDR: begin
          read_next_state = READ_RDATA;
       end
       READ_RDATA: begin
           if(rready) begin
               read_next_state = READ_AINIT;
           end
           else begin
               read_next_state = READ_RDATA;
           end
       end
       default: begin
           read_next_state = READ_AINIT;
       end
   endcase
end
assign arready = read_araddr;
assign rvalid = read_rdata;
always@(posedge clock) begin
   if(arvalid)begin
       pmem_read(araddr, rdata);
   end
end

localparam WRITE_AINIT  = 3'b001;
localparam WRITE_AWADDR = 3'b010;
localparam WRITE_WDATA  = 3'b011;
localparam WRITE_BRESP  = 3'b100;

reg [2:0] write_state;
reg [2:0] write_next_state;
wire write_ainit = (write_state == WRITE_AINIT);
wire write_awaddr = (write_state == WRITE_AWADDR);
wire write_wdata = (write_state == WRITE_WDATA);
wire write_bresp = (write_state == WRITE_BRESP);

always@(posedge clock) begin
    write_state <= write_next_state;
end
always@(*) begin
   case(write_state)
       WRITE_AINIT: begin
           if(awvalid) begin
               write_next_state = WRITE_AWADDR;
           end
           else begin
               write_next_state = WRITE_AINIT;
           end
        end
    WRITE_AWADDR: begin
        if(wvalid) begin
            write_next_state = WRITE_WDATA;
        end
        else begin
            write_next_state = WRITE_AWADDR;
        end
    end
    WRITE_WDATA: begin
        write_next_state = WRITE_BRESP;
    end
    WRITE_BRESP: begin
        if(bready) begin
            write_next_state = WRITE_AINIT;
        end
        else begin
            write_next_state = WRITE_BRESP;
        end
    end
    default: begin
        write_next_state = WRITE_AINIT;
    end
   endcase
end
assign awready = write_awaddr;
assign wready = write_bresp;
assign bvalid = write_bresp;
always@(posedge clock) begin
   if(write_wdata)begin
       pmem_write(awaddr, wdata, wstrb);
   end
end
endmodule
        