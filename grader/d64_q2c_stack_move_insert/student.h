#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  if (m > s2.size()) {
    m = s2.size();
  }
  T* tmp = new T[mSize + m]();
  int i = 0;
  for (; i < mSize - k; ++i) {
    tmp[i] = mData[i];
  } 
  int a = i;
  i += m;
  for (int j = 0; j < m; ++j) {
    tmp[--i] = s2.top();
    s2.pop();
  }
  i += m;
  for (int s = a; s < mSize; ++s) {
    tmp[i++] = mData[s];
  }
  delete [] mData;
  mData = tmp;
  mSize += m;
  mCap = mSize;
}
#endif
