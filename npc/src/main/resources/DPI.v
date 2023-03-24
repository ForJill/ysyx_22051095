import "DPI-C" function void ebreak(int flag);
module DPI(
    input flag
);
  ebreak(flag);
endmodule
    