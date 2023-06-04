
import "DPI-C" function void ebreak (input int flag);
module DPI_EBREAK(
    input [31:0] flag
);
always@(*) begin
  ebreak(flag);
end
endmodule
    