// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTop__Syms.h"
#include "VTop___024root.h"

void VTop___024unit____Vdpiimwrap_ebreak_TOP____024unit(IData/*31:0*/ flag);

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial__TOP\n"); );
    // Body
    VTop___024unit____Vdpiimwrap_ebreak_TOP____024unit(0U);
    vlSelf->Top__DOT__dpi__DOT__rf[0U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[1U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[2U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[3U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[4U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[5U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[6U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[7U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[8U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[9U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0xaU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0xbU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0xcU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0xdU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0xeU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0xfU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x10U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x11U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x12U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x13U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x14U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x15U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x16U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x17U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x18U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x19U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x1aU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x1bU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x1cU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x1dU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x1eU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x1fU] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x20U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x21U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x22U] = 0ULL;
    vlSelf->Top__DOT__dpi__DOT__rf[0x23U] = 0ULL;
    vlSelf->io_op = 0x7fU;
    vlSelf->io_in_WB = 0U;
    vlSelf->io_wb_pc = 0U;
    vlSelf->io_wb_inst = 0U;
    vlSelf->io_ds_pc = 0U;
    vlSelf->io_ld_type = 0U;
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

void VTop___024unit____Vdpiimwrap_skip_ref_TOP____024unit(IData/*31:0*/ eval);
void VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit(QData/*63:0*/ inst);
void VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);
void VTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 36> &a);
extern const VlUnpacked<CData/*2:0*/, 64> VTop__ConstPool__TABLE_h3ceec7af_0;
extern const VlUnpacked<CData/*2:0*/, 128> VTop__ConstPool__TABLE_h6a5d14e0_0;

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    // Body
    VTop___024unit____Vdpiimwrap_skip_ref_TOP____024unit(0U);
    VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit(0ULL);
    VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(0ULL);
    VTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Top__DOT__dpi__DOT__rf);
    vlSelf->io_fs_pc = (IData)(vlSelf->Top__DOT__ifu__DOT__fs_pc);
    vlSelf->Top__DOT__ifu__DOT___nextpc_T_4 = (QData)((IData)(
                                                              ((IData)(4U) 
                                                               + (IData)(vlSelf->Top__DOT__ifu__DOT__fs_pc))));
    vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers_io_rdata2_MPORT_data 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0U];
    vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_1_data 
        = vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
        [0U];
    vlSelf->io_mem_result = ((((1U & (IData)((vlSelf->Top__DOT__axi_mem_rdata 
                                              >> 7U)))
                                ? 0xffffffffffffffULL
                                : 0ULL) << 8U) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->Top__DOT__axi_mem_rdata)))));
    vlSelf->Top__DOT__axi__DOT___GEN_2 = ((3U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
                                           ? 0U : (IData)(vlSelf->Top__DOT__axi__DOT__rstate));
    vlSelf->Top__DOT__axi__DOT___GEN_15 = ((3U == (IData)(vlSelf->Top__DOT__axi__DOT__wstate))
                                            ? ((4U 
                                                == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))
                                                ? 0U
                                                : (IData)(vlSelf->Top__DOT__axi__DOT__wstate))
                                            : (IData)(vlSelf->Top__DOT__axi__DOT__wstate));
    vlSelf->__Vtableidx1 = (((2U == (IData)(vlSelf->Top__DOT__axi__DOT__rstate)) 
                             << 5U) | (((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state)) 
                                        << 4U) | ((
                                                   (1U 
                                                    == (IData)(vlSelf->Top__DOT__axi__DOT__rstate)) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))));
    vlSelf->Top__DOT__axi_mem__DOT__read_next_state 
        = VTop__ConstPool__TABLE_h3ceec7af_0[vlSelf->__Vtableidx1];
    vlSelf->__Vtableidx2 = (((1U == (IData)(vlSelf->Top__DOT__axi__DOT__wstate)) 
                             << 6U) | (((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state)) 
                                        << 5U) | ((
                                                   (2U 
                                                    == (IData)(vlSelf->Top__DOT__axi__DOT__wstate)) 
                                                   << 4U) 
                                                  | (((3U 
                                                       == (IData)(vlSelf->Top__DOT__axi__DOT__wstate)) 
                                                      << 3U) 
                                                     | (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state)))));
    vlSelf->Top__DOT__axi_mem__DOT__write_next_state 
        = VTop__ConstPool__TABLE_h6a5d14e0_0[vlSelf->__Vtableidx2];
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
    VTop___024unit____Vdpiimwrap_skip_ref_TOP____024unit(0U);
    VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit(0ULL);
    VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(0ULL);
    VTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf);
}
