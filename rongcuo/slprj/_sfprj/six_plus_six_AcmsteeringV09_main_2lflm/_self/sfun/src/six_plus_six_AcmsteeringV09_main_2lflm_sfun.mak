# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64
!include <ntwin32.mak>

MACHINE     = six_plus_six_AcmsteeringV09_main_2lflm
TARGET      = sfun
CHART_SRCS   = c1_six_plus_six_AcmsteeringV09_main_2lflm.c c2_six_plus_six_AcmsteeringV09_main_2lflm.c c3_six_plus_six_AcmsteeringV09_main_2lflm.c c4_six_plus_six_AcmsteeringV09_main_2lflm.c c5_six_plus_six_AcmsteeringV09_main_2lflm.c c6_six_plus_six_AcmsteeringV09_main_2lflm.c c7_six_plus_six_AcmsteeringV09_main_2lflm.c c8_six_plus_six_AcmsteeringV09_main_2lflm.c c9_six_plus_six_AcmsteeringV09_main_2lflm.c c10_six_plus_six_AcmsteeringV09_main_2lflm.c c11_six_plus_six_AcmsteeringV09_main_2lflm.c c12_six_plus_six_AcmsteeringV09_main_2lflm.c c13_six_plus_six_AcmsteeringV09_main_2lflm.c c14_six_plus_six_AcmsteeringV09_main_2lflm.c c15_six_plus_six_AcmsteeringV09_main_2lflm.c c16_six_plus_six_AcmsteeringV09_main_2lflm.c c17_six_plus_six_AcmsteeringV09_main_2lflm.c c18_six_plus_six_AcmsteeringV09_main_2lflm.c c19_six_plus_six_AcmsteeringV09_main_2lflm.c c20_six_plus_six_AcmsteeringV09_main_2lflm.c c21_six_plus_six_AcmsteeringV09_main_2lflm.c c22_six_plus_six_AcmsteeringV09_main_2lflm.c c23_six_plus_six_AcmsteeringV09_main_2lflm.c c24_six_plus_six_AcmsteeringV09_main_2lflm.c c25_six_plus_six_AcmsteeringV09_main_2lflm.c c26_six_plus_six_AcmsteeringV09_main_2lflm.c c27_six_plus_six_AcmsteeringV09_main_2lflm.c c28_six_plus_six_AcmsteeringV09_main_2lflm.c c29_six_plus_six_AcmsteeringV09_main_2lflm.c c30_six_plus_six_AcmsteeringV09_main_2lflm.c c31_six_plus_six_AcmsteeringV09_main_2lflm.c c32_six_plus_six_AcmsteeringV09_main_2lflm.c c33_six_plus_six_AcmsteeringV09_main_2lflm.c c34_six_plus_six_AcmsteeringV09_main_2lflm.c c35_six_plus_six_AcmsteeringV09_main_2lflm.c c36_six_plus_six_AcmsteeringV09_main_2lflm.c c37_six_plus_six_AcmsteeringV09_main_2lflm.c c38_six_plus_six_AcmsteeringV09_main_2lflm.c c39_six_plus_six_AcmsteeringV09_main_2lflm.c c40_six_plus_six_AcmsteeringV09_main_2lflm.c c41_six_plus_six_AcmsteeringV09_main_2lflm.c c42_six_plus_six_AcmsteeringV09_main_2lflm.c c43_six_plus_six_AcmsteeringV09_main_2lflm.c c44_six_plus_six_AcmsteeringV09_main_2lflm.c c45_six_plus_six_AcmsteeringV09_main_2lflm.c c46_six_plus_six_AcmsteeringV09_main_2lflm.c c47_six_plus_six_AcmsteeringV09_main_2lflm.c c48_six_plus_six_AcmsteeringV09_main_2lflm.c c49_six_plus_six_AcmsteeringV09_main_2lflm.c c50_six_plus_six_AcmsteeringV09_main_2lflm.c c51_six_plus_six_AcmsteeringV09_main_2lflm.c c52_six_plus_six_AcmsteeringV09_main_2lflm.c c53_six_plus_six_AcmsteeringV09_main_2lflm.c c54_six_plus_six_AcmsteeringV09_main_2lflm.c c55_six_plus_six_AcmsteeringV09_main_2lflm.c c56_six_plus_six_AcmsteeringV09_main_2lflm.c c57_six_plus_six_AcmsteeringV09_main_2lflm.c c58_six_plus_six_AcmsteeringV09_main_2lflm.c c59_six_plus_six_AcmsteeringV09_main_2lflm.c c60_six_plus_six_AcmsteeringV09_main_2lflm.c c61_six_plus_six_AcmsteeringV09_main_2lflm.c c62_six_plus_six_AcmsteeringV09_main_2lflm.c c63_six_plus_six_AcmsteeringV09_main_2lflm.c c64_six_plus_six_AcmsteeringV09_main_2lflm.c c65_six_plus_six_AcmsteeringV09_main_2lflm.c c66_six_plus_six_AcmsteeringV09_main_2lflm.c c67_six_plus_six_AcmsteeringV09_main_2lflm.c c68_six_plus_six_AcmsteeringV09_main_2lflm.c c69_six_plus_six_AcmsteeringV09_main_2lflm.c c70_six_plus_six_AcmsteeringV09_main_2lflm.c c71_six_plus_six_AcmsteeringV09_main_2lflm.c c72_six_plus_six_AcmsteeringV09_main_2lflm.c c73_six_plus_six_AcmsteeringV09_main_2lflm.c c74_six_plus_six_AcmsteeringV09_main_2lflm.c c75_six_plus_six_AcmsteeringV09_main_2lflm.c c76_six_plus_six_AcmsteeringV09_main_2lflm.c c77_six_plus_six_AcmsteeringV09_main_2lflm.c c78_six_plus_six_AcmsteeringV09_main_2lflm.c c79_six_plus_six_AcmsteeringV09_main_2lflm.c c80_six_plus_six_AcmsteeringV09_main_2lflm.c c81_six_plus_six_AcmsteeringV09_main_2lflm.c c82_six_plus_six_AcmsteeringV09_main_2lflm.c c83_six_plus_six_AcmsteeringV09_main_2lflm.c c84_six_plus_six_AcmsteeringV09_main_2lflm.c c85_six_plus_six_AcmsteeringV09_main_2lflm.c c86_six_plus_six_AcmsteeringV09_main_2lflm.c c87_six_plus_six_AcmsteeringV09_main_2lflm.c c88_six_plus_six_AcmsteeringV09_main_2lflm.c c89_six_plus_six_AcmsteeringV09_main_2lflm.c c90_six_plus_six_AcmsteeringV09_main_2lflm.c c91_six_plus_six_AcmsteeringV09_main_2lflm.c c92_six_plus_six_AcmsteeringV09_main_2lflm.c c93_six_plus_six_AcmsteeringV09_main_2lflm.c c94_six_plus_six_AcmsteeringV09_main_2lflm.c c95_six_plus_six_AcmsteeringV09_main_2lflm.c c96_six_plus_six_AcmsteeringV09_main_2lflm.c c97_six_plus_six_AcmsteeringV09_main_2lflm.c c98_six_plus_six_AcmsteeringV09_main_2lflm.c c99_six_plus_six_AcmsteeringV09_main_2lflm.c c100_six_plus_six_AcmsteeringV09_main_2lflm.c c101_six_plus_six_AcmsteeringV09_main_2lflm.c c102_six_plus_six_AcmsteeringV09_main_2lflm.c c103_six_plus_six_AcmsteeringV09_main_2lflm.c c104_six_plus_six_AcmsteeringV09_main_2lflm.c c105_six_plus_six_AcmsteeringV09_main_2lflm.c c106_six_plus_six_AcmsteeringV09_main_2lflm.c c107_six_plus_six_AcmsteeringV09_main_2lflm.c c109_six_plus_six_AcmsteeringV09_main_2lflm.c c185_six_plus_six_AcmsteeringV09_main_2lflm.c c186_six_plus_six_AcmsteeringV09_main_2lflm.c c187_six_plus_six_AcmsteeringV09_main_2lflm.c c188_six_plus_six_AcmsteeringV09_main_2lflm.c c195_six_plus_six_AcmsteeringV09_main_2lflm.c c199_six_plus_six_AcmsteeringV09_main_2lflm.c
MACHINE_SRC  = six_plus_six_AcmsteeringV09_main_2lflm_sfun.c
MACHINE_REG = six_plus_six_AcmsteeringV09_main_2lflm_sfun_registry.c
MAKEFILE    = six_plus_six_AcmsteeringV09_main_2lflm_sfun.mak
MATLAB_ROOT  = D:\matlab
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------

USER_INCLUDES   = 
AUX_INCLUDES   = 
MLSLSF_INCLUDES = \
    /I "D:\matlab\extern\include" \
    /I "D:\matlab\simulink\include" \
    /I "D:\matlab\stateflow\c\mex\include" \
    /I "D:\matlab\rtw\c\src" \
    /I "D:\??????????\??????6x6????\code11_21\rongcuo\slprj\_sfprj\six_plus_six_AcmsteeringV09_main_2lflm\_self\sfun\src" 

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   = 
INCLUDE_PATH = $(USER_INCLUDES) $(AUX_INCLUDES) $(MLSLSF_INCLUDES)\
 $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMATLAB_MEX_FILE /nologo /MD 
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction  
#----------------------------- Source Files -----------------------------------

REQ_SRCS  =  $(MACHINE_SRC) $(MACHINE_REG) $(CHART_SRCS)

USER_ABS_OBJS =

AUX_ABS_OBJS =

THIRD_PARTY_OBJS =

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_ABS_OBJS) $(AUX_ABS_OBJS) $(THIRD_PARTY_OBJS)
OBJLIST_FILE = six_plus_six_AcmsteeringV09_main_2lflm_sfun.mol
SFCLIB = 
AUX_LNK_OBJS =     
USER_LIBS = 
LINK_MACHINE_LIBS = 
BLAS_LIBS = "D:\matlab\extern\lib\win64\microsoft\libmwblas.lib" 
THIRD_PARTY_LIBS = 

#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MACHINE)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
MEX_FILE_CSF =
all : $(MEX_FILE_NAME) $(MEX_FILE_CSF)

TMWLIB = "D:\matlab\extern\lib\win64\microsoft\sf_runtime.lib" "D:\matlab\extern\lib\win64\microsoft\libmx.lib" "D:\matlab\extern\lib\win64\microsoft\libmex.lib" "D:\matlab\extern\lib\win64\microsoft\libmat.lib" "D:\matlab\extern\lib\win64\microsoft\libfixedpoint.lib" "D:\matlab\extern\lib\win64\microsoft\libut.lib" "D:\matlab\extern\lib\win64\microsoft\libmwmathutil.lib" "D:\matlab\extern\lib\win64\microsoft\libemlrt.lib" "D:\matlab\extern\lib\win64\microsoft\libmwsl_log_load_blocks.lib" "D:\matlab\lib\win64\libippmwipt.lib" 

$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS) $(SFCLIB) $(AUX_LNK_OBJS) $(USER_LIBS) $(THIRD_PARTY_LIBS)
 @echo ### Linking ...
 $(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map"\
  $(USER_LIBS) $(SFCLIB) $(AUX_LNK_OBJS)\
  $(TMWLIB) $(LINK_MACHINE_LIBS) $(DSP_LIBS) $(BLAS_LIBS) $(THIRD_PARTY_LIBS)\
  @$(OBJLIST_FILE)
     mt -outputresource:"$(MEX_FILE_NAME);2" -manifest "$(MEX_FILE_NAME).manifest"
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"


