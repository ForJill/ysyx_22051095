
import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
module memory(
    input [63:0] raddr,
    input [63:0] waddr,
    input [63:0] wdata,
    input [7:0] wmask,
    input wen,
    output [63:0] rdata
);
always@(*) begin
  pmem_read(raddr, rdata);
  if(wen)begin
      pmem_write(waddr, wdata, wmask);
  end
end
endmodule
      