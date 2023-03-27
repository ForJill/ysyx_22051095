// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop__Syms.h"
#include "VTop___024root.h"

void VTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial__TOP\n"); );
    // Body
    VTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Top__DOT__dpi__DOT__rf);
}

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
void VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit(IData/*31:0*/ inst);
void VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h879b9b48__0;
    // Body
    vlSelf->io_ctrl_J_JUMP = ((0x33U != (0xfe00707fU 
                                         & vlSelf->io_inst)) 
                              & ((0x13U != (0x707fU 
                                            & vlSelf->io_inst)) 
                                 & ((0x100073U != vlSelf->io_inst) 
                                    & ((0x17U != (0x7fU 
                                                  & vlSelf->io_inst)) 
                                       & ((0x37U != 
                                           (0x7fU & vlSelf->io_inst)) 
                                          & ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->io_inst)) 
                                             | (0x67U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))))))));
    vlSelf->Top__DOT__PC__DOT___init_T_1 = (4ULL + vlSelf->Top__DOT__PC__DOT__init);
    vlSelf->io_pc = vlSelf->Top__DOT__PC__DOT__init;
    vlSelf->io_ctrl_RegWen = ((0x33U == (0xfe00707fU 
                                         & vlSelf->io_inst)) 
                              | ((0x100073U != vlSelf->io_inst) 
                                 | (0x13U == (0x707fU 
                                              & vlSelf->io_inst))));
    vlSelf->io_rs2 = ((0U == (0x1fU & (vlSelf->io_inst 
                                       >> 0x14U))) ? 0ULL
                       : vlSelf->Top__DOT__registers__DOT__registers
                      [(0x1fU & (vlSelf->io_inst >> 0x14U))]);
    vlSelf->Top__DOT__dpi__DOT__rf[0U] = vlSelf->Top__DOT__registers__DOT__registers
        [0U];
    vlSelf->Top__DOT__dpi__DOT__rf[1U] = vlSelf->Top__DOT__registers__DOT__registers
        [1U];
    vlSelf->Top__DOT__dpi__DOT__rf[2U] = vlSelf->Top__DOT__registers__DOT__registers
        [2U];
    vlSelf->Top__DOT__dpi__DOT__rf[3U] = vlSelf->Top__DOT__registers__DOT__registers
        [3U];
    vlSelf->Top__DOT__dpi__DOT__rf[4U] = vlSelf->Top__DOT__registers__DOT__registers
        [4U];
    vlSelf->Top__DOT__dpi__DOT__rf[5U] = vlSelf->Top__DOT__registers__DOT__registers
        [5U];
    vlSelf->Top__DOT__dpi__DOT__rf[6U] = vlSelf->Top__DOT__registers__DOT__registers
        [6U];
    vlSelf->Top__DOT__dpi__DOT__rf[7U] = vlSelf->Top__DOT__registers__DOT__registers
        [7U];
    vlSelf->Top__DOT__dpi__DOT__rf[8U] = vlSelf->Top__DOT__registers__DOT__registers
        [8U];
    vlSelf->Top__DOT__dpi__DOT__rf[9U] = vlSelf->Top__DOT__registers__DOT__registers
        [9U];
    vlSelf->Top__DOT__dpi__DOT__rf[0xaU] = vlSelf->Top__DOT__registers__DOT__registers
        [0xaU];
    vlSelf->Top__DOT__dpi__DOT__rf[0xbU] = vlSelf->Top__DOT__registers__DOT__registers
        [0xbU];
    vlSelf->Top__DOT__dpi__DOT__rf[0xcU] = vlSelf->Top__DOT__registers__DOT__registers
        [0xcU];
    vlSelf->Top__DOT__dpi__DOT__rf[0xdU] = vlSelf->Top__DOT__registers__DOT__registers
        [0xdU];
    vlSelf->Top__DOT__dpi__DOT__rf[0xeU] = vlSelf->Top__DOT__registers__DOT__registers
        [0xeU];
    vlSelf->Top__DOT__dpi__DOT__rf[0xfU] = vlSelf->Top__DOT__registers__DOT__registers
        [0xfU];
    vlSelf->Top__DOT__dpi__DOT__rf[0x10U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x10U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x11U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x11U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x12U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x12U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x13U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x13U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x14U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x14U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x15U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x15U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x16U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x16U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x17U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x17U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x18U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x18U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x19U] = vlSelf->Top__DOT__registers__DOT__registers
        [0x19U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x1aU] = vlSelf->Top__DOT__registers__DOT__registers
        [0x1aU];
    vlSelf->Top__DOT__dpi__DOT__rf[0x1bU] = vlSelf->Top__DOT__registers__DOT__registers
        [0x1bU];
    vlSelf->Top__DOT__dpi__DOT__rf[0x1cU] = vlSelf->Top__DOT__registers__DOT__registers
        [0x1cU];
    vlSelf->Top__DOT__dpi__DOT__rf[0x1dU] = vlSelf->Top__DOT__registers__DOT__registers
        [0x1dU];
    vlSelf->Top__DOT__dpi__DOT__rf[0x1eU] = vlSelf->Top__DOT__registers__DOT__registers
        [0x1eU];
    vlSelf->Top__DOT__dpi__DOT__rf[0x1fU] = vlSelf->Top__DOT__registers__DOT__registers
        [0x1fU];
    if ((0x33U == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
        vlSelf->io_ctrl_OP = 0U;
    } else if ((0x13U == (0x707fU & vlSelf->io_inst))) {
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
        vlSelf->io_ctrl_OP = 1U;
    } else if ((0x100073U == vlSelf->io_inst)) {
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
        vlSelf->io_ctrl_OP = 4U;
    } else if ((0x17U == (0x7fU & vlSelf->io_inst))) {
        vlSelf->Top__DOT__decoder__DOT__ImmType = 1U;
        vlSelf->io_ctrl_OP = 3U;
    } else if ((0x37U == (0x7fU & vlSelf->io_inst))) {
        vlSelf->Top__DOT__decoder__DOT__ImmType = 1U;
        vlSelf->io_ctrl_OP = 2U;
    } else if ((0x6fU == (0x7fU & vlSelf->io_inst))) {
        vlSelf->Top__DOT__decoder__DOT__ImmType = 2U;
        vlSelf->io_ctrl_OP = 5U;
    } else {
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
        vlSelf->io_ctrl_OP = ((0x67U == (0x707fU & vlSelf->io_inst))
                               ? 6U : ((0x3023U == 
                                        (0x707fU & vlSelf->io_inst))
                                        ? 7U : 0U));
    }
    if ((2U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))) {
        __Vtemp_h879b9b48__0[0U] = (((((IData)(((((vlSelf->io_inst 
                                                   >> 0x1fU)
                                                   ? 0x7fffffffffffffffULL
                                                   : 0ULL) 
                                                 << 1U) 
                                                | (QData)((IData)(
                                                                  (vlSelf->io_inst 
                                                                   >> 0x1fU))))) 
                                       << 0x14U) | 
                                      (0xff000U & vlSelf->io_inst)) 
                                     | (0x800U & (vlSelf->io_inst 
                                                  >> 9U))) 
                                    | (0x7feU & (vlSelf->io_inst 
                                                 >> 0x14U)));
        __Vtemp_h879b9b48__0[1U] = (((IData)(((((vlSelf->io_inst 
                                                 >> 0x1fU)
                                                 ? 0x7fffffffffffffffULL
                                                 : 0ULL) 
                                               << 1U) 
                                              | (QData)((IData)(
                                                                (vlSelf->io_inst 
                                                                 >> 0x1fU))))) 
                                     >> 0xcU) | ((IData)(
                                                         (((((vlSelf->io_inst 
                                                              >> 0x1fU)
                                                              ? 0x7fffffffffffffffULL
                                                              : 0ULL) 
                                                            << 1U) 
                                                           | (QData)((IData)(
                                                                             (vlSelf->io_inst 
                                                                              >> 0x1fU)))) 
                                                          >> 0x20U)) 
                                                 << 0x14U));
    } else if ((1U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))) {
        __Vtemp_h879b9b48__0[0U] = ((IData)(((((vlSelf->io_inst 
                                                >> 0x1fU)
                                                ? 0xfffffffffffULL
                                                : 0ULL) 
                                              << 0x14U) 
                                             | (QData)((IData)(
                                                               (vlSelf->io_inst 
                                                                >> 0xcU))))) 
                                    << 0xcU);
        __Vtemp_h879b9b48__0[1U] = (((IData)(((((vlSelf->io_inst 
                                                 >> 0x1fU)
                                                 ? 0xfffffffffffULL
                                                 : 0ULL) 
                                               << 0x14U) 
                                              | (QData)((IData)(
                                                                (vlSelf->io_inst 
                                                                 >> 0xcU))))) 
                                     >> 0x14U) | ((IData)(
                                                          (((((vlSelf->io_inst 
                                                               >> 0x1fU)
                                                               ? 0xfffffffffffULL
                                                               : 0ULL) 
                                                             << 0x14U) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->io_inst 
                                                                               >> 0xcU)))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
    } else {
        __Vtemp_h879b9b48__0[0U] = (IData)(((0U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))
                                             ? ((((vlSelf->io_inst 
                                                   >> 0x1fU)
                                                   ? 0xfffffffffffffULL
                                                   : 0ULL) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->io_inst 
                                                                   >> 0x14U))))
                                             : 0ULL));
        __Vtemp_h879b9b48__0[1U] = (IData)((((0U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))
                                              ? (((
                                                   (vlSelf->io_inst 
                                                    >> 0x1fU)
                                                    ? 0xfffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->io_inst 
                                                                    >> 0x14U))))
                                              : 0ULL) 
                                            >> 0x20U));
    }
    vlSelf->io_imm = (((QData)((IData)(__Vtemp_h879b9b48__0[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   __Vtemp_h879b9b48__0[0U])));
    VTop___024unit____Vdpiimwrap_ebreak_TOP____024unit(
                                                       (((4U 
                                                          == (IData)(vlSelf->io_ctrl_OP)) 
                                                         | (IData)(
                                                                   ((6U 
                                                                     == (IData)(vlSelf->io_ctrl_OP)) 
                                                                    & (0U 
                                                                       == 
                                                                       (0xf80U 
                                                                        & vlSelf->io_inst)))))
                                                         ? 1U
                                                         : 0U));
    VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit(vlSelf->io_inst);
    VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(vlSelf->io_pc);
    vlSelf->io_op = vlSelf->io_ctrl_OP;
    vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_addr 
        = ((7U == (IData)(vlSelf->io_ctrl_OP)) ? 0U
            : (0x1fU & (vlSelf->io_inst >> 0xfU)));
    vlSelf->io_rs1 = ((0U == (IData)(vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_addr))
                       ? 0ULL : vlSelf->Top__DOT__registers__DOT__registers
                      [vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_addr]);
    vlSelf->Top__DOT__alu__DOT__op1 = ((6U == (IData)(vlSelf->io_ctrl_OP))
                                        ? vlSelf->Top__DOT__PC__DOT__init
                                        : ((5U == (IData)(vlSelf->io_ctrl_OP))
                                            ? vlSelf->Top__DOT__PC__DOT__init
                                            : vlSelf->io_rs1));
    vlSelf->Top__DOT__alu__DOT___result_T_3 = (vlSelf->Top__DOT__alu__DOT__op1 
                                               + vlSelf->io_imm);
    vlSelf->io_resultALU = ((7U == (IData)(vlSelf->io_ctrl_OP))
                             ? vlSelf->Top__DOT__alu__DOT__op1
                             : ((6U == (IData)(vlSelf->io_ctrl_OP))
                                 ? (4ULL + vlSelf->Top__DOT__alu__DOT__op1)
                                 : ((5U == (IData)(vlSelf->io_ctrl_OP))
                                     ? (4ULL + vlSelf->Top__DOT__alu__DOT__op1)
                                     : ((3U == (IData)(vlSelf->io_ctrl_OP))
                                         ? vlSelf->Top__DOT__alu__DOT___result_T_3
                                         : ((2U == (IData)(vlSelf->io_ctrl_OP))
                                             ? vlSelf->io_imm
                                             : ((1U 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? vlSelf->Top__DOT__alu__DOT___result_T_3
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? 
                                                 (vlSelf->Top__DOT__alu__DOT__op1 
                                                  + vlSelf->io_rs2)
                                                  : 0ULL)))))));
    vlSelf->Top__DOT__registers__DOT__registers_MPORT_data 
        = ((IData)(vlSelf->io_ctrl_RegWen) ? vlSelf->io_resultALU
            : vlSelf->Top__DOT__registers__DOT__registers
           [(0x1fU & (vlSelf->io_inst >> 7U))]);
}
