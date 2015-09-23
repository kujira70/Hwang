HOME=/home/username/NVIDIA_GPU_Computing_SDK
TOP              = $(_HERE_)/..

PATH            += $(TOP)/extools/bin;$(TOP)/open64/bin;$(_HERE_);$(TOP)/lib;

INCLUDES 　　　　+= "-I$(TOP)/include" "-I$(TOP)/include/cudart" $(_SPACE_) "-I$(HOME)/C/common/inc"

LIBRARIES 　　 　=+ $(_SPACE_) "-L$(HOME)/C/lib" "-L$(TOP)/lib$(_TARGET_SIZE_)" -lcudart

CUDAFE_FLAGS    +=
OPENCC_FLAGS    +=
PTXAS_FLAGS     +=

