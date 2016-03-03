LEVEL = ../../../..

LIBRARYNAME=cmspasses
BUILD_ARCHIVE := 1
ifneq ($(OS),Cygwin)
ifneq ($(OS),MingW)
SHARED_LIBRARY := 1
LOADABLE_MODULE := 1
endif
endif

SOURCES := \
           CommonMSCInfo.cpp \
           ExactCheckOpt.cpp \
           InstrumentMemoryAccesses.cpp \
           MSCInfo.cpp \
           NoMSCInfo.cpp \
           OptimizeIdenticalLSChecks.cpp \
           OptimizeImpliedFastLSChecks.cpp \
           SAFECodeMSCInfo.cpp \
           SpecializeCMSCalls.cpp \

include $(LEVEL)/projects/safecode/Makefile.common
