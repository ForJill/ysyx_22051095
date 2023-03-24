TOP = Top
BUILD_DIR = ./buildCPU
SCALA_FILE = $(shell find ./src/main/scala -name '*.scala')
TOP_V = $(BUILD_DIR)/$(TOP).v

export PATH := $(PATH):$(abspath ./utils)

test:
	sbt "testOnly /home/ljw/Desktop/ysyx-workbench/npc/test/InstMemTest.scala"

verilog:
	mkdir -p $(BUILD_DIR)
	mill chiselModule.runMain $(TOP)Main -td $(BUILD_DIR) --output-file Top.v 

help:
	mill -i __.test.runMain Elaborate --help

compile:
	mill -i __.compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat

clean:
	-rm -rf $(BUILD_DIR)

.PHONY: test verilog help compile bsp reformat checkformat clean

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."

verilator:
	verilator -Wall --trace --cc $(TOP_V) --exe /TestBench/tb_$(TOP).cpp
	make -C obj_dir -f V$(TOP).mk V$(TOP)
gtk:
	./obj_dir/V$(TOP)
	gtkwave waveform.vcd

clean: 
	rm -rf obj_dir
	rm -rf waveform.vcd
include ../Makefile
