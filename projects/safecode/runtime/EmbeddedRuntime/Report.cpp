//===- Report.cpp -------------------------------------------*- C++ -*-----===//
// 
//                       The SAFECode Compiler Project
//
// This file was developed by the LLVM research group and is distributed under
// the University of Illinois Open Source License. See LICENSE.TXT for details.
// 
//===----------------------------------------------------------------------===//
//
// This file implements functions for creating reports for the SAFECode
// run-time.
//
//===----------------------------------------------------------------------===//

#include "Report.h"

#include <stdlib.h>
#include <stdio.h>

extern unsigned StopOnError;

namespace llvm {

ViolationInfo::~ViolationInfo() {}

void
ViolationInfo::print() const {
  //
  // Print a single line report describing the error.  This is used, I believe,
  // by the automatic testing infrastructure scripts to determine if a safety
  // violation was correctly detected.
  //
  printf("SAFECode:Violation Type 0x%lx "
     "when accessing  0x%lx "
     "at IP=0x%lx\n", this->type, this->faultPtr, this->faultPC);

  //
  // Determine which descriptive string to use to describe the error.
  //
  const char * typestring;
  switch (type) {
    case FAULT_DANGLING_PTR:
      typestring = "Use After Free Error";
      break;

    case FAULT_INVALID_FREE:
      typestring = "Invalid Free Error";
      break;

    case FAULT_NOTHEAP_FREE:
      typestring = "Freeing Non-Heap Object Error";
      break;

    case FAULT_DOUBLE_FREE:
      typestring = "Double Free Error";
      break;

    case FAULT_OUT_OF_BOUNDS:
      typestring = "Out of Bounds Error";
      break;

    case FAULT_WRITE_OUT_OF_BOUNDS:
      typestring = "Writing Out of Bounds Error";
      break;

    case FAULT_LOAD_STORE:
      typestring = "Load/Store Error";
      break;

    case WARN_LOAD_STORE:
      typestring = "Potential Load/Store Error";
      break;

    case FAULT_ALIGN:
      typestring = "Alignment Error";
      break;

    case FAULT_UNINIT:
      typestring = "Uninitialized/NULL Pointer Error";
      break;

    case FAULT_CSTDLIB:
      typestring = "C Library Undefined Behavior";
      break;

    case FAULT_CALL:
      typestring = "Invalid Call Target Error";
      break;

    default:
      typestring = "Unknown Error";
      break;
  }

  //
  // Now print a more human readable version of the error.
  //
  printf("\n");
  printf("=======+++++++    SAFECODE RUNTIME ALERT +++++++=======\n");
  printf("= Error type                            :\t%s\n", typestring);
  printf("= CWE ID                                :\t%lu 0x%lx\n", this->CWE);
  printf("= Faulting pointer                      :\t0x%lx\n", this->faultPtr);
  printf("= Program counter                       :\t0x%lx\n", this->faultPC);
}

void
ReportMemoryViolation(const ViolationInfo *v) {
  // Flag for whether to terminate when an error is detected.

  //
  // Print the error to the error log.
  //
  v->print();

  //
  // If we need to terminate now, do that.
  //
  if (StopOnError)
    abort();

  //
  // Otherwise, report a certain number of errors before terminating the
  // program.
  //
  static unsigned count = 20;
  --count;
  if (!count) abort();
  return;
}

}
