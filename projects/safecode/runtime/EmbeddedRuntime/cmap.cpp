/* Copyright 2015-2016 Ed Robbins, Dismantle Engineering Ltd */

#include <search.h>
#include <malloc.h>
#include "cmap.h"

void*
cmap::get_helper(void *vroot, int level, int i)
{
  node root = (node) vroot;
  void *result;
  static int pos = 0;
  if (level == 0) pos = 0;

  if (root->left == NULL && root->right == NULL) {
    pos++;
    if (pos == i) return root->key;
  }
  else {
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
cmap::get(int i) {
  return get_helper(theMap, 0, i+1);
}

int
cmap::size() {
  return _size;
}

int
compare_mappings(const void *mapping1, const void* mapping2) {
  Mapping *m1 = (Mapping*)mapping1, *m2 = (Mapping*)mapping2;

  if (m1->key == m2->key) return 0;
  else if (m1->key < m2->key) return -1;
  else return 1;
}

int
cmap::insert(void *key, void *value) {
  Mapping *m;
  if ((m = (Mapping*)malloc(sizeof(Mapping))) == NULL) return 0;
  m->key = key;
  m->value = value;

  if (m == *(Mapping**)tsearch(m, &theMap, &compare_mappings)) {
    _size++;
    return 1;
  }
  else {
    free(m);
    return 0;
  }
}

int
cmap::erase(void *key) {
  Mapping *m1, *m2;
  void *result;
  int return_value = 0;

  if ((m1 = (Mapping*)malloc(sizeof(Mapping))) == NULL) return 0;
  m1->key = key;
  m1->value = NULL;

  /* tdelete doesn't delete the tree value for us
   * so we should first search for it to get a reference */
  if ((result = tfind(m1, &theMap, &compare_mappings)) != NULL) {
    m2 = *(Mapping**)result;
    tdelete(m1, &theMap, &compare_mappings);
    free(m2);
    _size--;
    return_value = 1;
  }
  else return_value = 0;

  free(m1);
  return return_value;
}

int
cmap::at(void* key, void *value) {
  Mapping *m1, *m2;
  void **result;
  if ((m1 = (Mapping*)malloc(sizeof(Mapping))) == NULL) return 0;
  m1->key = key;
  m1->value = NULL;
  if ((result = (void**)tfind(m1, &theMap, &compare_mappings)) != NULL) {
    m2 = *(Mapping**)result;
    m2->value = value;
    free(m1);
    return 1;
  }
  free(m1);
  return insert(key, value);
}

void*
cmap::find(void *key) {
  Mapping *m1, *m2;
  void **result;
  if ((m1 = (Mapping*)malloc(sizeof(Mapping))) == NULL) return 0;
  m1->key = key;
  m1->value = NULL;
  if ((result = (void**)tfind(m1, &theMap, &compare_mappings)) != NULL) {
    m2 = *(Mapping**)result;
    free(m1);
    return m2->value;
  }
  free(m1);
  return NULL;
}

int
cmap::count(void *key) {
  return (find(key) != NULL ? 1 : 0);
}

int
cmap::clear() {
  tdestroy(theMap, &free);
  _size = 0;
  return 1;
}

