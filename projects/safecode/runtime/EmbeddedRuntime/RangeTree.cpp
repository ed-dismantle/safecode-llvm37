/* Copyright 2015-2016 Ed Robbins, Dismantle Engineering Ltd */

#include <search.h>
#include <malloc.h>
#include "safecode/Runtime/RangeTree.h"

int
compare_ranges(const void *range1, const void* range2) {
  Range *r1 = (Range*)range1, *r2 = (Range*)range2;

  if (r1->end < r2->start) return -1;
  if (r1->start > r2->end) return 1;
  return 0;
}

int
RangeTree::insert(void *start, void *end) {
  Range *r;
  if ((r = (Range*)malloc(sizeof(Range))) == NULL) return 0;
  r->start = start;
  r->end = end;

  if (r == *(Range**)tsearch(r, &tree, &compare_ranges)) return 1;
  else {
    free(r);
    return 0;
  }
}

int
RangeTree::remove(void *ptr) {
  Range *r1, *r2;
  void *result;
  int return_value = 0;

  if ((r1 = (Range*)malloc(sizeof(Range))) == NULL) return 0;
  r1->start = ptr;
  r1->end = ptr;

  /* tdelete doesn't delete the tree item for us
   * so we should first search for it to get a reference */
  if ((result = tfind(r1, &tree, &compare_ranges)) != NULL) {
    r2 = *(Range**)result;
    tdelete(r1, &tree, &compare_ranges);
    free(r2);
    return_value = 1;
  }
  else return_value = 0;

  free(r1);
  return return_value;
}

int
RangeTree::find(void *ptr, void *&start, void *&end) {
  Range *r1, *r2;
  void **result;
  if ((r1 = (Range*)malloc(sizeof(Range))) == NULL) return 0;
  r1->start = ptr;
  r1->end = ptr;
  if ((result = (void**)tfind(r1, &tree, &compare_ranges)) != NULL) {
    r2 = *(Range**)result;
    start = r2->start;
    end = r2->end;
    free(r1);
    return 1;
  }
  free(r1);
  return 0;
}

int
RangeTree::clear() {
  tdestroy(tree, &free);
  return 1;
}

