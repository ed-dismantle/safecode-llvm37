/* Copyright 2015-2016 Ed Robbins, Dismantle Engineering Ltd */

#include <stdio.h>
#include "safecode/Runtime/EmbeddedRuntime.h"

RangeTree *ExternalObjects;

unsigned StopOnError = 1;

void
pool_init_runtime(unsigned Dangling, unsigned RewriteOOB, unsigned Terminate) {
  ExternalObjects = (RangeTree*)calloc(sizeof(RangeTree), 1);
  //StopOnError = Terminate;
}

void
pool_register_global(PPOOL Pool, void *p, unsigned size) {
  pool_register(Pool, p, size);
}

void
pool_register_stack(PPOOL Pool, void *p, unsigned NumBytes) {
  pool_register(Pool, p, NumBytes);
}

void
pool_register(PPOOL Pool, void *p, unsigned size) {
  RangeTree *RegisteredAddressTree;
  void *end;

  if (size == 0) return;
  if (p == NULL) return;

  RegisteredAddressTree = (Pool ? &Pool->Objects : ExternalObjects);

  end = (void*)((char*)p + size - 1);

  if (!RegisteredAddressTree->insert(p, end)) {
    /* Insertion failed */
    void *oldstart, *oldend, *newstart, *newend;
    RegisteredAddressTree->find(p, oldstart, oldend);
    RegisteredAddressTree->remove(p);
    newstart = (p < oldstart) ? p : oldstart;
    newend = (end > oldend) ? end : oldend;
    RegisteredAddressTree->insert(newstart, newend);
  }
}

void
pool_unregister_stack(PPOOL Pool, void *p) {
  RangeTree *RegisteredAddressTree;

  if (!p) return;

  RegisteredAddressTree = (Pool ? &Pool->Objects : ExternalObjects);

  RegisteredAddressTree->remove(p);
}

void*
boundscheckui(PPOOL Pool, void *Source, void *Dest) {
  int result;
  void *start, *end;
  RangeTree *RegisteredAddressTree = (Pool ? &Pool->Objects : ExternalObjects);

  result = RegisteredAddressTree->find(Source, start, end);

  if (result && (start <= Dest) && (Dest <= end)) return Dest;
  else {
    /* We couldn't find the pointer in an allocated range! */
    void *error_location = (result ? Dest : Source);
    printf("Memory safety error at 0x%lx\n", error_location);
    if (StopOnError) while(1) {}
    return NULL;
  }
}

void*
exactcheck2(const char *source, const char *base, const char *result, unsigned size) {
  if ((result >= base) && (result < (base + size)))
    return (void*)result;
  else {
    printf("Memory safety error at 0x%ux\n", result);
    if (StopOnError) while(1) {}
    return NULL;
  }
}

