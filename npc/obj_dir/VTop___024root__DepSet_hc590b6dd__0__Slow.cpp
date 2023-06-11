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

void VTop___024unit____Vdpiimwrap_skip_ref_TOP____024unit(IData/*31:0*/ eval);
void VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit(QData/*63:0*/ inst);
void VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);
void VTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 36> &a);
extern const VlUnpacked<CData/*2:0*/, 32> VTop__ConstPool__TABLE_h66bafa5e_0;
extern const VlUnpacked<CData/*2:0*/, 64> VTop__ConstPool__TABLE_hdc3b7d4b_0;
void VTop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ flag);

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h7460ee34__0;
    VlWide<3>/*95:0*/ __Vtemp_hd76675a3__0;
    VlWide<4>/*127:0*/ __Vtemp_he1dcc205__0;
    VlWide<4>/*127:0*/ __Vtemp_h893450aa__0;
    VlWide<4>/*127:0*/ __Vtemp_hfed596f1__0;
    VlWide<3>/*95:0*/ __Vtemp_h661cbd0d__1;
    VlWide<3>/*95:0*/ __Vtemp_hd76675a3__1;
    VlWide<3>/*95:0*/ __Vtemp_ha3f2c6f0__0;
    VlWide<4>/*127:0*/ __Vtemp_h8a7bc390__0;
    VlWide<4>/*127:0*/ __Vtemp_h7152e588__0;
    VlWide<4>/*127:0*/ __Vtemp_h40c6816f__0;
    VlWide<3>/*95:0*/ __Vtemp_h282ce0ed__0;
    VlWide<3>/*95:0*/ __Vtemp_hd9ba8226__0;
    VlWide<3>/*95:0*/ __Vtemp_h402a479a__0;
    VlWide<4>/*127:0*/ __Vtemp_he1dcc205__1;
    VlWide<4>/*127:0*/ __Vtemp_h59f7e8df__0;
    VlWide<4>/*127:0*/ __Vtemp_h3ad3f24b__0;
    VlWide<4>/*127:0*/ __Vtemp_h672e99e6__0;
    VlWide<4>/*127:0*/ __Vtemp_h191046f4__0;
    VlWide<4>/*127:0*/ __Vtemp_h43b41592__0;
    // Body
    VTop___024unit____Vdpiimwrap_skip_ref_TOP____024unit(0U);
    VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit(0ULL);
    VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(0ULL);
    VTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Top__DOT__dpi__DOT__rf);
    vlSelf->io_fs_pc = (IData)(vlSelf->Top__DOT__ifu__DOT__fs_pc);
    vlSelf->io_in_WB = vlSelf->Top__DOT__wbu__DOT__ws_valid;
    vlSelf->io_wb_pc = vlSelf->Top__DOT__wbu__DOT__mw_bus_r_mem_pc;
    vlSelf->io_ds_pc = vlSelf->Top__DOT__idu__DOT__fd_bus_r_pc;
    vlSelf->io_ld_type = vlSelf->Top__DOT__mem__DOT__em_bus_r_ld_type;
    vlSelf->Top__DOT__exu__DOT__div_io_div_signed = 
        ((6U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)) 
         | (0x15U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)));
    vlSelf->Top__DOT__exu__DOT__div_1_io_div_signed 
        = ((8U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)) 
           | (0x17U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)));
    vlSelf->Top__DOT__exu__DOT__div__DOT___delay_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__delay)));
    vlSelf->Top__DOT__exu__DOT__div__DOT___clear_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__clear)));
    vlSelf->Top__DOT__exu__DOT__div__DOT___cnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt)));
    vlSelf->Top__DOT__exu__DOT__div_1__DOT___delay_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__delay)));
    vlSelf->Top__DOT__exu__DOT__div_1__DOT___clear_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__clear)));
    vlSelf->Top__DOT__exu__DOT__div_1__DOT___cnt_T_1 
        = (0xffU & ((IData)(1U) + (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt)));
    vlSelf->Top__DOT__axi__DOT___writing_data_sram_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->Top__DOT__axi__DOT__writing_data_sram)));
    vlSelf->io_wb_inst = vlSelf->Top__DOT__wbu__DOT__mw_bus_r_inst;
    vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_1 = 
        ((4U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)) 
         | (IData)(vlSelf->Top__DOT__exu__DOT__mul__DOT__start));
    vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_1 
        = ((5U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)) 
           | (IData)(vlSelf->Top__DOT__exu__DOT__mul_1__DOT__start));
    vlSelf->Top__DOT__axi__DOT___GEN_14 = ((3U == (IData)(vlSelf->Top__DOT__axi__DOT__wstate))
                                            ? ((4U 
                                                == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))
                                                ? 0U
                                                : (IData)(vlSelf->Top__DOT__axi__DOT__wstate))
                                            : (IData)(vlSelf->Top__DOT__axi__DOT__wstate));
    vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_data 
        = (((IData)(vlSelf->Top__DOT__wbu__DOT__mw_bus_r_csr_wen) 
            & (0U != (IData)(vlSelf->Top__DOT__wbu__DOT__mw_bus_r_csr_waddr1)))
            ? vlSelf->Top__DOT__wbu__DOT__mw_bus_r_csr_wdata
            : ((4U >= (IData)(vlSelf->Top__DOT__wbu__DOT__mw_bus_r_csr_waddr1))
                ? vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
               [vlSelf->Top__DOT__wbu__DOT__mw_bus_r_csr_waddr1]
                : 0ULL));
    vlSelf->__Vtableidx1 = (((2U == (IData)(vlSelf->Top__DOT__axi__DOT__rstate)) 
                             << 4U) | (((1U == (IData)(vlSelf->Top__DOT__axi__DOT__rstate)) 
                                        << 3U) | (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state)));
    vlSelf->Top__DOT__axi_mem__DOT__read_next_state 
        = VTop__ConstPool__TABLE_h66bafa5e_0[vlSelf->__Vtableidx1];
    vlSelf->__Vtableidx2 = (((1U == (IData)(vlSelf->Top__DOT__axi__DOT__wstate)) 
                             << 5U) | (((2U == (IData)(vlSelf->Top__DOT__axi__DOT__wstate)) 
                                        << 4U) | ((
                                                   (3U 
                                                    == (IData)(vlSelf->Top__DOT__axi__DOT__wstate)) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))));
    vlSelf->Top__DOT__axi_mem__DOT__write_next_state 
        = VTop__ConstPool__TABLE_hdc3b7d4b_0[vlSelf->__Vtableidx2];
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_242 
        = ((0x6033U == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
           | ((0x2006033U == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
              | ((0x2007033U == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                 | ((0x200603bU == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                    | ((0x200703bU == (0xfe00707fU 
                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                       | ((0x13U == (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                          | ((0x1bU == (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                             | ((0x67U == (0x707fU 
                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                | ((3U == (0x707fU 
                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                   | ((0x4003U == (0x707fU 
                                                   & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                      | ((0x1003U == 
                                          (0x707fU 
                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                         | ((0x5003U 
                                             == (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                            | ((0x2003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                               | ((0x6003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                  | ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                     | ((0x1013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                        | ((0x101bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                           | ((0x5013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                              | ((0x501bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                 | ((0x2013U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                    | ((0x3013U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                       | ((0x7013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                          | ((0x4013U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                             | ((0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x40005013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x4000501bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x73U 
                                                                                == vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst) 
                                                                                | ((0x3023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                & ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                & ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                & ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_421 
        = ((0x101bU != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
           & ((0x5013U != (0xfc00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
              & ((0x501bU != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                 & ((0x2013U != (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                    & ((0x3013U != (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                       & ((0x7013U != (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                          & ((0x4013U != (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                             & ((0x6013U != (0x707fU 
                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                & ((0x40005013U != 
                                    (0xfc00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                   & ((0x4000501bU 
                                       != (0xfe00707fU 
                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                      & ((0x1073U != 
                                          (0x707fU 
                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                         & ((0x2073U 
                                             != (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                            & ((0x3073U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                               & ((0x73U 
                                                   != vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst) 
                                                  & ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                     | ((0x23U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                        | ((0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                           | (0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)))))))))))))))))));
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_505 
        = ((0x503bU != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
           & ((0x4033U != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
              & ((0x7033U != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                 & ((0x6033U != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                    & ((0x2006033U != (0xfe00707fU 
                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                       & ((0x2007033U != (0xfe00707fU 
                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                          & ((0x200603bU != (0xfe00707fU 
                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                             & ((0x200703bU != (0xfe00707fU 
                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                & ((0x13U != (0x707fU 
                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                   & ((0x1bU != (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                      & ((0x67U != 
                                          (0x707fU 
                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                         & ((3U == 
                                             (0x707fU 
                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                            | ((0x4003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                               | ((0x1003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                  | ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                     | ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                        | ((0x6003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                           | (0x3003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)))))))))))))))))));
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_555 
        = ((0x2003U != (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
           & ((0x6003U != (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
              & ((0x3003U != (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                 & ((0x1013U != (0xfc00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                    & ((0x101bU != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                       & ((0x5013U != (0xfc00707fU 
                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                          & ((0x501bU != (0xfe00707fU 
                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                             & ((0x2013U != (0x707fU 
                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                & ((0x3013U != (0x707fU 
                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                   & ((0x7013U != (0x707fU 
                                                   & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                      & ((0x4013U != 
                                          (0x707fU 
                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                         & ((0x6013U 
                                             != (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                            & ((0x40005013U 
                                                != 
                                                (0xfc00707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                               & ((0x4000501bU 
                                                   != 
                                                   (0xfe00707fU 
                                                    & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                  & ((0x1073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                     | ((0x2073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                        | ((0x3073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                           | (0x73U 
                                                              == vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))))))))))))))))));
    if (vlSelf->reset) {
        vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[0U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[1U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[3U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[4U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[0U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[1U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[2U] = 0U;
    } else {
        if (((~ (IData)(vlSelf->Top__DOT__exu__DOT__mul__DOT__start)) 
             & (4U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)))) {
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[0U] 
                = ((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                   << 1U);
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[1U] 
                = (((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                    >> 0x1fU) | ((IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[2U] 
                = ((2U & ((IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                   >> 0x3fU)) << 1U)) 
                   | ((IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                               >> 0x20U)) >> 0x1fU));
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[3U] = 0U;
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[4U] = 0U;
        } else {
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[0U] 
                = (vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[0U] 
                   << 2U);
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[1U] 
                = ((vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[0U] 
                    >> 0x1eU) | (vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[1U] 
                                 << 2U));
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[2U] 
                = ((vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[1U] 
                    >> 0x1eU) | (vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[2U] 
                                 << 2U));
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[3U] 
                = ((vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[2U] 
                    >> 0x1eU) | (vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[3U] 
                                 << 2U));
            vlSelf->Top__DOT__exu__DOT__mul__DOT___GEN_6[4U] 
                = ((vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[3U] 
                    >> 0x1eU) | (vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplicand_reg[4U] 
                                 << 2U));
        }
        if (((~ (IData)(vlSelf->Top__DOT__exu__DOT__mul_1__DOT__start)) 
             & (5U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)))) {
            vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[0U] 
                = (IData)(((QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1)) 
                           << 1U));
            vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[1U] 
                = (IData)((((QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1)) 
                            << 1U) >> 0x20U));
            vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[2U] = 0U;
        } else {
            vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[0U] 
                = (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                   << 2U);
            vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[1U] 
                = ((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[0U] 
                    >> 0x1eU) | (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                                 << 2U));
            vlSelf->Top__DOT__exu__DOT__mul_1__DOT___GEN_7[2U] 
                = ((vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[1U] 
                    >> 0x1eU) | (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplicand_reg[2U] 
                                 << 2U));
        }
    }
    vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_3_addr 
        = ((IData)(vlSelf->Top__DOT__wbu__DOT__mw_bus_r_eval)
            ? (IData)(vlSelf->Top__DOT__wbu__DOT__mw_bus_r_csr_waddr2)
            : 0U);
    vlSelf->Top__DOT__axi__DOT___T_16 = (IData)(((2U 
                                                  == (IData)(vlSelf->Top__DOT__axi__DOT__rstate)) 
                                                 & (3U 
                                                    == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))));
    vlSelf->Top__DOT__axi__DOT____VdfgTmp_h0ac213f2__0 
        = ((0U == (IData)(vlSelf->Top__DOT__axi__DOT__wstate)) 
           & (0U == (IData)(vlSelf->Top__DOT__axi__DOT__rstate)));
    vlSelf->Top__DOT__ifu_io_inst_sram_addr_ok = ((2U 
                                                   == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state)) 
                                                  & (IData)(vlSelf->Top__DOT__axi__DOT__reading_inst_sram));
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0U] = 
        vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[1U] = 
        vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [1U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[2U] = 
        vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [2U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[3U] = 
        vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [3U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[4U] = 
        vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [4U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[5U] = 
        vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [5U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[6U] = 
        vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [6U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[7U] = 
        vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [7U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[8U] = 
        vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [8U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[9U] = 
        vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [9U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0xaU] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0xaU];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0xbU] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0xbU];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0xcU] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0xcU];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0xdU] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0xdU];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0xeU] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0xeU];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0xfU] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0xfU];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x10U] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x10U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x11U] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x11U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x12U] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x12U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x13U] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x13U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x14U] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x14U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x15U] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x15U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x16U] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x16U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x17U] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x17U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x18U] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x18U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x19U] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x19U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x1aU] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x1aU];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x1bU] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x1bU];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x1cU] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x1cU];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x1dU] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x1dU];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x1eU] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x1eU];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x1fU] 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0x1fU];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x20U] 
        = vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
        [0U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x21U] 
        = vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
        [1U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x22U] 
        = vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
        [2U];
    vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf[0x23U] 
        = vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
        [3U];
    vlSelf->Top__DOT__idu__DOT___J_T_4 = ((((vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                             >> 0x1fU)
                                             ? 0x7fffffffffffffffULL
                                             : 0ULL) 
                                           << 1U) | (QData)((IData)(
                                                                    (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                                     >> 0x1fU))));
    vlSelf->Top__DOT__ifu_io_inst_sram_data_ok = ((3U 
                                                   == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state)) 
                                                  & (IData)(vlSelf->Top__DOT__axi__DOT__reading_inst_sram));
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_279 
        = ((0x3073U == (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
            ? 0U : ((0x73U == vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)
                     ? 0U : ((0x3023U == (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                              ? 1U : ((0x23U == (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                       ? 1U : ((0x1023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                ? 1U
                                                : (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                     ? 2U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                      ? 2U
                                                      : 
                                                     ((0x4063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                        ? 2U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                         ? 2U
                                                         : 
                                                        ((0x6063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                          ? 2U
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                           ? 3U
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                            ? 3U
                                                            : 
                                                           ((0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                             ? 4U
                                                             : 0U)))))))))))))));
    vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2 
        = ((vlSelf->Top__DOT__exu__DOT__div_1__DOT__A 
            >> 0x1fU) >= (QData)((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__B)));
    vlSelf->Top__DOT__idu__DOT__I = ((((vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                        >> 0x1fU) ? 0xfffffffffffffULL
                                        : 0ULL) << 0xcU) 
                                     | (QData)((IData)(
                                                       (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                        >> 0x14U))));
    vlSelf->__VdfgTmp_h68861839__0 = ((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_is_ld) 
                                      & (IData)(vlSelf->Top__DOT__idu__DOT__ds_valid));
    vlSelf->io_mem_result = ((6U == (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_ld_type))
                              ? (QData)((IData)(vlSelf->Top__DOT__axi_mem_rdata))
                              : ((5U == (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_ld_type))
                                  ? (QData)((IData)(
                                                    (0xffffU 
                                                     & (IData)(vlSelf->Top__DOT__axi_mem_rdata))))
                                  : ((4U == (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_ld_type))
                                      ? (QData)((IData)(
                                                        (0xffU 
                                                         & (IData)(vlSelf->Top__DOT__axi_mem_rdata))))
                                      : ((3U == (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_ld_type))
                                          ? vlSelf->Top__DOT__axi_mem_rdata
                                          : ((2U == (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_ld_type))
                                              ? (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->Top__DOT__axi_mem_rdata 
                                                                               >> 0x1fU)))
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->Top__DOT__axi_mem_rdata)))
                                              : ((1U 
                                                  == (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_ld_type))
                                                  ? 
                                                 ((((1U 
                                                     & (IData)(
                                                               (vlSelf->Top__DOT__axi_mem_rdata 
                                                                >> 0xfU)))
                                                     ? 0xffffffffffffULL
                                                     : 0ULL) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->Top__DOT__axi_mem_rdata)))))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_ld_type))
                                                   ? 
                                                  ((((1U 
                                                      & (IData)(
                                                                (vlSelf->Top__DOT__axi_mem_rdata 
                                                                 >> 7U)))
                                                      ? 0xffffffffffffffULL
                                                      : 0ULL) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->Top__DOT__axi_mem_rdata)))))
                                                   : vlSelf->Top__DOT__axi_mem_rdata)))))));
    vlSelf->Top__DOT__idu__DOT__Registers_io_wen = 
        ((IData)(vlSelf->Top__DOT__wbu__DOT__mw_bus_r_gr_we) 
         & (IData)(vlSelf->Top__DOT__wbu__DOT__ws_valid));
    vlSelf->Top__DOT__exu__DOT___result_T_153 = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1), 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_imm)));
    vlSelf->Top__DOT__exu__DOT___result_T_130 = ((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                                                 >> 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_imm)));
    vlSelf->Top__DOT__exu__DOT___result_T_94 = ((QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1)) 
                                                + vlSelf->Top__DOT__exu__DOT__de_bus_r_imm);
    vlSelf->Top__DOT__exu__DOT__div_io_remainder = 
        ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__remainder_sign)
          ? (1ULL + (~ (((QData)((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__A[3U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->Top__DOT__exu__DOT__div__DOT__A[2U])))))
          : (((QData)((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__A[3U])) 
              << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__A[2U]))));
    vlSelf->Top__DOT__exu__DOT__div_1_io_remainder 
        = ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__remainder_sign)
            ? ((IData)(1U) + (~ (IData)((vlSelf->Top__DOT__exu__DOT__div_1__DOT__A 
                                         >> 0x20U))))
            : (IData)((vlSelf->Top__DOT__exu__DOT__div_1__DOT__A 
                       >> 0x20U)));
    vlSelf->Top__DOT__exu__DOT__mul_1_io_out_valid 
        = ((0ULL == vlSelf->Top__DOT__exu__DOT__mul_1__DOT__multiplier_reg) 
           & (IData)(vlSelf->Top__DOT__exu__DOT__mul_1__DOT__start));
    vlSelf->Top__DOT__exu__DOT__mul_io_out_valid = 
        ((0U == ((vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplier_reg[0U] 
                  | vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplier_reg[1U]) 
                 | vlSelf->Top__DOT__exu__DOT__mul__DOT__multiplier_reg[2U])) 
         & (IData)(vlSelf->Top__DOT__exu__DOT__mul__DOT__start));
    vlSelf->Top__DOT__exu__DOT___result_T_61 = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1), 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2)));
    vlSelf->Top__DOT__exu__DOT___result_T_71 = ((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                                                >> 
                                                (0x1fU 
                                                 & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2)));
    vlSelf->Top__DOT__exu__DOT__is_div_64 = ((6U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)) 
                                             | (7U 
                                                == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)));
    vlSelf->Top__DOT__exu__DOT__is_div_32 = ((8U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)) 
                                             | (9U 
                                                == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)));
    vlSelf->Top__DOT__exu__DOT__is_rem_64 = ((0x15U 
                                              == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)) 
                                             | (0x16U 
                                                == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)));
    vlSelf->Top__DOT__exu__DOT__is_rem_32 = ((0x17U 
                                              == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)) 
                                             | (0x18U 
                                                == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)));
    vlSelf->Top__DOT__idu__DOT___es_rawblock_T_1 = 
        ((0x1fU & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                   >> 0x14U)) == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_dest));
    vlSelf->Top__DOT__idu__DOT___ms_rawblock_T_1 = 
        ((0x1fU & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                   >> 0x14U)) == (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_dest));
    vlSelf->Top__DOT__exu__DOT___result_T_5 = ((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                                               + (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2));
    vlSelf->Top__DOT__exu__DOT___result_T_16 = ((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                                                - (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2));
    vlSelf->Top__DOT__exu__DOT__div_io_quotient = ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__quotient_sign)
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    (~ vlSelf->Top__DOT__exu__DOT__div__DOT__S))
                                                    : vlSelf->Top__DOT__exu__DOT__div__DOT__S);
    vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result_sign 
        = (1U & ((IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2 
                          >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                                >> 0x1fU))));
    vlSelf->Top__DOT__exu__DOT__div_1_io_quotient = 
        ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__quotient_sign)
          ? ((IData)(1U) + (~ vlSelf->Top__DOT__exu__DOT__div_1__DOT__S))
          : vlSelf->Top__DOT__exu__DOT__div_1__DOT__S);
    __Vtemp_h7460ee34__0[0U] = ((vlSelf->Top__DOT__exu__DOT__div__DOT__A[2U] 
                                 << 1U) | (vlSelf->Top__DOT__exu__DOT__div__DOT__A[1U] 
                                           >> 0x1fU));
    __Vtemp_h7460ee34__0[1U] = ((vlSelf->Top__DOT__exu__DOT__div__DOT__A[3U] 
                                 << 1U) | (vlSelf->Top__DOT__exu__DOT__div__DOT__A[2U] 
                                           >> 0x1fU));
    __Vtemp_h7460ee34__0[2U] = (vlSelf->Top__DOT__exu__DOT__div__DOT__A[3U] 
                                >> 0x1fU);
    __Vtemp_hd76675a3__0[0U] = (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__B);
    __Vtemp_hd76675a3__0[1U] = (IData)((vlSelf->Top__DOT__exu__DOT__div__DOT__B 
                                        >> 0x20U));
    __Vtemp_hd76675a3__0[2U] = 0U;
    vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2 
        = VL_GTE_W(3, __Vtemp_h7460ee34__0, __Vtemp_hd76675a3__0);
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_147 
        = ((0x3023U == (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
            ? 0x2eU : ((0x23U == (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                        ? 0x2fU : ((0x1023U == (0x707fU 
                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                    ? 0x30U : ((0x2023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                ? 0x31U
                                                : (
                                                   (0x63U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                    ? 0x32U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                     ? 0x33U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                      ? 0x36U
                                                      : 
                                                     ((0x5063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                       ? 0x34U
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                        ? 0x35U
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                         ? 0x37U
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                          ? 0x38U
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                           ? 0x39U
                                                           : 
                                                          ((0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                            ? 0x3aU
                                                            : 
                                                           ((0x30200073U 
                                                             == vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)
                                                             ? 0x40U
                                                             : 
                                                            ((0x100073U 
                                                              == vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)
                                                              ? 0x3bU
                                                              : 0xffU)))))))))))))));
    vlSelf->Top__DOT__exu__DOT__div_1_io_out_valid 
        = ((0x20U == (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt)) 
           & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__start));
    vlSelf->Top__DOT__mem_io_data_sram_data_ok = ((
                                                   (3U 
                                                    == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state)) 
                                                   & (IData)(vlSelf->Top__DOT__axi__DOT__reading_data_sram)) 
                                                  | (3U 
                                                     == (IData)(vlSelf->Top__DOT__axi__DOT__wstate)));
    vlSelf->Top__DOT__mem__DOT___ms_ready_go_T = ((IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_MemWen) 
                                                  | (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_res_from_mem));
    vlSelf->Top__DOT__exu__DOT___result_T_91 = (vlSelf->Top__DOT__exu__DOT__de_bus_r_imm 
                                                + vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1);
    vlSelf->Top__DOT__exu__DOT__div_io_out_valid = 
        ((0x40U == (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt)) 
         & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__start));
    vlSelf->Top__DOT__idu_io_de_bus_gr_we = ((0x33U 
                                              == (0xfe00707fU 
                                                  & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                             | ((0x3bU 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                | ((0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                   | ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                      | ((0x2000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                         | ((0x200003bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                            | ((0x2004033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                               | ((0x2005033U 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                  | ((0x200403bU 
                                                                      == 
                                                                      (0xfe00707fU 
                                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                     | ((0x200503bU 
                                                                         == 
                                                                         (0xfe00707fU 
                                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                        | ((0x1033U 
                                                                            == 
                                                                            (0xfe00707fU 
                                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                           | ((0x2033U 
                                                                               == 
                                                                               (0xfe00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                              | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x103bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x4000503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                                                | (IData)(vlSelf->Top__DOT__idu__DOT___crtlsignals_T_242)))))))))))))))))))));
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_438 
        = ((0x7033U != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
           & ((0x6033U != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
              & ((0x2006033U != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                 & ((0x2007033U != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                    & ((0x200603bU != (0xfe00707fU 
                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                       & ((0x200703bU != (0xfe00707fU 
                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                          & ((0x13U != (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                             & ((0x1bU != (0x707fU 
                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                & ((0x67U != (0x707fU 
                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                   & ((3U != (0x707fU 
                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                      & ((0x4003U != 
                                          (0x707fU 
                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                         & ((0x1003U 
                                             != (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                            & ((0x5003U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                               & ((0x2003U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                  & ((0x6003U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                     & ((0x3003U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                        & ((0x1013U 
                                                            != 
                                                            (0xfc00707fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                           & (IData)(vlSelf->Top__DOT__idu__DOT___crtlsignals_T_421))))))))))))))))));
    vlSelf->Top__DOT__idu_io_de_bus_res_from_mem = 
        ((0x33U != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
         & ((0x3bU != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
            & ((0x40000033U != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
               & ((0x4000003bU != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                  & ((0x2000033U != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                     & ((0x200003bU != (0xfe00707fU 
                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                        & ((0x2004033U != (0xfe00707fU 
                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                           & ((0x2005033U != (0xfe00707fU 
                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                              & ((0x200403bU != (0xfe00707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                 & ((0x200503bU != 
                                     (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                    & ((0x1033U != 
                                        (0xfe00707fU 
                                         & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                       & ((0x2033U 
                                           != (0xfe00707fU 
                                               & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                          & ((0x3033U 
                                              != (0xfe00707fU 
                                                  & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                             & ((0x103bU 
                                                 != 
                                                 (0xfe00707fU 
                                                  & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                & ((0x40005033U 
                                                    != 
                                                    (0xfe00707fU 
                                                     & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                   & ((0x4000503bU 
                                                       != 
                                                       (0xfe00707fU 
                                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                      & ((0x5033U 
                                                          != 
                                                          (0xfe00707fU 
                                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                         & (IData)(vlSelf->Top__DOT__idu__DOT___crtlsignals_T_505))))))))))))))))));
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_572 
        = ((0x4000503bU != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
           & ((0x5033U != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
              & ((0x503bU != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                 & ((0x4033U != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                    & ((0x7033U != (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                       & ((0x6033U != (0xfe00707fU 
                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                          & ((0x2006033U != (0xfe00707fU 
                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                             & ((0x2007033U != (0xfe00707fU 
                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                & ((0x200603bU != (0xfe00707fU 
                                                   & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                   & ((0x200703bU != 
                                       (0xfe00707fU 
                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                      & ((0x13U != 
                                          (0x707fU 
                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                         & ((0x1bU 
                                             != (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                            & ((0x67U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                               & ((3U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                  & ((0x4003U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                     & ((0x1003U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                        & ((0x5003U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
                                                           & (IData)(vlSelf->Top__DOT__idu__DOT___crtlsignals_T_555))))))))))))))))));
    vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_2_data 
        = (((IData)(vlSelf->Top__DOT__wbu__DOT__mw_bus_r_csr_wen) 
            & (0U != (IData)(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_3_addr)))
            ? (QData)((IData)(vlSelf->Top__DOT__wbu__DOT__mw_bus_r_mem_pc))
            : ((4U >= (IData)(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_3_addr))
                ? vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
               [vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_3_addr]
                : 0ULL));
    vlSelf->Top__DOT__ifu__DOT__fs_ready_go = ((IData)(vlSelf->Top__DOT__ifu__DOT__inst_valid) 
                                               | (IData)(vlSelf->Top__DOT__ifu_io_inst_sram_data_ok));
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_294 
        = ((0x6003U == (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
            ? 0U : ((0x3003U == (0x707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                     ? 0U : ((0x1013U == (0xfc00707fU 
                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                              ? 0U : ((0x101bU == (0xfe00707fU 
                                                   & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                       ? 0U : ((0x5013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                ? 0U
                                                : (
                                                   (0x501bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x6013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x40005013U 
                                                          == 
                                                          (0xfc00707fU 
                                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4000501bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x1073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->Top__DOT__idu__DOT___crtlsignals_T_279))))))))))))))));
    vlSelf->Top__DOT__idu__DOT__csr_index = ((0x305ULL 
                                              == vlSelf->Top__DOT__idu__DOT__I)
                                              ? 4U : 
                                             ((0x300ULL 
                                               == vlSelf->Top__DOT__idu__DOT__I)
                                               ? 3U
                                               : ((0x341ULL 
                                                   == vlSelf->Top__DOT__idu__DOT__I)
                                                   ? 2U
                                                   : 
                                                  (0x342ULL 
                                                   == vlSelf->Top__DOT__idu__DOT__I))));
    vlSelf->Top__DOT__idu_io_ms_dest_valid_ms_forward_data 
        = ((IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_res_from_mem)
            ? vlSelf->io_mem_result : vlSelf->Top__DOT__mem__DOT__em_bus_r_alu_result);
    vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers_MPORT_data 
        = (((IData)(vlSelf->Top__DOT__idu__DOT__Registers_io_wen) 
            & (0U != (IData)(vlSelf->Top__DOT__wbu__DOT__mw_bus_r_dest)))
            ? vlSelf->Top__DOT__wbu__DOT__mw_bus_r_final_result
            : vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
           [vlSelf->Top__DOT__wbu__DOT__mw_bus_r_dest]);
    vlSelf->Top__DOT__idu__DOT____VdfgTmp_h053f3f0d__0 
        = ((0U != (IData)(vlSelf->Top__DOT__wbu__DOT__mw_bus_r_dest)) 
           & (IData)(vlSelf->Top__DOT__idu__DOT__Registers_io_wen));
    vlSelf->Top__DOT__exu__DOT___result_T_84 = (((QData)((IData)(
                                                                 ((vlSelf->Top__DOT__exu__DOT__div_1_io_remainder 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->Top__DOT__exu__DOT__div_1_io_remainder)));
    vlSelf->Top__DOT__exu__DOT__div_io_div_valid = 
        ((IData)(vlSelf->Top__DOT__exu__DOT__is_div_64) 
         | (IData)(vlSelf->Top__DOT__exu__DOT__is_rem_64));
    vlSelf->Top__DOT__exu__DOT__div_1_io_div_valid 
        = ((IData)(vlSelf->Top__DOT__exu__DOT__is_div_32) 
           | (IData)(vlSelf->Top__DOT__exu__DOT__is_rem_32));
    vlSelf->Top__DOT__exu__DOT___result_T_31 = (((QData)((IData)(
                                                                 ((vlSelf->Top__DOT__exu__DOT__div_1_io_quotient 
                                                                   >> 0x1fU)
                                                                   ? 0xffffffffU
                                                                   : 0U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->Top__DOT__exu__DOT__div_1_io_quotient)));
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_162 
        = ((0x1013U == (0xfc00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
            ? 0x23U : ((0x101bU == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                        ? 0x24U : ((0x5013U == (0xfc00707fU 
                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                    ? 0x25U : ((0x501bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                ? 0x26U
                                                : (
                                                   (0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                    ? 0x29U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                     ? 0x2aU
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                      ? 0x2bU
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                       ? 0x2cU
                                                       : 
                                                      ((0x6013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                        ? 0x2dU
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                         ? 0x27U
                                                         : 
                                                        ((0x4000501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                          ? 0x28U
                                                          : 
                                                         ((0x1073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                           ? 0x3cU
                                                           : 
                                                          ((0x2073U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                            ? 0x3dU
                                                            : 
                                                           ((0x3073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                             ? 0x3eU
                                                             : 
                                                            ((0x73U 
                                                              == vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)
                                                              ? 0x3fU
                                                              : (IData)(vlSelf->Top__DOT__idu__DOT___crtlsignals_T_147))))))))))))))));
    vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0 
        = ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1_io_out_valid)) 
           & (2U <= (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__delay)));
    vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0 
        = ((2U > (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__delay)) 
           & ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1_io_out_valid)) 
              & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__start)));
    vlSelf->Top__DOT__mem_io_data_sram_req = ((IData)(vlSelf->Top__DOT__mem__DOT___ms_ready_go_T) 
                                              & ((~ (IData)(vlSelf->Top__DOT__mem__DOT__mid_handshake_data)) 
                                                 & (IData)(vlSelf->Top__DOT__mem__DOT__ms_valid)));
    vlSelf->Top__DOT__mem__DOT__ms_ready_go = (1U & 
                                               ((~ (IData)(vlSelf->Top__DOT__mem__DOT___ms_ready_go_T)) 
                                                | (IData)(vlSelf->Top__DOT__mem_io_data_sram_data_ok)));
    vlSelf->Top__DOT__exu__DOT__es_ready_go = (1U & 
                                               (((IData)(vlSelf->Top__DOT__exu__DOT__mul_1_io_out_valid) 
                                                 | (IData)(vlSelf->Top__DOT__exu__DOT__mul_io_out_valid)) 
                                                | ((~ 
                                                    ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__mul_io_out_valid)) 
                                                       & (4U 
                                                          == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) 
                                                      | ((~ (IData)(vlSelf->Top__DOT__exu__DOT__mul_1_io_out_valid)) 
                                                         & (5U 
                                                            == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP)))) 
                                                     | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_io_out_valid)) 
                                                          & (IData)(vlSelf->Top__DOT__exu__DOT__is_div_64)) 
                                                         | ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1_io_out_valid)) 
                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__is_div_32))) 
                                                        | (((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_io_out_valid)) 
                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__is_rem_64)) 
                                                           | ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1_io_out_valid)) 
                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__is_rem_32)))))) 
                                                   | ((IData)(vlSelf->Top__DOT__exu__DOT__div_1_io_out_valid) 
                                                      | (IData)(vlSelf->Top__DOT__exu__DOT__div_io_out_valid)))));
    vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0 
        = ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_io_out_valid)) 
           & (2U <= (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__delay)));
    vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0 
        = ((2U > (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__delay)) 
           & ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_io_out_valid)) 
              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__start)));
    vlSelf->Top__DOT__ifu_io_fs_to_ds_valid = ((IData)(vlSelf->Top__DOT__ifu__DOT__fs_valid) 
                                               & (IData)(vlSelf->Top__DOT__ifu__DOT__fs_ready_go));
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_309 
        = ((0x4033U == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
            ? 0U : ((0x7033U == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                     ? 0U : ((0x6033U == (0xfe00707fU 
                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                              ? 0U : ((0x2006033U == 
                                       (0xfe00707fU 
                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                       ? 0U : ((0x2007033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                ? 0U
                                                : (
                                                   (0x200603bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x200703bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                        ? 0U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->Top__DOT__idu__DOT___crtlsignals_T_294))))))))))))))));
    vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_202 
        = ((IData)(vlSelf->Top__DOT__exu__DOT__div_io_div_valid) 
           | (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__start));
    vlSelf->Top__DOT__exu__DOT__div_1__DOT___GEN_106 
        = ((IData)(vlSelf->Top__DOT__exu__DOT__div_1_io_div_valid) 
           | (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__start));
    __Vtemp_he1dcc205__0[0U] = (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1);
    __Vtemp_he1dcc205__0[1U] = (IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                        >> 0x20U));
    __Vtemp_he1dcc205__0[2U] = 0U;
    __Vtemp_he1dcc205__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h893450aa__0, __Vtemp_he1dcc205__0, 
                  (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2)));
    __Vtemp_hfed596f1__0[0U] = (IData)(((9U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                         ? vlSelf->Top__DOT__exu__DOT___result_T_31
                                         : ((8U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                             ? vlSelf->Top__DOT__exu__DOT___result_T_31
                                             : ((7U 
                                                 == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                 ? vlSelf->Top__DOT__exu__DOT__div_io_quotient
                                                 : 
                                                ((6U 
                                                  == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                  ? vlSelf->Top__DOT__exu__DOT__div_io_quotient
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((IData)(vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result_sign)
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result_sign) 
                                                                       << 0x1fU) 
                                                                      | (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[0U] 
                                                                         >> 1U)))))
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2 
                                                                       ^ vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                                                                      >> 0x3fU))) 
                                                     << 0x3fU) 
                                                    | (0x7fffffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->Top__DOT__exu__DOT__mul__DOT__result[1U])) 
                                                           << 0x1fU) 
                                                          | ((QData)((IData)(
                                                                             vlSelf->Top__DOT__exu__DOT__mul__DOT__result[0U])) 
                                                             >> 1U))))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((vlSelf->Top__DOT__exu__DOT___result_T_16 
                                                                        >> 0x1fU)
                                                                        ? 0xffffffffU
                                                                        : 0U))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_16)))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                      ? 
                                                     (vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                                      - vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2)
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        ((vlSelf->Top__DOT__exu__DOT___result_T_5 
                                                                          >> 0x1fU)
                                                                          ? 0xffffffffU
                                                                          : 0U))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_5)))
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                        ? 
                                                       (vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                                        + vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2)
                                                        : 0ULL)))))))))));
    __Vtemp_hfed596f1__0[1U] = (IData)((((9U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                          ? vlSelf->Top__DOT__exu__DOT___result_T_31
                                          : ((8U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                              ? vlSelf->Top__DOT__exu__DOT___result_T_31
                                              : ((7U 
                                                  == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                  ? vlSelf->Top__DOT__exu__DOT__div_io_quotient
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                   ? vlSelf->Top__DOT__exu__DOT__div_io_quotient
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((IData)(vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result_sign)
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      (((IData)(vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result_sign) 
                                                                        << 0x1fU) 
                                                                       | (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[0U] 
                                                                          >> 1U)))))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2 
                                                                        ^ vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                                                                       >> 0x3fU))) 
                                                      << 0x3fU) 
                                                     | (0x7fffffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelf->Top__DOT__exu__DOT__mul__DOT__result[1U])) 
                                                            << 0x1fU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->Top__DOT__exu__DOT__mul__DOT__result[0U])) 
                                                              >> 1U))))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       ((vlSelf->Top__DOT__exu__DOT___result_T_16 
                                                                         >> 0x1fU)
                                                                         ? 0xffffffffU
                                                                         : 0U))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_16)))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                       ? 
                                                      (vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                                       - vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         ((vlSelf->Top__DOT__exu__DOT___result_T_5 
                                                                           >> 0x1fU)
                                                                           ? 0xffffffffU
                                                                           : 0U))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_5)))
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                         ? 
                                                        (vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                                         + vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2)
                                                         : 0ULL)))))))))) 
                                        >> 0x20U));
    if ((0xaU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        vlSelf->Top__DOT__exu__DOT___result_T_192[0U] 
            = __Vtemp_h893450aa__0[0U];
        vlSelf->Top__DOT__exu__DOT___result_T_192[1U] 
            = __Vtemp_h893450aa__0[1U];
        vlSelf->Top__DOT__exu__DOT___result_T_192[2U] 
            = __Vtemp_h893450aa__0[2U];
        vlSelf->Top__DOT__exu__DOT___result_T_192[3U] 
            = (0x7fffffffU & __Vtemp_h893450aa__0[3U]);
    } else {
        vlSelf->Top__DOT__exu__DOT___result_T_192[0U] 
            = __Vtemp_hfed596f1__0[0U];
        vlSelf->Top__DOT__exu__DOT___result_T_192[1U] 
            = __Vtemp_hfed596f1__0[1U];
        vlSelf->Top__DOT__exu__DOT___result_T_192[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_192[3U] = 0U;
    }
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_177 
        = ((0x6033U == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
            ? 0x14U : ((0x2006033U == (0xfe00707fU 
                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                        ? 0x15U : ((0x2007033U == (0xfe00707fU 
                                                   & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                    ? 0x16U : ((0x200603bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                ? 0x17U
                                                : (
                                                   (0x200703bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                    ? 0x18U
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                     ? 0x19U
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                      ? 0x1aU
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                       ? 0x1bU
                                                       : 
                                                      ((3U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                        ? 0x1cU
                                                        : 
                                                       ((0x4003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                         ? 0x1dU
                                                         : 
                                                        ((0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                          ? 0x1eU
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                           ? 0x1fU
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                            ? 0x21U
                                                            : 
                                                           ((0x6003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                             ? 0x22U
                                                             : 
                                                            ((0x3003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                              ? 0x20U
                                                              : (IData)(vlSelf->Top__DOT__idu__DOT___crtlsignals_T_162))))))))))))))));
    if (vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0) {
        vlSelf->Top__DOT__exu__DOT__div_1__DOT___GEN_103[0U] 
            = vlSelf->Top__DOT__exu__DOT__div_1__DOT__dividend_reg;
        vlSelf->Top__DOT__exu__DOT__div_1__DOT___GEN_103[1U] = 0U;
        vlSelf->Top__DOT__exu__DOT__div_1__DOT___GEN_103[2U] = 0U;
    } else if (vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) {
        vlSelf->Top__DOT__exu__DOT__div_1__DOT___GEN_103[0U] 
            = ((IData)(((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)
                         ? ((((vlSelf->Top__DOT__exu__DOT__div_1__DOT__A 
                               >> 0x1fU) - (QData)((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__B))) 
                             << 0x1fU) | (QData)((IData)(
                                                         (0x7fffffffU 
                                                          & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__A)))))
                         : vlSelf->Top__DOT__exu__DOT__div_1__DOT__A)) 
               << 1U);
        vlSelf->Top__DOT__exu__DOT__div_1__DOT___GEN_103[1U] 
            = (((IData)(((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)
                          ? ((((vlSelf->Top__DOT__exu__DOT__div_1__DOT__A 
                                >> 0x1fU) - (QData)((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__B))) 
                              << 0x1fU) | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__A)))))
                          : vlSelf->Top__DOT__exu__DOT__div_1__DOT__A)) 
                >> 0x1fU) | ((IData)((((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)
                                        ? ((((vlSelf->Top__DOT__exu__DOT__div_1__DOT__A 
                                              >> 0x1fU) 
                                             - (QData)((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__B))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             (0x7fffffffU 
                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__A)))))
                                        : vlSelf->Top__DOT__exu__DOT__div_1__DOT__A) 
                                      >> 0x20U)) << 1U));
        vlSelf->Top__DOT__exu__DOT__div_1__DOT___GEN_103[2U] 
            = ((IData)((((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)
                          ? ((((vlSelf->Top__DOT__exu__DOT__div_1__DOT__A 
                                >> 0x1fU) - (QData)((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__B))) 
                              << 0x1fU) | (QData)((IData)(
                                                          (0x7fffffffU 
                                                           & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__A)))))
                          : vlSelf->Top__DOT__exu__DOT__div_1__DOT__A) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->Top__DOT__exu__DOT__div_1__DOT___GEN_103[0U] 
            = vlSelf->Top__DOT__exu__DOT__div_1__DOT__dividend_reg;
        vlSelf->Top__DOT__exu__DOT__div_1__DOT___GEN_103[1U] = 0U;
        vlSelf->Top__DOT__exu__DOT__div_1__DOT___GEN_103[2U] = 0U;
    }
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__S_hi_lo 
        = ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
             & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                & ((8U == (0x1fU & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                   & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
            << 7U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                           & ((9U == (0x1fU & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                              & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                       << 6U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                   & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                      & ((0xaU == (0x1fU 
                                                   & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                  << 5U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                              & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                 & ((0xbU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                    & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                             << 4U) 
                                            | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                 & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                    & ((0xcU 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                       & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                << 3U) 
                                               | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                    & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                       & ((0xdU 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                          & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                   << 2U) 
                                                  | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                       & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                          & ((0xeU 
                                                              == 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                           & ((0xfU 
                                                               == 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))))))))));
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__S_lo_lo 
        = ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
             & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                & ((0x18U == (0x1fU & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                   & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
            << 7U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                           & ((0x19U == (0x1fU & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                              & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                       << 6U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                   & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                      & ((0x1aU == 
                                          (0x1fU & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                  << 5U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                              & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                 & ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                    & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                             << 4U) 
                                            | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                 & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                    & ((0x1cU 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                       & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                << 3U) 
                                               | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                    & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                       & ((0x1dU 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                          & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                   << 2U) 
                                                  | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                       & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                          & ((0x1eU 
                                                              == 
                                                              (0x1fU 
                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                           & ((0x1fU 
                                                               == 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))))))))));
    vlSelf->Top__DOT__axi__DOT___GEN_9 = ((((~ (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_MemWen)) 
                                            & (IData)(vlSelf->Top__DOT__mem_io_data_sram_req)) 
                                           & (IData)(vlSelf->Top__DOT__axi__DOT____VdfgTmp_h0ac213f2__0)) 
                                          | ((~ (IData)(vlSelf->Top__DOT__axi__DOT___T_16)) 
                                             & (IData)(vlSelf->Top__DOT__axi__DOT__reading_data_sram)));
    vlSelf->Top__DOT__exu_io_ms_allowin = (1U & ((~ (IData)(vlSelf->Top__DOT__mem__DOT__ms_valid)) 
                                                 | (IData)(vlSelf->Top__DOT__mem__DOT__ms_ready_go)));
    vlSelf->Top__DOT__idu_io_ms_dest_valid_ms_valid 
        = ((IData)(vlSelf->Top__DOT__mem__DOT__ms_valid) 
           & (IData)(vlSelf->Top__DOT__mem__DOT__ms_ready_go));
    vlSelf->Top__DOT__exu_io_es_to_ms_valid = ((IData)(vlSelf->Top__DOT__exu__DOT__es_valid) 
                                               & (IData)(vlSelf->Top__DOT__exu__DOT__es_ready_go));
    __Vtemp_h661cbd0d__1[0U] = ((vlSelf->Top__DOT__exu__DOT__div__DOT__A[2U] 
                                 << 1U) | (vlSelf->Top__DOT__exu__DOT__div__DOT__A[1U] 
                                           >> 0x1fU));
    __Vtemp_h661cbd0d__1[1U] = ((vlSelf->Top__DOT__exu__DOT__div__DOT__A[3U] 
                                 << 1U) | (vlSelf->Top__DOT__exu__DOT__div__DOT__A[2U] 
                                           >> 0x1fU));
    __Vtemp_h661cbd0d__1[2U] = (vlSelf->Top__DOT__exu__DOT__div__DOT__A[3U] 
                                >> 0x1fU);
    __Vtemp_hd76675a3__1[0U] = (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__B);
    __Vtemp_hd76675a3__1[1U] = (IData)((vlSelf->Top__DOT__exu__DOT__div__DOT__B 
                                        >> 0x20U));
    __Vtemp_hd76675a3__1[2U] = 0U;
    VL_SUB_W(3, __Vtemp_ha3f2c6f0__0, __Vtemp_h661cbd0d__1, __Vtemp_hd76675a3__1);
    if (vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0) {
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[0U] 
            = (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__dividend_reg);
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[1U] 
            = (IData)((vlSelf->Top__DOT__exu__DOT__div__DOT__dividend_reg 
                       >> 0x20U));
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[3U] = 0U;
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[4U] = 0U;
    } else if (vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) {
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[0U] 
            = (((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)
                 ? (IData)((0x7fffffffffffffffULL & 
                            (((QData)((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__A[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->Top__DOT__exu__DOT__div__DOT__A[0U])))))
                 : vlSelf->Top__DOT__exu__DOT__div__DOT__A[0U]) 
               << 1U);
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[1U] 
            = ((((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)
                  ? (IData)((0x7fffffffffffffffULL 
                             & (((QData)((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__A[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->Top__DOT__exu__DOT__div__DOT__A[0U])))))
                  : vlSelf->Top__DOT__exu__DOT__div__DOT__A[0U]) 
                >> 0x1fU) | (((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)
                               ? ((__Vtemp_ha3f2c6f0__0[0U] 
                                   << 0x1fU) | (IData)(
                                                       ((0x7fffffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->Top__DOT__exu__DOT__div__DOT__A[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->Top__DOT__exu__DOT__div__DOT__A[0U])))) 
                                                        >> 0x20U)))
                               : vlSelf->Top__DOT__exu__DOT__div__DOT__A[1U]) 
                             << 1U));
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[2U] 
            = ((((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)
                  ? ((__Vtemp_ha3f2c6f0__0[0U] << 0x1fU) 
                     | (IData)(((0x7fffffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->Top__DOT__exu__DOT__div__DOT__A[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->Top__DOT__exu__DOT__div__DOT__A[0U])))) 
                                >> 0x20U))) : vlSelf->Top__DOT__exu__DOT__div__DOT__A[1U]) 
                >> 0x1fU) | (((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)
                               ? ((__Vtemp_ha3f2c6f0__0[0U] 
                                   >> 1U) | (__Vtemp_ha3f2c6f0__0[1U] 
                                             << 0x1fU))
                               : vlSelf->Top__DOT__exu__DOT__div__DOT__A[2U]) 
                             << 1U));
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[3U] 
            = ((((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)
                  ? ((__Vtemp_ha3f2c6f0__0[0U] >> 1U) 
                     | (__Vtemp_ha3f2c6f0__0[1U] << 0x1fU))
                  : vlSelf->Top__DOT__exu__DOT__div__DOT__A[2U]) 
                >> 0x1fU) | (((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)
                               ? ((__Vtemp_ha3f2c6f0__0[1U] 
                                   >> 1U) | (__Vtemp_ha3f2c6f0__0[2U] 
                                             << 0x1fU))
                               : vlSelf->Top__DOT__exu__DOT__div__DOT__A[3U]) 
                             << 1U));
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[4U] 
            = (((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)
                 ? ((__Vtemp_ha3f2c6f0__0[1U] >> 1U) 
                    | (__Vtemp_ha3f2c6f0__0[2U] << 0x1fU))
                 : vlSelf->Top__DOT__exu__DOT__div__DOT__A[3U]) 
               >> 0x1fU);
    } else {
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[0U] 
            = (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__dividend_reg);
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[1U] 
            = (IData)((vlSelf->Top__DOT__exu__DOT__div__DOT__dividend_reg 
                       >> 0x20U));
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[3U] = 0U;
        vlSelf->Top__DOT__exu__DOT__div__DOT___GEN_199[4U] = 0U;
    }
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_lo_hi_lo 
        = ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
             & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                & ((0x28U == (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                   & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
            << 7U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                           & ((0x29U == (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                       << 6U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                   & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                      & ((0x2aU == 
                                          (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                  << 5U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                              & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                 & ((0x2bU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                    & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                             << 4U) 
                                            | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                 & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                    & ((0x2cU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                       & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                << 3U) 
                                               | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                    & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                       & ((0x2dU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                          & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                   << 2U) 
                                                  | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                       & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                          & ((0x2eU 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                           & ((0x2fU 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))))))))));
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_hi_hi_lo 
        = ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
             & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                & ((8U == (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                   & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
            << 7U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                           & ((9U == (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                       << 6U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                   & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                      & ((0xaU == (0x3fU 
                                                   & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                  << 5U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                              & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                 & ((0xbU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                    & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                             << 4U) 
                                            | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                 & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                    & ((0xcU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                       & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                << 3U) 
                                               | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                    & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                       & ((0xdU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                          & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                   << 2U) 
                                                  | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                       & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                          & ((0xeU 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                           & ((0xfU 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))))))))));
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_lo_lo_lo 
        = ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
             & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                & ((0x38U == (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                   & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
            << 7U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                           & ((0x39U == (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                       << 6U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                   & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                      & ((0x3aU == 
                                          (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                  << 5U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                              & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                 & ((0x3bU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                    & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                             << 4U) 
                                            | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                 & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                    & ((0x3cU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                       & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                << 3U) 
                                               | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                    & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                       & ((0x3dU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                          & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                   << 2U) 
                                                  | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                       & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                          & ((0x3eU 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                           & ((0x3fU 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))))))))));
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_hi_lo_lo 
        = ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
             & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                & ((0x18U == (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                   & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
            << 7U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                           & ((0x19U == (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                       << 6U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                   & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                      & ((0x1aU == 
                                          (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                  << 5U) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                              & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                 & ((0x1bU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                    & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                             << 4U) 
                                            | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                 & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                    & ((0x1cU 
                                                        == 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                       & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                << 3U) 
                                               | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                    & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                       & ((0x1dU 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                          & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                   << 2U) 
                                                  | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                       & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                          & ((0x1eU 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                      << 1U) 
                                                     | ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                           & ((0x1fU 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))))))))));
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_324 
        = ((0x4000003bU == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
            ? 0U : ((0x2000033U == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                     ? 0U : ((0x200003bU == (0xfe00707fU 
                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                              ? 0U : ((0x2004033U == 
                                       (0xfe00707fU 
                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                       ? 0U : ((0x2005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                ? 0U
                                                : (
                                                   (0x200403bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x200503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x40005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                          ? 0U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                           ? 0U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                            ? 0U
                                                            : 
                                                           ((0x503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                             ? 0U
                                                             : (IData)(vlSelf->Top__DOT__idu__DOT___crtlsignals_T_309))))))))))))))));
    if ((0x13U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h8a7bc390__0[0U] = (IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1, 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2))));
        __Vtemp_h8a7bc390__0[1U] = (IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1, 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2))) 
                                            >> 0x20U));
    } else if ((0xdU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h8a7bc390__0[0U] = (IData)((((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (0xffffffffULL 
                                                                          & (((QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1)) 
                                                                              << 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2))) 
                                                                             >> 0x1fU))))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                                                               << 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2)))))));
        __Vtemp_h8a7bc390__0[1U] = (IData)(((((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (0xffffffffULL 
                                                                           & (((QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1)) 
                                                                               << 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2))) 
                                                                              >> 0x1fU))))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                                                                << 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2)))))) 
                                            >> 0x20U));
    } else if ((0xcU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h8a7bc390__0[0U] = (vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                    < vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2);
        __Vtemp_h8a7bc390__0[1U] = 0U;
    } else if ((0xbU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h8a7bc390__0[0U] = VL_LTS_IQQ(64, vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1, vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2);
        __Vtemp_h8a7bc390__0[1U] = 0U;
    } else {
        __Vtemp_h8a7bc390__0[0U] = vlSelf->Top__DOT__exu__DOT___result_T_192[0U];
        __Vtemp_h8a7bc390__0[1U] = vlSelf->Top__DOT__exu__DOT___result_T_192[1U];
    }
    if ((0x11U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h7152e588__0[1U] = (IData)(((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                             ^ vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2) 
                                            >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_208[0U] 
            = (IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                       ^ vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2));
        vlSelf->Top__DOT__exu__DOT___result_T_208[1U] 
            = __Vtemp_h7152e588__0[1U];
        vlSelf->Top__DOT__exu__DOT___result_T_208[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_208[3U] = 0U;
    } else if ((0x10U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h7152e588__0[1U] = (IData)(((((QData)((IData)(
                                                              ((vlSelf->Top__DOT__exu__DOT___result_T_71 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_71))) 
                                            >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_208[0U] 
            = (IData)((((QData)((IData)(((vlSelf->Top__DOT__exu__DOT___result_T_71 
                                          >> 0x1fU)
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_71))));
        vlSelf->Top__DOT__exu__DOT___result_T_208[1U] 
            = __Vtemp_h7152e588__0[1U];
        vlSelf->Top__DOT__exu__DOT___result_T_208[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_208[3U] = 0U;
    } else if ((0xfU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h7152e588__0[1U] = (IData)(((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2))) 
                                            >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_208[0U] 
            = (IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                       >> (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2))));
        vlSelf->Top__DOT__exu__DOT___result_T_208[1U] 
            = __Vtemp_h7152e588__0[1U];
        vlSelf->Top__DOT__exu__DOT___result_T_208[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_208[3U] = 0U;
    } else if ((0xeU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h7152e588__0[1U] = (IData)(((((QData)((IData)(
                                                              ((vlSelf->Top__DOT__exu__DOT___result_T_61 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_61))) 
                                            >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_208[0U] 
            = (IData)((((QData)((IData)(((vlSelf->Top__DOT__exu__DOT___result_T_61 
                                          >> 0x1fU)
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_61))));
        vlSelf->Top__DOT__exu__DOT___result_T_208[1U] 
            = __Vtemp_h7152e588__0[1U];
        vlSelf->Top__DOT__exu__DOT___result_T_208[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_208[3U] = 0U;
    } else {
        __Vtemp_h7152e588__0[1U] = __Vtemp_h8a7bc390__0[1U];
        vlSelf->Top__DOT__exu__DOT___result_T_208[0U] 
            = __Vtemp_h8a7bc390__0[0U];
        vlSelf->Top__DOT__exu__DOT___result_T_208[1U] 
            = __Vtemp_h7152e588__0[1U];
        if ((0x13U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_208[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_208[3U] = 0U;
        } else if ((0xdU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_208[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_208[3U] = 0U;
        } else if ((0xcU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_208[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_208[3U] = 0U;
        } else if ((0xbU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_208[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_208[3U] = 0U;
        } else {
            vlSelf->Top__DOT__exu__DOT___result_T_208[2U] 
                = vlSelf->Top__DOT__exu__DOT___result_T_192[2U];
            vlSelf->Top__DOT__exu__DOT___result_T_208[3U] 
                = vlSelf->Top__DOT__exu__DOT___result_T_192[3U];
        }
    }
    vlSelf->Top__DOT__idu__DOT___crtlsignals_T_192 
        = ((0x200003bU == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
            ? 5U : ((0x2004033U == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                     ? 6U : ((0x2005033U == (0xfe00707fU 
                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                              ? 7U : ((0x200403bU == 
                                       (0xfe00707fU 
                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                       ? 8U : ((0x200503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                ? 9U
                                                : (
                                                   (0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                    ? 0xaU
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                     ? 0xbU
                                                     : 
                                                    ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                      ? 0xcU
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                       ? 0xdU
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                        ? 0x13U
                                                        : 
                                                       ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                         ? 0xeU
                                                         : 
                                                        ((0x5033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                          ? 0xfU
                                                          : 
                                                         ((0x503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                           ? 0x10U
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                            ? 0x11U
                                                            : 
                                                           ((0x7033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                             ? 0x12U
                                                             : (IData)(vlSelf->Top__DOT__idu__DOT___crtlsignals_T_177))))))))))))))));
    if ((0x33U == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))) {
        vlSelf->io_op = 0U;
        vlSelf->Top__DOT__idu__DOT__ImmType = 0U;
        vlSelf->Top__DOT__idu_io_de_bus_OP = 0U;
    } else if ((0x3bU == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))) {
        vlSelf->io_op = 1U;
        vlSelf->Top__DOT__idu__DOT__ImmType = 0U;
        vlSelf->Top__DOT__idu_io_de_bus_OP = 1U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))) {
        vlSelf->io_op = 2U;
        vlSelf->Top__DOT__idu__DOT__ImmType = 0U;
        vlSelf->Top__DOT__idu_io_de_bus_OP = 2U;
    } else {
        if ((0x4000003bU == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))) {
            vlSelf->io_op = 3U;
            vlSelf->Top__DOT__idu_io_de_bus_OP = 3U;
        } else if ((0x2000033U == (0xfe00707fU & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))) {
            vlSelf->io_op = 4U;
            vlSelf->Top__DOT__idu_io_de_bus_OP = 4U;
        } else {
            vlSelf->io_op = ((0x200003bU == (0xfe00707fU 
                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                              ? 5U : ((0x2004033U == 
                                       (0xfe00707fU 
                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                       ? 6U : ((0x2005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                ? 7U
                                                : (
                                                   (0x200403bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                    ? 8U
                                                    : 
                                                   ((0x200503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                     ? 9U
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                      ? 0xaU
                                                      : 
                                                     ((0x2033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                       ? 0xbU
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                        ? 0xcU
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                         ? 0xdU
                                                         : 
                                                        ((0x40005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                          ? 0x13U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                           ? 0xeU
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                            ? 0xfU
                                                            : 
                                                           ((0x503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                             ? 0x10U
                                                             : 
                                                            ((0x4033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                              ? 0x11U
                                                              : 
                                                             ((0x7033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                               ? 0x12U
                                                               : 
                                                              ((0x6033U 
                                                                == 
                                                                (0xfe00707fU 
                                                                 & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                ? 0x14U
                                                                : 
                                                               ((0x2006033U 
                                                                 == 
                                                                 (0xfe00707fU 
                                                                  & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                 ? 0x15U
                                                                 : 
                                                                ((0x2007033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                  ? 0x16U
                                                                  : 
                                                                 ((0x200603bU 
                                                                   == 
                                                                   (0xfe00707fU 
                                                                    & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                   ? 0x17U
                                                                   : 
                                                                  ((0x200703bU 
                                                                    == 
                                                                    (0xfe00707fU 
                                                                     & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                    ? 0x18U
                                                                    : 
                                                                   ((0x13U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                     ? 0x19U
                                                                     : 
                                                                    ((0x1bU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                      ? 0x1aU
                                                                      : 
                                                                     ((0x67U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                       ? 0x1bU
                                                                       : 
                                                                      ((3U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                        ? 0x1cU
                                                                        : 
                                                                       ((0x4003U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                         ? 0x1dU
                                                                         : 
                                                                        ((0x1003U 
                                                                          == 
                                                                          (0x707fU 
                                                                           & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                          ? 0x1eU
                                                                          : 
                                                                         ((0x5003U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                           ? 0x1fU
                                                                           : 
                                                                          ((0x2003U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                            ? 0x21U
                                                                            : 
                                                                           ((0x6003U 
                                                                             == 
                                                                             (0x707fU 
                                                                              & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                             ? 0x22U
                                                                             : 
                                                                            ((0x3003U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                              ? 0x20U
                                                                              : 
                                                                             ((0x1013U 
                                                                               == 
                                                                               (0xfc00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                               ? 0x23U
                                                                               : 
                                                                              ((0x101bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                ? 0x24U
                                                                                : 
                                                                               ((0x5013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((0x501bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((0x2013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((0x4013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((0x40005013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((0x4000501bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x3cU
                                                                                 : 
                                                                                ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x3dU
                                                                                 : 
                                                                                ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x3eU
                                                                                 : 
                                                                                ((0x73U 
                                                                                == vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)
                                                                                 ? 0x3fU
                                                                                 : 
                                                                                ((0x3023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x2fU
                                                                                 : 
                                                                                ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x30U
                                                                                 : 
                                                                                ((0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x31U
                                                                                 : 
                                                                                ((0x63U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x32U
                                                                                 : 
                                                                                ((0x1063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x33U
                                                                                 : 
                                                                                ((0x4063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x36U
                                                                                 : 
                                                                                ((0x5063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x34U
                                                                                 : 
                                                                                ((0x7063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x35U
                                                                                 : 
                                                                                ((0x6063U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x37U
                                                                                 : 
                                                                                ((0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x38U
                                                                                 : 
                                                                                ((0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x39U
                                                                                 : 
                                                                                ((0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst))
                                                                                 ? 0x3aU
                                                                                 : 
                                                                                ((0x30200073U 
                                                                                == vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)
                                                                                 ? 0x40U
                                                                                 : 
                                                                                ((0x100073U 
                                                                                == vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)
                                                                                 ? 0x3bU
                                                                                 : 0x7fU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
            vlSelf->Top__DOT__idu_io_de_bus_OP = vlSelf->Top__DOT__idu__DOT___crtlsignals_T_192;
        }
        vlSelf->Top__DOT__idu__DOT__ImmType = vlSelf->Top__DOT__idu__DOT___crtlsignals_T_324;
    }
    vlSelf->Top__DOT__exu__DOT__div_1__DOT__S_lo = 
        ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
           & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
              & ((0x10U == (0x1fU & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                 & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
          << 0xfU) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                           & ((0x11U == (0x1fU & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                              & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                       << 0xeU) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                     & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                        & ((0x12U == 
                                            (0x1fU 
                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                           & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                    << 0xdU) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                  & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                     & ((0x13U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                        & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                 << 0xcU) 
                                                | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                     & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                        & ((0x14U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                           & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                    << 0xbU) 
                                                   | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                           & ((0x15U 
                                                               == 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                       << 0xaU) 
                                                      | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                           & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                              & ((0x16U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                                 & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                          << 9U) 
                                                         | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                              & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                                 & ((0x17U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                                    & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                             << 8U) 
                                                            | (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__S_lo_lo)))))))));
    vlSelf->Top__DOT__mem__DOT___GEN_63 = (((((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state)) 
                                              & (IData)(vlSelf->Top__DOT__axi__DOT__reading_data_sram)) 
                                             | (2U 
                                                == (IData)(vlSelf->Top__DOT__axi__DOT__writing_data_sram))) 
                                            & ((~ (IData)(vlSelf->Top__DOT__exu_io_ms_allowin)) 
                                               & (IData)(vlSelf->Top__DOT__mem_io_data_sram_req))) 
                                           | ((~ (IData)(vlSelf->Top__DOT__exu_io_ms_allowin)) 
                                              & (IData)(vlSelf->Top__DOT__mem__DOT__mid_handshake_data)));
    vlSelf->Top__DOT__idu_io_es_allowin = (1U & ((~ (IData)(vlSelf->Top__DOT__exu__DOT__es_valid)) 
                                                 | ((IData)(vlSelf->Top__DOT__exu__DOT__es_ready_go) 
                                                    & (IData)(vlSelf->Top__DOT__exu_io_ms_allowin))));
    vlSelf->Top__DOT__idu__DOT__rawblock = (((IData)(vlSelf->Top__DOT__exu__DOT__es_valid) 
                                             & ((((0x1fU 
                                                   & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_dest)) 
                                                 | (IData)(vlSelf->Top__DOT__idu__DOT___es_rawblock_T_1)) 
                                                & ((0U 
                                                    != (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_dest)) 
                                                   & (IData)(vlSelf->__VdfgTmp_h68861839__0)))) 
                                            | ((IData)(vlSelf->Top__DOT__idu_io_ms_dest_valid_ms_valid) 
                                               & ((((0x1fU 
                                                     & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                        >> 0xfU)) 
                                                    == (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_dest)) 
                                                   | (IData)(vlSelf->Top__DOT__idu__DOT___ms_rawblock_T_1)) 
                                                  & ((0U 
                                                      != (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_dest)) 
                                                     & (IData)(vlSelf->__VdfgTmp_h68861839__0)))));
    vlSelf->Top__DOT__idu__DOT____VdfgTmp_hfdb26f4c__0 
        = ((0U != (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_dest)) 
           & ((IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_gr_we) 
              & (IData)(vlSelf->Top__DOT__idu_io_ms_dest_valid_ms_valid)));
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_lo_lo = 
        ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
           & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
              & ((0x30U == (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                 & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
          << 0xfU) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                           & ((0x31U == (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                       << 0xeU) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                     & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                        & ((0x32U == 
                                            (0x3fU 
                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                           & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                    << 0xdU) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                  & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                     & ((0x33U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                        & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                 << 0xcU) 
                                                | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                     & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                        & ((0x34U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                           & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                    << 0xbU) 
                                                   | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                           & ((0x35U 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                       << 0xaU) 
                                                      | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                           & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                              & ((0x36U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                 & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                          << 9U) 
                                                         | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                              & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                                 & ((0x37U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                    & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                             << 8U) 
                                                            | (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__S_lo_lo_lo)))))))));
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_hi_lo = 
        ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
           & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
              & ((0x10U == (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                 & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
          << 0xfU) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                           & ((0x11U == (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                       << 0xeU) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                     & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                        & ((0x12U == 
                                            (0x3fU 
                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                           & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                    << 0xdU) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                  & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                     & ((0x13U 
                                                         == 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                        & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                 << 0xcU) 
                                                | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                     & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                        & ((0x14U 
                                                            == 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                           & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                    << 0xbU) 
                                                   | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                        & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                           & ((0x15U 
                                                               == 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                       << 0xaU) 
                                                      | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                           & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                              & ((0x16U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                 & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                          << 9U) 
                                                         | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                              & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                                 & ((0x17U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                    & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                             << 8U) 
                                                            | (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__S_hi_lo_lo)))))))));
    if ((0x1aU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h40c6816f__0[0U] = (IData)((((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->Top__DOT__exu__DOT___result_T_94 
                                                                          >> 0x1fU)))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_94))));
        __Vtemp_h40c6816f__0[1U] = (IData)(((((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->Top__DOT__exu__DOT___result_T_94 
                                                                           >> 0x1fU)))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_94))) 
                                            >> 0x20U));
    } else if ((0x19U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h40c6816f__0[0U] = (IData)(vlSelf->Top__DOT__exu__DOT___result_T_91);
        __Vtemp_h40c6816f__0[1U] = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_91 
                                            >> 0x20U));
    } else if ((0x18U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h40c6816f__0[0U] = (IData)(vlSelf->Top__DOT__exu__DOT___result_T_84);
        __Vtemp_h40c6816f__0[1U] = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_84 
                                            >> 0x20U));
    } else if ((0x17U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h40c6816f__0[0U] = (IData)(vlSelf->Top__DOT__exu__DOT___result_T_84);
        __Vtemp_h40c6816f__0[1U] = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_84 
                                            >> 0x20U));
    } else if ((0x16U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h40c6816f__0[0U] = (IData)(vlSelf->Top__DOT__exu__DOT__div_io_remainder);
        __Vtemp_h40c6816f__0[1U] = (IData)((vlSelf->Top__DOT__exu__DOT__div_io_remainder 
                                            >> 0x20U));
    } else if ((0x15U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h40c6816f__0[0U] = (IData)(vlSelf->Top__DOT__exu__DOT__div_io_remainder);
        __Vtemp_h40c6816f__0[1U] = (IData)((vlSelf->Top__DOT__exu__DOT__div_io_remainder 
                                            >> 0x20U));
    } else if ((0x14U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h40c6816f__0[0U] = (IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                            | vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2));
        __Vtemp_h40c6816f__0[1U] = (IData)(((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                             | vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2) 
                                            >> 0x20U));
    } else if ((0x12U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h40c6816f__0[0U] = (IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                            & vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2));
        __Vtemp_h40c6816f__0[1U] = (IData)(((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                             & vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata2) 
                                            >> 0x20U));
    } else {
        __Vtemp_h40c6816f__0[0U] = vlSelf->Top__DOT__exu__DOT___result_T_208[0U];
        __Vtemp_h40c6816f__0[1U] = vlSelf->Top__DOT__exu__DOT___result_T_208[1U];
    }
    if ((0x22U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        vlSelf->Top__DOT__exu__DOT___result_T_238[0U] 
            = (IData)(vlSelf->Top__DOT__exu__DOT___result_T_91);
        vlSelf->Top__DOT__exu__DOT___result_T_238[1U] 
            = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_91 
                       >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
    } else if ((0x21U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        vlSelf->Top__DOT__exu__DOT___result_T_238[0U] 
            = (IData)(vlSelf->Top__DOT__exu__DOT___result_T_91);
        vlSelf->Top__DOT__exu__DOT___result_T_238[1U] 
            = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_91 
                       >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
    } else if ((0x1fU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        vlSelf->Top__DOT__exu__DOT___result_T_238[0U] 
            = (IData)(vlSelf->Top__DOT__exu__DOT___result_T_91);
        vlSelf->Top__DOT__exu__DOT___result_T_238[1U] 
            = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_91 
                       >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
    } else if ((0x1eU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        vlSelf->Top__DOT__exu__DOT___result_T_238[0U] 
            = (IData)(vlSelf->Top__DOT__exu__DOT___result_T_91);
        vlSelf->Top__DOT__exu__DOT___result_T_238[1U] 
            = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_91 
                       >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
    } else if ((0x1dU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        vlSelf->Top__DOT__exu__DOT___result_T_238[0U] 
            = (IData)(vlSelf->Top__DOT__exu__DOT___result_T_91);
        vlSelf->Top__DOT__exu__DOT___result_T_238[1U] 
            = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_91 
                       >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
    } else if ((0x1cU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        vlSelf->Top__DOT__exu__DOT___result_T_238[0U] 
            = (IData)(vlSelf->Top__DOT__exu__DOT___result_T_91);
        vlSelf->Top__DOT__exu__DOT___result_T_238[1U] 
            = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_91 
                       >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
    } else if ((0x1bU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        vlSelf->Top__DOT__exu__DOT___result_T_238[0U] 
            = (IData)((4ULL + (QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_ds_pc))));
        vlSelf->Top__DOT__exu__DOT___result_T_238[1U] 
            = (IData)(((4ULL + (QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_ds_pc))) 
                       >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
    } else {
        vlSelf->Top__DOT__exu__DOT___result_T_238[0U] 
            = __Vtemp_h40c6816f__0[0U];
        vlSelf->Top__DOT__exu__DOT___result_T_238[1U] 
            = __Vtemp_h40c6816f__0[1U];
        if ((0x1aU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
        } else if ((0x19U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
        } else if ((0x18U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
        } else if ((0x17U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
        } else if ((0x16U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
        } else if ((0x15U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
        } else if ((0x14U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
        } else if ((0x12U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_238[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_238[3U] = 0U;
        } else {
            vlSelf->Top__DOT__exu__DOT___result_T_238[2U] 
                = vlSelf->Top__DOT__exu__DOT___result_T_208[2U];
            vlSelf->Top__DOT__exu__DOT___result_T_238[3U] 
                = vlSelf->Top__DOT__exu__DOT___result_T_208[3U];
        }
    }
    vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_T_1 
        = (((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
              & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                 & ((0U == (0x1fU & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                    & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
             << 0x1fU) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                            & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                               & ((1U == (0x1fU & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                  & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                           << 0x1eU) | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                          & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                             & ((2U 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                         << 0x1dU) 
                                        | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                             & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                & ((3U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                   & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                            << 0x1cU) 
                                           | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                   & ((4U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                      & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                               << 0x1bU) 
                                              | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                   & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                      & ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                  << 0x1aU) 
                                                 | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                      & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                         & ((6U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                     << 0x19U) 
                                                    | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_h07b3fff0__0)) 
                                                         & ((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT____VdfgTmp_hc83fc6a9__0) 
                                                            & ((7U 
                                                                == 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__cnt))) 
                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT___S_tmp_T_2)))) 
                                                        << 0x18U) 
                                                       | (((IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__S_hi_lo) 
                                                           << 0x10U) 
                                                          | (IData)(vlSelf->Top__DOT__exu__DOT__div_1__DOT__S_lo)))))))))) 
           | vlSelf->Top__DOT__exu__DOT__div_1__DOT__S);
    vlSelf->Top__DOT__idu_io_ds_to_es_valid = ((~ (IData)(vlSelf->Top__DOT__idu__DOT__rawblock)) 
                                               & (IData)(vlSelf->Top__DOT__idu__DOT__ds_valid));
    vlSelf->Top__DOT__ifu_io_ds_allowin = (1U & ((~ (IData)(vlSelf->Top__DOT__idu__DOT__ds_valid)) 
                                                 | ((~ (IData)(vlSelf->Top__DOT__idu__DOT__rawblock)) 
                                                    & (IData)(vlSelf->Top__DOT__idu_io_es_allowin))));
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_lo = ((
                                                   ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                    & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                       & ((0x20U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                          & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                   << 0x1fU) 
                                                  | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                       & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                          & ((0x21U 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                      << 0x1eU) 
                                                     | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                          & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                             & ((0x22U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                         << 0x1dU) 
                                                        | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                             & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                                & ((0x23U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                   & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                            << 0x1cU) 
                                                           | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                                & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                                   & ((0x24U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                      & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                               << 0x1bU) 
                                                              | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                                   & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                                      & ((0x25U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                                  << 0x1aU) 
                                                                 | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                                      & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                                         & ((0x26U 
                                                                             == 
                                                                             (0x3fU 
                                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                                     << 0x19U) 
                                                                    | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                                         & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                                            & ((0x27U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__S_lo_hi_lo) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__S_lo_lo))))))))));
    vlSelf->Top__DOT__exu__DOT__div__DOT__S_hi = ((
                                                   ((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                    & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                       & ((0U 
                                                           == 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                          & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                   << 0x1fU) 
                                                  | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                       & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                          & ((1U 
                                                              == 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                             & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                      << 0x1eU) 
                                                     | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                          & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                             & ((2U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                         << 0x1dU) 
                                                        | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                             & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                                & ((3U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                   & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                            << 0x1cU) 
                                                           | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                                & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                                   & ((4U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                      & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                               << 0x1bU) 
                                                              | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                                   & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                                      & ((5U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                         & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                                  << 0x1aU) 
                                                                 | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                                      & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                                         & ((6U 
                                                                             == 
                                                                             (0x3fU 
                                                                              & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                                     << 0x19U) 
                                                                    | ((((~ (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_h2a1bdbb1__0)) 
                                                                         & ((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT____VdfgTmp_hb4516a68__0) 
                                                                            & ((7U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__cnt))) 
                                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT___S_tmp_T_2)))) 
                                                                        << 0x18U) 
                                                                       | (((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__S_hi_hi_lo) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__S_hi_lo))))))))));
    __Vtemp_h282ce0ed__0[1U] = ((2U == (IData)(vlSelf->Top__DOT__idu__DOT__ImmType))
                                 ? (((IData)(vlSelf->Top__DOT__idu__DOT___J_T_4) 
                                     >> 0x14U) | ((IData)(
                                                          (vlSelf->Top__DOT__idu__DOT___J_T_4 
                                                           >> 0x20U)) 
                                                  << 0xcU))
                                 : ((1U == (IData)(vlSelf->Top__DOT__idu__DOT__ImmType))
                                     ? (((IData)(((
                                                   ((vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                     >> 0x1fU)
                                                     ? 0x1ffffffffffffffULL
                                                     : 0ULL) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                                     >> 0x19U))))) 
                                         >> 0x1bU) 
                                        | ((IData)(
                                                   (((((vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                        >> 0x1fU)
                                                        ? 0x1ffffffffffffffULL
                                                        : 0ULL) 
                                                      << 7U) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                                        >> 0x19U)))) 
                                                    >> 0x20U)) 
                                           << 5U)) : (IData)(
                                                             (((0U 
                                                                == (IData)(vlSelf->Top__DOT__idu__DOT__ImmType))
                                                                ? vlSelf->Top__DOT__idu__DOT__I
                                                                : 0ULL) 
                                                              >> 0x20U))));
    __Vtemp_hd9ba8226__0[0U] = ((3U == (IData)(vlSelf->Top__DOT__idu__DOT__ImmType))
                                 ? ((IData)(((((vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                >> 0x1fU)
                                                ? 0xfffffffffffULL
                                                : 0ULL) 
                                              << 0x14U) 
                                             | (QData)((IData)(
                                                               (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                                >> 0xcU))))) 
                                    << 0xcU) : ((2U 
                                                 == (IData)(vlSelf->Top__DOT__idu__DOT__ImmType))
                                                 ? 
                                                (((((IData)(vlSelf->Top__DOT__idu__DOT___J_T_4) 
                                                    << 0xcU) 
                                                   | (0x800U 
                                                      & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                         << 4U))) 
                                                  | (0x7e0U 
                                                     & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                        >> 0x14U))) 
                                                 | (0x1eU 
                                                    & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                       >> 7U)))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->Top__DOT__idu__DOT__ImmType))
                                                  ? 
                                                 (((IData)(
                                                           ((((vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                               >> 0x1fU)
                                                               ? 0x1ffffffffffffffULL
                                                               : 0ULL) 
                                                             << 7U) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                                               >> 0x19U))))) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                        >> 7U)))
                                                  : (IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->Top__DOT__idu__DOT__ImmType))
                                                              ? vlSelf->Top__DOT__idu__DOT__I
                                                              : 0ULL)))));
    if ((4U == (IData)(vlSelf->Top__DOT__idu__DOT__ImmType))) {
        __Vtemp_h402a479a__0[1U] = (((IData)(vlSelf->Top__DOT__idu__DOT___J_T_4) 
                                     >> 0xcU) | ((IData)(
                                                         (vlSelf->Top__DOT__idu__DOT___J_T_4 
                                                          >> 0x20U)) 
                                                 << 0x14U));
        __Vtemp_h402a479a__0[2U] = ((IData)((vlSelf->Top__DOT__idu__DOT___J_T_4 
                                             >> 0x20U)) 
                                    >> 0xcU);
        vlSelf->Top__DOT__idu__DOT___io_de_bus_imm_T_9[0U] 
            = (((((IData)(vlSelf->Top__DOT__idu__DOT___J_T_4) 
                  << 0x14U) | (0x800U & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                         >> 9U))) | 
                (0xff000U & vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)) 
               | (0x7feU & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                            >> 0x14U)));
    } else {
        if ((3U == (IData)(vlSelf->Top__DOT__idu__DOT__ImmType))) {
            __Vtemp_h402a479a__0[1U] = (((IData)(((
                                                   ((vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffULL
                                                     : 0ULL) 
                                                   << 0x14U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                                     >> 0xcU))))) 
                                         >> 0x14U) 
                                        | ((IData)(
                                                   (((((vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                        >> 0x1fU)
                                                        ? 0xfffffffffffULL
                                                        : 0ULL) 
                                                      << 0x14U) 
                                                     | (QData)((IData)(
                                                                       (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                                        >> 0xcU)))) 
                                                    >> 0x20U)) 
                                           << 0xcU));
            __Vtemp_h402a479a__0[2U] = ((IData)((((
                                                   ((vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffULL
                                                     : 0ULL) 
                                                   << 0x14U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                                     >> 0xcU)))) 
                                                 >> 0x20U)) 
                                        >> 0x14U);
        } else {
            __Vtemp_h402a479a__0[1U] = __Vtemp_h282ce0ed__0[1U];
            __Vtemp_h402a479a__0[2U] = ((2U == (IData)(vlSelf->Top__DOT__idu__DOT__ImmType))
                                         ? ((IData)(
                                                    (vlSelf->Top__DOT__idu__DOT___J_T_4 
                                                     >> 0x20U)) 
                                            >> 0x14U)
                                         : ((1U == (IData)(vlSelf->Top__DOT__idu__DOT__ImmType))
                                             ? ((IData)(
                                                        (((((vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                             >> 0x1fU)
                                                             ? 0x1ffffffffffffffULL
                                                             : 0ULL) 
                                                           << 7U) 
                                                          | (QData)((IData)(
                                                                            (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                                             >> 0x19U)))) 
                                                         >> 0x20U)) 
                                                >> 0x1bU)
                                             : 0U));
        }
        vlSelf->Top__DOT__idu__DOT___io_de_bus_imm_T_9[0U] 
            = __Vtemp_hd9ba8226__0[0U];
    }
    vlSelf->Top__DOT__idu__DOT___io_de_bus_imm_T_9[1U] 
        = __Vtemp_h402a479a__0[1U];
    vlSelf->Top__DOT__idu__DOT___io_de_bus_imm_T_9[2U] 
        = __Vtemp_h402a479a__0[2U];
    __Vtemp_he1dcc205__1[0U] = (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1);
    __Vtemp_he1dcc205__1[1U] = (IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                        >> 0x20U));
    __Vtemp_he1dcc205__1[2U] = 0U;
    __Vtemp_he1dcc205__1[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h59f7e8df__0, __Vtemp_he1dcc205__1, 
                  (0x3fU & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_imm)));
    if ((0x25U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h3ad3f24b__0[0U] = (IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_imm))));
        __Vtemp_h3ad3f24b__0[1U] = (IData)(((vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_imm))) 
                                            >> 0x20U));
    } else if ((0x24U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h3ad3f24b__0[0U] = (IData)((((QData)((IData)(
                                                             ((1U 
                                                               & (IData)(
                                                                         (0xffffffffULL 
                                                                          & (((QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1)) 
                                                                              << 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_imm))) 
                                                                             >> 0x1fU))))
                                                               ? 0xffffffffU
                                                               : 0U))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                                                               << 
                                                               (0x1fU 
                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_imm)))))));
        __Vtemp_h3ad3f24b__0[1U] = (IData)(((((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (0xffffffffULL 
                                                                           & (((QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1)) 
                                                                               << 
                                                                               (0x1fU 
                                                                                & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_imm))) 
                                                                              >> 0x1fU))))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                                                                << 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_imm)))))) 
                                            >> 0x20U));
    } else if ((0x23U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h3ad3f24b__0[0U] = __Vtemp_h59f7e8df__0[0U];
        __Vtemp_h3ad3f24b__0[1U] = __Vtemp_h59f7e8df__0[1U];
    } else if ((0x20U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h3ad3f24b__0[0U] = (IData)(vlSelf->Top__DOT__exu__DOT___result_T_91);
        __Vtemp_h3ad3f24b__0[1U] = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_91 
                                            >> 0x20U));
    } else {
        __Vtemp_h3ad3f24b__0[0U] = vlSelf->Top__DOT__exu__DOT___result_T_238[0U];
        __Vtemp_h3ad3f24b__0[1U] = vlSelf->Top__DOT__exu__DOT___result_T_238[1U];
    }
    if ((0x2cU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        vlSelf->Top__DOT__exu__DOT___result_T_256[0U] 
            = (IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_imm 
                       ^ vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1));
        vlSelf->Top__DOT__exu__DOT___result_T_256[1U] 
            = (IData)(((vlSelf->Top__DOT__exu__DOT__de_bus_r_imm 
                        ^ vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                       >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_256[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_256[3U] = 0U;
    } else if ((0x2bU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        vlSelf->Top__DOT__exu__DOT___result_T_256[0U] 
            = (IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_imm 
                       & vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1));
        vlSelf->Top__DOT__exu__DOT___result_T_256[1U] 
            = (IData)(((vlSelf->Top__DOT__exu__DOT__de_bus_r_imm 
                        & vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                       >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_256[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_256[3U] = 0U;
    } else if ((0x2aU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        vlSelf->Top__DOT__exu__DOT___result_T_256[0U] 
            = (vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1 
               < vlSelf->Top__DOT__exu__DOT__de_bus_r_imm);
        vlSelf->Top__DOT__exu__DOT___result_T_256[1U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_256[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_256[3U] = 0U;
    } else if ((0x29U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        vlSelf->Top__DOT__exu__DOT___result_T_256[0U] 
            = VL_LTS_IQQ(64, vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1, vlSelf->Top__DOT__exu__DOT__de_bus_r_imm);
        vlSelf->Top__DOT__exu__DOT___result_T_256[1U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_256[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_256[3U] = 0U;
    } else if ((0x26U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        vlSelf->Top__DOT__exu__DOT___result_T_256[0U] 
            = (IData)((((QData)((IData)(((vlSelf->Top__DOT__exu__DOT___result_T_130 
                                          >> 0x1fU)
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_130))));
        vlSelf->Top__DOT__exu__DOT___result_T_256[1U] 
            = (IData)(((((QData)((IData)(((vlSelf->Top__DOT__exu__DOT___result_T_130 
                                           >> 0x1fU)
                                           ? 0xffffffffU
                                           : 0U))) 
                         << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_130))) 
                       >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_256[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_256[3U] = 0U;
    } else {
        vlSelf->Top__DOT__exu__DOT___result_T_256[0U] 
            = __Vtemp_h3ad3f24b__0[0U];
        vlSelf->Top__DOT__exu__DOT___result_T_256[1U] 
            = __Vtemp_h3ad3f24b__0[1U];
        if ((0x25U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_256[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_256[3U] = 0U;
        } else if ((0x24U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_256[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_256[3U] = 0U;
        } else if ((0x23U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_256[2U] 
                = __Vtemp_h59f7e8df__0[2U];
            vlSelf->Top__DOT__exu__DOT___result_T_256[3U] 
                = (0x7fffffffU & __Vtemp_h59f7e8df__0[3U]);
        } else if ((0x20U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            vlSelf->Top__DOT__exu__DOT___result_T_256[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_256[3U] 
                = (0x7fffffffU & 0U);
        } else {
            vlSelf->Top__DOT__exu__DOT___result_T_256[2U] 
                = vlSelf->Top__DOT__exu__DOT___result_T_238[2U];
            vlSelf->Top__DOT__exu__DOT___result_T_256[3U] 
                = (0x7fffffffU & vlSelf->Top__DOT__exu__DOT___result_T_238[3U]);
        }
    }
    VTop___024unit____Vdpiimwrap_ebreak_TOP____024unit(
                                                       (((0x3bU 
                                                          == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP)) 
                                                         & (IData)(vlSelf->Top__DOT__idu__DOT__ds_valid))
                                                         ? 1U
                                                         : 0U));
    VTop___024unit____Vdpiimwrap_skip_ref_TOP____024unit(
                                                         (0x3fU 
                                                          == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP)));
    VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit((QData)((IData)(vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst)));
    VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit((QData)((IData)(vlSelf->Top__DOT__idu__DOT__fd_bus_r_pc)));
    VTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf);
    if ((0x3fU == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP))) {
        vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_io_rdata_MPORT_addr = 4U;
        vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers_io_rdata1_MPORT_addr = 0x11U;
    } else {
        vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_io_rdata_MPORT_addr 
            = ((0x40U == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP))
                ? 2U : (IData)(vlSelf->Top__DOT__idu__DOT__csr_index));
        vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers_io_rdata1_MPORT_addr 
            = (0x1fU & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                        >> 0xfU));
    }
    vlSelf->Top__DOT__idu__DOT___br_taken_cancel_T 
        = ((0x3fU == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP)) 
           | (0x40U == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP)));
    vlSelf->Top__DOT__ifu__DOT___GEN_9 = (((~ (IData)(vlSelf->Top__DOT__ifu_io_ds_allowin)) 
                                           & (IData)(vlSelf->Top__DOT__ifu_io_inst_sram_data_ok)) 
                                          | (IData)(vlSelf->Top__DOT__ifu__DOT__inst_valid));
    vlSelf->Top__DOT__ifu__DOT___fs_allow_in_T_1 = 
        ((IData)(vlSelf->Top__DOT__ifu__DOT__fs_ready_go) 
         & (IData)(vlSelf->Top__DOT__ifu_io_ds_allowin));
    vlSelf->Top__DOT__exu__DOT__div__DOT___S_T_1 = 
        ((((QData)((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__S_hi)) 
           << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__exu__DOT__div__DOT__S_lo))) 
         | vlSelf->Top__DOT__exu__DOT__div__DOT__S);
    vlSelf->Top__DOT__idu__DOT___br_target_T_1 = ((QData)((IData)(vlSelf->Top__DOT__idu__DOT__fd_bus_r_pc)) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    vlSelf->Top__DOT__idu__DOT___io_de_bus_imm_T_9[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->Top__DOT__idu__DOT___io_de_bus_imm_T_9[0U]))));
    __Vtemp_h672e99e6__0[1U] = ((0x3eU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                 ? (IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_csr_rdata 
                                            >> 0x20U))
                                 : ((0x3dU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                     ? (IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_csr_rdata 
                                                >> 0x20U))
                                     : ((0x3cU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                         ? (IData)(
                                                   (vlSelf->Top__DOT__exu__DOT__de_bus_r_csr_rdata 
                                                    >> 0x20U))
                                         : ((0x28U 
                                             == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                             ? (IData)(
                                                       ((((QData)((IData)(
                                                                          ((vlSelf->Top__DOT__exu__DOT___result_T_153 
                                                                            >> 0x1fU)
                                                                            ? 0xffffffffU
                                                                            : 0U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_153))) 
                                                        >> 0x20U))
                                             : ((0x27U 
                                                 == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                 ? (IData)(
                                                           (VL_SHIFTRS_QQI(64,64,6, vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1, 
                                                                           (0x3fU 
                                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_imm))) 
                                                            >> 0x20U))
                                                 : 
                                                ((0x2dU 
                                                  == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                  ? (IData)(
                                                            ((vlSelf->Top__DOT__exu__DOT__de_bus_r_imm 
                                                              | vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1) 
                                                             >> 0x20U))
                                                  : 
                                                 vlSelf->Top__DOT__exu__DOT___result_T_256[1U]))))));
    __Vtemp_h191046f4__0[0U] = ((0x2eU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                 ? (IData)(vlSelf->Top__DOT__exu__DOT___result_T_91)
                                 : ((0x3eU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                     ? (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_csr_rdata)
                                     : ((0x3dU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                         ? (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_csr_rdata)
                                         : ((0x3cU 
                                             == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                             ? (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_csr_rdata)
                                             : ((0x28U 
                                                 == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                 ? (IData)(
                                                           (((QData)((IData)(
                                                                             ((vlSelf->Top__DOT__exu__DOT___result_T_153 
                                                                               >> 0x1fU)
                                                                               ? 0xffffffffU
                                                                               : 0U))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->Top__DOT__exu__DOT___result_T_153))))
                                                 : 
                                                ((0x27U 
                                                  == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                  ? (IData)(
                                                            VL_SHIFTRS_QQI(64,64,6, vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1, 
                                                                           (0x3fU 
                                                                            & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_imm))))
                                                  : 
                                                 ((0x2dU 
                                                   == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))
                                                   ? (IData)(
                                                             (vlSelf->Top__DOT__exu__DOT__de_bus_r_imm 
                                                              | vlSelf->Top__DOT__exu__DOT__de_bus_r_rdata1))
                                                   : 
                                                  vlSelf->Top__DOT__exu__DOT___result_T_256[0U])))))));
    if ((0x3aU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h43b41592__0[1U] = (IData)(((4ULL + (QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_ds_pc))) 
                                            >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_282[0U] 
            = (IData)((4ULL + (QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_ds_pc))));
        vlSelf->Top__DOT__exu__DOT___result_T_282[1U] 
            = __Vtemp_h43b41592__0[1U];
        vlSelf->Top__DOT__exu__DOT___result_T_282[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_282[3U] = 0U;
    } else if ((0x39U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h43b41592__0[1U] = (IData)((((QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_ds_pc)) 
                                             + vlSelf->Top__DOT__exu__DOT__de_bus_r_imm) 
                                            >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_282[0U] 
            = (IData)(((QData)((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_ds_pc)) 
                       + vlSelf->Top__DOT__exu__DOT__de_bus_r_imm));
        vlSelf->Top__DOT__exu__DOT___result_T_282[1U] 
            = __Vtemp_h43b41592__0[1U];
        vlSelf->Top__DOT__exu__DOT___result_T_282[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_282[3U] = 0U;
    } else if ((0x38U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h43b41592__0[1U] = (IData)((vlSelf->Top__DOT__exu__DOT__de_bus_r_imm 
                                            >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_282[0U] 
            = (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_imm);
        vlSelf->Top__DOT__exu__DOT___result_T_282[1U] 
            = __Vtemp_h43b41592__0[1U];
        vlSelf->Top__DOT__exu__DOT___result_T_282[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_282[3U] = 0U;
    } else if ((0x2fU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h43b41592__0[1U] = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_91 
                                            >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_282[0U] 
            = (IData)(vlSelf->Top__DOT__exu__DOT___result_T_91);
        vlSelf->Top__DOT__exu__DOT___result_T_282[1U] 
            = __Vtemp_h43b41592__0[1U];
        vlSelf->Top__DOT__exu__DOT___result_T_282[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_282[3U] = 0U;
    } else if ((0x30U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h43b41592__0[1U] = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_91 
                                            >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_282[0U] 
            = (IData)(vlSelf->Top__DOT__exu__DOT___result_T_91);
        vlSelf->Top__DOT__exu__DOT___result_T_282[1U] 
            = __Vtemp_h43b41592__0[1U];
        vlSelf->Top__DOT__exu__DOT___result_T_282[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_282[3U] = 0U;
    } else if ((0x31U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
        __Vtemp_h43b41592__0[1U] = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_91 
                                            >> 0x20U));
        vlSelf->Top__DOT__exu__DOT___result_T_282[0U] 
            = (IData)(vlSelf->Top__DOT__exu__DOT___result_T_91);
        vlSelf->Top__DOT__exu__DOT___result_T_282[1U] 
            = __Vtemp_h43b41592__0[1U];
        vlSelf->Top__DOT__exu__DOT___result_T_282[2U] = 0U;
        vlSelf->Top__DOT__exu__DOT___result_T_282[3U] = 0U;
    } else {
        vlSelf->Top__DOT__exu__DOT___result_T_282[0U] 
            = __Vtemp_h191046f4__0[0U];
        if ((0x2eU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
            __Vtemp_h43b41592__0[1U] = (IData)((vlSelf->Top__DOT__exu__DOT___result_T_91 
                                                >> 0x20U));
            vlSelf->Top__DOT__exu__DOT___result_T_282[1U] 
                = __Vtemp_h43b41592__0[1U];
            vlSelf->Top__DOT__exu__DOT___result_T_282[2U] = 0U;
            vlSelf->Top__DOT__exu__DOT___result_T_282[3U] = 0U;
        } else {
            __Vtemp_h43b41592__0[1U] = __Vtemp_h672e99e6__0[1U];
            vlSelf->Top__DOT__exu__DOT___result_T_282[1U] 
                = __Vtemp_h43b41592__0[1U];
            if ((0x3eU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
                vlSelf->Top__DOT__exu__DOT___result_T_282[2U] = 0U;
                vlSelf->Top__DOT__exu__DOT___result_T_282[3U] = 0U;
            } else if ((0x3dU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
                vlSelf->Top__DOT__exu__DOT___result_T_282[2U] = 0U;
                vlSelf->Top__DOT__exu__DOT___result_T_282[3U] = 0U;
            } else if ((0x3cU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
                vlSelf->Top__DOT__exu__DOT___result_T_282[2U] = 0U;
                vlSelf->Top__DOT__exu__DOT___result_T_282[3U] = 0U;
            } else if ((0x28U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
                vlSelf->Top__DOT__exu__DOT___result_T_282[2U] = 0U;
                vlSelf->Top__DOT__exu__DOT___result_T_282[3U] = 0U;
            } else if ((0x27U == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
                vlSelf->Top__DOT__exu__DOT___result_T_282[2U] = 0U;
                vlSelf->Top__DOT__exu__DOT___result_T_282[3U] = 0U;
            } else if ((0x2dU == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_OP))) {
                vlSelf->Top__DOT__exu__DOT___result_T_282[2U] = 0U;
                vlSelf->Top__DOT__exu__DOT___result_T_282[3U] = 0U;
            } else {
                vlSelf->Top__DOT__exu__DOT___result_T_282[2U] 
                    = vlSelf->Top__DOT__exu__DOT___result_T_256[2U];
                vlSelf->Top__DOT__exu__DOT___result_T_282[3U] 
                    = vlSelf->Top__DOT__exu__DOT___result_T_256[3U];
            }
        }
    }
    vlSelf->Top__DOT__idu__DOT__CSR_io_rdata = (((IData)(vlSelf->Top__DOT__idu__DOT___br_taken_cancel_T) 
                                                 | (0U 
                                                    != (IData)(vlSelf->Top__DOT__idu__DOT__csr_index)))
                                                 ? 
                                                ((4U 
                                                  >= (IData)(vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_io_rdata_MPORT_addr))
                                                  ? 
                                                 vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
                                                 [vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_io_rdata_MPORT_addr]
                                                  : 0ULL)
                                                 : 0ULL);
    vlSelf->Top__DOT__ifu__DOT__fs_allow_in = (1U & 
                                               ((~ (IData)(vlSelf->Top__DOT__ifu__DOT__fs_valid)) 
                                                | (IData)(vlSelf->Top__DOT__ifu__DOT___fs_allow_in_T_1)));
    vlSelf->Top__DOT__idu__DOT__rf_rdata2 = (((IData)(vlSelf->Top__DOT__idu__DOT___es_rawblock_T_1) 
                                              & ((0U 
                                                  != (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_dest)) 
                                                 & ((IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_gr_we) 
                                                    & (IData)(vlSelf->Top__DOT__exu__DOT__es_valid))))
                                              ? (((QData)((IData)(
                                                                  vlSelf->Top__DOT__exu__DOT___result_T_282[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->Top__DOT__exu__DOT___result_T_282[0U])))
                                              : (((IData)(vlSelf->Top__DOT__idu__DOT___ms_rawblock_T_1) 
                                                  & (IData)(vlSelf->Top__DOT__idu__DOT____VdfgTmp_hfdb26f4c__0))
                                                  ? vlSelf->Top__DOT__idu_io_ms_dest_valid_ms_forward_data
                                                  : 
                                                 ((((0x1fU 
                                                     & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSelf->Top__DOT__wbu__DOT__mw_bus_r_dest)) 
                                                   & (IData)(vlSelf->Top__DOT__idu__DOT____VdfgTmp_h053f3f0d__0))
                                                   ? vlSelf->Top__DOT__wbu__DOT__mw_bus_r_final_result
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                        >> 0x14U)))
                                                    ? 0ULL
                                                    : 
                                                   vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__idu__DOT__fd_bus_r_inst 
                                                       >> 0x14U))]))));
    vlSelf->Top__DOT__idu__DOT__rf_rdata1 = ((((IData)(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers_io_rdata1_MPORT_addr) 
                                               == (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_dest)) 
                                              & ((0U 
                                                  != (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_dest)) 
                                                 & ((IData)(vlSelf->Top__DOT__exu__DOT__es_valid) 
                                                    & ((IData)(vlSelf->Top__DOT__exu__DOT__es_ready_go) 
                                                       & (IData)(vlSelf->Top__DOT__exu__DOT__de_bus_r_gr_we)))))
                                              ? (((QData)((IData)(
                                                                  vlSelf->Top__DOT__exu__DOT___result_T_282[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->Top__DOT__exu__DOT___result_T_282[0U])))
                                              : ((((IData)(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers_io_rdata1_MPORT_addr) 
                                                   == (IData)(vlSelf->Top__DOT__mem__DOT__em_bus_r_dest)) 
                                                  & (IData)(vlSelf->Top__DOT__idu__DOT____VdfgTmp_hfdb26f4c__0))
                                                  ? vlSelf->Top__DOT__idu_io_ms_dest_valid_ms_forward_data
                                                  : 
                                                 ((((IData)(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers_io_rdata1_MPORT_addr) 
                                                    == (IData)(vlSelf->Top__DOT__wbu__DOT__mw_bus_r_dest)) 
                                                   & (IData)(vlSelf->Top__DOT__idu__DOT____VdfgTmp_h053f3f0d__0))
                                                   ? vlSelf->Top__DOT__wbu__DOT__mw_bus_r_final_result
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers_io_rdata1_MPORT_addr))
                                                    ? 0ULL
                                                    : 
                                                   vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
                                                   [vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers_io_rdata1_MPORT_addr]))));
    vlSelf->Top__DOT__ifu_io_inst_sram_req = ((~ (IData)(vlSelf->reset)) 
                                              & ((~ 
                                                  ((IData)(vlSelf->Top__DOT__idu__DOT__rawblock) 
                                                   | (IData)(vlSelf->Top__DOT__ifu__DOT__mid_handshake_inst))) 
                                                 & (IData)(vlSelf->Top__DOT__ifu__DOT__fs_allow_in)));
    if ((0x1bU == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP))) {
        vlSelf->Top__DOT__idu__DOT___br_target_T_32 
            = (0xfffffffffffffffeULL & (vlSelf->Top__DOT__idu__DOT__rf_rdata1 
                                        + (((QData)((IData)(
                                                            vlSelf->Top__DOT__idu__DOT___io_de_bus_imm_T_9[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->Top__DOT__idu__DOT___io_de_bus_imm_T_9[0U])))));
        vlSelf->Top__DOT__idu__DOT__br_taken = vlSelf->Top__DOT__idu__DOT__ds_valid;
    } else if ((0x3aU == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP))) {
        vlSelf->Top__DOT__idu__DOT___br_target_T_32 
            = vlSelf->Top__DOT__idu__DOT___br_target_T_1;
        vlSelf->Top__DOT__idu__DOT__br_taken = vlSelf->Top__DOT__idu__DOT__ds_valid;
    } else if ((0x35U == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP))) {
        vlSelf->Top__DOT__idu__DOT___br_target_T_32 
            = vlSelf->Top__DOT__idu__DOT___br_target_T_1;
        vlSelf->Top__DOT__idu__DOT__br_taken = ((vlSelf->Top__DOT__idu__DOT__rf_rdata1 
                                                 >= vlSelf->Top__DOT__idu__DOT__rf_rdata2) 
                                                & (IData)(vlSelf->Top__DOT__idu__DOT__ds_valid));
    } else if ((0x37U == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP))) {
        vlSelf->Top__DOT__idu__DOT___br_target_T_32 
            = vlSelf->Top__DOT__idu__DOT___br_target_T_1;
        vlSelf->Top__DOT__idu__DOT__br_taken = ((vlSelf->Top__DOT__idu__DOT__rf_rdata1 
                                                 < vlSelf->Top__DOT__idu__DOT__rf_rdata2) 
                                                & (IData)(vlSelf->Top__DOT__idu__DOT__ds_valid));
    } else if ((0x34U == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP))) {
        vlSelf->Top__DOT__idu__DOT___br_target_T_32 
            = vlSelf->Top__DOT__idu__DOT___br_target_T_1;
        vlSelf->Top__DOT__idu__DOT__br_taken = (VL_GTES_IQQ(64, vlSelf->Top__DOT__idu__DOT__rf_rdata1, vlSelf->Top__DOT__idu__DOT__rf_rdata2) 
                                                & (IData)(vlSelf->Top__DOT__idu__DOT__ds_valid));
    } else if ((0x36U == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP))) {
        vlSelf->Top__DOT__idu__DOT___br_target_T_32 
            = vlSelf->Top__DOT__idu__DOT___br_target_T_1;
        vlSelf->Top__DOT__idu__DOT__br_taken = (VL_LTS_IQQ(64, vlSelf->Top__DOT__idu__DOT__rf_rdata1, vlSelf->Top__DOT__idu__DOT__rf_rdata2) 
                                                & (IData)(vlSelf->Top__DOT__idu__DOT__ds_valid));
    } else if ((0x33U == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP))) {
        vlSelf->Top__DOT__idu__DOT___br_target_T_32 
            = vlSelf->Top__DOT__idu__DOT___br_target_T_1;
        vlSelf->Top__DOT__idu__DOT__br_taken = ((vlSelf->Top__DOT__idu__DOT__rf_rdata1 
                                                 != vlSelf->Top__DOT__idu__DOT__rf_rdata2) 
                                                & (IData)(vlSelf->Top__DOT__idu__DOT__ds_valid));
    } else if ((0x32U == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP))) {
        vlSelf->Top__DOT__idu__DOT___br_target_T_32 
            = vlSelf->Top__DOT__idu__DOT___br_target_T_1;
        vlSelf->Top__DOT__idu__DOT__br_taken = ((vlSelf->Top__DOT__idu__DOT__rf_rdata1 
                                                 == vlSelf->Top__DOT__idu__DOT__rf_rdata2) 
                                                & (IData)(vlSelf->Top__DOT__idu__DOT__ds_valid));
    } else {
        vlSelf->Top__DOT__idu__DOT___br_target_T_32 = 0ULL;
        vlSelf->Top__DOT__idu__DOT__br_taken = 0U;
    }
    vlSelf->Top__DOT__ifu__DOT___GEN_7 = (((IData)(vlSelf->Top__DOT__ifu_io_inst_sram_addr_ok) 
                                           & ((~ (IData)(vlSelf->Top__DOT__ifu__DOT__fs_allow_in)) 
                                              & (IData)(vlSelf->Top__DOT__ifu_io_inst_sram_req))) 
                                          | ((~ (IData)(vlSelf->Top__DOT__ifu__DOT__fs_allow_in)) 
                                             & (IData)(vlSelf->Top__DOT__ifu__DOT__mid_handshake_inst)));
    vlSelf->Top__DOT__axi__DOT___GEN_7 = (((~ (IData)(vlSelf->Top__DOT__mem_io_data_sram_req)) 
                                           & ((IData)(vlSelf->Top__DOT__ifu_io_inst_sram_req) 
                                              & (IData)(vlSelf->Top__DOT__axi__DOT____VdfgTmp_h0ac213f2__0))) 
                                          | ((~ (IData)(vlSelf->Top__DOT__axi__DOT___T_16)) 
                                             & (IData)(vlSelf->Top__DOT__axi__DOT__reading_inst_sram)));
    vlSelf->Top__DOT__ifu__DOT__prefs_ready_go = ((IData)(vlSelf->Top__DOT__ifu_io_inst_sram_req) 
                                                  & (IData)(vlSelf->Top__DOT__ifu_io_inst_sram_addr_ok));
    vlSelf->Top__DOT__idu__DOT__br_taken_cancel = (
                                                   (~ (IData)(vlSelf->Top__DOT__idu__DOT__rawblock)) 
                                                   & ((IData)(vlSelf->Top__DOT__idu__DOT___br_taken_cancel_T) 
                                                      | (IData)(vlSelf->Top__DOT__idu__DOT__br_taken)));
    vlSelf->Top__DOT__ifu__DOT___final_next_pc_T = 
        ((IData)(vlSelf->Top__DOT__ifu__DOT__br_taken_R)
          ? vlSelf->Top__DOT__ifu__DOT__next_pc_R : (QData)((IData)(
                                                                    ((0x3fU 
                                                                      == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP))
                                                                      ? vlSelf->Top__DOT__idu__DOT__CSR_io_rdata
                                                                      : 
                                                                     ((0x40U 
                                                                       == (IData)(vlSelf->Top__DOT__idu_io_de_bus_OP))
                                                                       ? 
                                                                      (4ULL 
                                                                       + vlSelf->Top__DOT__idu__DOT__CSR_io_rdata)
                                                                       : (QData)((IData)(
                                                                                ((IData)(vlSelf->Top__DOT__idu__DOT__br_taken)
                                                                                 ? (IData)(vlSelf->Top__DOT__idu__DOT___br_target_T_32)
                                                                                 : 
                                                                                ((IData)(4U) 
                                                                                + (IData)(vlSelf->Top__DOT__ifu__DOT__fs_pc))))))))));
    vlSelf->Top__DOT__ifu__DOT___GEN_1 = (((~ (IData)(vlSelf->Top__DOT__ifu__DOT__prefs_ready_go)) 
                                           & (IData)(vlSelf->Top__DOT__idu__DOT__br_taken)) 
                                          | (IData)(vlSelf->Top__DOT__ifu__DOT__br_taken_R));
}

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__1(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_ha14bfab8__0;
    VlWide<5>/*159:0*/ __Vtemp_he961893c__0;
    VlWide<5>/*159:0*/ __Vtemp_h69c4b881__0;
    VlWide<5>/*159:0*/ __Vtemp_h225ffbbd__0;
    VlWide<5>/*159:0*/ __Vtemp_hc77b0000__0;
    VlWide<5>/*159:0*/ __Vtemp_h73db1629__0;
    VlWide<5>/*159:0*/ __Vtemp_h938ee414__0;
    VlWide<5>/*159:0*/ __Vtemp_h96a87bbf__0;
    VlWide<5>/*159:0*/ __Vtemp_h40bdfb3a__0;
    // Body
    __Vtemp_ha14bfab8__0[0U] = vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_lo[0U];
    __Vtemp_ha14bfab8__0[1U] = vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_lo[1U];
    __Vtemp_ha14bfab8__0[2U] = ((vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_hi[0U] 
                                 << 2U) | vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_lo[2U]);
    __Vtemp_ha14bfab8__0[3U] = ((vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_hi[0U] 
                                 >> 0x1eU) | (vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_hi[1U] 
                                              << 2U));
    __Vtemp_ha14bfab8__0[4U] = ((vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_hi[1U] 
                                 >> 0x1eU) | (vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__io_out_hi[2U] 
                                              << 2U));
    VL_ADD_W(5, __Vtemp_he961893c__0, __Vtemp_ha14bfab8__0, vlSelf->Top__DOT__exu__DOT__mul__DOT__result);
    __Vtemp_h69c4b881__0[0U] = ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3) 
                                | (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5));
    __Vtemp_h69c4b881__0[1U] = 0U;
    __Vtemp_h69c4b881__0[2U] = 0U;
    __Vtemp_h69c4b881__0[3U] = 0U;
    __Vtemp_h69c4b881__0[4U] = 0U;
    VL_ADD_W(5, __Vtemp_h225ffbbd__0, __Vtemp_he961893c__0, __Vtemp_h69c4b881__0);
    vlSelf->Top__DOT__exu__DOT__mul__DOT___result_T_4[0U] 
        = __Vtemp_h225ffbbd__0[0U];
    vlSelf->Top__DOT__exu__DOT__mul__DOT___result_T_4[1U] 
        = __Vtemp_h225ffbbd__0[1U];
    vlSelf->Top__DOT__exu__DOT__mul__DOT___result_T_4[2U] 
        = __Vtemp_h225ffbbd__0[2U];
    vlSelf->Top__DOT__exu__DOT__mul__DOT___result_T_4[3U] 
        = __Vtemp_h225ffbbd__0[3U];
    vlSelf->Top__DOT__exu__DOT__mul__DOT___result_T_4[4U] 
        = (0xfU & __Vtemp_h225ffbbd__0[4U]);
    __Vtemp_hc77b0000__0[0U] = vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[0U];
    __Vtemp_hc77b0000__0[1U] = vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[1U];
    __Vtemp_hc77b0000__0[2U] = vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[2U];
    __Vtemp_hc77b0000__0[3U] = 0U;
    __Vtemp_hc77b0000__0[4U] = 0U;
    __Vtemp_h73db1629__0[0U] = vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_lo[0U];
    __Vtemp_h73db1629__0[1U] = vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_lo[1U];
    __Vtemp_h73db1629__0[2U] = ((vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_hi[0U] 
                                 << 2U) | vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_lo[2U]);
    __Vtemp_h73db1629__0[3U] = ((vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_hi[0U] 
                                 >> 0x1eU) | (vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_hi[1U] 
                                              << 2U));
    __Vtemp_h73db1629__0[4U] = ((vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_hi[1U] 
                                 >> 0x1eU) | (vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__io_out_hi[2U] 
                                              << 2U));
    VL_ADD_W(5, __Vtemp_h938ee414__0, __Vtemp_hc77b0000__0, __Vtemp_h73db1629__0);
    __Vtemp_h96a87bbf__0[0U] = ((IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_double_negative_T_3) 
                                | (IData)(vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen.__PVT__BOOTH_S__DOT___io_sel_negative_T_5));
    __Vtemp_h96a87bbf__0[1U] = 0U;
    __Vtemp_h96a87bbf__0[2U] = 0U;
    __Vtemp_h96a87bbf__0[3U] = 0U;
    __Vtemp_h96a87bbf__0[4U] = 0U;
    VL_ADD_W(5, __Vtemp_h40bdfb3a__0, __Vtemp_h938ee414__0, __Vtemp_h96a87bbf__0);
    if (vlSelf->Top__DOT__exu__DOT__mul_1__DOT__start) {
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[0U] 
            = __Vtemp_h40bdfb3a__0[0U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[1U] 
            = __Vtemp_h40bdfb3a__0[1U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[2U] 
            = __Vtemp_h40bdfb3a__0[2U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[3U] 
            = __Vtemp_h40bdfb3a__0[3U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[4U] 
            = (0xfU & __Vtemp_h40bdfb3a__0[4U]);
    } else {
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[0U] 
            = vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[0U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[1U] 
            = vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[1U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[2U] 
            = vlSelf->Top__DOT__exu__DOT__mul_1__DOT__result[2U];
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[3U] = 0U;
        vlSelf->Top__DOT__exu__DOT__mul_1__DOT___result_T_5[4U] = 0U;
    }
}

void VTop_BOOTH_gen___nba_sequent__TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen__0(VTop_BOOTH_gen* vlSelf);
void VTop_BOOTH_gen___nba_sequent__TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen__0(VTop_BOOTH_gen* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VTop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VTop_BOOTH_gen___nba_sequent__TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen__0((&vlSymsp->TOP__Top__DOT__exu__DOT__mul__DOT__BOOTH_gen));
        VTop_BOOTH_gen___nba_sequent__TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen__0((&vlSymsp->TOP__Top__DOT__exu__DOT__mul_1__DOT__BOOTH_gen));
        VTop___024root___stl_sequent__TOP__1(vlSelf);
    }
}
