#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <iostream>


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  if (K > mSize) {
    mSize = 0;
  }
  else {
    mSize = mSize - K;
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  std::vector<T> v;
  for (size_t i = 0; i < K; ++i) {
    if (mSize == 0) break;
    v.push_back(top());
    mSize--;
  }
  std::stack<T> s;
  if (v.empty()) return s;
  for (auto it = v.end() - 1; it >= v.begin(); --it) {
    s.push(*it);
  }
  return s;
}

#endif
