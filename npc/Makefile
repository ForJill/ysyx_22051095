TOP = Top
BUILD_DIR = ./buildCPU
SCALA_FILE = $(shell find ./src/main/scala -name '*.scala')
TOPARGS_V = $(BUILD_DIR)/$(TOP).v
DPI_V = $(BUILD_DIR)/DPI.v
export PATH := $(PATH):$(abspath ./utils)
V_FLAGS += -Wno-fatal --cc --trace --exe --build
V_FLAGS += -I./vsrc -y ./vsrc
V_FLAGS += --top-module $(TOP)

VSRC = $(wildcard ./vsrc/*.v )
CSRC = $(wildcard ./csrc/*.cpp)
#CSRC += $(wildcard ./csrc/*.h)
override ARGS ?= --log=nemu-log.txt
override ARGS += --readelf=$(NPC_HOME)/dummy-riscv64-nemu.elf

CXXSRC = csrc/disasm.cc
CXXFLAGS = $(shell llvm-config-11 --cxxflags) -fPIE
LIBS = $(shell llvm-config-11 --libs)
LIBS += -lSDL2
test:
	sbt "testOnly /home/ljw/Desktop/ysyx-workbench/npc/test/InstMemTest.scala"

verilog:
	sbt "runMain rv64i.TopMain"

clean:
	-rm -rf obj_dir

.PHONY: test verilog help compile bsp reformat checkformat clean

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."

	@echo "-----------------verilate------------"
	@verilator $(V_FLAGS) $(VSRC) $(CSRC) --CFLAGS "$(CXXFLAGS)" --LDFLAGS "-ldl $(LIBS)"

	@echo "-----------------compile-------------"
	make -C obj_dir -f V$(TOP).mk V$(TOP)

run: $(clean) $(sim) $(IMAGE)
	make clean; make sim; ./obj_dir/V$(TOP)
gtk:
	gtkwave waveform.vcd


include ../Makefile