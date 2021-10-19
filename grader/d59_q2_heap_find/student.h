#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <algorithm>
#include <math.h>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  return std::find(mData, mData+mSize, k) != mData+mSize;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  int pos = -1;
  for (size_t i = 0; i < mSize; ++i) {
    if (*(mData+i) == k) pos = i;
  }
  return pos < 1 ? pos : log2(pos+1);
}

#endif