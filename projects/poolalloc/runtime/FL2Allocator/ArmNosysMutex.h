#ifndef __ARM_NOSYS_MUTEX_H__
#define __ARM_NOSYS_MUTEX_H__

// Locking primitives for contiki

static __inline__ unsigned __attribute__((__always_inline__, __nodebug__))
__swp(unsigned x, volatile unsigned *p) {
  unsigned v;
  do v = __builtin_arm_ldrex(p); while (__builtin_arm_strex(x, p));
  return v;
}

enum {FREE, LOCKED};

void mutex_init(volatile unsigned* const addr) {
 *addr = FREE;
}

void mutex_lock(volatile unsigned* const addr) {
  while(__swp(LOCKED, addr) != FREE);
}

void mutex_unlock(volatile unsigned* const addr) {
  *addr = FREE;
}

void mutex_destroy(volatile unsigned* const addr) {
  *addr = FREE;
}

#endif /* __ARM_NOSYS_MUTEX_H__ */

