/* Copyright 2015-2016 Ed Robbins, Dismantle Engineering Ltd */

#ifndef CMAP_H
#define CMAP_H

typedef struct Mapping_t {
  void *key;
  void *value;
} Mapping;

struct cmap {
  int   insert(void *key, void *value);
  int   erase(void *key);
  void* find(void *key);
  int   at(void *key, void *value);
  void* get(int i);
  int   count(void *key);
  int   clear();
  int   size();
private:
  void* get_helper(void *vroot, int level, int i);
  void *theMap = NULL;
  int  _size = 0;

  typedef struct node_t
  {
    void *key;
    struct node_t *left;
    struct node_t *right;
    unsigned int red:1;
  } *node;
};

#endif /* CMAP_H */

