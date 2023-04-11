// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop__Syms.h"
#include "VTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void VTop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ flag);
void VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit(QData/*63:0*/ inst);
void VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);
void VTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__Top__DOT__registers__DOT__registers__v0;
    __Vdlyvdim0__Top__DOT__registers__DOT__registers__v0 = 0;
    QData/*63:0*/ __Vdlyvval__Top__DOT__registers__DOT__registers__v0;
    __Vdlyvval__Top__DOT__registers__DOT__registers__v0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_he0f364e5__0;
    VlWide<4>/*127:0*/ __Vtemp_hc7d2eb5a__0;
    VlWide<4>/*127:0*/ __Vtemp_he0f364e5__1;
    VlWide<4>/*127:0*/ __Vtemp_h425c4ad5__0;
    VlWide<4>/*127:0*/ __Vtemp_h06d202b8__0;
    VlWide<3>/*95:0*/ __Vtemp_he0e97cbe__0;
    VlWide<3>/*95:0*/ __Vtemp_ha1df657c__0;
    VlWide<3>/*95:0*/ __Vtemp_h4296a6ce__0;
    VlWide<3>/*95:0*/ __Vtemp_h7d6c219e__0;
    VlWide<3>/*95:0*/ __Vtemp_h34a0fcaa__0;
    VlWide<4>/*127:0*/ __Vtemp_he1528dfe__0;
    VlWide<3>/*95:0*/ __Vtemp_h3aee953a__0;
    VlWide<3>/*95:0*/ __Vtemp_h623558ce__0;
    VlWide<4>/*127:0*/ __Vtemp_h6f650466__0;
    VlWide<4>/*127:0*/ __Vtemp_h41c30b15__0;
    VlWide<4>/*127:0*/ __Vtemp_h957ba6d3__0;
    VlWide<4>/*127:0*/ __Vtemp_he0f364e5__2;
    VlWide<4>/*127:0*/ __Vtemp_h0498d20c__0;
    VlWide<4>/*127:0*/ __Vtemp_hab75ec19__0;
    VlWide<4>/*127:0*/ __Vtemp_h44d9f24d__0;
    VlWide<4>/*127:0*/ __Vtemp_h97ba8989__0;
    VlWide<3>/*95:0*/ __Vtemp_he0e98e2b__0;
    VlWide<3>/*95:0*/ __Vtemp_hd249025d__0;
    VlWide<4>/*127:0*/ __Vtemp_h15ae5748__0;
    VlWide<4>/*127:0*/ __Vtemp_h73e849ff__0;
    VlWide<4>/*127:0*/ __Vtemp_h41c573fa__0;
    // Body
    __Vdlyvval__Top__DOT__registers__DOT__registers__v0 
        = vlSelf->Top__DOT__registers__DOT__registers_MPORT_data;
    __Vdlyvdim0__Top__DOT__registers__DOT__registers__v0 
        = (0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                            >> 7U)));
    vlSelf->Top__DOT__PC__DOT__init = ((IData)(vlSelf->reset)
                                        ? 0x80000000ULL
                                        : ((IData)(vlSelf->io_ctrl_J_JUMP)
                                            ? ((0x1aU 
                                                == (IData)(vlSelf->io_ctrl_OP))
                                                ? (QData)((IData)(
                                                                  ((IData)(
                                                                           (vlSelf->Top__DOT__alu__DOT___result_T_103 
                                                                            >> 1U)) 
                                                                   << 1U)))
                                                : (
                                                   (0x38U 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? vlSelf->Top__DOT__alu__DOT___result_T_170
                                                    : 0ULL))
                                            : (((0x35U 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_49)
                                                 : 
                                                ((0x33U 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? 
                                                 (vlSelf->io_rs1 
                                                  >= vlSelf->io_rs2)
                                                  : 
                                                 ((0x32U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? 
                                                  VL_GTES_IQQ(64, vlSelf->io_rs1, vlSelf->io_rs2)
                                                   : 
                                                  ((0x34U 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_48)
                                                    : 
                                                   ((0x31U 
                                                     == (IData)(vlSelf->io_ctrl_OP))
                                                     ? 
                                                    (vlSelf->io_rs1 
                                                     != vlSelf->io_rs2)
                                                     : 
                                                    ((0x30U 
                                                      == (IData)(vlSelf->io_ctrl_OP)) 
                                                     & (vlSelf->io_rs1 
                                                        == vlSelf->io_rs2)))))))
                                                ? vlSelf->io_resultALU
                                                : vlSelf->Top__DOT__PC__DOT___init_T_1)));
    vlSelf->Top__DOT__registers__DOT__registers[__Vdlyvdim0__Top__DOT__registers__DOT__registers__v0] 
        = __Vdlyvval__Top__DOT__registers__DOT__registers__v0;
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
    vlSelf->Top__DOT__PC__DOT___init_T_1 = (4ULL + vlSelf->Top__DOT__PC__DOT__init);
    vlSelf->io_pc = vlSelf->Top__DOT__PC__DOT__init;
    VTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->io_pc, vlSelf->__Vtask_pmem_read__4__rdata);
    vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata = vlSelf->__Vtask_pmem_read__4__rdata;
    vlSelf->Top__DOT__decoder__DOT___J_T_4 = ((((1U 
                                                 & (IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                            >> 0x1fU)))
                                                 ? 0x7fffffffffffffffULL
                                                 : 0ULL) 
                                               << 1U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                            >> 0x1fU))))));
    vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data 
        = vlSelf->Top__DOT__registers__DOT__registers
        [(0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                           >> 0x14U)))];
    vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data 
        = vlSelf->Top__DOT__registers__DOT__registers
        [(0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                           >> 0xfU)))];
    vlSelf->io_inst = (IData)(vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata);
    if ((0U == (0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                 >> 0x14U))))) {
        vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0 = 0U;
        vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0 = 0U;
        vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7fde__0 = 0U;
        vlSelf->io_rs2 = 0ULL;
    } else {
        vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0 
            = (0x1fU & (IData)(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data));
        vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0 
            = (0x3fU & (IData)(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data));
        vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7fde__0 
            = (IData)(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data);
        vlSelf->io_rs2 = vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data;
    }
    if ((0U == (0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                 >> 0xfU))))) {
        vlSelf->Top__DOT__alu__DOT___result_T_87 = 0U;
        vlSelf->io_rs1 = 0ULL;
    } else {
        vlSelf->Top__DOT__alu__DOT___result_T_87 = (IData)(vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data);
        vlSelf->io_rs1 = vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data;
    }
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_295 
        = ((0x501bU != (0xfe00707fU & vlSelf->io_inst)) 
           & ((0x40005013U != (0xfc00707fU & vlSelf->io_inst)) 
              & ((0x4000501bU != (0xfe00707fU & vlSelf->io_inst)) 
                 & ((0x3013U != (0x707fU & vlSelf->io_inst)) 
                    & ((0x7013U != (0x707fU & vlSelf->io_inst)) 
                       & ((0x4013U != (0x707fU & vlSelf->io_inst)) 
                          & ((0x3023U != (0x707fU & vlSelf->io_inst)) 
                             & ((0x23U != (0x707fU 
                                           & vlSelf->io_inst)) 
                                & ((0x1023U != (0x707fU 
                                                & vlSelf->io_inst)) 
                                   & ((0x2023U != (0x707fU 
                                                   & vlSelf->io_inst)) 
                                      & ((0x63U != 
                                          (0x707fU 
                                           & vlSelf->io_inst)) 
                                         & ((0x1063U 
                                             != (0x707fU 
                                                 & vlSelf->io_inst)) 
                                            & ((0x5063U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               & ((0x4063U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->io_inst)) 
                                                  & ((0x6063U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->io_inst)) 
                                                     & ((0x17U 
                                                         != 
                                                         (0x7fU 
                                                          & vlSelf->io_inst)) 
                                                        & ((0x37U 
                                                            != 
                                                            (0x7fU 
                                                             & vlSelf->io_inst)) 
                                                           & (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->io_inst)))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_209 
        = ((0x103bU == (0xfe00707fU & vlSelf->io_inst)) 
           | ((0x4000503bU == (0xfe00707fU & vlSelf->io_inst)) 
              | ((0x503bU == (0xfe00707fU & vlSelf->io_inst)) 
                 | ((0x4033U == (0xfe00707fU & vlSelf->io_inst)) 
                    | ((0x7033U == (0xfe00707fU & vlSelf->io_inst)) 
                       | ((0x40005033U == (0xfe00707fU 
                                           & vlSelf->io_inst)) 
                          | ((0x6033U == (0xfe00707fU 
                                          & vlSelf->io_inst)) 
                             | ((0x2006033U == (0xfe00707fU 
                                                & vlSelf->io_inst)) 
                                | ((0x200603bU == (0xfe00707fU 
                                                   & vlSelf->io_inst)) 
                                   | ((0x2007033U == 
                                       (0xfe00707fU 
                                        & vlSelf->io_inst)) 
                                      | ((0x200703bU 
                                          == (0xfe00707fU 
                                              & vlSelf->io_inst)) 
                                         | ((0x13U 
                                             == (0x707fU 
                                                 & vlSelf->io_inst)) 
                                            | ((0x1bU 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               | ((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst)) 
                                                  | ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst)) 
                                                     | ((0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst)) 
                                                        | ((0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst)) 
                                                           | ((0x5003U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->io_inst)) 
                                                              | ((0x2003U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->io_inst)) 
                                                                 | ((0x6003U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->io_inst)) 
                                                                    | ((0x3003U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->io_inst)) 
                                                                       | ((0x1013U 
                                                                           == 
                                                                           (0xfc00707fU 
                                                                            & vlSelf->io_inst)) 
                                                                          | ((0x101bU 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->io_inst)) 
                                                                             | ((0x5013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x501bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x40005013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x4000501bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x4013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x3023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x100073U 
                                                                                != vlSelf->io_inst) 
                                                                                | (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_426 
        = ((0x4033U != (0xfe00707fU & vlSelf->io_inst)) 
           & ((0x7033U != (0xfe00707fU & vlSelf->io_inst)) 
              & ((0x40005033U != (0xfe00707fU & vlSelf->io_inst)) 
                 & ((0x6033U != (0xfe00707fU & vlSelf->io_inst)) 
                    & ((0x2006033U != (0xfe00707fU 
                                       & vlSelf->io_inst)) 
                       & ((0x200603bU != (0xfe00707fU 
                                          & vlSelf->io_inst)) 
                          & ((0x2007033U != (0xfe00707fU 
                                             & vlSelf->io_inst)) 
                             & ((0x200703bU != (0xfe00707fU 
                                                & vlSelf->io_inst)) 
                                & ((0x13U != (0x707fU 
                                              & vlSelf->io_inst)) 
                                   & ((0x1bU != (0x707fU 
                                                 & vlSelf->io_inst)) 
                                      & ((0x67U != 
                                          (0x707fU 
                                           & vlSelf->io_inst)) 
                                         & ((3U == 
                                             (0x707fU 
                                              & vlSelf->io_inst)) 
                                            | ((0x4003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               | ((0x1003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst)) 
                                                  | ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst)) 
                                                     | ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst)) 
                                                        | ((0x6003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst)) 
                                                           | (0x3003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst)))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_358 
        = ((0x1003U != (0x707fU & vlSelf->io_inst)) 
           & ((0x5003U != (0x707fU & vlSelf->io_inst)) 
              & ((0x2003U != (0x707fU & vlSelf->io_inst)) 
                 & ((0x6003U != (0x707fU & vlSelf->io_inst)) 
                    & ((0x3003U != (0x707fU & vlSelf->io_inst)) 
                       & ((0x1013U != (0xfc00707fU 
                                       & vlSelf->io_inst)) 
                          & ((0x101bU != (0xfe00707fU 
                                          & vlSelf->io_inst)) 
                             & ((0x5013U != (0xfc00707fU 
                                             & vlSelf->io_inst)) 
                                & ((0x501bU != (0xfe00707fU 
                                                & vlSelf->io_inst)) 
                                   & ((0x40005013U 
                                       != (0xfc00707fU 
                                           & vlSelf->io_inst)) 
                                      & ((0x4000501bU 
                                          != (0xfe00707fU 
                                              & vlSelf->io_inst)) 
                                         & ((0x3013U 
                                             != (0x707fU 
                                                 & vlSelf->io_inst)) 
                                            & ((0x7013U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               & ((0x4013U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->io_inst)) 
                                                  & ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst)) 
                                                     | ((0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst)) 
                                                        | ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst)) 
                                                           | (0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst)))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_126 
        = ((0x7013U == (0x707fU & vlSelf->io_inst))
            ? 0x29U : ((0x4013U == (0x707fU & vlSelf->io_inst))
                        ? 0x2aU : ((0x3023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? 0x2cU : ((0x23U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? 0x2dU
                                                : (
                                                   (0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x2eU
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x2fU
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x30U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x31U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x32U
                                                        : 
                                                       ((0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0x34U
                                                         : 
                                                        ((0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0x35U
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->io_inst))
                                                           ? 0x37U
                                                           : 
                                                          ((0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->io_inst))
                                                            ? 0x36U
                                                            : 
                                                           ((0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->io_inst))
                                                             ? 0x38U
                                                             : 
                                                            ((0x100073U 
                                                              == vlSelf->io_inst)
                                                              ? 0x39U
                                                              : 0U)))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_237 
        = ((0x3013U == (0x707fU & vlSelf->io_inst))
            ? 0U : ((0x7013U == (0x707fU & vlSelf->io_inst))
                     ? 0U : ((0x4013U == (0x707fU & vlSelf->io_inst))
                              ? 0U : ((0x3023U == (0x707fU 
                                                   & vlSelf->io_inst))
                                       ? 1U : ((0x23U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? 1U
                                                : (
                                                   (0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 2U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 2U
                                                        : 
                                                       ((0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 2U
                                                         : 
                                                        ((0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 2U
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->io_inst))
                                                           ? 3U
                                                           : 
                                                          ((0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->io_inst))
                                                            ? 3U
                                                            : 
                                                           ((0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->io_inst))
                                                             ? 4U
                                                             : 0U)))))))))))))));
    vlSelf->Top__DOT__alu__DOT___result_T_97 = (vlSelf->Top__DOT__alu__DOT___result_T_87 
                                                >> (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0));
    vlSelf->Top__DOT__alu__DOT___result_T_90 = VL_SHIFTRS_III(32,32,5, vlSelf->Top__DOT__alu__DOT___result_T_87, (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0));
    vlSelf->Top__DOT__alu__DOT___GEN_4 = VL_MODDIV_III(32, vlSelf->Top__DOT__alu__DOT___result_T_87, vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7fde__0);
    vlSelf->Top__DOT__alu__DOT___result_T_38 = VL_DIV_III(32, vlSelf->Top__DOT__alu__DOT___result_T_87, vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7fde__0);
    __Vtemp_he0f364e5__0[0U] = (IData)(vlSelf->io_rs1);
    __Vtemp_he0f364e5__0[1U] = (IData)((vlSelf->io_rs1 
                                        >> 0x20U));
    __Vtemp_he0f364e5__0[2U] = 0U;
    __Vtemp_he0f364e5__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_hc7d2eb5a__0, __Vtemp_he0f364e5__0, (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0));
    vlSelf->Top__DOT__alu__DOT___result_T_45[0U] = 
        __Vtemp_hc7d2eb5a__0[0U];
    vlSelf->Top__DOT__alu__DOT___result_T_45[1U] = 
        __Vtemp_hc7d2eb5a__0[1U];
    vlSelf->Top__DOT__alu__DOT___result_T_45[2U] = 
        __Vtemp_hc7d2eb5a__0[2U];
    vlSelf->Top__DOT__alu__DOT___result_T_45[3U] = 
        (0x7fffffffU & __Vtemp_hc7d2eb5a__0[3U]);
    vlSelf->Top__DOT__alu__DOT___result_T_48 = VL_LTS_IQQ(64, vlSelf->io_rs1, vlSelf->io_rs2);
    vlSelf->Top__DOT__alu__DOT___result_T_49 = (vlSelf->io_rs1 
                                                < vlSelf->io_rs2);
    vlSelf->Top__DOT__alu__DOT___result_T_1 = (vlSelf->io_rs1 
                                               + vlSelf->io_rs2);
    vlSelf->Top__DOT__alu__DOT___result_T_10 = (vlSelf->io_rs1 
                                                - vlSelf->io_rs2);
    __Vtemp_he0f364e5__1[0U] = (IData)(vlSelf->io_rs1);
    __Vtemp_he0f364e5__1[1U] = (IData)((vlSelf->io_rs1 
                                        >> 0x20U));
    __Vtemp_he0f364e5__1[2U] = 0U;
    __Vtemp_he0f364e5__1[3U] = 0U;
    __Vtemp_h425c4ad5__0[0U] = (IData)(vlSelf->io_rs2);
    __Vtemp_h425c4ad5__0[1U] = (IData)((vlSelf->io_rs2 
                                        >> 0x20U));
    __Vtemp_h425c4ad5__0[2U] = 0U;
    __Vtemp_h425c4ad5__0[3U] = 0U;
    VL_MUL_W(4, __Vtemp_h06d202b8__0, __Vtemp_he0f364e5__1, __Vtemp_h425c4ad5__0);
    vlSelf->Top__DOT__alu__DOT___result_T_18[0U] = 
        __Vtemp_h06d202b8__0[0U];
    vlSelf->Top__DOT__alu__DOT___result_T_18[1U] = 
        __Vtemp_h06d202b8__0[1U];
    vlSelf->Top__DOT__alu__DOT___result_T_18[2U] = 
        __Vtemp_h06d202b8__0[2U];
    vlSelf->Top__DOT__alu__DOT___result_T_18[3U] = 
        __Vtemp_h06d202b8__0[3U];
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_312 
        = ((0x2006033U != (0xfe00707fU & vlSelf->io_inst)) 
           & ((0x200603bU != (0xfe00707fU & vlSelf->io_inst)) 
              & ((0x2007033U != (0xfe00707fU & vlSelf->io_inst)) 
                 & ((0x200703bU != (0xfe00707fU & vlSelf->io_inst)) 
                    & ((0x13U != (0x707fU & vlSelf->io_inst)) 
                       & ((0x1bU != (0x707fU & vlSelf->io_inst)) 
                          & ((0x67U == (0x707fU & vlSelf->io_inst)) 
                             | ((3U != (0x707fU & vlSelf->io_inst)) 
                                & ((0x4003U != (0x707fU 
                                                & vlSelf->io_inst)) 
                                   & ((0x1003U != (0x707fU 
                                                   & vlSelf->io_inst)) 
                                      & ((0x5003U != 
                                          (0x707fU 
                                           & vlSelf->io_inst)) 
                                         & ((0x2003U 
                                             != (0x707fU 
                                                 & vlSelf->io_inst)) 
                                            & ((0x6003U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               & ((0x3003U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->io_inst)) 
                                                  & ((0x1013U 
                                                      != 
                                                      (0xfc00707fU 
                                                       & vlSelf->io_inst)) 
                                                     & ((0x101bU 
                                                         != 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst)) 
                                                        & ((0x5013U 
                                                            != 
                                                            (0xfc00707fU 
                                                             & vlSelf->io_inst)) 
                                                           & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_295))))))))))))))))));
    vlSelf->io_ctrl_RegWen = ((0x33U == (0xfe00707fU 
                                         & vlSelf->io_inst)) 
                              | ((0x3bU == (0xfe00707fU 
                                            & vlSelf->io_inst)) 
                                 | ((0x40000033U == 
                                     (0xfe00707fU & vlSelf->io_inst)) 
                                    | ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst)) 
                                       | ((0x2000033U 
                                           == (0xfe00707fU 
                                               & vlSelf->io_inst)) 
                                          | ((0x200003bU 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst)) 
                                             | ((0x2004033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->io_inst)) 
                                                | ((0x2005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst)) 
                                                   | ((0x200403bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst)) 
                                                      | ((0x200503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst)) 
                                                         | ((0x1033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst)) 
                                                            | ((0x2033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->io_inst)) 
                                                               | ((0x3033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->io_inst)) 
                                                                  | (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_209))))))))))))));
    vlSelf->io_ctrl_MemLoad = ((0x33U != (0xfe00707fU 
                                          & vlSelf->io_inst)) 
                               & ((0x3bU != (0xfe00707fU 
                                             & vlSelf->io_inst)) 
                                  & ((0x40000033U != 
                                      (0xfe00707fU 
                                       & vlSelf->io_inst)) 
                                     & ((0x4000003bU 
                                         != (0xfe00707fU 
                                             & vlSelf->io_inst)) 
                                        & ((0x2000033U 
                                            != (0xfe00707fU 
                                                & vlSelf->io_inst)) 
                                           & ((0x200003bU 
                                               != (0xfe00707fU 
                                                   & vlSelf->io_inst)) 
                                              & ((0x2004033U 
                                                  != 
                                                  (0xfe00707fU 
                                                   & vlSelf->io_inst)) 
                                                 & ((0x2005033U 
                                                     != 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst)) 
                                                    & ((0x200403bU 
                                                        != 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst)) 
                                                       & ((0x200503bU 
                                                           != 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst)) 
                                                          & ((0x1033U 
                                                              != 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst)) 
                                                             & ((0x2033U 
                                                                 != 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->io_inst)) 
                                                                & ((0x3033U 
                                                                    != 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->io_inst)) 
                                                                   & ((0x103bU 
                                                                       != 
                                                                       (0xfe00707fU 
                                                                        & vlSelf->io_inst)) 
                                                                      & ((0x4000503bU 
                                                                          != 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->io_inst)) 
                                                                         & ((0x503bU 
                                                                             != 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->io_inst)) 
                                                                            & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_426)))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_375 
        = ((0x3033U != (0xfe00707fU & vlSelf->io_inst)) 
           & ((0x103bU != (0xfe00707fU & vlSelf->io_inst)) 
              & ((0x4000503bU != (0xfe00707fU & vlSelf->io_inst)) 
                 & ((0x503bU != (0xfe00707fU & vlSelf->io_inst)) 
                    & ((0x4033U != (0xfe00707fU & vlSelf->io_inst)) 
                       & ((0x7033U != (0xfe00707fU 
                                       & vlSelf->io_inst)) 
                          & ((0x40005033U != (0xfe00707fU 
                                              & vlSelf->io_inst)) 
                             & ((0x6033U != (0xfe00707fU 
                                             & vlSelf->io_inst)) 
                                & ((0x2006033U != (0xfe00707fU 
                                                   & vlSelf->io_inst)) 
                                   & ((0x200603bU != 
                                       (0xfe00707fU 
                                        & vlSelf->io_inst)) 
                                      & ((0x2007033U 
                                          != (0xfe00707fU 
                                              & vlSelf->io_inst)) 
                                         & ((0x200703bU 
                                             != (0xfe00707fU 
                                                 & vlSelf->io_inst)) 
                                            & ((0x13U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               & ((0x1bU 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->io_inst)) 
                                                  & ((0x67U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->io_inst)) 
                                                     & ((3U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->io_inst)) 
                                                        & ((0x4003U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->io_inst)) 
                                                           & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_358))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_141 
        = ((0x67U == (0x707fU & vlSelf->io_inst)) ? 0x1aU
            : ((3U == (0x707fU & vlSelf->io_inst)) ? 0x1bU
                : ((0x4003U == (0x707fU & vlSelf->io_inst))
                    ? 0x1cU : ((0x1003U == (0x707fU 
                                            & vlSelf->io_inst))
                                ? 0x1dU : ((0x5003U 
                                            == (0x707fU 
                                                & vlSelf->io_inst))
                                            ? 0x1eU
                                            : ((0x2003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? 0x20U
                                                : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x21U
                                                    : 
                                                   ((0x3003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x1fU
                                                     : 
                                                    ((0x1013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x22U
                                                      : 
                                                     ((0x101bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x23U
                                                       : 
                                                      ((0x5013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x24U
                                                        : 
                                                       ((0x501bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0x25U
                                                         : 
                                                        ((0x40005013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0x26U
                                                          : 
                                                         ((0x4000501bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0x27U
                                                           : 
                                                          ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0x28U
                                                            : (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_126))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_252 
        = ((0x1bU == (0x707fU & vlSelf->io_inst)) ? 0U
            : ((0x67U == (0x707fU & vlSelf->io_inst))
                ? 0U : ((3U == (0x707fU & vlSelf->io_inst))
                         ? 0U : ((0x4003U == (0x707fU 
                                              & vlSelf->io_inst))
                                  ? 0U : ((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? 0U : (
                                                   (0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x3003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfc00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x101bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x5013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x501bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x40005013U 
                                                            == 
                                                            (0xfc00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x4000501bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_237))))))))))))))));
    vlSelf->Top__DOT__alu__DOT___result_T_75 = (((QData)((IData)(
                                                                 (((0U 
                                                                    != vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7fde__0) 
                                                                   & (vlSelf->Top__DOT__alu__DOT___GEN_4 
                                                                      >> 0x1fU))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0U 
                                                                    == vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7fde__0)
                                                                    ? 0U
                                                                    : vlSelf->Top__DOT__alu__DOT___GEN_4))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_329 
        = ((0x4000003bU != (0xfe00707fU & vlSelf->io_inst)) 
           & ((0x2000033U != (0xfe00707fU & vlSelf->io_inst)) 
              & ((0x200003bU != (0xfe00707fU & vlSelf->io_inst)) 
                 & ((0x2004033U != (0xfe00707fU & vlSelf->io_inst)) 
                    & ((0x2005033U != (0xfe00707fU 
                                       & vlSelf->io_inst)) 
                       & ((0x200403bU != (0xfe00707fU 
                                          & vlSelf->io_inst)) 
                          & ((0x200503bU != (0xfe00707fU 
                                             & vlSelf->io_inst)) 
                             & ((0x1033U != (0xfe00707fU 
                                             & vlSelf->io_inst)) 
                                & ((0x2033U != (0xfe00707fU 
                                                & vlSelf->io_inst)) 
                                   & ((0x3033U != (0xfe00707fU 
                                                   & vlSelf->io_inst)) 
                                      & ((0x103bU != 
                                          (0xfe00707fU 
                                           & vlSelf->io_inst)) 
                                         & ((0x4000503bU 
                                             != (0xfe00707fU 
                                                 & vlSelf->io_inst)) 
                                            & ((0x503bU 
                                                != 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst)) 
                                               & ((0x4033U 
                                                   != 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_inst)) 
                                                  & ((0x7033U 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst)) 
                                                     & ((0x40005033U 
                                                         != 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst)) 
                                                        & ((0x6033U 
                                                            != 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst)) 
                                                           & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_312))))))))))))))))));
    vlSelf->io_MemLoad = vlSelf->io_ctrl_MemLoad;
    vlSelf->io_ctrl_MemWen = ((0x33U != (0xfe00707fU 
                                         & vlSelf->io_inst)) 
                              & ((0x3bU != (0xfe00707fU 
                                            & vlSelf->io_inst)) 
                                 & ((0x40000033U != 
                                     (0xfe00707fU & vlSelf->io_inst)) 
                                    & ((0x4000003bU 
                                        != (0xfe00707fU 
                                            & vlSelf->io_inst)) 
                                       & ((0x2000033U 
                                           != (0xfe00707fU 
                                               & vlSelf->io_inst)) 
                                          & ((0x200003bU 
                                              != (0xfe00707fU 
                                                  & vlSelf->io_inst)) 
                                             & ((0x2004033U 
                                                 != 
                                                 (0xfe00707fU 
                                                  & vlSelf->io_inst)) 
                                                & ((0x2005033U 
                                                    != 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst)) 
                                                   & ((0x200403bU 
                                                       != 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst)) 
                                                      & ((0x200503bU 
                                                          != 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst)) 
                                                         & ((0x1033U 
                                                             != 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst)) 
                                                            & ((0x2033U 
                                                                != 
                                                                (0xfe00707fU 
                                                                 & vlSelf->io_inst)) 
                                                               & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_375)))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_156 
        = ((0x2033U == (0xfe00707fU & vlSelf->io_inst))
            ? 0xbU : ((0x3033U == (0xfe00707fU & vlSelf->io_inst))
                       ? 0xcU : ((0x103bU == (0xfe00707fU 
                                              & vlSelf->io_inst))
                                  ? 0xdU : ((0x4000503bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                             ? 0xeU
                                             : ((0x503bU 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->io_inst))
                                                 ? 0xfU
                                                 : 
                                                ((0x4033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                                  ? 0x10U
                                                  : 
                                                 ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_inst))
                                                   ? 0x11U
                                                   : 
                                                  ((0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x12U
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x13U
                                                     : 
                                                    ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x14U
                                                      : 
                                                     ((0x200603bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x16U
                                                       : 
                                                      ((0x2007033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x15U
                                                        : 
                                                       ((0x200703bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0x17U
                                                         : 
                                                        ((0x13U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0x18U
                                                          : 
                                                         ((0x1bU 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0x19U
                                                           : (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_141))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_267 
        = ((0x1033U == (0xfe00707fU & vlSelf->io_inst))
            ? 0U : ((0x2033U == (0xfe00707fU & vlSelf->io_inst))
                     ? 0U : ((0x3033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? 0U : ((0x103bU == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                       ? 0U : ((0x4000503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? 0U
                                                : (
                                                   (0x503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x4033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x40005033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x6033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x2006033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x200603bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x2007033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x200703bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x13U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_252))))))))))))))));
    if ((0x33U == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->io_op = 0U;
        vlSelf->io_ctrl_OP = 0U;
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
    } else if ((0x3bU == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->io_op = 1U;
        vlSelf->io_ctrl_OP = 1U;
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->io_op = 2U;
        vlSelf->io_ctrl_OP = 2U;
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
    } else if ((0x4000003bU == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->io_op = 3U;
        vlSelf->io_ctrl_OP = 3U;
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
    } else if ((0x2000033U == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->io_op = 4U;
        vlSelf->io_ctrl_OP = 4U;
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
    } else if ((0x200003bU == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->io_op = 5U;
        vlSelf->io_ctrl_OP = 5U;
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
    } else if ((0x2004033U == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->io_op = 6U;
        vlSelf->io_ctrl_OP = 6U;
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
    } else if ((0x2005033U == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->io_op = 7U;
        vlSelf->io_ctrl_OP = 7U;
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
    } else if ((0x200403bU == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->io_op = 8U;
        vlSelf->io_ctrl_OP = 8U;
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
    } else if ((0x200503bU == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->io_op = 9U;
        vlSelf->io_ctrl_OP = 9U;
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
    } else {
        if ((0x1033U == (0xfe00707fU & vlSelf->io_inst))) {
            vlSelf->io_op = 0xaU;
            vlSelf->io_ctrl_OP = 0xaU;
        } else {
            vlSelf->io_op = ((0x2033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? 0xbU : ((0x3033U == 
                                         (0xfe00707fU 
                                          & vlSelf->io_inst))
                                         ? 0xcU : (
                                                   (0x103bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0xdU
                                                    : 
                                                   ((0x4000503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0xeU
                                                     : 
                                                    ((0x503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0xfU
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 2U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 3U
                                                          : 
                                                         ((0x2006033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 4U
                                                           : 
                                                          ((0x200603bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 6U
                                                            : 
                                                           ((0x2007033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst))
                                                             ? 5U
                                                             : 
                                                            ((0x200703bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst))
                                                              ? 7U
                                                              : 
                                                             ((0x13U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->io_inst))
                                                               ? 8U
                                                               : 
                                                              ((0x1bU 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_inst))
                                                                ? 9U
                                                                : 
                                                               ((0x67U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->io_inst))
                                                                 ? 0xaU
                                                                 : 
                                                                ((3U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->io_inst))
                                                                  ? 0xbU
                                                                  : 
                                                                 ((0x4003U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->io_inst))
                                                                   ? 0xcU
                                                                   : 
                                                                  ((0x1003U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->io_inst))
                                                                    ? 0xdU
                                                                    : 
                                                                   ((0x5003U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->io_inst))
                                                                     ? 0xeU
                                                                     : 
                                                                    ((0x2003U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->io_inst))
                                                                      ? 0U
                                                                      : 
                                                                     ((0x6003U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->io_inst))
                                                                       ? 1U
                                                                       : 
                                                                      ((0x3003U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->io_inst))
                                                                        ? 0xfU
                                                                        : 
                                                                       ((0x1013U 
                                                                         == 
                                                                         (0xfc00707fU 
                                                                          & vlSelf->io_inst))
                                                                         ? 2U
                                                                         : 
                                                                        ((0x101bU 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->io_inst))
                                                                          ? 3U
                                                                          : 
                                                                         ((0x5013U 
                                                                           == 
                                                                           (0xfc00707fU 
                                                                            & vlSelf->io_inst))
                                                                           ? 4U
                                                                           : 
                                                                          ((0x501bU 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlSelf->io_inst))
                                                                            ? 5U
                                                                            : 
                                                                           ((0x40005013U 
                                                                             == 
                                                                             (0xfc00707fU 
                                                                              & vlSelf->io_inst))
                                                                             ? 6U
                                                                             : 
                                                                            ((0x4000501bU 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->io_inst))
                                                                              ? 7U
                                                                              : 
                                                                             ((0x3013U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelf->io_inst))
                                                                               ? 8U
                                                                               : 
                                                                              ((0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst))
                                                                                ? 9U
                                                                                : 
                                                                               ((0x4013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst))
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((0x3023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst))
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x1063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((0x5063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((0x4063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((0x6063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst))
                                                                                 ? 7U
                                                                                 : 
                                                                                ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0x100073U 
                                                                                == vlSelf->io_inst)
                                                                                 ? 9U
                                                                                 : 0U)))))))))))))))))))))))))))))))))))))))))))));
            vlSelf->io_ctrl_OP = vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_156;
        }
        vlSelf->Top__DOT__decoder__DOT__ImmType = vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_267;
    }
    vlSelf->io_ctrl_J_JUMP = ((0x33U != (0xfe00707fU 
                                         & vlSelf->io_inst)) 
                              & ((0x3bU != (0xfe00707fU 
                                            & vlSelf->io_inst)) 
                                 & ((0x40000033U != 
                                     (0xfe00707fU & vlSelf->io_inst)) 
                                    & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_329))));
    vlSelf->io_MemWen = vlSelf->io_ctrl_MemWen;
    VTop___024unit____Vdpiimwrap_ebreak_TOP____024unit(
                                                       ((0x39U 
                                                         == (IData)(vlSelf->io_ctrl_OP))
                                                         ? 1U
                                                         : 0U));
    VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit((QData)((IData)(vlSelf->io_inst)));
    VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(vlSelf->io_pc);
    vlSelf->io_ctrl_wmask = ((0x2cU == (IData)(vlSelf->io_ctrl_OP))
                              ? 0xffU : ((0x2fU == (IData)(vlSelf->io_ctrl_OP))
                                          ? 0xfU : 
                                         ((0x2eU == (IData)(vlSelf->io_ctrl_OP))
                                           ? 3U : (
                                                   (0x2dU 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? 1U
                                                    : 0U))));
    VL_EXTENDS_WQ(65,64, __Vtemp_he0e97cbe__0, vlSelf->io_rs1);
    __Vtemp_ha1df657c__0[0U] = __Vtemp_he0e97cbe__0[0U];
    __Vtemp_ha1df657c__0[1U] = __Vtemp_he0e97cbe__0[1U];
    __Vtemp_ha1df657c__0[2U] = (1U & __Vtemp_he0e97cbe__0[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp_h4296a6ce__0, vlSelf->io_rs2);
    __Vtemp_h7d6c219e__0[0U] = __Vtemp_h4296a6ce__0[0U];
    __Vtemp_h7d6c219e__0[1U] = __Vtemp_h4296a6ce__0[1U];
    __Vtemp_h7d6c219e__0[2U] = (1U & __Vtemp_h4296a6ce__0[2U]);
    VL_DIVS_WWW(65, __Vtemp_h34a0fcaa__0, __Vtemp_ha1df657c__0, __Vtemp_h7d6c219e__0);
    if ((5U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_he1528dfe__0[0U] = (IData)((((QData)((IData)(
                                                             ((vlSelf->Top__DOT__alu__DOT___result_T_18[0U] 
                                                               >> 0x1fU)
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->Top__DOT__alu__DOT___result_T_18[0U]))));
        __Vtemp_he1528dfe__0[1U] = (IData)(((((QData)((IData)(
                                                              ((vlSelf->Top__DOT__alu__DOT___result_T_18[0U] 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->Top__DOT__alu__DOT___result_T_18[0U]))) 
                                            >> 0x20U));
    } else if ((4U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_he1528dfe__0[0U] = vlSelf->Top__DOT__alu__DOT___result_T_18[0U];
        __Vtemp_he1528dfe__0[1U] = vlSelf->Top__DOT__alu__DOT___result_T_18[1U];
    } else {
        __Vtemp_he1528dfe__0[0U] = (IData)(((3U == (IData)(vlSelf->io_ctrl_OP))
                                             ? (((QData)((IData)(
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->Top__DOT__alu__DOT___result_T_10 
                                                                              >> 0x1fU)))
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_10)))
                                             : ((2U 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? vlSelf->Top__DOT__alu__DOT___result_T_10
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->Top__DOT__alu__DOT___result_T_1 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_1)))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? vlSelf->Top__DOT__alu__DOT___result_T_1
                                                   : 0ULL)))));
        __Vtemp_he1528dfe__0[1U] = (IData)((((3U == (IData)(vlSelf->io_ctrl_OP))
                                              ? (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->Top__DOT__alu__DOT___result_T_10 
                                                                               >> 0x1fU)))
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_10)))
                                              : ((2U 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? vlSelf->Top__DOT__alu__DOT___result_T_10
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->Top__DOT__alu__DOT___result_T_1 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_1)))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? vlSelf->Top__DOT__alu__DOT___result_T_1
                                                    : 0ULL)))) 
                                            >> 0x20U));
    }
    if ((8U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_202[0U] 
            = (IData)((((QData)((IData)((((0U != vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7fde__0) 
                                          & (vlSelf->Top__DOT__alu__DOT___result_T_38 
                                             >> 0x1fU))
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(((0U == vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7fde__0)
                                           ? 0U : vlSelf->Top__DOT__alu__DOT___result_T_38)))));
        vlSelf->Top__DOT__alu__DOT___result_T_202[1U] 
            = (IData)(((((QData)((IData)((((0U != vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7fde__0) 
                                           & (vlSelf->Top__DOT__alu__DOT___result_T_38 
                                              >> 0x1fU))
                                           ? 0xffffffffU
                                           : 0U))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0U 
                                                       == vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7fde__0)
                                                       ? 0U
                                                       : vlSelf->Top__DOT__alu__DOT___result_T_38)))) 
                       >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_202[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_202[3U] = 0U;
    } else if ((7U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_202[0U] 
            = (IData)(((0ULL == vlSelf->io_rs2) ? 0ULL
                        : VL_DIV_QQQ(64, vlSelf->io_rs1, vlSelf->io_rs2)));
        vlSelf->Top__DOT__alu__DOT___result_T_202[1U] 
            = (IData)((((0ULL == vlSelf->io_rs2) ? 0ULL
                         : VL_DIV_QQQ(64, vlSelf->io_rs1, vlSelf->io_rs2)) 
                       >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_202[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_202[3U] = 0U;
    } else if ((6U == (IData)(vlSelf->io_ctrl_OP))) {
        if ((0ULL == vlSelf->io_rs2)) {
            vlSelf->Top__DOT__alu__DOT___result_T_202[0U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_202[1U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_202[2U] = 0U;
        } else {
            vlSelf->Top__DOT__alu__DOT___result_T_202[0U] 
                = __Vtemp_h34a0fcaa__0[0U];
            vlSelf->Top__DOT__alu__DOT___result_T_202[1U] 
                = __Vtemp_h34a0fcaa__0[1U];
            vlSelf->Top__DOT__alu__DOT___result_T_202[2U] 
                = (1U & __Vtemp_h34a0fcaa__0[2U]);
        }
        vlSelf->Top__DOT__alu__DOT___result_T_202[3U] = 0U;
    } else {
        vlSelf->Top__DOT__alu__DOT___result_T_202[0U] 
            = __Vtemp_he1528dfe__0[0U];
        vlSelf->Top__DOT__alu__DOT___result_T_202[1U] 
            = __Vtemp_he1528dfe__0[1U];
        if ((5U == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_202[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_202[3U] = 0U;
        } else if ((4U == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_202[2U] 
                = vlSelf->Top__DOT__alu__DOT___result_T_18[2U];
            vlSelf->Top__DOT__alu__DOT___result_T_202[3U] 
                = vlSelf->Top__DOT__alu__DOT___result_T_18[3U];
        } else {
            vlSelf->Top__DOT__alu__DOT___result_T_202[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_202[3U] = 0U;
        }
    }
    if ((1U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))) {
        __Vtemp_h3aee953a__0[0U] = (((IData)(((((1U 
                                                 & (IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                            >> 0x1fU)))
                                                 ? 0x1ffffffffffffffULL
                                                 : 0ULL) 
                                               << 7U) 
                                              | (QData)((IData)(
                                                                (0x7fU 
                                                                 & (IData)(
                                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                            >> 0x19U))))))) 
                                     << 5U) | (0x1fU 
                                               & (IData)(
                                                         (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                          >> 7U))));
        __Vtemp_h3aee953a__0[1U] = (((IData)(((((1U 
                                                 & (IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                            >> 0x1fU)))
                                                 ? 0x1ffffffffffffffULL
                                                 : 0ULL) 
                                               << 7U) 
                                              | (QData)((IData)(
                                                                (0x7fU 
                                                                 & (IData)(
                                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                            >> 0x19U))))))) 
                                     >> 0x1bU) | ((IData)(
                                                          (((((1U 
                                                               & (IData)(
                                                                         (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                          >> 0x1fU)))
                                                               ? 0x1ffffffffffffffULL
                                                               : 0ULL) 
                                                             << 7U) 
                                                            | (QData)((IData)(
                                                                              (0x7fU 
                                                                               & (IData)(
                                                                                (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                                >> 0x19U)))))) 
                                                           >> 0x20U)) 
                                                  << 5U));
    } else {
        __Vtemp_h3aee953a__0[0U] = (IData)(((0U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))
                                             ? ((((1U 
                                                   & (IData)(
                                                             (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                              >> 0x1fU)))
                                                   ? 0xfffffffffffffULL
                                                   : 0ULL) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (0xfffU 
                                                                   & (IData)(
                                                                             (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                              >> 0x14U))))))
                                             : 0ULL));
        __Vtemp_h3aee953a__0[1U] = (IData)((((0U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))
                                              ? (((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                               >> 0x1fU)))
                                                    ? 0xfffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(
                                                                              (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                               >> 0x14U))))))
                                              : 0ULL) 
                                            >> 0x20U));
    }
    if ((3U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))) {
        __Vtemp_h623558ce__0[0U] = ((IData)(((((1U 
                                                & (IData)(
                                                          (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                           >> 0x1fU)))
                                                ? 0xfffffffffffULL
                                                : 0ULL) 
                                              << 0x14U) 
                                             | (QData)((IData)(
                                                               (0xfffffU 
                                                                & (IData)(
                                                                          (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                           >> 0xcU))))))) 
                                    << 0xcU);
        __Vtemp_h623558ce__0[1U] = (((IData)(((((1U 
                                                 & (IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                            >> 0x1fU)))
                                                 ? 0xfffffffffffULL
                                                 : 0ULL) 
                                               << 0x14U) 
                                              | (QData)((IData)(
                                                                (0xfffffU 
                                                                 & (IData)(
                                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                            >> 0xcU))))))) 
                                     >> 0x14U) | ((IData)(
                                                          (((((1U 
                                                               & (IData)(
                                                                         (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                          >> 0x1fU)))
                                                               ? 0xfffffffffffULL
                                                               : 0ULL) 
                                                             << 0x14U) 
                                                            | (QData)((IData)(
                                                                              (0xfffffU 
                                                                               & (IData)(
                                                                                (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                                >> 0xcU)))))) 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h623558ce__0[2U] = ((IData)((((((1U 
                                                 & (IData)(
                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                            >> 0x1fU)))
                                                 ? 0xfffffffffffULL
                                                 : 0ULL) 
                                               << 0x14U) 
                                              | (QData)((IData)(
                                                                (0xfffffU 
                                                                 & (IData)(
                                                                           (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                            >> 0xcU)))))) 
                                             >> 0x20U)) 
                                    >> 0x14U);
    } else if ((2U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))) {
        __Vtemp_h623558ce__0[0U] = (((((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                                       << 0xcU) | (0x800U 
                                                   & ((IData)(
                                                              (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                               >> 7U)) 
                                                      << 0xbU))) 
                                     | (0x7e0U & ((IData)(
                                                          (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                           >> 0x19U)) 
                                                  << 5U))) 
                                    | (0x1eU & ((IData)(
                                                        (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                         >> 8U)) 
                                                << 1U)));
        __Vtemp_h623558ce__0[1U] = (((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                                     >> 0x14U) | ((IData)(
                                                          (vlSelf->Top__DOT__decoder__DOT___J_T_4 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h623558ce__0[2U] = ((IData)((vlSelf->Top__DOT__decoder__DOT___J_T_4 
                                             >> 0x20U)) 
                                    >> 0x14U);
    } else {
        __Vtemp_h623558ce__0[0U] = __Vtemp_h3aee953a__0[0U];
        __Vtemp_h623558ce__0[1U] = __Vtemp_h3aee953a__0[1U];
        __Vtemp_h623558ce__0[2U] = ((1U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))
                                     ? ((IData)((((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                >> 0x1fU)))
                                                     ? 0x1ffffffffffffffULL
                                                     : 0ULL) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    (0x7fU 
                                                                     & (IData)(
                                                                               (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                                >> 0x19U)))))) 
                                                 >> 0x20U)) 
                                        >> 0x1bU) : 0U);
    }
    if ((4U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))) {
        vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U] 
            = (((((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                  << 0x14U) | (0xff000U & ((IData)(
                                                   (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                    >> 0xcU)) 
                                           << 0xcU))) 
                | (0x800U & ((IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                      >> 0x14U)) << 0xbU))) 
               | (0x7feU & ((IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                     >> 0x15U)) << 1U)));
        vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[1U] 
            = (((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                >> 0xcU) | ((IData)((vlSelf->Top__DOT__decoder__DOT___J_T_4 
                                     >> 0x20U)) << 0x14U));
        vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[2U] 
            = ((IData)((vlSelf->Top__DOT__decoder__DOT___J_T_4 
                        >> 0x20U)) >> 0xcU);
    } else {
        vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U] 
            = __Vtemp_h623558ce__0[0U];
        vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[1U] 
            = __Vtemp_h623558ce__0[1U];
        vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[2U] 
            = __Vtemp_h623558ce__0[2U];
    }
    __Vtemp_h6f650466__0[1U] = ((0x12U == (IData)(vlSelf->io_ctrl_OP))
                                 ? (IData)((VL_SHIFTR_QQQ(64,64,64, vlSelf->io_rs1, vlSelf->io_rs2) 
                                            >> 0x20U))
                                 : ((0x10U == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)(((vlSelf->io_rs1 
                                                 ^ vlSelf->io_rs2) 
                                                >> 0x20U))
                                     : ((0x11U == (IData)(vlSelf->io_ctrl_OP))
                                         ? (IData)(
                                                   ((vlSelf->io_rs1 
                                                     & vlSelf->io_rs2) 
                                                    >> 0x20U))
                                         : ((0xdU == (IData)(vlSelf->io_ctrl_OP))
                                             ? (IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelf->Top__DOT__alu__DOT___result_T_45[0U] 
                                                                            >> 0x1fU)
                                                                            ? 0xffffffffU
                                                                            : 0U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((0x1fU 
                                                                             >= (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0))
                                                                             ? 
                                                                            (vlSelf->Top__DOT__alu__DOT___result_T_87 
                                                                             << (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0))
                                                                             : 0U)))) 
                                                        >> 0x20U))
                                             : ((0xcU 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? 0U
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? 0U
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? 
                                                  vlSelf->Top__DOT__alu__DOT___result_T_45[1U]
                                                   : 
                                                  vlSelf->Top__DOT__alu__DOT___result_T_202[1U])))))));
    __Vtemp_h41c30b15__0[0U] = ((0x13U == (IData)(vlSelf->io_ctrl_OP))
                                 ? (IData)((vlSelf->io_rs1 
                                            | vlSelf->io_rs2))
                                 : ((0x12U == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)(VL_SHIFTR_QQQ(64,64,64, vlSelf->io_rs1, vlSelf->io_rs2))
                                     : ((0x10U == (IData)(vlSelf->io_ctrl_OP))
                                         ? (IData)(
                                                   (vlSelf->io_rs1 
                                                    ^ vlSelf->io_rs2))
                                         : ((0x11U 
                                             == (IData)(vlSelf->io_ctrl_OP))
                                             ? (IData)(
                                                       (vlSelf->io_rs1 
                                                        & vlSelf->io_rs2))
                                             : ((0xdU 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? (IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelf->Top__DOT__alu__DOT___result_T_45[0U] 
                                                                               >> 0x1fU)
                                                                               ? 0xffffffffU
                                                                               : 0U))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((0x1fU 
                                                                                >= (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0))
                                                                                ? 
                                                                               (vlSelf->Top__DOT__alu__DOT___result_T_87 
                                                                                << (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0))
                                                                                : 0U)))))
                                                 : 
                                                ((0xcU 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_49)
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_48)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? 
                                                   vlSelf->Top__DOT__alu__DOT___result_T_45[0U]
                                                    : 
                                                   vlSelf->Top__DOT__alu__DOT___result_T_202[0U]))))))));
    if ((0xeU == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_h957ba6d3__0[1U] = (IData)(((((QData)((IData)(
                                                              ((vlSelf->Top__DOT__alu__DOT___result_T_90 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_90))) 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_228[0U] 
            = (IData)((((QData)((IData)(((vlSelf->Top__DOT__alu__DOT___result_T_90 
                                          >> 0x1fU)
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_90))));
        vlSelf->Top__DOT__alu__DOT___result_T_228[1U] 
            = __Vtemp_h957ba6d3__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_228[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_228[3U] = 0U;
    } else if ((0x17U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_h957ba6d3__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_75 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_228[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_75);
        vlSelf->Top__DOT__alu__DOT___result_T_228[1U] 
            = __Vtemp_h957ba6d3__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_228[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_228[3U] = 0U;
    } else if ((0x16U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_h957ba6d3__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_75 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_228[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_75);
        vlSelf->Top__DOT__alu__DOT___result_T_228[1U] 
            = __Vtemp_h957ba6d3__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_228[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_228[3U] = 0U;
    } else if ((0x15U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_h957ba6d3__0[1U] = (IData)((VL_MODDIV_QQQ(64, vlSelf->io_rs1, vlSelf->io_rs2) 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_228[0U] 
            = (IData)(VL_MODDIV_QQQ(64, vlSelf->io_rs1, vlSelf->io_rs2));
        vlSelf->Top__DOT__alu__DOT___result_T_228[1U] 
            = __Vtemp_h957ba6d3__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_228[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_228[3U] = 0U;
    } else if ((0x14U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_h957ba6d3__0[1U] = (IData)((VL_MODDIVS_QQQ(64, vlSelf->io_rs1, vlSelf->io_rs2) 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_228[0U] 
            = (IData)(VL_MODDIVS_QQQ(64, vlSelf->io_rs1, vlSelf->io_rs2));
        vlSelf->Top__DOT__alu__DOT___result_T_228[1U] 
            = __Vtemp_h957ba6d3__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_228[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_228[3U] = 0U;
    } else {
        vlSelf->Top__DOT__alu__DOT___result_T_228[0U] 
            = __Vtemp_h41c30b15__0[0U];
        if ((0x13U == (IData)(vlSelf->io_ctrl_OP))) {
            __Vtemp_h957ba6d3__0[1U] = (IData)(((vlSelf->io_rs1 
                                                 | vlSelf->io_rs2) 
                                                >> 0x20U));
            vlSelf->Top__DOT__alu__DOT___result_T_228[1U] 
                = __Vtemp_h957ba6d3__0[1U];
            vlSelf->Top__DOT__alu__DOT___result_T_228[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_228[3U] = 0U;
        } else {
            __Vtemp_h957ba6d3__0[1U] = __Vtemp_h6f650466__0[1U];
            vlSelf->Top__DOT__alu__DOT___result_T_228[1U] 
                = __Vtemp_h957ba6d3__0[1U];
            if ((0x12U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_228[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_228[3U] = 0U;
            } else if ((0x10U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_228[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_228[3U] = 0U;
            } else if ((0x11U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_228[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_228[3U] = 0U;
            } else if ((0xdU == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_228[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_228[3U] = 0U;
            } else if ((0xcU == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_228[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_228[3U] = 0U;
            } else if ((0xbU == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_228[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_228[3U] = 0U;
            } else if ((0xaU == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_228[2U] 
                    = vlSelf->Top__DOT__alu__DOT___result_T_45[2U];
                vlSelf->Top__DOT__alu__DOT___result_T_228[3U] 
                    = vlSelf->Top__DOT__alu__DOT___result_T_45[3U];
            } else {
                vlSelf->Top__DOT__alu__DOT___result_T_228[2U] 
                    = vlSelf->Top__DOT__alu__DOT___result_T_202[2U];
                vlSelf->Top__DOT__alu__DOT___result_T_228[3U] 
                    = vlSelf->Top__DOT__alu__DOT___result_T_202[3U];
            }
        }
    }
    vlSelf->Top__DOT__alu__DOT___result_T_138 = (vlSelf->io_rs1 
                                                 >> 
                                                 (0x3fU 
                                                  & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U]));
    vlSelf->Top__DOT__alu__DOT___result_T_141 = (vlSelf->Top__DOT__alu__DOT___result_T_87 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U]));
    vlSelf->io_imm = (((QData)((IData)(vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U])));
    vlSelf->Top__DOT__alu__DOT___result_T_145 = (((QData)((IData)(
                                                                  ((vlSelf->Top__DOT__alu__DOT___result_T_141 
                                                                    >> 0x1fU)
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_141)));
    vlSelf->Top__DOT__alu__DOT___result_T_170 = (vlSelf->io_imm 
                                                 + vlSelf->Top__DOT__PC__DOT__init);
    vlSelf->Top__DOT__alu__DOT___result_T_103 = (vlSelf->io_imm 
                                                 + vlSelf->io_rs1);
    vlSelf->Top__DOT__alu__DOT___result_T_113 = (vlSelf->io_rs1 
                                                 < vlSelf->io_imm);
    __Vtemp_he0f364e5__2[0U] = (IData)(vlSelf->io_rs1);
    __Vtemp_he0f364e5__2[1U] = (IData)((vlSelf->io_rs1 
                                        >> 0x20U));
    __Vtemp_he0f364e5__2[2U] = 0U;
    __Vtemp_he0f364e5__2[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h0498d20c__0, __Vtemp_he0f364e5__2, 
                  (0x3fU & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U]));
    __Vtemp_hab75ec19__0[1U] = ((0x1aU == (IData)(vlSelf->io_ctrl_OP))
                                 ? (IData)(((4ULL + vlSelf->Top__DOT__PC__DOT__init) 
                                            >> 0x20U))
                                 : ((0x19U == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)(((((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->Top__DOT__alu__DOT___result_T_103 
                                                                               >> 0x1fU)))
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_103))) 
                                                >> 0x20U))
                                     : ((0x18U == (IData)(vlSelf->io_ctrl_OP))
                                         ? (IData)(
                                                   (vlSelf->Top__DOT__alu__DOT___result_T_103 
                                                    >> 0x20U))
                                         : ((0xfU == (IData)(vlSelf->io_ctrl_OP))
                                             ? (IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelf->Top__DOT__alu__DOT___result_T_97 
                                                                            >> 0x1fU)
                                                                            ? 0xffffffffU
                                                                            : 0U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_97))) 
                                                        >> 0x20U))
                                             : vlSelf->Top__DOT__alu__DOT___result_T_228[1U]))));
    __Vtemp_h44d9f24d__0[0U] = ((0x1dU == (IData)(vlSelf->io_ctrl_OP))
                                 ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_103)
                                 : ((0x28U == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_113)
                                     : ((0x1aU == (IData)(vlSelf->io_ctrl_OP))
                                         ? (IData)(
                                                   (4ULL 
                                                    + vlSelf->Top__DOT__PC__DOT__init))
                                         : ((0x19U 
                                             == (IData)(vlSelf->io_ctrl_OP))
                                             ? (IData)(
                                                       (((QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->Top__DOT__alu__DOT___result_T_103 
                                                                                >> 0x1fU)))
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_103))))
                                             : ((0x18U 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_103)
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? (IData)(
                                                            (((QData)((IData)(
                                                                              ((vlSelf->Top__DOT__alu__DOT___result_T_97 
                                                                                >> 0x1fU)
                                                                                ? 0xffffffffU
                                                                                : 0U))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_97))))
                                                  : 
                                                 vlSelf->Top__DOT__alu__DOT___result_T_228[0U]))))));
    if ((0x22U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_h97ba8989__0[1U] = __Vtemp_h0498d20c__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_254[0U] 
            = __Vtemp_h0498d20c__0[0U];
        vlSelf->Top__DOT__alu__DOT___result_T_254[1U] 
            = __Vtemp_h97ba8989__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_254[2U] 
            = __Vtemp_h0498d20c__0[2U];
        vlSelf->Top__DOT__alu__DOT___result_T_254[3U] 
            = (0x7fffffffU & __Vtemp_h0498d20c__0[3U]);
    } else if ((0x1cU == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_h97ba8989__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_103 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_254[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_103);
        vlSelf->Top__DOT__alu__DOT___result_T_254[1U] 
            = __Vtemp_h97ba8989__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_254[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_254[3U] = 0U;
    } else if ((0x1bU == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_h97ba8989__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_103 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_254[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_103);
        vlSelf->Top__DOT__alu__DOT___result_T_254[1U] 
            = __Vtemp_h97ba8989__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_254[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_254[3U] = 0U;
    } else if ((0x21U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_h97ba8989__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_103 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_254[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_103);
        vlSelf->Top__DOT__alu__DOT___result_T_254[1U] 
            = __Vtemp_h97ba8989__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_254[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_254[3U] = 0U;
    } else if ((0x20U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_h97ba8989__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_103 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_254[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_103);
        vlSelf->Top__DOT__alu__DOT___result_T_254[1U] 
            = __Vtemp_h97ba8989__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_254[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_254[3U] = 0U;
    } else if ((0x1fU == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_h97ba8989__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_103 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_254[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_103);
        vlSelf->Top__DOT__alu__DOT___result_T_254[1U] 
            = __Vtemp_h97ba8989__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_254[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_254[3U] = 0U;
    } else if ((0x1eU == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_h97ba8989__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_103 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_254[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_103);
        vlSelf->Top__DOT__alu__DOT___result_T_254[1U] 
            = __Vtemp_h97ba8989__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_254[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_254[3U] = 0U;
    } else {
        vlSelf->Top__DOT__alu__DOT___result_T_254[0U] 
            = __Vtemp_h44d9f24d__0[0U];
        if ((0x1dU == (IData)(vlSelf->io_ctrl_OP))) {
            __Vtemp_h97ba8989__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_103 
                                                >> 0x20U));
            vlSelf->Top__DOT__alu__DOT___result_T_254[1U] 
                = __Vtemp_h97ba8989__0[1U];
            vlSelf->Top__DOT__alu__DOT___result_T_254[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_254[3U] = 0U;
        } else if ((0x28U == (IData)(vlSelf->io_ctrl_OP))) {
            __Vtemp_h97ba8989__0[1U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_254[1U] 
                = __Vtemp_h97ba8989__0[1U];
            vlSelf->Top__DOT__alu__DOT___result_T_254[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_254[3U] = 0U;
        } else {
            __Vtemp_h97ba8989__0[1U] = __Vtemp_hab75ec19__0[1U];
            vlSelf->Top__DOT__alu__DOT___result_T_254[1U] 
                = __Vtemp_h97ba8989__0[1U];
            if ((0x1aU == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_254[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_254[3U] = 0U;
            } else if ((0x19U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_254[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_254[3U] = 0U;
            } else if ((0x18U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_254[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_254[3U] = 0U;
            } else if ((0xfU == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_254[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_254[3U] = 0U;
            } else {
                vlSelf->Top__DOT__alu__DOT___result_T_254[2U] 
                    = vlSelf->Top__DOT__alu__DOT___result_T_228[2U];
                vlSelf->Top__DOT__alu__DOT___result_T_254[3U] 
                    = vlSelf->Top__DOT__alu__DOT___result_T_228[3U];
            }
        }
    }
    __Vtemp_he0e98e2b__0[0U] = (IData)(vlSelf->io_rs1);
    __Vtemp_he0e98e2b__0[1U] = (IData)((vlSelf->io_rs1 
                                        >> 0x20U));
    __Vtemp_he0e98e2b__0[2U] = 0U;
    VL_SHIFTL_WWI(95,95,5, __Vtemp_hd249025d__0, __Vtemp_he0e98e2b__0, 
                  (0x1fU & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U]));
    __Vtemp_h15ae5748__0[1U] = ((0x29U == (IData)(vlSelf->io_ctrl_OP))
                                 ? (IData)(((vlSelf->io_imm 
                                             & vlSelf->io_rs1) 
                                            >> 0x20U))
                                 : ((0x28U == (IData)(vlSelf->io_ctrl_OP))
                                     ? 0U : ((0x27U 
                                              == (IData)(vlSelf->io_ctrl_OP))
                                              ? (IData)(
                                                        (vlSelf->Top__DOT__alu__DOT___result_T_145 
                                                         >> 0x20U))
                                              : ((0x25U 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? (IData)(
                                                            (vlSelf->Top__DOT__alu__DOT___result_T_145 
                                                             >> 0x20U))
                                                  : 
                                                 ((0x24U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? (IData)(
                                                             (vlSelf->Top__DOT__alu__DOT___result_T_138 
                                                              >> 0x20U))
                                                   : 
                                                  ((0x23U 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? (IData)(
                                                              ((((QData)((IData)(
                                                                                ((__Vtemp_hd249025d__0[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 0xffffffffU
                                                                                 : 0U))) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                (vlSelf->Top__DOT__alu__DOT___result_T_87 
                                                                                << 
                                                                                (0x1fU 
                                                                                & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U]))))) 
                                                               >> 0x20U))
                                                    : 
                                                   vlSelf->Top__DOT__alu__DOT___result_T_254[1U]))))));
    __Vtemp_h73e849ff__0[0U] = ((0x2aU == (IData)(vlSelf->io_ctrl_OP))
                                 ? (IData)((vlSelf->io_imm 
                                            ^ vlSelf->io_rs1))
                                 : ((0x29U == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)((vlSelf->io_imm 
                                                & vlSelf->io_rs1))
                                     : ((0x28U == (IData)(vlSelf->io_ctrl_OP))
                                         ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_113)
                                         : ((0x27U 
                                             == (IData)(vlSelf->io_ctrl_OP))
                                             ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_145)
                                             : ((0x25U 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_145)
                                                 : 
                                                ((0x24U 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_138)
                                                  : 
                                                 ((0x23U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? (IData)(
                                                             (((QData)((IData)(
                                                                               ((__Vtemp_hd249025d__0[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 0xffffffffU
                                                                                 : 0U))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                (vlSelf->Top__DOT__alu__DOT___result_T_87 
                                                                                << 
                                                                                (0x1fU 
                                                                                & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U]))))))
                                                   : 
                                                  vlSelf->Top__DOT__alu__DOT___result_T_254[0U])))))));
    if ((0x2eU == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_280[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_103);
        vlSelf->Top__DOT__alu__DOT___result_T_280[1U] 
            = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_103 
                       >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_280[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_280[3U] = 0U;
    } else if ((0x2dU == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_280[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_103);
        vlSelf->Top__DOT__alu__DOT___result_T_280[1U] 
            = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_103 
                       >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_280[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_280[3U] = 0U;
    } else if ((0x2fU == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_280[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_103);
        vlSelf->Top__DOT__alu__DOT___result_T_280[1U] 
            = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_103 
                       >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_280[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_280[3U] = 0U;
    } else if ((0x2cU == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_280[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_103);
        vlSelf->Top__DOT__alu__DOT___result_T_280[1U] 
            = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_103 
                       >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_280[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_280[3U] = 0U;
    } else if ((0x26U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_280[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_138);
        vlSelf->Top__DOT__alu__DOT___result_T_280[1U] 
            = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_138 
                       >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_280[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_280[3U] = 0U;
    } else if ((0x2bU == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_280[0U] 
            = (IData)((vlSelf->io_imm | vlSelf->io_rs1));
        vlSelf->Top__DOT__alu__DOT___result_T_280[1U] 
            = (IData)(((vlSelf->io_imm | vlSelf->io_rs1) 
                       >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_280[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_280[3U] = 0U;
    } else {
        vlSelf->Top__DOT__alu__DOT___result_T_280[0U] 
            = __Vtemp_h73e849ff__0[0U];
        if ((0x2aU == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_280[1U] 
                = (IData)(((vlSelf->io_imm ^ vlSelf->io_rs1) 
                           >> 0x20U));
            vlSelf->Top__DOT__alu__DOT___result_T_280[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_280[3U] = 0U;
        } else {
            vlSelf->Top__DOT__alu__DOT___result_T_280[1U] 
                = __Vtemp_h15ae5748__0[1U];
            if ((0x29U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_280[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_280[3U] = 0U;
            } else if ((0x28U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_280[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_280[3U] = 0U;
            } else if ((0x27U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_280[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_280[3U] = 0U;
            } else if ((0x25U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_280[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_280[3U] = 0U;
            } else if ((0x24U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_280[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_280[3U] = 0U;
            } else if ((0x23U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_280[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_280[3U] = 0U;
            } else {
                vlSelf->Top__DOT__alu__DOT___result_T_280[2U] 
                    = vlSelf->Top__DOT__alu__DOT___result_T_254[2U];
                vlSelf->Top__DOT__alu__DOT___result_T_280[3U] 
                    = vlSelf->Top__DOT__alu__DOT___result_T_254[3U];
            }
        }
    }
    __Vtemp_h41c573fa__0[1U] = ((0x37U == (IData)(vlSelf->io_ctrl_OP))
                                 ? (IData)((vlSelf->Top__DOT__alu__DOT___result_T_170 
                                            >> 0x20U))
                                 : ((0x36U == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)((vlSelf->io_imm 
                                                >> 0x20U))
                                     : ((0x35U == (IData)(vlSelf->io_ctrl_OP))
                                         ? (IData)(
                                                   (vlSelf->Top__DOT__alu__DOT___result_T_170 
                                                    >> 0x20U))
                                         : ((0x33U 
                                             == (IData)(vlSelf->io_ctrl_OP))
                                             ? (IData)(
                                                       (vlSelf->Top__DOT__alu__DOT___result_T_170 
                                                        >> 0x20U))
                                             : ((0x32U 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? (IData)(
                                                           (vlSelf->Top__DOT__alu__DOT___result_T_170 
                                                            >> 0x20U))
                                                 : 
                                                ((0x34U 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? (IData)(
                                                            (vlSelf->Top__DOT__alu__DOT___result_T_170 
                                                             >> 0x20U))
                                                  : 
                                                 ((0x31U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? (IData)(
                                                             (vlSelf->Top__DOT__alu__DOT___result_T_170 
                                                              >> 0x20U))
                                                   : 
                                                  ((0x30U 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? (IData)(
                                                              (vlSelf->Top__DOT__alu__DOT___result_T_170 
                                                               >> 0x20U))
                                                    : 
                                                   vlSelf->Top__DOT__alu__DOT___result_T_280[1U]))))))));
    vlSelf->io_resultALU = (((QData)((IData)(((0x38U 
                                               == (IData)(vlSelf->io_ctrl_OP))
                                               ? (IData)(
                                                         ((4ULL 
                                                           + vlSelf->Top__DOT__PC__DOT__init) 
                                                          >> 0x20U))
                                               : __Vtemp_h41c573fa__0[1U]))) 
                             << 0x20U) | (QData)((IData)(
                                                         ((0x38U 
                                                           == (IData)(vlSelf->io_ctrl_OP))
                                                           ? (IData)(
                                                                     (4ULL 
                                                                      + vlSelf->Top__DOT__PC__DOT__init))
                                                           : 
                                                          ((0x37U 
                                                            == (IData)(vlSelf->io_ctrl_OP))
                                                            ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_170)
                                                            : 
                                                           ((0x36U 
                                                             == (IData)(vlSelf->io_ctrl_OP))
                                                             ? (IData)(vlSelf->io_imm)
                                                             : 
                                                            ((0x35U 
                                                              == (IData)(vlSelf->io_ctrl_OP))
                                                              ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_170)
                                                              : 
                                                             ((0x33U 
                                                               == (IData)(vlSelf->io_ctrl_OP))
                                                               ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_170)
                                                               : 
                                                              ((0x32U 
                                                                == (IData)(vlSelf->io_ctrl_OP))
                                                                ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_170)
                                                                : 
                                                               ((0x34U 
                                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                                 ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_170)
                                                                 : 
                                                                ((0x31U 
                                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                                  ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_170)
                                                                  : 
                                                                 ((0x30U 
                                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                                   ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_170)
                                                                   : 
                                                                  vlSelf->Top__DOT__alu__DOT___result_T_280[0U]))))))))))));
    VTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->io_resultALU, vlSelf->__Vtask_pmem_read__5__rdata);
    vlSelf->Top__DOT__ifu__DOT__data_mem_rdata = vlSelf->__Vtask_pmem_read__5__rdata;
    if (vlSelf->io_ctrl_MemWen) {
        VTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->io_resultALU, vlSelf->io_rs2, (IData)(vlSelf->io_ctrl_wmask));
    }
    vlSelf->Top__DOT__registers__DOT__registers_MPORT_data 
        = ((IData)(vlSelf->io_ctrl_RegWen) ? ((IData)(vlSelf->io_ctrl_MemLoad)
                                               ? ((0x1bU 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? 
                                                  ((((1U 
                                                      & (IData)(
                                                                (vlSelf->Top__DOT__ifu__DOT__data_mem_rdata 
                                                                 >> 7U)))
                                                      ? 0xffffffffffffffULL
                                                      : 0ULL) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata)))))
                                                   : 
                                                  ((0x1cU 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata))))
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->io_ctrl_OP))
                                                     ? 
                                                    ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->Top__DOT__ifu__DOT__data_mem_rdata 
                                                                   >> 0xfU)))
                                                        ? 0xffffffffffffULL
                                                        : 0ULL) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata)))))
                                                     : 
                                                    ((0x1eU 
                                                      == (IData)(vlSelf->io_ctrl_OP))
                                                      ? (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata))))
                                                      : 
                                                     ((0x1fU 
                                                       == (IData)(vlSelf->io_ctrl_OP))
                                                       ? vlSelf->Top__DOT__ifu__DOT__data_mem_rdata
                                                       : 
                                                      ((0x21U 
                                                        == (IData)(vlSelf->io_ctrl_OP))
                                                        ? (QData)((IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata))
                                                        : 
                                                       ((0x20U 
                                                         == (IData)(vlSelf->io_ctrl_OP))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->Top__DOT__ifu__DOT__data_mem_rdata 
                                                                                >> 0x1fU)))
                                                                            ? 0xffffffffU
                                                                            : 0U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->Top__DOT__ifu__DOT__data_mem_rdata)))
                                                         : vlSelf->io_resultALU)))))))
                                               : vlSelf->io_resultALU)
            : vlSelf->Top__DOT__registers__DOT__registers
           [(0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                              >> 7U)))]);
}
