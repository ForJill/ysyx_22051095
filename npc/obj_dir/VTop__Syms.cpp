// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTop__Syms.h"
#include "VTop.h"
#include "VTop___024root.h"
#include "VTop___024unit.h"
#include "VTop_BOOTH_gen.h"

// FUNCTIONS
VTop__Syms::~VTop__Syms()
{
}

VTop__Syms::VTop__Syms(VerilatedContext* contextp, const char* namep, VTop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen{this, Verilated::catName(namep, "Top.exu.mul_1.BOOTH_gen")}
    , TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen{this, Verilated::catName(namep, "Top.exu.mul.BOOTH_gen")}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen = &TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen;
    TOP.__PVT__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen = &TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen;
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__Vconfigure(true);
    TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__Vconfigure(false);
    TOP____024unit.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
