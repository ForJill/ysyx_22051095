# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VTop \
	VTop___024root__DepSet_hc590b6dd__0 \
	VTop___024root__DepSet_hc590b6dd__1 \
	VTop___024root__DepSet_hc590b6dd__2 \
	VTop___024root__DepSet_h0d2e5939__0 \
	VTop___024root__DepSet_h0d2e5939__1 \
	VTop___024root__DepSet_h0d2e5939__2 \
	VTop___024root__DepSet_h0d2e5939__3 \
	VTop___024root__DepSet_h0d2e5939__4 \
	VTop___024unit__DepSet_hd7ebdb33__0 \
	VTop_BOOTH_gen__DepSet_h3f0f540c__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTop__ConstPool_0 \
	VTop___024root__Slow \
	VTop___024root__DepSet_hc590b6dd__0__Slow \
	VTop___024root__DepSet_hc590b6dd__1__Slow \
	VTop___024root__DepSet_h0d2e5939__0__Slow \
	VTop___024root__DepSet_h0d2e5939__1__Slow \
	VTop___024root__DepSet_h0d2e5939__2__Slow \
	VTop___024unit__Slow \
	VTop___024unit__DepSet_h1b4533a7__0__Slow \
	VTop_BOOTH_gen__Slow \
	VTop_BOOTH_gen__DepSet_heb597376__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTop__Dpi \
	VTop__Trace__0 \
	VTop__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTop__Syms \
	VTop__Trace__0__Slow \
	VTop__Trace__1__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
