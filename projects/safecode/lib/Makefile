LEVEL = ../../..

PARALLEL_DIRS = \
               Support \
               ArrayBoundChecks \
               InsertPoolChecks \
               OptimizeChecks \
               RewriteOOB \
               DebugInstrumentation \
               FormatStrings \
               CStdLib \
               Utility \
               CommonMemorySafety \
#               BaggyBoundsChecks \
#               SoftBound \
#               ConvertUnsafeAllocas \
#               StackSafety \
#               SpeculativeChecking \
#               DanglingPointers \
#               CStdLib \
#               FaultInjector \
#               IndirectCallChecks \
#               PointerChecks \

include $(LEVEL)/projects/safecode/Makefile.common

ifneq ($(OS),Darwin)
OPTIONAL_DIRS := Safecode
endif

