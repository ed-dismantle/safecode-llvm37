#include <stdlib.h>
#include <stdio.h>
//#include <unistd.h>  /* for write(), also available on Windows */

extern "C" void* emulate_cc_new(unsigned len) {
  void *p = malloc(len);
  if (p == 0) {
    /* Don't use stdio (e.g. fputs), because that may want to allocate more
    *      * memory.
    *           */
    printf("out of memory\n", 14);
    abort();
  }
  return p;
}
extern "C" void emulate_cc_delete(void* p) {
  if (p != 0)
    free(p);
}
void* operator new  (unsigned len) __attribute__((alias("emulate_cc_new")));
void* operator new[](unsigned len) __attribute__((alias("emulate_cc_new")));
void  operator delete  (void* p)   __attribute__((alias("emulate_cc_delete")));
void  operator delete[](void* p)   __attribute__((alias("emulate_cc_delete")));
void* __cxa_pure_virtual = 0;
