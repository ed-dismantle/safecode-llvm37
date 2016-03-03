LEVEL = ../../../..

LIBRARYNAME=abc
BUILD_ARCHIVE := 1
ifneq ($(OS),Cygwin)
ifneq ($(OS),MingW)
SHARED_LIBRARY := 1
LOADABLE_MODULE := 1
endif
endif

SOURCES := \
            ArrayBoundCheckDummy.cpp \
            ArrayBoundCheckLocal.cpp \
            #ArrayBoundCheckStruct.cpp
            #BreakConstantGEPs.cpp \
            #AffineExpressions.cpp \
            #BottomUpCallGraph.cpp

#ABCPreProcess.cpp ArrayBoundCheck.cpp 

CFLAGS   += -DOMEGASCRIPT=\"${PROJ_SRC_ROOT}/utils/omega.pl\"
CPPFLAGS += -DOMEGASCRIPT=\"${PROJ_SRC_ROOT}/utils/omega.pl\"
CXXFLAGS += -DOMEGASCRIPT=\"${PROJ_SRC_ROOT}/utils/omega.pl\"

include $(LEVEL)/projects/safecode/Makefile.common

