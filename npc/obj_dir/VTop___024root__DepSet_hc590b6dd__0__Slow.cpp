// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop__Syms.h"
#include "VTop___024root.h"

void VTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 36> &a);

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

void VTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void VTop___024unit____Vdpiimwrap_skip_ref_TOP____024unit(IData/*31:0*/ eval);
void VTop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ flag);
void VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit(QData/*63:0*/ inst);
void VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);
void VTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6c48bb69__0;
    VlWide<3>/*95:0*/ __Vtemp_h1c660ab1__0;
    VlWide<3>/*95:0*/ __Vtemp_hfaf18f3d__1;
    VlWide<3>/*95:0*/ __Vtemp_h1c660ab1__1;
    VlWide<3>/*95:0*/ __Vtemp_h4d984ae9__0;
    VlWide<3>/*95:0*/ __Vtemp_h7aa6df7d__0;
    VlWide<3>/*95:0*/ __Vtemp_h015b843f__0;
    VlWide<3>/*95:0*/ __Vtemp_h8b0f70e6__0;
    VlWide<3>/*95:0*/ __Vtemp_hb9733ce0__0;
    VlWide<4>/*127:0*/ __Vtemp_he0f364e5__0;
    VlWide<4>/*127:0*/ __Vtemp_hc7d2eb5a__0;
    VlWide<4>/*127:0*/ __Vtemp_he0f364e5__1;
    VlWide<4>/*127:0*/ __Vtemp_h425c4ad5__0;
    VlWide<4>/*127:0*/ __Vtemp_h06d202b8__0;
    VlWide<4>/*127:0*/ __Vtemp_ha201fa9e__0;
    VlWide<4>/*127:0*/ __Vtemp_h7a84777b__0;
    VlWide<4>/*127:0*/ __Vtemp_hb688075a__0;
    VlWide<4>/*127:0*/ __Vtemp_h2f9299a3__0;
    VlWide<4>/*127:0*/ __Vtemp_he0f364e5__2;
    VlWide<4>/*127:0*/ __Vtemp_h0498d20c__0;
    VlWide<4>/*127:0*/ __Vtemp_he2f28df2__0;
    VlWide<4>/*127:0*/ __Vtemp_h550c7a19__0;
    VlWide<4>/*127:0*/ __Vtemp_hec7c4ca6__0;
    VlWide<4>/*127:0*/ __Vtemp_hffa7787a__0;
    VlWide<4>/*127:0*/ __Vtemp_hf5413c9e__0;
    VlWide<4>/*127:0*/ __Vtemp_h1897a620__0;
    // Body
    vlSelf->io_reg17 = vlSelf->Top__DOT__registers__DOT__registers
        [0x11U];
    vlSelf->Top__DOT__alu__DOT___result_T_96 = (4ULL 
                                                + vlSelf->Top__DOT__PC__DOT__init);
    vlSelf->Top__DOT__alu__DOT__div__DOT___cnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt)));
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___cnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt)));
    vlSelf->Top__DOT__alu__DOT__div__DOT___GEN_134 
        = (((0x3fU == (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt)) 
            & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__start)) 
           | (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__end_));
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___GEN_70 
        = (((0x1fU == (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt)) 
            & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__start)) 
           | (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__end_));
    vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0 
        = ((~ (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__end_)) 
           & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__start));
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2 
        = ((vlSelf->Top__DOT__alu__DOT__div_1__DOT__A 
            >> 0x1fU) >= (QData)((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__B)));
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
    vlSelf->Top__DOT__dpi__DOT__rf[0x20U] = vlSelf->Top__DOT__alu__DOT__CSR
        [0U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x21U] = vlSelf->Top__DOT__alu__DOT__CSR
        [1U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x22U] = vlSelf->Top__DOT__alu__DOT__CSR
        [2U];
    vlSelf->Top__DOT__dpi__DOT__rf[0x23U] = vlSelf->Top__DOT__alu__DOT__CSR
        [3U];
    vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0 
        = ((~ (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__end_)) 
           & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__start));
    __Vtemp_h6c48bb69__0[0U] = ((vlSelf->Top__DOT__alu__DOT__div__DOT__A[2U] 
                                 << 1U) | (vlSelf->Top__DOT__alu__DOT__div__DOT__A[1U] 
                                           >> 0x1fU));
    __Vtemp_h6c48bb69__0[1U] = ((vlSelf->Top__DOT__alu__DOT__div__DOT__A[3U] 
                                 << 1U) | (vlSelf->Top__DOT__alu__DOT__div__DOT__A[2U] 
                                           >> 0x1fU));
    __Vtemp_h6c48bb69__0[2U] = (vlSelf->Top__DOT__alu__DOT__div__DOT__A[3U] 
                                >> 0x1fU);
    __Vtemp_h1c660ab1__0[0U] = (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__B);
    __Vtemp_h1c660ab1__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT__div__DOT__B 
                                        >> 0x20U));
    __Vtemp_h1c660ab1__0[2U] = 0U;
    vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2 
        = VL_GTE_W(3, __Vtemp_h6c48bb69__0, __Vtemp_h1c660ab1__0);
    vlSelf->io_pc = vlSelf->Top__DOT__PC__DOT__init;
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___A_T_12 
        = ((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2)
            ? ((((vlSelf->Top__DOT__alu__DOT__div_1__DOT__A 
                  >> 0x1fU) - (QData)((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__B))) 
                << 0x1fU) | (QData)((IData)((0x7fffffffU 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__A)))))
            : vlSelf->Top__DOT__alu__DOT__div_1__DOT__A);
    vlSelf->Top__DOT__alu__DOT__div_1__DOT__S_lo = 
        ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
           & ((0x10U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
          << 0xfU) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                        & ((0x11U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                           & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                       << 0xeU) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                     & ((0x12U == (0x1fU 
                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                    << 0xdU) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                  & ((0x13U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                     & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                 << 0xcU) 
                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                     & ((0x14U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                    << 0xbU) 
                                                   | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                        & ((0x15U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                           & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                       << 0xaU) 
                                                      | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                           & ((0x16U 
                                                               == 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                          << 9U) 
                                                         | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                              & ((0x17U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                             << 8U) 
                                                            | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                 & ((0x18U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                                << 7U) 
                                                               | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                    & ((0x19U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                                   << 6U) 
                                                                  | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                       & ((0x1aU 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                                      << 5U) 
                                                                     | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                          & ((0x1bU 
                                                                              == 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                                         << 4U) 
                                                                        | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                             & ((0x1cU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                                            << 3U) 
                                                                           | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x1dU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                                               << 2U) 
                                                                              | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x1eU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x1fU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))))))))))))))))));
    __Vtemp_hfaf18f3d__1[0U] = ((vlSelf->Top__DOT__alu__DOT__div__DOT__A[2U] 
                                 << 1U) | (vlSelf->Top__DOT__alu__DOT__div__DOT__A[1U] 
                                           >> 0x1fU));
    __Vtemp_hfaf18f3d__1[1U] = ((vlSelf->Top__DOT__alu__DOT__div__DOT__A[3U] 
                                 << 1U) | (vlSelf->Top__DOT__alu__DOT__div__DOT__A[2U] 
                                           >> 0x1fU));
    __Vtemp_hfaf18f3d__1[2U] = (vlSelf->Top__DOT__alu__DOT__div__DOT__A[3U] 
                                >> 0x1fU);
    __Vtemp_h1c660ab1__1[0U] = (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__B);
    __Vtemp_h1c660ab1__1[1U] = (IData)((vlSelf->Top__DOT__alu__DOT__div__DOT__B 
                                        >> 0x20U));
    __Vtemp_h1c660ab1__1[2U] = 0U;
    VL_SUB_W(3, __Vtemp_h4d984ae9__0, __Vtemp_hfaf18f3d__1, __Vtemp_h1c660ab1__1);
    if (vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2) {
        vlSelf->Top__DOT__alu__DOT__div__DOT___A_T_12[0U] 
            = (IData)((0x7fffffffffffffffULL & (((QData)((IData)(
                                                                 vlSelf->Top__DOT__alu__DOT__div__DOT__A[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->Top__DOT__alu__DOT__div__DOT__A[0U])))));
        vlSelf->Top__DOT__alu__DOT__div__DOT___A_T_12[1U] 
            = ((__Vtemp_h4d984ae9__0[0U] << 0x1fU) 
               | (IData)(((0x7fffffffffffffffULL & 
                           (((QData)((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__A[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->Top__DOT__alu__DOT__div__DOT__A[0U])))) 
                          >> 0x20U)));
        vlSelf->Top__DOT__alu__DOT__div__DOT___A_T_12[2U] 
            = ((__Vtemp_h4d984ae9__0[0U] >> 1U) | (
                                                   __Vtemp_h4d984ae9__0[1U] 
                                                   << 0x1fU));
        vlSelf->Top__DOT__alu__DOT__div__DOT___A_T_12[3U] 
            = ((__Vtemp_h4d984ae9__0[1U] >> 1U) | (
                                                   __Vtemp_h4d984ae9__0[2U] 
                                                   << 0x1fU));
    } else {
        vlSelf->Top__DOT__alu__DOT__div__DOT___A_T_12[0U] 
            = vlSelf->Top__DOT__alu__DOT__div__DOT__A[0U];
        vlSelf->Top__DOT__alu__DOT__div__DOT___A_T_12[1U] 
            = vlSelf->Top__DOT__alu__DOT__div__DOT__A[1U];
        vlSelf->Top__DOT__alu__DOT__div__DOT___A_T_12[2U] 
            = vlSelf->Top__DOT__alu__DOT__div__DOT__A[2U];
        vlSelf->Top__DOT__alu__DOT__div__DOT___A_T_12[3U] 
            = vlSelf->Top__DOT__alu__DOT__div__DOT__A[3U];
    }
    vlSelf->Top__DOT__alu__DOT__div__DOT__S_lo_lo = 
        ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
           & ((0x30U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
          << 0xfU) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                        & ((0x31U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                           & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                       << 0xeU) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                     & ((0x32U == (0x3fU 
                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                    << 0xdU) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                  & ((0x33U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                     & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                 << 0xcU) 
                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                     & ((0x34U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                    << 0xbU) 
                                                   | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                        & ((0x35U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                           & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                       << 0xaU) 
                                                      | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                           & ((0x36U 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                          << 9U) 
                                                         | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                              & ((0x37U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                             << 8U) 
                                                            | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                 & ((0x38U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                << 7U) 
                                                               | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                    & ((0x39U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                   << 6U) 
                                                                  | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                       & ((0x3aU 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                      << 5U) 
                                                                     | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                          & ((0x3bU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                         << 4U) 
                                                                        | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                             & ((0x3cU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                            << 3U) 
                                                                           | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x3dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                               << 2U) 
                                                                              | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x3eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x3fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))))))))))))))))));
    vlSelf->Top__DOT__alu__DOT__div__DOT__S_hi_lo = 
        ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
           & ((0x10U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
          << 0xfU) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                        & ((0x11U == (0x3fU & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                           & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                       << 0xeU) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                     & ((0x12U == (0x3fU 
                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                    << 0xdU) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                  & ((0x13U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                     & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                 << 0xcU) 
                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                     & ((0x14U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                    << 0xbU) 
                                                   | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                        & ((0x15U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                           & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                       << 0xaU) 
                                                      | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                           & ((0x16U 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                          << 9U) 
                                                         | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                              & ((0x17U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                             << 8U) 
                                                            | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                 & ((0x18U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                << 7U) 
                                                               | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                    & ((0x19U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                   << 6U) 
                                                                  | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                       & ((0x1aU 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                      << 5U) 
                                                                     | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                          & ((0x1bU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                         << 4U) 
                                                                        | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                             & ((0x1cU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                            << 3U) 
                                                                           | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x1dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                               << 2U) 
                                                                              | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x1eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x1fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))))))))))))))))));
    VTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->io_pc, vlSelf->__Vtask_pmem_read__5__rdata);
    vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata = vlSelf->__Vtask_pmem_read__5__rdata;
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_T_1 
        = (((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
              & ((0U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                 & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
             << 0x1fU) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                            & ((1U == (0x1fU & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                               & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                           << 0x1eU) | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                          & ((2U == 
                                              (0x1fU 
                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                         << 0x1dU) 
                                        | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                             & ((3U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                            << 0x1cU) 
                                           | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                & ((4U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                               << 0x1bU) 
                                              | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                   & ((5U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                      & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                  << 0x1aU) 
                                                 | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                      & ((6U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                         & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                     << 0x19U) 
                                                    | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                         & ((7U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                            & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                        << 0x18U) 
                                                       | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                            & ((8U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                           << 0x17U) 
                                                          | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                               & ((9U 
                                                                   == 
                                                                   (0x1fU 
                                                                    & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                              << 0x16U) 
                                                             | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                  & ((0xaU 
                                                                      == 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                     & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                                 << 0x15U) 
                                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                     & ((0xbU 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                                    << 0x14U) 
                                                                   | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                        & ((0xcU 
                                                                            == 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                           & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                                       << 0x13U) 
                                                                      | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                           & ((0xdU 
                                                                               == 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                                          << 0x12U) 
                                                                         | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                              & ((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                                             << 0x11U) 
                                                                            | ((((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___S_tmp_T_2))) 
                                                                                << 0x10U) 
                                                                               | (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__S_lo))))))))))))))))) 
           | vlSelf->Top__DOT__alu__DOT__div_1__DOT__S);
    vlSelf->Top__DOT__alu__DOT__div__DOT__S_lo = ((
                                                   ((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                    & ((0x20U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                   << 0x1fU) 
                                                  | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                       & ((0x21U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                      << 0x1eU) 
                                                     | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                          & ((0x22U 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                         << 0x1dU) 
                                                        | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                             & ((0x23U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                            << 0x1cU) 
                                                           | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                & ((0x24U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                               << 0x1bU) 
                                                              | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                   & ((0x25U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                      & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                  << 0x1aU) 
                                                                 | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                      & ((0x26U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                         & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                     << 0x19U) 
                                                                    | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                         & ((0x27U 
                                                                             == 
                                                                             (0x3fU 
                                                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                            & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                        << 0x18U) 
                                                                       | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                            & ((0x28U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                           << 0x17U) 
                                                                          | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                               & ((0x29U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                              << 0x16U) 
                                                                             | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x2aU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 0x15U) 
                                                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x2bU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x2cU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x2dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x2eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0x2fU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__S_lo_lo)))))))))))))))));
    vlSelf->Top__DOT__alu__DOT__div__DOT__S_hi = ((
                                                   ((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                    & ((0U 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                       & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                   << 0x1fU) 
                                                  | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                       & ((1U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                          & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                      << 0x1eU) 
                                                     | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                          & ((2U 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                             & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                         << 0x1dU) 
                                                        | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                             & ((3U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                            << 0x1cU) 
                                                           | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                & ((4U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                   & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                               << 0x1bU) 
                                                              | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                   & ((5U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                      & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                  << 0x1aU) 
                                                                 | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                      & ((6U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                         & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                     << 0x19U) 
                                                                    | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                         & ((7U 
                                                                             == 
                                                                             (0x3fU 
                                                                              & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                            & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                        << 0x18U) 
                                                                       | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                            & ((8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                               & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                           << 0x17U) 
                                                                          | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                               & ((9U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                              << 0x16U) 
                                                                             | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0xaU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 0x15U) 
                                                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0xbU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 0x14U) 
                                                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0xcU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 0x13U) 
                                                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0xdU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0xeU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 0x11U) 
                                                                                | ((((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_h9cfe27ff__0) 
                                                                                & ((0xfU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__cnt))) 
                                                                                & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___S_tmp_T_2))) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__S_hi_lo)))))))))))))))));
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
    vlSelf->io_rd = (0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                      >> 7U)));
    vlSelf->Top__DOT__decoder__DOT__I = ((((1U & (IData)(
                                                         (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                          >> 0x1fU)))
                                            ? 0xfffffffffffffULL
                                            : 0ULL) 
                                          << 0xcU) 
                                         | (QData)((IData)(
                                                           (0xfffU 
                                                            & (IData)(
                                                                      (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                       >> 0x14U))))));
    vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data 
        = vlSelf->Top__DOT__registers__DOT__registers
        [(0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                           >> 0x14U)))];
    vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data 
        = vlSelf->Top__DOT__registers__DOT__registers
        [(0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                           >> 0xfU)))];
    vlSelf->io_inst = (IData)(vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata);
    vlSelf->Top__DOT__alu__DOT__div__DOT___S_T_1 = 
        ((((QData)((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__S_hi)) 
           << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__S_lo))) 
         | vlSelf->Top__DOT__alu__DOT__div__DOT__S);
    vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_addr 
        = ((0x305ULL == vlSelf->Top__DOT__decoder__DOT__I)
            ? 4U : ((0x300ULL == vlSelf->Top__DOT__decoder__DOT__I)
                     ? 3U : ((0x341ULL == vlSelf->Top__DOT__decoder__DOT__I)
                              ? 2U : (0x342ULL == vlSelf->Top__DOT__decoder__DOT__I))));
    if ((0U == (0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                 >> 0x14U))))) {
        vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0 = 0U;
        vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0 = 0U;
        vlSelf->Top__DOT__alu__DOT__div_1_io_divisor = 0U;
        vlSelf->io_rs2 = 0ULL;
    } else {
        vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0 
            = (0x3fU & (IData)(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data));
        vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0 
            = (0x1fU & (IData)(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data));
        vlSelf->Top__DOT__alu__DOT__div_1_io_divisor 
            = (IData)(vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data);
        vlSelf->io_rs2 = vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data;
    }
    if ((0U == (0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                 >> 0xfU))))) {
        vlSelf->Top__DOT__alu__DOT__div__DOT___dividend_T_3 = 0xffffffffffffffffULL;
        vlSelf->io_rs1 = 0ULL;
        vlSelf->Top__DOT__alu__DOT__div_1_io_dividend = 0U;
    } else {
        vlSelf->Top__DOT__alu__DOT__div__DOT___dividend_T_3 
            = (~ vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data);
        vlSelf->io_rs1 = vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data;
        vlSelf->Top__DOT__alu__DOT__div_1_io_dividend 
            = (IData)(vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data);
    }
    vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_hea47ad50__0 
        = ((0U != (0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                    >> 0xfU)))) & (IData)(
                                                          (vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data 
                                                           >> 0x1fU)));
    vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_heac6e062__0 
        = ((0U != (0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                    >> 0xfU)))) & (IData)(
                                                          (vlSelf->Top__DOT__registers__DOT__registers_io_rdata1_MPORT_data 
                                                           >> 0x3fU)));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_242 
        = ((0x6033U == (0xfe00707fU & vlSelf->io_inst)) 
           | ((0x2006033U == (0xfe00707fU & vlSelf->io_inst)) 
              | ((0x2007033U == (0xfe00707fU & vlSelf->io_inst)) 
                 | ((0x200603bU == (0xfe00707fU & vlSelf->io_inst)) 
                    | ((0x200703bU == (0xfe00707fU 
                                       & vlSelf->io_inst)) 
                       | ((0x13U == (0x707fU & vlSelf->io_inst)) 
                          | ((0x1bU == (0x707fU & vlSelf->io_inst)) 
                             | ((0x67U == (0x707fU 
                                           & vlSelf->io_inst)) 
                                | ((3U == (0x707fU 
                                           & vlSelf->io_inst)) 
                                   | ((0x4003U == (0x707fU 
                                                   & vlSelf->io_inst)) 
                                      | ((0x1003U == 
                                          (0x707fU 
                                           & vlSelf->io_inst)) 
                                         | ((0x5003U 
                                             == (0x707fU 
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
                                                                 | ((0x2013U 
                                                                     == 
                                                                     (0x707fU 
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
                                                                             | ((0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x40005013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x4000501bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x73U 
                                                                                == vlSelf->io_inst) 
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
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_556 
        = ((0x5003U != (0x707fU & vlSelf->io_inst)) 
           & ((0x2003U != (0x707fU & vlSelf->io_inst)) 
              & ((0x6003U != (0x707fU & vlSelf->io_inst)) 
                 & ((0x3003U != (0x707fU & vlSelf->io_inst)) 
                    & ((0x1013U != (0xfc00707fU & vlSelf->io_inst)) 
                       & ((0x101bU != (0xfe00707fU 
                                       & vlSelf->io_inst)) 
                          & ((0x5013U != (0xfc00707fU 
                                          & vlSelf->io_inst)) 
                             & ((0x501bU != (0xfe00707fU 
                                             & vlSelf->io_inst)) 
                                & ((0x2013U != (0x707fU 
                                                & vlSelf->io_inst)) 
                                   & ((0x3013U != (0x707fU 
                                                   & vlSelf->io_inst)) 
                                      & ((0x7013U != 
                                          (0x707fU 
                                           & vlSelf->io_inst)) 
                                         & ((0x4013U 
                                             != (0x707fU 
                                                 & vlSelf->io_inst)) 
                                            & ((0x6013U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               & ((0x40005013U 
                                                   != 
                                                   (0xfc00707fU 
                                                    & vlSelf->io_inst)) 
                                                  & ((0x4000501bU 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst)) 
                                                     & ((0x1073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst)) 
                                                        | ((0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst)) 
                                                           | (0x3073U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst)))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_347 
        = ((0x4000501bU != (0xfe00707fU & vlSelf->io_inst)) 
           & ((0x1073U != (0x707fU & vlSelf->io_inst)) 
              & ((0x2073U != (0x707fU & vlSelf->io_inst)) 
                 & ((0x3073U != (0x707fU & vlSelf->io_inst)) 
                    & ((0x73U != vlSelf->io_inst) & 
                       ((0x3023U != (0x707fU & vlSelf->io_inst)) 
                        & ((0x23U != (0x707fU & vlSelf->io_inst)) 
                           & ((0x1023U != (0x707fU 
                                           & vlSelf->io_inst)) 
                              & ((0x2023U != (0x707fU 
                                              & vlSelf->io_inst)) 
                                 & ((0x63U != (0x707fU 
                                               & vlSelf->io_inst)) 
                                    & ((0x1063U != 
                                        (0x707fU & vlSelf->io_inst)) 
                                       & ((0x4063U 
                                           != (0x707fU 
                                               & vlSelf->io_inst)) 
                                          & ((0x5063U 
                                              != (0x707fU 
                                                  & vlSelf->io_inst)) 
                                             & ((0x7063U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->io_inst)) 
                                                & ((0x6063U 
                                                    != 
                                                    (0x707fU 
                                                     & vlSelf->io_inst)) 
                                                   & ((0x37U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelf->io_inst)) 
                                                      & ((0x17U 
                                                          != 
                                                          (0x7fU 
                                                           & vlSelf->io_inst)) 
                                                         & (0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->io_inst)))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_606 
        = ((0x1073U != (0x707fU & vlSelf->io_inst)) 
           & ((0x2073U != (0x707fU & vlSelf->io_inst)) 
              & ((0x3073U != (0x707fU & vlSelf->io_inst)) 
                 & ((0x73U == vlSelf->io_inst) | ((0x3023U 
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
                                                                 & ((0x4063U 
                                                                     != 
                                                                     (0x707fU 
                                                                      & vlSelf->io_inst)) 
                                                                    & ((0x5063U 
                                                                        != 
                                                                        (0x707fU 
                                                                         & vlSelf->io_inst)) 
                                                                       & ((0x7063U 
                                                                           != 
                                                                           (0x707fU 
                                                                            & vlSelf->io_inst)) 
                                                                          & ((0x6063U 
                                                                              != 
                                                                              (0x707fU 
                                                                               & vlSelf->io_inst)) 
                                                                             & ((0x37U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x17U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x6fU 
                                                                                != 
                                                                                (0x7fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & (0x30200073U 
                                                                                == vlSelf->io_inst))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_505 
        = ((0x503bU != (0xfe00707fU & vlSelf->io_inst)) 
           & ((0x4033U != (0xfe00707fU & vlSelf->io_inst)) 
              & ((0x7033U != (0xfe00707fU & vlSelf->io_inst)) 
                 & ((0x6033U != (0xfe00707fU & vlSelf->io_inst)) 
                    & ((0x2006033U != (0xfe00707fU 
                                       & vlSelf->io_inst)) 
                       & ((0x2007033U != (0xfe00707fU 
                                          & vlSelf->io_inst)) 
                          & ((0x200603bU != (0xfe00707fU 
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
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_421 
        = ((0x101bU != (0xfe00707fU & vlSelf->io_inst)) 
           & ((0x5013U != (0xfc00707fU & vlSelf->io_inst)) 
              & ((0x501bU != (0xfe00707fU & vlSelf->io_inst)) 
                 & ((0x2013U != (0x707fU & vlSelf->io_inst)) 
                    & ((0x3013U != (0x707fU & vlSelf->io_inst)) 
                       & ((0x7013U != (0x707fU & vlSelf->io_inst)) 
                          & ((0x4013U != (0x707fU & vlSelf->io_inst)) 
                             & ((0x6013U != (0x707fU 
                                             & vlSelf->io_inst)) 
                                & ((0x40005013U != 
                                    (0xfc00707fU & vlSelf->io_inst)) 
                                   & ((0x4000501bU 
                                       != (0xfe00707fU 
                                           & vlSelf->io_inst)) 
                                      & ((0x1073U != 
                                          (0x707fU 
                                           & vlSelf->io_inst)) 
                                         & ((0x2073U 
                                             != (0x707fU 
                                                 & vlSelf->io_inst)) 
                                            & ((0x3073U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               & ((0x73U 
                                                   != vlSelf->io_inst) 
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
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_279 
        = ((0x3073U == (0x707fU & vlSelf->io_inst))
            ? 0U : ((0x73U == vlSelf->io_inst) ? 0U
                     : ((0x3023U == (0x707fU & vlSelf->io_inst))
                         ? 1U : ((0x23U == (0x707fU 
                                            & vlSelf->io_inst))
                                  ? 1U : ((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->io_inst))
                                           ? 1U : (
                                                   (0x2023U 
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
                                                     ((0x4063U 
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
                                                       ((0x7063U 
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
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->io_inst))
                                                           ? 3U
                                                           : 
                                                          ((0x17U 
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
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_147 
        = ((0x3023U == (0x707fU & vlSelf->io_inst))
            ? 0x2eU : ((0x23U == (0x707fU & vlSelf->io_inst))
                        ? 0x2fU : ((0x1023U == (0x707fU 
                                                & vlSelf->io_inst))
                                    ? 0x30U : ((0x2023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->io_inst))
                                                ? 0x31U
                                                : (
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x32U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x33U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x36U
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x34U
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x35U
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0x37U
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->io_inst))
                                                          ? 0x38U
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->io_inst))
                                                           ? 0x39U
                                                           : 
                                                          ((0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->io_inst))
                                                            ? 0x3aU
                                                            : 
                                                           ((0x30200073U 
                                                             == vlSelf->io_inst)
                                                             ? 0x40U
                                                             : 
                                                            ((0x100073U 
                                                              == vlSelf->io_inst)
                                                              ? 0x3bU
                                                              : 0xffU)))))))))))))));
    vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data 
        = ((4U >= (IData)(vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_addr))
            ? vlSelf->Top__DOT__alu__DOT__CSR[vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_addr]
            : 0ULL);
    vlSelf->Top__DOT__alu__DOT___result_T_48 = (vlSelf->io_rs1 
                                                < vlSelf->io_rs2);
    vlSelf->Top__DOT__alu__DOT___result_T_46 = VL_LTS_IQQ(64, vlSelf->io_rs1, vlSelf->io_rs2);
    vlSelf->Top__DOT__alu__DOT___result_T_66 = VL_SHIFTRS_III(32,32,5, vlSelf->Top__DOT__alu__DOT__div_1_io_dividend, (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0));
    vlSelf->Top__DOT__alu__DOT___result_T_76 = (vlSelf->Top__DOT__alu__DOT__div_1_io_dividend 
                                                >> (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0));
    vlSelf->Top__DOT__alu__DOT___result_T_5 = (vlSelf->Top__DOT__alu__DOT__div_1_io_dividend 
                                               + vlSelf->Top__DOT__alu__DOT__div_1_io_divisor);
    vlSelf->Top__DOT__alu__DOT___result_T_16 = (vlSelf->Top__DOT__alu__DOT__div_1_io_dividend 
                                                - vlSelf->Top__DOT__alu__DOT__div_1_io_divisor);
    vlSelf->Top__DOT__alu__DOT___result_T_26 = ((QData)((IData)(vlSelf->Top__DOT__alu__DOT__div_1_io_dividend)) 
                                                * (QData)((IData)(vlSelf->Top__DOT__alu__DOT__div_1_io_divisor)));
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
                                                                  | ((0x103bU 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->io_inst)) 
                                                                     | ((0x40005033U 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->io_inst)) 
                                                                        | ((0x4000503bU 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlSelf->io_inst)) 
                                                                           | ((0x5033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                              | ((0x503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                | (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_242)))))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_573 
        = ((0x40005033U != (0xfe00707fU & vlSelf->io_inst)) 
           & ((0x4000503bU != (0xfe00707fU & vlSelf->io_inst)) 
              & ((0x5033U != (0xfe00707fU & vlSelf->io_inst)) 
                 & ((0x503bU != (0xfe00707fU & vlSelf->io_inst)) 
                    & ((0x4033U != (0xfe00707fU & vlSelf->io_inst)) 
                       & ((0x7033U != (0xfe00707fU 
                                       & vlSelf->io_inst)) 
                          & ((0x6033U != (0xfe00707fU 
                                          & vlSelf->io_inst)) 
                             & ((0x2006033U != (0xfe00707fU 
                                                & vlSelf->io_inst)) 
                                & ((0x2007033U != (0xfe00707fU 
                                                   & vlSelf->io_inst)) 
                                   & ((0x200603bU != 
                                       (0xfe00707fU 
                                        & vlSelf->io_inst)) 
                                      & ((0x200703bU 
                                          != (0xfe00707fU 
                                              & vlSelf->io_inst)) 
                                         & ((0x13U 
                                             != (0x707fU 
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
                                                        & ((0x1003U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->io_inst)) 
                                                           & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_556))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_364 
        = ((3U != (0x707fU & vlSelf->io_inst)) & ((0x4003U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->io_inst)) 
                                                  & ((0x1003U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->io_inst)) 
                                                     & ((0x5003U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->io_inst)) 
                                                        & ((0x2003U 
                                                            != 
                                                            (0x707fU 
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
                                                                          & ((0x501bU 
                                                                              != 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->io_inst)) 
                                                                             & ((0x2013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x3013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x7013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x4013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x6013U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x40005013U 
                                                                                != 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_347))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_623 
        = ((0x4003U != (0x707fU & vlSelf->io_inst)) 
           & ((0x1003U != (0x707fU & vlSelf->io_inst)) 
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
                                      & ((0x2013U != 
                                          (0x707fU 
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
                                                  & ((0x6013U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->io_inst)) 
                                                     & ((0x40005013U 
                                                         != 
                                                         (0xfc00707fU 
                                                          & vlSelf->io_inst)) 
                                                        & ((0x4000501bU 
                                                            != 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst)) 
                                                           & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_606))))))))))))))))));
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
                                                                      & ((0x40005033U 
                                                                          != 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->io_inst)) 
                                                                         & ((0x4000503bU 
                                                                             != 
                                                                             (0xfe00707fU 
                                                                              & vlSelf->io_inst)) 
                                                                            & ((0x5033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                               & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_505))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_438 
        = ((0x7033U != (0xfe00707fU & vlSelf->io_inst)) 
           & ((0x6033U != (0xfe00707fU & vlSelf->io_inst)) 
              & ((0x2006033U != (0xfe00707fU & vlSelf->io_inst)) 
                 & ((0x2007033U != (0xfe00707fU & vlSelf->io_inst)) 
                    & ((0x200603bU != (0xfe00707fU 
                                       & vlSelf->io_inst)) 
                       & ((0x200703bU != (0xfe00707fU 
                                          & vlSelf->io_inst)) 
                          & ((0x13U != (0x707fU & vlSelf->io_inst)) 
                             & ((0x1bU != (0x707fU 
                                           & vlSelf->io_inst)) 
                                & ((0x67U != (0x707fU 
                                              & vlSelf->io_inst)) 
                                   & ((3U != (0x707fU 
                                              & vlSelf->io_inst)) 
                                      & ((0x4003U != 
                                          (0x707fU 
                                           & vlSelf->io_inst)) 
                                         & ((0x1003U 
                                             != (0x707fU 
                                                 & vlSelf->io_inst)) 
                                            & ((0x5003U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->io_inst)) 
                                               & ((0x2003U 
                                                   != 
                                                   (0x707fU 
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
                                                           & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_421))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_294 
        = ((0x6003U == (0x707fU & vlSelf->io_inst))
            ? 0U : ((0x3003U == (0x707fU & vlSelf->io_inst))
                     ? 0U : ((0x1013U == (0xfc00707fU 
                                          & vlSelf->io_inst))
                              ? 0U : ((0x101bU == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                       ? 0U : ((0x5013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->io_inst))
                                                ? 0U
                                                : (
                                                   (0x501bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6013U 
                                                         == 
                                                         (0x707fU 
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
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_279))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_162 
        = ((0x1013U == (0xfc00707fU & vlSelf->io_inst))
            ? 0x23U : ((0x101bU == (0xfe00707fU & vlSelf->io_inst))
                        ? 0x24U : ((0x5013U == (0xfc00707fU 
                                                & vlSelf->io_inst))
                                    ? 0x25U : ((0x501bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? 0x26U
                                                : (
                                                   (0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x29U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x2aU
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x2bU
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x2cU
                                                       : 
                                                      ((0x6013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x2dU
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0x27U
                                                         : 
                                                        ((0x4000501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0x28U
                                                          : 
                                                         ((0x1073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0x3cU
                                                           : 
                                                          ((0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0x3dU
                                                            : 
                                                           ((0x3073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0x3eU
                                                             : 
                                                            ((0x73U 
                                                              == vlSelf->io_inst)
                                                              ? 0x3fU
                                                              : (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_147))))))))))))))));
    vlSelf->io_ctrl_csr_wen = ((0x33U != (0xfe00707fU 
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
                                                                      & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_573)))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_381 
        = ((0x2033U != (0xfe00707fU & vlSelf->io_inst)) 
           & ((0x3033U != (0xfe00707fU & vlSelf->io_inst)) 
              & ((0x103bU != (0xfe00707fU & vlSelf->io_inst)) 
                 & ((0x40005033U != (0xfe00707fU & vlSelf->io_inst)) 
                    & ((0x4000503bU != (0xfe00707fU 
                                        & vlSelf->io_inst)) 
                       & ((0x5033U != (0xfe00707fU 
                                       & vlSelf->io_inst)) 
                          & ((0x503bU != (0xfe00707fU 
                                          & vlSelf->io_inst)) 
                             & ((0x4033U != (0xfe00707fU 
                                             & vlSelf->io_inst)) 
                                & ((0x7033U != (0xfe00707fU 
                                                & vlSelf->io_inst)) 
                                   & ((0x6033U != (0xfe00707fU 
                                                   & vlSelf->io_inst)) 
                                      & ((0x2006033U 
                                          != (0xfe00707fU 
                                              & vlSelf->io_inst)) 
                                         & ((0x2007033U 
                                             != (0xfe00707fU 
                                                 & vlSelf->io_inst)) 
                                            & ((0x200603bU 
                                                != 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst)) 
                                               & ((0x200703bU 
                                                   != 
                                                   (0xfe00707fU 
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
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst)) 
                                                           | (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_364))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_640 
        = ((0x3033U != (0xfe00707fU & vlSelf->io_inst)) 
           & ((0x103bU != (0xfe00707fU & vlSelf->io_inst)) 
              & ((0x40005033U != (0xfe00707fU & vlSelf->io_inst)) 
                 & ((0x4000503bU != (0xfe00707fU & vlSelf->io_inst)) 
                    & ((0x5033U != (0xfe00707fU & vlSelf->io_inst)) 
                       & ((0x503bU != (0xfe00707fU 
                                       & vlSelf->io_inst)) 
                          & ((0x4033U != (0xfe00707fU 
                                          & vlSelf->io_inst)) 
                             & ((0x7033U != (0xfe00707fU 
                                             & vlSelf->io_inst)) 
                                & ((0x6033U != (0xfe00707fU 
                                                & vlSelf->io_inst)) 
                                   & ((0x2006033U != 
                                       (0xfe00707fU 
                                        & vlSelf->io_inst)) 
                                      & ((0x2007033U 
                                          != (0xfe00707fU 
                                              & vlSelf->io_inst)) 
                                         & ((0x200603bU 
                                             != (0xfe00707fU 
                                                 & vlSelf->io_inst)) 
                                            & ((0x200703bU 
                                                != 
                                                (0xfe00707fU 
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
                                                           & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_623))))))))))))))))));
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
                                                               & ((0x3033U 
                                                                   != 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->io_inst)) 
                                                                  & ((0x103bU 
                                                                      != 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->io_inst)) 
                                                                     & ((0x40005033U 
                                                                         != 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->io_inst)) 
                                                                        & ((0x4000503bU 
                                                                            != 
                                                                            (0xfe00707fU 
                                                                             & vlSelf->io_inst)) 
                                                                           & ((0x5033U 
                                                                               != 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                              & ((0x503bU 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & ((0x4033U 
                                                                                != 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->io_inst)) 
                                                                                & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_438))))))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_309 
        = ((0x4033U == (0xfe00707fU & vlSelf->io_inst))
            ? 0U : ((0x7033U == (0xfe00707fU & vlSelf->io_inst))
                     ? 0U : ((0x6033U == (0xfe00707fU 
                                          & vlSelf->io_inst))
                              ? 0U : ((0x2006033U == 
                                       (0xfe00707fU 
                                        & vlSelf->io_inst))
                                       ? 0U : ((0x2007033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? 0U
                                                : (
                                                   (0x200603bU 
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
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5003U 
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
                                                             : (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_294))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_177 
        = ((0x6033U == (0xfe00707fU & vlSelf->io_inst))
            ? 0x14U : ((0x2006033U == (0xfe00707fU 
                                       & vlSelf->io_inst))
                        ? 0x15U : ((0x2007033U == (0xfe00707fU 
                                                   & vlSelf->io_inst))
                                    ? 0x16U : ((0x200603bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? 0x17U
                                                : (
                                                   (0x200703bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0x18U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0x19U
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0x1aU
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0x1bU
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x1cU
                                                        : 
                                                       ((0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0x1dU
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0x1eU
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0x1fU
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0x21U
                                                            : 
                                                           ((0x6003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0x22U
                                                             : 
                                                            ((0x3003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst))
                                                              ? 0x20U
                                                              : (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_162))))))))))))))));
    vlSelf->io_is_csr = vlSelf->io_ctrl_csr_wen;
    vlSelf->io_ctrl_J_JUMP = ((0x33U != (0xfe00707fU 
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
                                                            & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_381))))))))))));
    vlSelf->io_ctrl_E_JUMP = ((0x33U != (0xfe00707fU 
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
                                                               & (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_640)))))))))))));
    vlSelf->io_MemWen = vlSelf->io_ctrl_MemWen;
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_324 
        = ((0x4000003bU == (0xfe00707fU & vlSelf->io_inst))
            ? 0U : ((0x2000033U == (0xfe00707fU & vlSelf->io_inst))
                     ? 0U : ((0x200003bU == (0xfe00707fU 
                                             & vlSelf->io_inst))
                              ? 0U : ((0x2004033U == 
                                       (0xfe00707fU 
                                        & vlSelf->io_inst))
                                       ? 0U : ((0x2005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? 0U
                                                : (
                                                   (0x200403bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x200503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x103bU 
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
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_309))))))))))))))));
    vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_192 
        = ((0x200003bU == (0xfe00707fU & vlSelf->io_inst))
            ? 5U : ((0x2004033U == (0xfe00707fU & vlSelf->io_inst))
                     ? 6U : ((0x2005033U == (0xfe00707fU 
                                             & vlSelf->io_inst))
                              ? 7U : ((0x200403bU == 
                                       (0xfe00707fU 
                                        & vlSelf->io_inst))
                                       ? 8U : ((0x200503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->io_inst))
                                                ? 9U
                                                : (
                                                   (0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst))
                                                    ? 0xaU
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst))
                                                     ? 0xbU
                                                     : 
                                                    ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst))
                                                      ? 0xcU
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst))
                                                       ? 0xdU
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst))
                                                        ? 0x13U
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst))
                                                         ? 0xeU
                                                         : 
                                                        ((0x5033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst))
                                                          ? 0xfU
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst))
                                                           ? 0x10U
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst))
                                                            ? 0x11U
                                                            : 
                                                           ((0x7033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst))
                                                             ? 0x12U
                                                             : (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_177))))))))))))))));
    vlSelf->io_is_e = vlSelf->io_ctrl_E_JUMP;
    if ((0x33U == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
        vlSelf->io_ctrl_OP = 0U;
    } else if ((0x3bU == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
        vlSelf->io_ctrl_OP = 1U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->io_inst))) {
        vlSelf->Top__DOT__decoder__DOT__ImmType = 0U;
        vlSelf->io_ctrl_OP = 2U;
    } else {
        vlSelf->Top__DOT__decoder__DOT__ImmType = vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_324;
        vlSelf->io_ctrl_OP = ((0x4000003bU == (0xfe00707fU 
                                               & vlSelf->io_inst))
                               ? 3U : ((0x2000033U 
                                        == (0xfe00707fU 
                                            & vlSelf->io_inst))
                                        ? 4U : (IData)(vlSelf->Top__DOT__decoder__DOT___crtlsignals_T_192)));
    }
    __Vtemp_h7aa6df7d__0[1U] = ((1U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))
                                 ? (((IData)(((((1U 
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
                                                  << 5U))
                                 : (IData)((((0U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))
                                              ? vlSelf->Top__DOT__decoder__DOT__I
                                              : 0ULL) 
                                            >> 0x20U)));
    __Vtemp_h015b843f__0[0U] = ((2U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))
                                 ? (((((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
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
                                                << 1U)))
                                 : ((1U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))
                                     ? (((IData)(((
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
                                                                                >> 0x19U))))))) 
                                         << 5U) | (IData)(vlSelf->io_rd))
                                     : (IData)(((0U 
                                                 == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))
                                                 ? vlSelf->Top__DOT__decoder__DOT__I
                                                 : 0ULL))));
    if ((3U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))) {
        __Vtemp_h8b0f70e6__0[1U] = (((IData)(((((1U 
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
        __Vtemp_h8b0f70e6__0[2U] = ((IData)((((((1U 
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
        __Vtemp_h8b0f70e6__0[1U] = (((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                                     >> 0x14U) | ((IData)(
                                                          (vlSelf->Top__DOT__decoder__DOT___J_T_4 
                                                           >> 0x20U)) 
                                                  << 0xcU));
        __Vtemp_h8b0f70e6__0[2U] = ((IData)((vlSelf->Top__DOT__decoder__DOT___J_T_4 
                                             >> 0x20U)) 
                                    >> 0x14U);
    } else {
        __Vtemp_h8b0f70e6__0[1U] = __Vtemp_h7aa6df7d__0[1U];
        __Vtemp_h8b0f70e6__0[2U] = ((1U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))
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
        __Vtemp_hb9733ce0__0[0U] = (((((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                                       << 0x14U) | 
                                      (0x800U & ((IData)(
                                                         (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                          >> 0x14U)) 
                                                 << 0xbU))) 
                                     | (0xff000U & 
                                        ((IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                  >> 0xcU)) 
                                         << 0xcU))) 
                                    | (0x7feU & ((IData)(
                                                         (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                          >> 0x15U)) 
                                                 << 1U)));
        vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U] 
            = __Vtemp_hb9733ce0__0[0U];
        vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[1U] 
            = (((IData)(vlSelf->Top__DOT__decoder__DOT___J_T_4) 
                >> 0xcU) | ((IData)((vlSelf->Top__DOT__decoder__DOT___J_T_4 
                                     >> 0x20U)) << 0x14U));
        vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[2U] 
            = ((IData)((vlSelf->Top__DOT__decoder__DOT___J_T_4 
                        >> 0x20U)) >> 0xcU);
    } else {
        __Vtemp_hb9733ce0__0[0U] = ((3U == (IData)(vlSelf->Top__DOT__decoder__DOT__ImmType))
                                     ? ((IData)((((
                                                   (1U 
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
                                        << 0xcU) : 
                                    __Vtemp_h015b843f__0[0U]);
        vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U] 
            = __Vtemp_hb9733ce0__0[0U];
        vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[1U] 
            = __Vtemp_h8b0f70e6__0[1U];
        vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[2U] 
            = __Vtemp_h8b0f70e6__0[2U];
    }
    VTop___024unit____Vdpiimwrap_skip_ref_TOP____024unit(
                                                         (0x3fU 
                                                          == (IData)(vlSelf->io_ctrl_OP)));
    VTop___024unit____Vdpiimwrap_ebreak_TOP____024unit(
                                                       ((0x3bU 
                                                         == (IData)(vlSelf->io_ctrl_OP))
                                                         ? 1U
                                                         : 0U));
    VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit((QData)((IData)(vlSelf->io_inst)));
    VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(vlSelf->io_pc);
    vlSelf->io_op = vlSelf->io_ctrl_OP;
    vlSelf->Top__DOT__alu__DOT__div__DOT___GEN_131 
        = ((((6U == (IData)(vlSelf->io_ctrl_OP)) | 
             (7U == (IData)(vlSelf->io_ctrl_OP))) | 
            ((0x15U == (IData)(vlSelf->io_ctrl_OP)) 
             | (0x16U == (IData)(vlSelf->io_ctrl_OP)))) 
           | (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__start));
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___GEN_67 
        = ((((8U == (IData)(vlSelf->io_ctrl_OP)) | 
             (9U == (IData)(vlSelf->io_ctrl_OP))) | 
            ((0x17U == (IData)(vlSelf->io_ctrl_OP)) 
             | (0x18U == (IData)(vlSelf->io_ctrl_OP)))) 
           | (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__start));
    if ((0x3fU == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT__CSR_MPORT_data 
            = vlSelf->Top__DOT__registers__DOT__registers
            [0x11U];
        vlSelf->Top__DOT__alu__DOT__CSR_MPORT_2_data 
            = vlSelf->Top__DOT__PC__DOT__init;
    } else {
        vlSelf->Top__DOT__alu__DOT__CSR_MPORT_data 
            = vlSelf->Top__DOT__alu__DOT__CSR[1U];
        vlSelf->Top__DOT__alu__DOT__CSR_MPORT_2_data 
            = vlSelf->Top__DOT__alu__DOT__CSR[2U];
    }
    vlSelf->io_ctrl_wmask = ((0x2eU == (IData)(vlSelf->io_ctrl_OP))
                              ? 0xffU : ((0x31U == (IData)(vlSelf->io_ctrl_OP))
                                          ? 0xfU : 
                                         ((0x30U == (IData)(vlSelf->io_ctrl_OP))
                                           ? 3U : (
                                                   (0x2fU 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? 1U
                                                    : 0U))));
    vlSelf->Top__DOT__alu__DOT__div_1_io_div_signed 
        = ((8U == (IData)(vlSelf->io_ctrl_OP)) | (0x17U 
                                                  == (IData)(vlSelf->io_ctrl_OP)));
    vlSelf->Top__DOT__alu__DOT__div_io_div_signed = 
        ((6U == (IData)(vlSelf->io_ctrl_OP)) | (0x15U 
                                                == (IData)(vlSelf->io_ctrl_OP)));
    vlSelf->Top__DOT__alu__DOT___result_T_125 = (vlSelf->Top__DOT__alu__DOT__div_1_io_dividend 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U]));
    vlSelf->Top__DOT__alu__DOT___result_T_148 = VL_SHIFTRS_III(32,32,5, vlSelf->Top__DOT__alu__DOT__div_1_io_dividend, 
                                                               (0x1fU 
                                                                & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U]));
    vlSelf->io_imm = (((QData)((IData)(vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U])));
    vlSelf->io_wmask = vlSelf->io_ctrl_wmask;
    vlSelf->Top__DOT__alu__DOT__div_1__DOT___dividend_T_1 
        = ((IData)(vlSelf->Top__DOT__alu__DOT__div_1_io_div_signed) 
           & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_hea47ad50__0));
    vlSelf->Top__DOT__alu__DOT__div_1_io_quotient = 
        (((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__end_) 
          & ((IData)(vlSelf->Top__DOT__alu__DOT__div_1_io_div_signed) 
             & ((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT____VdfgTmp_hea47ad50__0) 
                ^ ((0U != (0x1fU & (IData)((vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                            >> 0x14U)))) 
                   & (IData)((vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data 
                              >> 0x1fU)))))) ? ((IData)(1U) 
                                                + (~ vlSelf->Top__DOT__alu__DOT__div_1__DOT__S))
          : vlSelf->Top__DOT__alu__DOT__div_1__DOT__S);
    vlSelf->Top__DOT__alu__DOT__div__DOT___dividend_T_1 
        = ((IData)(vlSelf->Top__DOT__alu__DOT__div_io_div_signed) 
           & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_heac6e062__0));
    vlSelf->Top__DOT__alu__DOT__div_io_quotient = (
                                                   ((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__end_) 
                                                    & ((IData)(vlSelf->Top__DOT__alu__DOT__div_io_div_signed) 
                                                       & ((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT____VdfgTmp_heac6e062__0) 
                                                          ^ 
                                                          ((0U 
                                                            != 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->Top__DOT__ifu__DOT__inst_mem_rdata 
                                                                        >> 0x14U)))) 
                                                           & (IData)(
                                                                     (vlSelf->Top__DOT__registers__DOT__registers_io_rdata2_MPORT_data 
                                                                      >> 0x3fU))))))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    (~ vlSelf->Top__DOT__alu__DOT__div__DOT__S))
                                                    : vlSelf->Top__DOT__alu__DOT__div__DOT__S);
    vlSelf->Top__DOT__alu__DOT___result_T_163 = (vlSelf->io_imm 
                                                 + vlSelf->Top__DOT__PC__DOT__init);
    vlSelf->Top__DOT__alu__DOT___result_T_89 = ((QData)((IData)(vlSelf->Top__DOT__alu__DOT__div_1_io_dividend)) 
                                                + vlSelf->io_imm);
    vlSelf->Top__DOT__alu__DOT___result_T_86 = (vlSelf->io_imm 
                                                + vlSelf->io_rs1);
    vlSelf->Top__DOT__alu__DOT__div_1_io_remainder 
        = (((IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT__end_) 
            & (IData)(vlSelf->Top__DOT__alu__DOT__div_1__DOT___dividend_T_1))
            ? ((IData)(1U) + (~ vlSelf->Top__DOT__alu__DOT__div_1__DOT__R))
            : vlSelf->Top__DOT__alu__DOT__div_1__DOT__R);
    vlSelf->Top__DOT__alu__DOT___result_T_36 = (((QData)((IData)(
                                                                 ((vlSelf->Top__DOT__alu__DOT__div_1_io_quotient 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->Top__DOT__alu__DOT__div_1_io_quotient)));
    vlSelf->Top__DOT__alu__DOT__div_io_remainder = 
        (((IData)(vlSelf->Top__DOT__alu__DOT__div__DOT__end_) 
          & (IData)(vlSelf->Top__DOT__alu__DOT__div__DOT___dividend_T_1))
          ? (1ULL + (~ vlSelf->Top__DOT__alu__DOT__div__DOT__R))
          : vlSelf->Top__DOT__alu__DOT__div__DOT__R);
    __Vtemp_he0f364e5__0[0U] = (IData)(vlSelf->io_rs1);
    __Vtemp_he0f364e5__0[1U] = (IData)((vlSelf->io_rs1 
                                        >> 0x20U));
    __Vtemp_he0f364e5__0[2U] = 0U;
    __Vtemp_he0f364e5__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_hc7d2eb5a__0, __Vtemp_he0f364e5__0, (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0));
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
    __Vtemp_ha201fa9e__0[0U] = (IData)(((9U == (IData)(vlSelf->io_ctrl_OP))
                                         ? vlSelf->Top__DOT__alu__DOT___result_T_36
                                         : ((8U == (IData)(vlSelf->io_ctrl_OP))
                                             ? vlSelf->Top__DOT__alu__DOT___result_T_36
                                             : ((7U 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? vlSelf->Top__DOT__alu__DOT__div_io_quotient
                                                 : 
                                                ((6U 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? vlSelf->Top__DOT__alu__DOT__div_io_quotient
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->Top__DOT__alu__DOT___result_T_26 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_26)))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     __Vtemp_h06d202b8__0[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      __Vtemp_h06d202b8__0[0U])))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->io_ctrl_OP))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((vlSelf->Top__DOT__alu__DOT___result_T_16 
                                                                        >> 0x1fU)
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_16)))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->io_ctrl_OP))
                                                      ? 
                                                     (vlSelf->io_rs1 
                                                      - vlSelf->io_rs2)
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->io_ctrl_OP))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        ((vlSelf->Top__DOT__alu__DOT___result_T_5 
                                                                          >> 0x1fU)
                                                                          ? 0xffffffffU
                                                                          : 0U))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_5)))
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->io_ctrl_OP))
                                                        ? 
                                                       (vlSelf->io_rs1 
                                                        + vlSelf->io_rs2)
                                                        : 0ULL)))))))))));
    __Vtemp_ha201fa9e__0[1U] = (IData)((((9U == (IData)(vlSelf->io_ctrl_OP))
                                          ? vlSelf->Top__DOT__alu__DOT___result_T_36
                                          : ((8U == (IData)(vlSelf->io_ctrl_OP))
                                              ? vlSelf->Top__DOT__alu__DOT___result_T_36
                                              : ((7U 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? vlSelf->Top__DOT__alu__DOT__div_io_quotient
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? vlSelf->Top__DOT__alu__DOT__div_io_quotient
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->Top__DOT__alu__DOT___result_T_26 
                                                                                >> 0x1fU)))
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_26)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->io_ctrl_OP))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      __Vtemp_h06d202b8__0[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       __Vtemp_h06d202b8__0[0U])))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->io_ctrl_OP))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->Top__DOT__alu__DOT___result_T_16 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_16)))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->io_ctrl_OP))
                                                       ? 
                                                      (vlSelf->io_rs1 
                                                       - vlSelf->io_rs2)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->io_ctrl_OP))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((vlSelf->Top__DOT__alu__DOT___result_T_5 
                                                                           >> 0x1fU)
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_5)))
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->io_ctrl_OP))
                                                         ? 
                                                        (vlSelf->io_rs1 
                                                         + vlSelf->io_rs2)
                                                         : 0ULL)))))))))) 
                                        >> 0x20U));
    if ((0xbU == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_201[0U] 
            = vlSelf->Top__DOT__alu__DOT___result_T_46;
        vlSelf->Top__DOT__alu__DOT___result_T_201[1U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_201[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_201[3U] = 0U;
    } else if ((0xaU == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_201[0U] 
            = __Vtemp_hc7d2eb5a__0[0U];
        vlSelf->Top__DOT__alu__DOT___result_T_201[1U] 
            = __Vtemp_hc7d2eb5a__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_201[2U] 
            = __Vtemp_hc7d2eb5a__0[2U];
        vlSelf->Top__DOT__alu__DOT___result_T_201[3U] 
            = (0x7fffffffU & __Vtemp_hc7d2eb5a__0[3U]);
    } else {
        vlSelf->Top__DOT__alu__DOT___result_T_201[0U] 
            = __Vtemp_ha201fa9e__0[0U];
        vlSelf->Top__DOT__alu__DOT___result_T_201[1U] 
            = __Vtemp_ha201fa9e__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_201[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_201[3U] = 0U;
    }
    __Vtemp_h7a84777b__0[1U] = ((0xeU == (IData)(vlSelf->io_ctrl_OP))
                                 ? (IData)(((((QData)((IData)(
                                                              ((vlSelf->Top__DOT__alu__DOT___result_T_66 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_66))) 
                                            >> 0x20U))
                                 : ((0x13U == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->io_rs1, (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0)) 
                                                >> 0x20U))
                                     : ((0xdU == (IData)(vlSelf->io_ctrl_OP))
                                         ? (IData)(
                                                   ((((QData)((IData)(
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (0xffffffffULL 
                                                                                & (((QData)((IData)(vlSelf->Top__DOT__alu__DOT__div_1_io_dividend)) 
                                                                                << (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0)) 
                                                                                >> 0x1fU))))
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->Top__DOT__alu__DOT__div_1_io_dividend 
                                                                        << (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0))))) 
                                                    >> 0x20U))
                                         : ((0xcU == (IData)(vlSelf->io_ctrl_OP))
                                             ? 0U : 
                                            vlSelf->Top__DOT__alu__DOT___result_T_201[1U]))));
    __Vtemp_hb688075a__0[0U] = ((0xfU == (IData)(vlSelf->io_ctrl_OP))
                                 ? (IData)((vlSelf->io_rs1 
                                            >> (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0)))
                                 : ((0xeU == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)((((QData)((IData)(
                                                                 ((vlSelf->Top__DOT__alu__DOT___result_T_66 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_66))))
                                     : ((0x13U == (IData)(vlSelf->io_ctrl_OP))
                                         ? (IData)(
                                                   VL_SHIFTRS_QQI(64,64,6, vlSelf->io_rs1, (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0)))
                                         : ((0xdU == (IData)(vlSelf->io_ctrl_OP))
                                             ? (IData)(
                                                       (((QData)((IData)(
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (0xffffffffULL 
                                                                                & (((QData)((IData)(vlSelf->Top__DOT__alu__DOT__div_1_io_dividend)) 
                                                                                << (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0)) 
                                                                                >> 0x1fU))))
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (vlSelf->Top__DOT__alu__DOT__div_1_io_dividend 
                                                                           << (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7420__0))))))
                                             : ((0xcU 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_48)
                                                 : 
                                                vlSelf->Top__DOT__alu__DOT___result_T_201[0U])))));
    __Vtemp_h2f9299a3__0[1U] = ((0x15U == (IData)(vlSelf->io_ctrl_OP))
                                 ? (IData)((vlSelf->Top__DOT__alu__DOT__div_io_remainder 
                                            >> 0x20U))
                                 : ((0x14U == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)(((vlSelf->io_rs1 
                                                 | vlSelf->io_rs2) 
                                                >> 0x20U))
                                     : ((0x12U == (IData)(vlSelf->io_ctrl_OP))
                                         ? (IData)(
                                                   ((vlSelf->io_rs1 
                                                     & vlSelf->io_rs2) 
                                                    >> 0x20U))
                                         : ((0x11U 
                                             == (IData)(vlSelf->io_ctrl_OP))
                                             ? (IData)(
                                                       ((vlSelf->io_rs1 
                                                         ^ vlSelf->io_rs2) 
                                                        >> 0x20U))
                                             : ((0x10U 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? (IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSelf->Top__DOT__alu__DOT___result_T_76 
                                                                                >> 0x1fU)
                                                                                ? 0xffffffffU
                                                                                : 0U))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_76))) 
                                                            >> 0x20U))
                                                 : 
                                                ((0xfU 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? (IData)(
                                                            ((vlSelf->io_rs1 
                                                              >> (IData)(vlSelf->Top__DOT__alu__DOT____VdfgTmp_hf93d7461__0)) 
                                                             >> 0x20U))
                                                  : 
                                                 __Vtemp_h7a84777b__0[1U]))))));
    if ((0x16U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_223[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT__div_io_remainder);
        vlSelf->Top__DOT__alu__DOT___result_T_223[1U] 
            = (IData)((vlSelf->Top__DOT__alu__DOT__div_io_remainder 
                       >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_223[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_223[3U] = 0U;
    } else if ((0x15U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_223[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT__div_io_remainder);
        vlSelf->Top__DOT__alu__DOT___result_T_223[1U] 
            = __Vtemp_h2f9299a3__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_223[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_223[3U] = 0U;
    } else if ((0x14U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_223[0U] 
            = (IData)((vlSelf->io_rs1 | vlSelf->io_rs2));
        vlSelf->Top__DOT__alu__DOT___result_T_223[1U] 
            = __Vtemp_h2f9299a3__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_223[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_223[3U] = 0U;
    } else if ((0x12U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_223[0U] 
            = (IData)((vlSelf->io_rs1 & vlSelf->io_rs2));
        vlSelf->Top__DOT__alu__DOT___result_T_223[1U] 
            = __Vtemp_h2f9299a3__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_223[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_223[3U] = 0U;
    } else if ((0x11U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_223[0U] 
            = (IData)((vlSelf->io_rs1 ^ vlSelf->io_rs2));
        vlSelf->Top__DOT__alu__DOT___result_T_223[1U] 
            = __Vtemp_h2f9299a3__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_223[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_223[3U] = 0U;
    } else if ((0x10U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_223[0U] 
            = (IData)((((QData)((IData)(((vlSelf->Top__DOT__alu__DOT___result_T_76 
                                          >> 0x1fU)
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_76))));
        vlSelf->Top__DOT__alu__DOT___result_T_223[1U] 
            = __Vtemp_h2f9299a3__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_223[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_223[3U] = 0U;
    } else {
        vlSelf->Top__DOT__alu__DOT___result_T_223[0U] 
            = __Vtemp_hb688075a__0[0U];
        vlSelf->Top__DOT__alu__DOT___result_T_223[1U] 
            = __Vtemp_h2f9299a3__0[1U];
        if ((0xfU == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_223[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_223[3U] = 0U;
        } else if ((0xeU == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_223[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_223[3U] = 0U;
        } else if ((0x13U == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_223[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_223[3U] = 0U;
        } else if ((0xdU == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_223[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_223[3U] = 0U;
        } else if ((0xcU == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_223[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_223[3U] = 0U;
        } else {
            vlSelf->Top__DOT__alu__DOT___result_T_223[2U] 
                = vlSelf->Top__DOT__alu__DOT___result_T_201[2U];
            vlSelf->Top__DOT__alu__DOT___result_T_223[3U] 
                = vlSelf->Top__DOT__alu__DOT___result_T_201[3U];
        }
    }
    __Vtemp_he0f364e5__2[0U] = (IData)(vlSelf->io_rs1);
    __Vtemp_he0f364e5__2[1U] = (IData)((vlSelf->io_rs1 
                                        >> 0x20U));
    __Vtemp_he0f364e5__2[2U] = 0U;
    __Vtemp_he0f364e5__2[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h0498d20c__0, __Vtemp_he0f364e5__2, 
                  (0x3fU & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U]));
    __Vtemp_he2f28df2__0[1U] = ((0x1dU == (IData)(vlSelf->io_ctrl_OP))
                                 ? (IData)((vlSelf->Top__DOT__alu__DOT___result_T_86 
                                            >> 0x20U))
                                 : ((0x1cU == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)((vlSelf->Top__DOT__alu__DOT___result_T_86 
                                                >> 0x20U))
                                     : ((0x1bU == (IData)(vlSelf->io_ctrl_OP))
                                         ? (IData)(
                                                   ((4ULL 
                                                     + vlSelf->Top__DOT__PC__DOT__init) 
                                                    >> 0x20U))
                                         : ((0x1aU 
                                             == (IData)(vlSelf->io_ctrl_OP))
                                             ? (IData)(
                                                       ((((QData)((IData)(
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->Top__DOT__alu__DOT___result_T_89 
                                                                                >> 0x1fU)))
                                                                            ? 0xffffffffU
                                                                            : 0U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_89))) 
                                                        >> 0x20U))
                                             : ((0x19U 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? (IData)(
                                                           (vlSelf->Top__DOT__alu__DOT___result_T_86 
                                                            >> 0x20U))
                                                 : 
                                                ((0x18U 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? 0U
                                                  : 
                                                 ((0x17U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? 0U
                                                   : 
                                                  vlSelf->Top__DOT__alu__DOT___result_T_223[1U])))))));
    __Vtemp_h550c7a19__0[0U] = ((0x1eU == (IData)(vlSelf->io_ctrl_OP))
                                 ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_86)
                                 : ((0x1dU == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_86)
                                     : ((0x1cU == (IData)(vlSelf->io_ctrl_OP))
                                         ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_86)
                                         : ((0x1bU 
                                             == (IData)(vlSelf->io_ctrl_OP))
                                             ? (IData)(
                                                       (4ULL 
                                                        + vlSelf->Top__DOT__PC__DOT__init))
                                             : ((0x1aU 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? (IData)(
                                                           (((QData)((IData)(
                                                                             ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->Top__DOT__alu__DOT___result_T_89 
                                                                                >> 0x1fU)))
                                                                               ? 0xffffffffU
                                                                               : 0U))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_89))))
                                                 : 
                                                ((0x19U 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_86)
                                                  : 
                                                 ((0x18U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? vlSelf->Top__DOT__alu__DOT__div_1_io_remainder
                                                   : 
                                                  ((0x17U 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? vlSelf->Top__DOT__alu__DOT__div_1_io_remainder
                                                    : 
                                                   vlSelf->Top__DOT__alu__DOT___result_T_223[0U]))))))));
    if ((0x24U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_hec7c4ca6__0[0U] = (IData)((((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (0xffffffffULL 
                                                                          & (((QData)((IData)(vlSelf->Top__DOT__alu__DOT__div_1_io_dividend)) 
                                                                              << 
                                                                              (0x1fU 
                                                                               & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U])) 
                                                                             >> 0x1fU))))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (vlSelf->Top__DOT__alu__DOT__div_1_io_dividend 
                                                               << 
                                                               (0x1fU 
                                                                & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U]))))));
        __Vtemp_hec7c4ca6__0[1U] = (IData)(((((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (0xffffffffULL 
                                                                           & (((QData)((IData)(vlSelf->Top__DOT__alu__DOT__div_1_io_dividend)) 
                                                                               << 
                                                                               (0x1fU 
                                                                                & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U])) 
                                                                              >> 0x1fU))))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (vlSelf->Top__DOT__alu__DOT__div_1_io_dividend 
                                                                << 
                                                                (0x1fU 
                                                                 & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U]))))) 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_251[0U] 
            = __Vtemp_hec7c4ca6__0[0U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[1U] 
            = __Vtemp_hec7c4ca6__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_251[3U] = 0U;
    } else if ((0x23U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_hec7c4ca6__0[0U] = __Vtemp_h0498d20c__0[0U];
        __Vtemp_hec7c4ca6__0[1U] = __Vtemp_h0498d20c__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[0U] 
            = __Vtemp_hec7c4ca6__0[0U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[1U] 
            = __Vtemp_hec7c4ca6__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[2U] 
            = __Vtemp_h0498d20c__0[2U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
            = (0x7fffffffU & __Vtemp_h0498d20c__0[3U]);
    } else if ((0x20U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_hec7c4ca6__0[0U] = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_86);
        __Vtemp_hec7c4ca6__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_86 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_251[0U] 
            = __Vtemp_hec7c4ca6__0[0U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[1U] 
            = __Vtemp_hec7c4ca6__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
            = (0x7fffffffU & 0U);
    } else if ((0x22U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_hec7c4ca6__0[0U] = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_86);
        __Vtemp_hec7c4ca6__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_86 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_251[0U] 
            = __Vtemp_hec7c4ca6__0[0U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[1U] 
            = __Vtemp_hec7c4ca6__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
            = (0x7fffffffU & 0U);
    } else if ((0x21U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_hec7c4ca6__0[0U] = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_86);
        __Vtemp_hec7c4ca6__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_86 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_251[0U] 
            = __Vtemp_hec7c4ca6__0[0U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[1U] 
            = __Vtemp_hec7c4ca6__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
            = (0x7fffffffU & 0U);
    } else if ((0x1fU == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_hec7c4ca6__0[0U] = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_86);
        __Vtemp_hec7c4ca6__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_86 
                                            >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_251[0U] 
            = __Vtemp_hec7c4ca6__0[0U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[1U] 
            = __Vtemp_hec7c4ca6__0[1U];
        vlSelf->Top__DOT__alu__DOT___result_T_251[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
            = (0x7fffffffU & 0U);
    } else {
        __Vtemp_hec7c4ca6__0[0U] = __Vtemp_h550c7a19__0[0U];
        if ((0x1eU == (IData)(vlSelf->io_ctrl_OP))) {
            __Vtemp_hec7c4ca6__0[1U] = (IData)((vlSelf->Top__DOT__alu__DOT___result_T_86 
                                                >> 0x20U));
            vlSelf->Top__DOT__alu__DOT___result_T_251[0U] 
                = __Vtemp_hec7c4ca6__0[0U];
            vlSelf->Top__DOT__alu__DOT___result_T_251[1U] 
                = __Vtemp_hec7c4ca6__0[1U];
            vlSelf->Top__DOT__alu__DOT___result_T_251[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
                = (0x7fffffffU & 0U);
        } else {
            __Vtemp_hec7c4ca6__0[1U] = __Vtemp_he2f28df2__0[1U];
            vlSelf->Top__DOT__alu__DOT___result_T_251[0U] 
                = __Vtemp_hec7c4ca6__0[0U];
            vlSelf->Top__DOT__alu__DOT___result_T_251[1U] 
                = __Vtemp_hec7c4ca6__0[1U];
            if ((0x1dU == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_251[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
                    = (0x7fffffffU & 0U);
            } else if ((0x1cU == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_251[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
                    = (0x7fffffffU & 0U);
            } else if ((0x1bU == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_251[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
                    = (0x7fffffffU & 0U);
            } else if ((0x1aU == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_251[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
                    = (0x7fffffffU & 0U);
            } else if ((0x19U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_251[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
                    = (0x7fffffffU & 0U);
            } else if ((0x18U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_251[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
                    = (0x7fffffffU & 0U);
            } else if ((0x17U == (IData)(vlSelf->io_ctrl_OP))) {
                vlSelf->Top__DOT__alu__DOT___result_T_251[2U] = 0U;
                vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
                    = (0x7fffffffU & 0U);
            } else {
                vlSelf->Top__DOT__alu__DOT___result_T_251[2U] 
                    = vlSelf->Top__DOT__alu__DOT___result_T_223[2U];
                vlSelf->Top__DOT__alu__DOT___result_T_251[3U] 
                    = (0x7fffffffU & vlSelf->Top__DOT__alu__DOT___result_T_223[3U]);
            }
        }
    }
    if ((0x2dU == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_hffa7787a__0[0U] = (IData)((vlSelf->io_imm 
                                            | vlSelf->io_rs1));
        __Vtemp_hffa7787a__0[1U] = (IData)(((vlSelf->io_imm 
                                             | vlSelf->io_rs1) 
                                            >> 0x20U));
    } else if ((0x2cU == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_hffa7787a__0[0U] = (IData)((vlSelf->io_imm 
                                            ^ vlSelf->io_rs1));
        __Vtemp_hffa7787a__0[1U] = (IData)(((vlSelf->io_imm 
                                             ^ vlSelf->io_rs1) 
                                            >> 0x20U));
    } else if ((0x2bU == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_hffa7787a__0[0U] = (IData)((vlSelf->io_imm 
                                            & vlSelf->io_rs1));
        __Vtemp_hffa7787a__0[1U] = (IData)(((vlSelf->io_imm 
                                             & vlSelf->io_rs1) 
                                            >> 0x20U));
    } else if ((0x2aU == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_hffa7787a__0[0U] = (vlSelf->io_rs1 
                                    < vlSelf->io_imm);
        __Vtemp_hffa7787a__0[1U] = 0U;
    } else if ((0x29U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_hffa7787a__0[0U] = VL_LTS_IQQ(64, vlSelf->io_rs1, vlSelf->io_imm);
        __Vtemp_hffa7787a__0[1U] = 0U;
    } else if ((0x26U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_hffa7787a__0[0U] = (IData)((((QData)((IData)(
                                                             ((vlSelf->Top__DOT__alu__DOT___result_T_125 
                                                               >> 0x1fU)
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_125))));
        __Vtemp_hffa7787a__0[1U] = (IData)(((((QData)((IData)(
                                                              ((vlSelf->Top__DOT__alu__DOT___result_T_125 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_125))) 
                                            >> 0x20U));
    } else if ((0x25U == (IData)(vlSelf->io_ctrl_OP))) {
        __Vtemp_hffa7787a__0[0U] = (IData)((vlSelf->io_rs1 
                                            >> (0x3fU 
                                                & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U])));
        __Vtemp_hffa7787a__0[1U] = (IData)(((vlSelf->io_rs1 
                                             >> (0x3fU 
                                                 & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U])) 
                                            >> 0x20U));
    } else {
        __Vtemp_hffa7787a__0[0U] = vlSelf->Top__DOT__alu__DOT___result_T_251[0U];
        __Vtemp_hffa7787a__0[1U] = vlSelf->Top__DOT__alu__DOT___result_T_251[1U];
    }
    if ((0x3dU == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_273[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data);
        vlSelf->Top__DOT__alu__DOT___result_T_273[1U] 
            = (IData)((vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data 
                       >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_273[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_273[3U] = 0U;
    } else if ((0x3cU == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_273[0U] 
            = (IData)(vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data);
        vlSelf->Top__DOT__alu__DOT___result_T_273[1U] 
            = (IData)((vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data 
                       >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_273[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_273[3U] = 0U;
    } else if ((0x28U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_273[0U] 
            = (IData)((((QData)((IData)(((vlSelf->Top__DOT__alu__DOT___result_T_148 
                                          >> 0x1fU)
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_148))));
        vlSelf->Top__DOT__alu__DOT___result_T_273[1U] 
            = (IData)(((((QData)((IData)(((vlSelf->Top__DOT__alu__DOT___result_T_148 
                                           >> 0x1fU)
                                           ? 0xffffffffU
                                           : 0U))) 
                         << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__alu__DOT___result_T_148))) 
                       >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_273[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_273[3U] = 0U;
    } else if ((0x27U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->Top__DOT__alu__DOT___result_T_273[0U] 
            = (IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->io_rs1, 
                                     (0x3fU & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U])));
        vlSelf->Top__DOT__alu__DOT___result_T_273[1U] 
            = (IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->io_rs1, 
                                      (0x3fU & vlSelf->Top__DOT__decoder__DOT___io_imm_T_9[0U])) 
                       >> 0x20U));
        vlSelf->Top__DOT__alu__DOT___result_T_273[2U] = 0U;
        vlSelf->Top__DOT__alu__DOT___result_T_273[3U] = 0U;
    } else {
        vlSelf->Top__DOT__alu__DOT___result_T_273[0U] 
            = __Vtemp_hffa7787a__0[0U];
        vlSelf->Top__DOT__alu__DOT___result_T_273[1U] 
            = __Vtemp_hffa7787a__0[1U];
        if ((0x2dU == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_273[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_273[3U] = 0U;
        } else if ((0x2cU == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_273[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_273[3U] = 0U;
        } else if ((0x2bU == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_273[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_273[3U] = 0U;
        } else if ((0x2aU == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_273[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_273[3U] = 0U;
        } else if ((0x29U == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_273[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_273[3U] = 0U;
        } else if ((0x26U == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_273[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_273[3U] = 0U;
        } else if ((0x25U == (IData)(vlSelf->io_ctrl_OP))) {
            vlSelf->Top__DOT__alu__DOT___result_T_273[2U] = 0U;
            vlSelf->Top__DOT__alu__DOT___result_T_273[3U] = 0U;
        } else {
            vlSelf->Top__DOT__alu__DOT___result_T_273[2U] 
                = vlSelf->Top__DOT__alu__DOT___result_T_251[2U];
            vlSelf->Top__DOT__alu__DOT___result_T_273[3U] 
                = vlSelf->Top__DOT__alu__DOT___result_T_251[3U];
        }
    }
    if ((0x37U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->io_is_b = vlSelf->Top__DOT__alu__DOT___result_T_48;
        __Vtemp_h1897a620__0[0U] = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_163);
    } else if ((0x35U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->io_is_b = (vlSelf->io_rs1 >= vlSelf->io_rs2);
        __Vtemp_h1897a620__0[0U] = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_163);
    } else if ((0x34U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->io_is_b = VL_GTES_IQQ(64, vlSelf->io_rs1, vlSelf->io_rs2);
        __Vtemp_h1897a620__0[0U] = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_163);
    } else if ((0x36U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->io_is_b = vlSelf->Top__DOT__alu__DOT___result_T_46;
        __Vtemp_h1897a620__0[0U] = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_163);
    } else if ((0x33U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->io_is_b = (vlSelf->io_rs1 != vlSelf->io_rs2);
        __Vtemp_h1897a620__0[0U] = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_163);
    } else if ((0x32U == (IData)(vlSelf->io_ctrl_OP))) {
        vlSelf->io_is_b = (vlSelf->io_rs1 == vlSelf->io_rs2);
        __Vtemp_h1897a620__0[0U] = (IData)(vlSelf->Top__DOT__alu__DOT___result_T_163);
    } else {
        vlSelf->io_is_b = 0U;
        __Vtemp_h1897a620__0[0U] = ((0x2fU == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_86)
                                     : ((0x30U == (IData)(vlSelf->io_ctrl_OP))
                                         ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_86)
                                         : ((0x31U 
                                             == (IData)(vlSelf->io_ctrl_OP))
                                             ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_86)
                                             : ((0x2eU 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_86)
                                                 : 
                                                ((0x3eU 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? (IData)(vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data)
                                                  : 
                                                 vlSelf->Top__DOT__alu__DOT___result_T_273[0U])))));
    }
    __Vtemp_hf5413c9e__0[1U] = ((0x36U == (IData)(vlSelf->io_ctrl_OP))
                                 ? (IData)((vlSelf->Top__DOT__alu__DOT___result_T_163 
                                            >> 0x20U))
                                 : ((0x33U == (IData)(vlSelf->io_ctrl_OP))
                                     ? (IData)((vlSelf->Top__DOT__alu__DOT___result_T_163 
                                                >> 0x20U))
                                     : ((0x32U == (IData)(vlSelf->io_ctrl_OP))
                                         ? (IData)(
                                                   (vlSelf->Top__DOT__alu__DOT___result_T_163 
                                                    >> 0x20U))
                                         : ((0x2fU 
                                             == (IData)(vlSelf->io_ctrl_OP))
                                             ? (IData)(
                                                       (vlSelf->Top__DOT__alu__DOT___result_T_86 
                                                        >> 0x20U))
                                             : ((0x30U 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? (IData)(
                                                           (vlSelf->Top__DOT__alu__DOT___result_T_86 
                                                            >> 0x20U))
                                                 : 
                                                ((0x31U 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? (IData)(
                                                            (vlSelf->Top__DOT__alu__DOT___result_T_86 
                                                             >> 0x20U))
                                                  : 
                                                 ((0x2eU 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? (IData)(
                                                             (vlSelf->Top__DOT__alu__DOT___result_T_86 
                                                              >> 0x20U))
                                                   : 
                                                  ((0x3eU 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? (IData)(
                                                              (vlSelf->Top__DOT__alu__DOT__CSR_result_MPORT_data 
                                                               >> 0x20U))
                                                    : 
                                                   vlSelf->Top__DOT__alu__DOT___result_T_273[1U]))))))));
    vlSelf->io_resultALU = (((QData)((IData)(((0x3aU 
                                               == (IData)(vlSelf->io_ctrl_OP))
                                               ? (IData)(
                                                         ((4ULL 
                                                           + vlSelf->Top__DOT__PC__DOT__init) 
                                                          >> 0x20U))
                                               : ((0x39U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? (IData)(
                                                             (vlSelf->Top__DOT__alu__DOT___result_T_163 
                                                              >> 0x20U))
                                                   : 
                                                  ((0x38U 
                                                    == (IData)(vlSelf->io_ctrl_OP))
                                                    ? (IData)(
                                                              (vlSelf->io_imm 
                                                               >> 0x20U))
                                                    : 
                                                   ((0x37U 
                                                     == (IData)(vlSelf->io_ctrl_OP))
                                                     ? (IData)(
                                                               (vlSelf->Top__DOT__alu__DOT___result_T_163 
                                                                >> 0x20U))
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->io_ctrl_OP))
                                                      ? (IData)(
                                                                (vlSelf->Top__DOT__alu__DOT___result_T_163 
                                                                 >> 0x20U))
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->io_ctrl_OP))
                                                       ? (IData)(
                                                                 (vlSelf->Top__DOT__alu__DOT___result_T_163 
                                                                  >> 0x20U))
                                                       : 
                                                      __Vtemp_hf5413c9e__0[1U])))))))) 
                             << 0x20U) | (QData)((IData)(
                                                         ((0x3aU 
                                                           == (IData)(vlSelf->io_ctrl_OP))
                                                           ? (IData)(
                                                                     (4ULL 
                                                                      + vlSelf->Top__DOT__PC__DOT__init))
                                                           : 
                                                          ((0x39U 
                                                            == (IData)(vlSelf->io_ctrl_OP))
                                                            ? (IData)(vlSelf->Top__DOT__alu__DOT___result_T_163)
                                                            : 
                                                           ((0x38U 
                                                             == (IData)(vlSelf->io_ctrl_OP))
                                                             ? (IData)(vlSelf->io_imm)
                                                             : 
                                                            __Vtemp_h1897a620__0[0U]))))));
    VTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->io_resultALU, vlSelf->__Vtask_pmem_read__6__rdata);
    vlSelf->Top__DOT__lsu__DOT__data_mem_rdata = vlSelf->__Vtask_pmem_read__6__rdata;
    if (vlSelf->io_ctrl_MemWen) {
        VTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->io_resultALU, vlSelf->io_rs2, (IData)(vlSelf->io_ctrl_wmask));
    }
    vlSelf->io_rdata = vlSelf->Top__DOT__lsu__DOT__data_mem_rdata;
    vlSelf->io_fmemwdata = ((IData)(vlSelf->io_ctrl_MemLoad)
                             ? ((0x1cU == (IData)(vlSelf->io_ctrl_OP))
                                 ? ((((1U & (IData)(
                                                    (vlSelf->Top__DOT__lsu__DOT__data_mem_rdata 
                                                     >> 7U)))
                                       ? 0xffffffffffffffULL
                                       : 0ULL) << 8U) 
                                    | (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(vlSelf->Top__DOT__lsu__DOT__data_mem_rdata)))))
                                 : ((0x1dU == (IData)(vlSelf->io_ctrl_OP))
                                     ? (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(vlSelf->Top__DOT__lsu__DOT__data_mem_rdata))))
                                     : ((0x1eU == (IData)(vlSelf->io_ctrl_OP))
                                         ? ((((1U & (IData)(
                                                            (vlSelf->Top__DOT__lsu__DOT__data_mem_rdata 
                                                             >> 0xfU)))
                                               ? 0xffffffffffffULL
                                               : 0ULL) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->Top__DOT__lsu__DOT__data_mem_rdata)))))
                                         : ((0x1fU 
                                             == (IData)(vlSelf->io_ctrl_OP))
                                             ? (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->Top__DOT__lsu__DOT__data_mem_rdata))))
                                             : ((0x20U 
                                                 == (IData)(vlSelf->io_ctrl_OP))
                                                 ? vlSelf->Top__DOT__lsu__DOT__data_mem_rdata
                                                 : 
                                                ((0x22U 
                                                  == (IData)(vlSelf->io_ctrl_OP))
                                                  ? (QData)((IData)(vlSelf->Top__DOT__lsu__DOT__data_mem_rdata))
                                                  : 
                                                 ((0x21U 
                                                   == (IData)(vlSelf->io_ctrl_OP))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->Top__DOT__lsu__DOT__data_mem_rdata 
                                                                                >> 0x1fU)))
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->Top__DOT__lsu__DOT__data_mem_rdata)))
                                                   : vlSelf->io_resultALU)))))))
                             : vlSelf->io_resultALU);
    vlSelf->Top__DOT__registers__DOT__registers_MPORT_data 
        = (((IData)(vlSelf->io_ctrl_RegWen) & (0U != (IData)(vlSelf->io_rd)))
            ? vlSelf->io_fmemwdata : vlSelf->Top__DOT__registers__DOT__registers
           [vlSelf->io_rd]);
}
