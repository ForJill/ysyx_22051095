// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_BOOTH_GEN_H_
#define VERILATED_VTOP_BOOTH_GEN_H_  // guard

#include "verilated.h"

class VTop__Syms;

class VTop_BOOTH_gen final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(io_y,2,0);
    VL_OUT8(io_cout,0,0);
    CData/*0:0*/ __PVT__RS_io_sel_positive;
    CData/*0:0*/ __PVT__RS_io_sel_double_positive;
    CData/*0:0*/ __PVT__BOOTH_S__DOT___io_sel_negative_T_5;
    CData/*0:0*/ __PVT__BOOTH_S__DOT___io_sel_double_negative_T_3;
    VL_INW(io_x,131,0,5);
    VL_OUTW(io_out,131,0,5);
    VlWide<3>/*65:0*/ __PVT__io_out_lo;
    VlWide<3>/*65:0*/ __PVT__io_out_hi;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_BOOTH_gen(VTop__Syms* symsp, const char* v__name);
    ~VTop_BOOTH_gen();
    VL_UNCOPYABLE(VTop_BOOTH_gen);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
