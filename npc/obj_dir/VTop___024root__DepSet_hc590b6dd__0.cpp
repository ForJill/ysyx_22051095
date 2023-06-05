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
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->io_clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__io_clock)));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__io_clock = vlSelf->io_clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
void VTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
extern const VlUnpacked<CData/*2:0*/, 16> VTop__ConstPool__TABLE_hbfad320d_0;

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vtask_pmem_read__9__rdata;
    __Vtask_pmem_read__9__rdata = 0;
    // Body
    if ((4U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state))) {
        VTop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(0ULL, 0ULL, 0U);
    }
    if ((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))) {
        VTop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(0ULL, __Vtask_pmem_read__9__rdata);
        vlSelf->Top__DOT__axi_mem_rdata = __Vtask_pmem_read__9__rdata;
    }
    vlSelf->io_mem_result = ((((1U & (IData)((vlSelf->Top__DOT__axi_mem_rdata 
                                              >> 7U)))
                                ? 0xffffffffffffffULL
                                : 0ULL) << 8U) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->Top__DOT__axi_mem_rdata)))));
    vlSelf->Top__DOT__axi_mem__DOT__write_state = vlSelf->Top__DOT__axi_mem__DOT__write_next_state;
    vlSelf->Top__DOT__axi_mem__DOT__read_state = vlSelf->Top__DOT__axi_mem__DOT__read_next_state;
    vlSelf->__Vtableidx1 = (((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state)) 
                             << 3U) | (IData)(vlSelf->Top__DOT__axi_mem__DOT__write_state));
    vlSelf->Top__DOT__axi_mem__DOT__write_next_state 
        = VTop__ConstPool__TABLE_hbfad320d_0[vlSelf->__Vtableidx1];
    vlSelf->Top__DOT__axi_mem__DOT__read_next_state 
        = ((1U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
            ? 1U : ((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
                     ? ((2U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
                         ? 3U : 2U) : ((3U == (IData)(vlSelf->Top__DOT__axi_mem__DOT__read_state))
                                        ? 3U : 1U)));
}

void VTop___024unit____Vdpiimwrap_skip_ref_TOP____024unit(IData/*31:0*/ eval);
void VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit(QData/*63:0*/ inst);
void VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(QData/*63:0*/ pc);
void VTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(const VlUnpacked<QData/*63:0*/, 36> &a);

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__1(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__1\n"); );
    // Init
    QData/*63:0*/ __Vdlyvval__Top__DOT__idu__DOT__Registers__DOT__registers__v0;
    __Vdlyvval__Top__DOT__idu__DOT__Registers__DOT__registers__v0 = 0;
    QData/*63:0*/ __Vdlyvval__Top__DOT__idu__DOT__CSR__DOT__csr__v0;
    __Vdlyvval__Top__DOT__idu__DOT__CSR__DOT__csr__v0 = 0;
    QData/*63:0*/ __Vdlyvval__Top__DOT__idu__DOT__CSR__DOT__csr__v1;
    __Vdlyvval__Top__DOT__idu__DOT__CSR__DOT__csr__v1 = 0;
    // Body
    __Vdlyvval__Top__DOT__idu__DOT__CSR__DOT__csr__v0 
        = vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_1_data;
    __Vdlyvval__Top__DOT__idu__DOT__CSR__DOT__csr__v1 
        = vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_1_data;
    __Vdlyvval__Top__DOT__idu__DOT__Registers__DOT__registers__v0 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers_io_rdata2_MPORT_data;
    vlSelf->Top__DOT__ifu__DOT__fs_pc = ((IData)(vlSelf->reset)
                                          ? 0x80000000ULL
                                          : (QData)((IData)(vlSelf->Top__DOT__ifu__DOT___nextpc_T_4)));
    vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[0U] = __Vdlyvval__Top__DOT__idu__DOT__CSR__DOT__csr__v0;
    vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr[0U] = __Vdlyvval__Top__DOT__idu__DOT__CSR__DOT__csr__v1;
    vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers[0U] 
        = __Vdlyvval__Top__DOT__idu__DOT__Registers__DOT__registers__v0;
    vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr_MPORT_1_data 
        = vlSelf->Top__DOT__idu__DOT__CSR__DOT__csr
        [0U];
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
    vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers_io_rdata2_MPORT_data 
        = vlSelf->Top__DOT__idu__DOT__Registers__DOT__registers
        [0U];
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
    vlSelf->io_fs_pc = (IData)(vlSelf->Top__DOT__ifu__DOT__fs_pc);
    vlSelf->Top__DOT__ifu__DOT___nextpc_T_4 = (QData)((IData)(
                                                              ((IData)(4U) 
                                                               + (IData)(vlSelf->Top__DOT__ifu__DOT__fs_pc))));
    VTop___024unit____Vdpiimwrap_skip_ref_TOP____024unit(0U);
    VTop___024unit____Vdpiimwrap_get_inst_TOP____024unit(0ULL);
    VTop___024unit____Vdpiimwrap_get_pc_TOP____024unit(0ULL);
    VTop___024unit____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP____024unit(vlSelf->Top__DOT__idu__DOT__dpi__DOT__rf);
}
