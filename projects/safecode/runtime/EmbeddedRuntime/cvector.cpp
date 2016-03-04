/* Copyright 2015-2016 Ed Robbins, Dismantle Engineering Ltd */

#include <stdlib.h>
#include <string.h>
#include "cvector.h"

int
cvector::size() {
  return _size;
}

int
cvector::insert(int pos, void *item) {
  void **newVector;
  if (pos >= _size) return 0;

  if ((newVector = (void**)malloc((_size + 1) * sizeof(void*))) == NULL) return 0;

  if (pos == 0) {
    memcpy((void*)&newVector[1], (void*)theVector, _size * sizeof(void*));
    _size++;
    newVector[0] = item;
    free(theVector);
    theVector = newVector;
    return 1;
  }

  memcpy((void*)newVector, (void*)theVector, pos * sizeof(void*));
  memcpy((void*)&newVector[pos + 1], (void*)&theVector[pos], (_size - pos) * sizeof(void*));
  newVector[pos] = item;
  free(theVector);
  theVector = newVector;
  _size++;
  return 1;
}

int
cvector::push_back(void *item) {
  void **newVector;
  if ((newVector = (void**)realloc((void*)theVector, (_size + 1) * sizeof(void*))) == NULL) return 0;

  newVector[_size] = item;
  _size++;
  theVector = newVector;
  return 1;
}

int
cvector::erase(int pos) {
  void **newVector;
  if (pos >= _size) return 0;

  if (pos == _size - 1) {
    if ((newVector = (void**)realloc((void*)theVector, (_size - 1) * sizeof(void*))) == NULL) return 0;
    theVector = newVector;
    _size--;
    return 1;
  }

  if ((newVector = (void**)malloc((_size - 1) * sizeof(void*))) == NULL) return 0;

  if (pos == 0) {
    memcpy((void*)newVector, (void*)&theVector[1], (_size - 1) * sizeof(void*));
    _size--;
    free(theVector);
    theVector = newVector;
    return 1;
  }

  memcpy((void*)newVector, (void*)theVector, pos * sizeof(void*));
  memcpy((void*)&newVector[pos], (void*)&theVector[pos + 1], (_size - pos - 1) * sizeof(void*));
  _size--;
  free(theVector);
  theVector = newVector;
  return 1;
}

void*
cvector::pop_back() {
  void *item = theVector[_size - 1];
  void **newVector;
  if ((newVector = (void**)realloc((void*)theVector, (_size - 1) * sizeof(void*))) == NULL) return NULL;

  theVector = newVector;
  _size--;
  return item;
}

void*
cvector::at(int i) {
  if (i >= _size) return NULL;
  return theVector[i];
}

void*
cvector::front() {
  if (_size == 0) return NULL;
  return theVector[0];
}

void*
cvector::back() {
  if (_size == 0) return NULL;
  return theVector[_size - 1];
}

