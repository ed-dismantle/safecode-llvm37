LEVEL = ../../../..

LIBRARYNAME=sc-support
BUILD_ARCHIVE := 1
ifneq ($(OS),Cygwin)
ifneq ($(OS),MingW)
SHARED_LIBRARY := 1
LOADABLE_MODULE := 1
endif
endif

SOURCES = AllocatorInfo.cpp

include $(LEVEL)/projects/safecode/Makefile.common

