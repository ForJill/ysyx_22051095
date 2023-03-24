// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop__Syms.h"
#include "VTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void VTop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ flag);

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_pc = vlSelf->Top__DOT__PC__DOT__init;
    vlSelf->Top__DOT__PC__DOT___init_T_1 = (4ULL + vlSelf->Top__DOT__PC__DOT__init);
    vlSelf->io_inst = vlSelf->Top__DOT__instmem__DOT__mem
        [(0x3ffU & (IData)(vlSelf->Top__DOT__PC__DOT__init))];
    vlSelf->io_ctrl_RegWen = ((0x33U == (0xfe00707fU 
                                         & vlSelf->io_inst)) 
                              | ((0x100073U != vlSelf->io_inst) 
                                 | (0x13U == (0x707fU 
                                              & vlSelf->io_inst))));
    vlSelf->io_imm = ((((vlSelf->io_inst >> 0x1fU) ? 0xfffffffffffffULL
                         : 0ULL) << 0xcU) | (QData)((IData)(
                                                            (vlSelf->io_inst 
                                                             >> 0x14U))));
    vlSelf->io_rs1 = ((0U == (0x1fU & (vlSelf->io_inst 
                                       >> 0xfU))) ? 0ULL
                       : vlSelf->Top__DOT__registers__DOT__registers
                      [(0x1fU & (vlSelf->io_inst >> 0xfU))]);
    vlSelf->io_rs2 = ((0U == (0x1fU & (vlSelf->io_inst 
                                       >> 0x14U))) ? 0ULL
                       : vlSelf->Top__DOT__registers__DOT__registers
                      [(0x1fU & (vlSelf->io_inst >> 0x14U))]);
    vlSelf->io_ctrl_OP = ((0x33U == (0xfe00707fU & vlSelf->io_inst))
                           ? 0U : ((0x13U == (0x707fU 
                                              & vlSelf->io_inst))
                                    ? 1U : ((0x100073U 
                                             == vlSelf->io_inst)
                                             ? 2U : 0U)));
    VTop___024unit____Vdpiimwrap_ebreak_TOP____024unit(
                                                       (2U 
                                                        == (IData)(vlSelf->io_ctrl_OP)));
    vlSelf->io_op = vlSelf->io_ctrl_OP;
    vlSelf->io_resultALU = ((1U == (IData)(vlSelf->io_ctrl_OP))
                             ? (vlSelf->io_imm + vlSelf->io_rs1)
                             : ((0U == (IData)(vlSelf->io_ctrl_OP))
                                 ? (vlSelf->io_rs1 
                                    + vlSelf->io_rs2)
                                 : 0ULL));
    vlSelf->Top__DOT__registers__DOT__registers_MPORT_data 
        = ((IData)(vlSelf->io_ctrl_RegWen) ? vlSelf->io_resultALU
            : vlSelf->Top__DOT__registers__DOT__registers
           [(0x1fU & (vlSelf->io_inst >> 7U))]);
}
