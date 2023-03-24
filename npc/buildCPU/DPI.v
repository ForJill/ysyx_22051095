
import "DPI-C" function void ebreak (input int flag);
module DPI(
    input flag
);
always@(*) begin
  ebreak(flag);
end
endmodule
    