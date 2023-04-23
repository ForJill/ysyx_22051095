// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTop.h"
#include "VTop__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VTop::VTop(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTop__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_ctrl_RegWen{vlSymsp->TOP.io_ctrl_RegWen}
    , io_ctrl_OP{vlSymsp->TOP.io_ctrl_OP}
    , io_ctrl_J_JUMP{vlSymsp->TOP.io_ctrl_J_JUMP}
    , io_ctrl_MemWen{vlSymsp->TOP.io_ctrl_MemWen}
    , io_ctrl_wmask{vlSymsp->TOP.io_ctrl_wmask}
    , io_ctrl_MemLoad{vlSymsp->TOP.io_ctrl_MemLoad}
    , io_ctrl_csr_wen{vlSymsp->TOP.io_ctrl_csr_wen}
    , io_ctrl_E_JUMP{vlSymsp->TOP.io_ctrl_E_JUMP}
    , io_rd{vlSymsp->TOP.io_rd}
    , io_op{vlSymsp->TOP.io_op}
    , io_MemWen{vlSymsp->TOP.io_MemWen}
    , io_MemLoad{vlSymsp->TOP.io_MemLoad}
    , io_is_b{vlSymsp->TOP.io_is_b}
    , io_wmask{vlSymsp->TOP.io_wmask}
    , io_is_e{vlSymsp->TOP.io_is_e}
    , io_is_csr{vlSymsp->TOP.io_is_csr}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_pc{vlSymsp->TOP.io_pc}
    , io_resultALU{vlSymsp->TOP.io_resultALU}
    , io_rs1{vlSymsp->TOP.io_rs1}
    , io_rs2{vlSymsp->TOP.io_rs2}
    , io_imm{vlSymsp->TOP.io_imm}
    , io_rdata{vlSymsp->TOP.io_rdata}
    , io_fmemwdata{vlSymsp->TOP.io_fmemwdata}
    , io_reg17{vlSymsp->TOP.io_reg17}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTop::VTop(const char* _vcname__)
    : VTop(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTop::~VTop() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf);
#endif  // VL_DEBUG
void VTop___024root___eval_static(VTop___024root* vlSelf);
void VTop___024root___eval_initial(VTop___024root* vlSelf);
void VTop___024root___eval_settle(VTop___024root* vlSelf);
void VTop___024root___eval(VTop___024root* vlSelf);

void VTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTop___024root___eval_static(&(vlSymsp->TOP));
        VTop___024root___eval_initial(&(vlSymsp->TOP));
        VTop___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTop___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTop::eventsPending() { return false; }

uint64_t VTop::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTop::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTop___024root___eval_final(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop::final() {
    VTop___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTop::hierName() const { return vlSymsp->name(); }
const char* VTop::modelName() const { return "VTop"; }
unsigned VTop::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VTop::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTop::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
