/* Copyright 2015-2016 Ed Robbins, Dismantle Engineering Ltd */

#ifndef CSET_H
#define CSET_H

struct cset {
  int   insert(void *item);
  int   erase(void *item);
  void* find(void *item);
  int   clear();
  int   size();
  void* get(int i);
private:
  void *get_helper(void *vroot, int level, int i);
  void *theSet = NULL;
  int   _size = 0;

  typedef struct node_t
  {
    void *key;
    struct node_t *left;
    struct node_t *right;
    unsigned int red:1;
  } *node;
};

#endif /* CSET_H */

