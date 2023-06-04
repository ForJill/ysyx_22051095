// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop_BOOTH_gen.h"
#include "VTop__Syms.h"

void VTop_BOOTH_gen___ctor_var_reset(VTop_BOOTH_gen* vlSelf);

VTop_BOOTH_gen::VTop_BOOTH_gen(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_BOOTH_gen___ctor_var_reset(this);
}

void VTop_BOOTH_gen::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTop_BOOTH_gen::~VTop_BOOTH_gen() {
}
