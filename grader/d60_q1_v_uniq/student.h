#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include <unordered_set>
#include <algorithm>
template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  std::unordered_set<T> s;
  CP::vector<T> tmp;
  for (int i = 0; i < mSize; ++i) {
    if (s.find(mData[i]) == s.end()) {
      s.insert(mData[i]);
      tmp.push_back(mData[i]);
    }
  }
  std::swap(mData, tmp.mData);
  std::swap(mSize, tmp.mSize);
  std::swap(mCap, tmp.mCap);
}
#endif
