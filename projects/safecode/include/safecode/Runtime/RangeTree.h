/* Copyright 2015-2016 Ed Robbins, Dismantle Engineering Ltd */

#ifndef RANGETREE_H
#define RANGETREE_H

#include <stddef.h>

typedef struct Range_t {
  void *start;
  void *end;
} Range;

struct RangeTree {
  int insert(void *start, void *end);
  int remove(void *ptr);
  int find(void *ptr, void *&start, void *&end);
  int clear();
private:
  void *tree = NULL;
};

#endif /* TREE_H */

