#
# Indicate where we are relative to the top of the source tree.
#
LEVEL=../..

#
# Give the name of a library.  This will build a dynamic version.
#
LIBRARYNAME=poolalloc
BUILD_ARCHIVE := 1
ifneq ($(OS),Cygwin)
ifneq ($(OS),MingW)
SHARED_LIBRARY := 1
LOADABLE_MODULE := 1
endif
endif

SOURCES = AccessTrace.cpp \
          AllHeapNodesHeuristic.cpp \
          AllNodesHeuristic.cpp \
          Heuristic.cpp \
          PAMultipleGlobalPool.cpp \
          PASimple.cpp \
          PoolAllocate.cpp \
	  PoolOptimize.cpp \
	  RunTimeAssociate.cpp \
	  TransformFunctionBody.cpp \
          #PointerCompress.cpp \

#
# Include Makefile.common so we know what to do.
#
include $(LEVEL)/Makefile.common

