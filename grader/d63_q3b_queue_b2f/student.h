#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
  //write your code here
  if (mSize == 0) return;
  T tmp = mData[(mFront + mSize - 1) % mCap];
  mFront = mFront == 0 ? mCap - 1 : mFront -1;
  mData[mFront] = tmp;
}

#endif
