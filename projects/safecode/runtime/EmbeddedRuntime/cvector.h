/* Copyright 2015-2016 Ed Robbins, Dismantle Engineering Ltd */

#ifndef CVECTOR_H
#define CVECTOR_H

struct cvector {
  int   size();
  int   insert(int pos, void *item);
  int   push_back(void *item);
  int   erase(int pos);
  void* pop_back();
  void* at(int i);
  void* front();
  void* back();
private:
  int _size = 0;
  void **theVector = NULL;
};

#endif /* CVECTOR_H */
