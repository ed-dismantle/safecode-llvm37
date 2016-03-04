/* Copyright 2015-2016 Ed Robbins, Dismantle Engineering Ltd */

#include <search.h>
#include <malloc.h>
#include "cset.h"

void*
cset::get_helper(void *vroot, int level, int i)
{
  node root = (node) vroot;
  void *result;
  static int pos = 0;
  if (level == 0) pos = 0;

  if (root->left == NULL && root->right == NULL) {
    pos++;
    if (pos == i) return root->key;
  }
  else
  {
    if (root->left != NULL)
      if ((result = get_helper (root->left, level + 1, i)) != NULL)
        return result;

    pos++;
    if (pos == i) return root->key;

    if (root->right != NULL)
      if ((result = get_helper(root->right, level + 1, i)) != NULL)
        return result;
  }
  return NULL;
}

void*
cset::get(int i) {
  return get_helper(theSet, 0, i+1);
}

int
compare_items(const void *item1, const void* item2) {
  if (item1 == item2) return 0;
  else if (item1 < item2) return -1;
  else return 1;
}

int
cset::insert(void *item) {
  if (tfind(item, &theSet, &compare_items) != NULL) {
    return 0;
  }
  if (item == *(void**)tsearch(item, &theSet, &compare_items)) {
    _size++;
    return 1;
  }
  else return 0;
}

int
cset::erase(void *item) {
  if (tdelete(item, &theSet, &compare_items) != NULL) {
    _size--;
    return 1;
  }
  else return 0;
}

void*
cset::find(void *item) {
  void **result;
  if ((result = (void**)tfind(item, &theSet, &compare_items)) != NULL) {
    return *result;
  }
  return NULL;
}

int
cset::size() {
  return _size;
}

int
cset::clear() {
  tdestroy(theSet, &free);
  _size = 0;
  return 1;
}

