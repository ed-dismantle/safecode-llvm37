//===- Report.h - Debugging reports for bugs found by SAFECode -*- C++ -*--===//
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
//
//===----------------------------------------------------------------------===//

#ifndef _DEBUG_REPORT_H_
#define _DEBUG_REPORT_H_

#include "Report.h"
#include <stddef.h>

namespace llvm {

/*struct DebugViolationInfo : public ViolationInfo {
  const DebugMetaData * dbgMetaData;
  const void * PoolHandle;
  const char * SourceFile;
  unsigned int lineNo;
  virtual void print (std::ostream & OS) const;
  DebugViolationInfo() : dbgMetaData(0), SourceFile(0), lineNo(0) {}
};*/

struct OutOfBoundsViolation : public ViolationInfo {
  //  objstart - The start of the object in which the source pointer was found.
  //  objlen   - The length of the object in which the source pointer was found.
  const void * objStart;
  ptrdiff_t objLen;
  virtual void print () const;
};

struct AlignmentViolation : public OutOfBoundsViolation {
  unsigned int alignment;
  virtual void print () const;
};

struct WriteOOBViolation : public ViolationInfo {
  int copied;
  int dstSize;
  int srcSize;
  virtual void print () const;
  WriteOOBViolation() : copied(-1), srcSize(-1) {}
};

struct CStdLibViolation : public ViolationInfo {
  const char *function;
  virtual void print () const;
  CStdLibViolation() : function(0) {}
};

}

#endif
