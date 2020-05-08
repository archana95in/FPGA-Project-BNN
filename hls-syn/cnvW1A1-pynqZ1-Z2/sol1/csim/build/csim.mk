# ==============================================================
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
# ==============================================================
CSIM_DESIGN = 1

__SIM_FPO__ = 1

__SIM_MATHHLS__ = 1

__SIM_OPENCV__ = 1

__SIM_FFT__ = 1

__SIM_FIR__ = 1

__SIM_DDS__ = 1

__USE_CLANG__ = 1

ObjDir = obj

HLS_SOURCES = ../../../../../../../library/host/rawhls-offload.cpp ../../../../../../../library/host/foldedmv-offload.cpp ../../../../../../cnvW1A1/sw/main_python.cpp ../../../../../../cnvW1A1/hw/top.cpp

TARGET := csim.exe

AUTOPILOT_ROOT := /tools/Xilinx/Vivado/2019.2
AUTOPILOT_MACH := lnx64
ifdef AP_GCC_M32
  AUTOPILOT_MACH := Linux_x86
  IFLAG += -m32
endif
IFLAG += -fPIC
ifndef AP_GCC_PATH
  AP_GCC_PATH := /tools/Xilinx/Vivado/2019.2/tps/lnx64/gcc-6.2.0/bin
endif
AUTOPILOT_TOOL := ${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools
AP_CLANG_PATH := ${AUTOPILOT_TOOL}/clang-3.9/bin
AUTOPILOT_TECH := ${AUTOPILOT_ROOT}/common/technology


IFLAG += -I "${AUTOPILOT_TOOL}/systemc/include"
IFLAG += -I "${AUTOPILOT_ROOT}/include"
IFLAG += -I "${AUTOPILOT_ROOT}/include/opencv"
IFLAG += -I "${AUTOPILOT_ROOT}/include/ap_sysc"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC/AESL_FP_comp"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC/AESL_comp"
IFLAG += -I "${AUTOPILOT_TOOL}/auto_cc/include"
IFLAG += -D__SIM_FPO__

IFLAG += -D__SIM_OPENCV__

IFLAG += -D__SIM_FFT__

IFLAG += -D__SIM_FIR__

IFLAG += -D__SIM_DDS__

IFLAG += -D__DSP48E1__
IFLAG += -I/home/archana95in/BNN-PYNQ/bnn/src/library/host -I/home/archana95in/BNN-PYNQ/bnn/src/library/finn-hlslib -I/home/archana95in/BNN-PYNQ/bnn/src/xilinx-tiny-cnn -std=c++0x -Wno-unknown-pragmas -I/home/archana95in/BNN-PYNQ/bnn/src/network/cnvW1A1/hw 
IFLAG += -g
DFLAG += -D__xilinx_ip_top= -DAESL_TB
CCFLAG += 
TOOLCHAIN += 
CCFLAG += -gcc-toolchain /tools/Xilinx/Vivado/2019.2/tps/lnx64/gcc-6.2.0
LFLAG += -gcc-toolchain /tools/Xilinx/Vivado/2019.2/tps/lnx64/gcc-6.2.0
CCFLAG += -Wno-c++11-narrowing
CCFLAG += -Werror=uninitialized
CCFLAG += -std=c++11
LFLAG += -std=c++11



include ./Makefile.rules

all: $(TARGET)



$(ObjDir)/rawhls-offload.o: ../../../../../../../library/host/rawhls-offload.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../../../../library/host/rawhls-offload.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CXX) ${CCFLAG} -c -MMD -I/home/archana95in/BNN-PYNQ/bnn/src/library/host -I/home/archana95in/BNN-PYNQ/bnn/src/library/finn-hlslib -I/home/archana95in/BNN-PYNQ/bnn/src/xilinx-tiny-cnn -DOFFLOAD -DRAWHLS -std=c++0x -Wno-unknown-pragmas -Wno-unknown-pragmas  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/rawhls-offload.d

$(ObjDir)/foldedmv-offload.o: ../../../../../../../library/host/foldedmv-offload.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../../../../library/host/foldedmv-offload.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CXX) ${CCFLAG} -c -MMD -I/home/archana95in/BNN-PYNQ/bnn/src/library/host -I/home/archana95in/BNN-PYNQ/bnn/src/library/finn-hlslib -I/home/archana95in/BNN-PYNQ/bnn/src/xilinx-tiny-cnn -DOFFLOAD -DRAWHLS -std=c++0x -Wno-unknown-pragmas -Wno-unknown-pragmas  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/foldedmv-offload.d

$(ObjDir)/main_python.o: ../../../../../../cnvW1A1/sw/main_python.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../../../cnvW1A1/sw/main_python.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CXX) ${CCFLAG} -c -MMD -I/home/archana95in/BNN-PYNQ/bnn/src/library/host -I/home/archana95in/BNN-PYNQ/bnn/src/library/finn-hlslib -I/home/archana95in/BNN-PYNQ/bnn/src/xilinx-tiny-cnn -I/home/archana95in/BNN-PYNQ/bnn/src/network/cnvW1A1/hw -DOFFLOAD -DRAWHLS -std=c++0x -Wno-unknown-pragmas -Wno-unknown-pragmas  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/main_python.d

$(ObjDir)/top.o: ../../../../../../cnvW1A1/hw/top.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling ../../../../../../cnvW1A1/hw/top.cpp in $(BuildMode) mode" $(AVE_DIR_DLOG)
	$(Verb)  $(CXX) ${CCFLAG} -c -MMD -I/home/archana95in/BNN-PYNQ/bnn/src/library/finn-hlslib -std=c++0x  $(IFLAG) $(DFLAG) $< -o $@ ; \

-include $(ObjDir)/top.d
