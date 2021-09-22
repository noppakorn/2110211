#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res(k);
  for (int i = 0; i < k; ++i) {
    res[i] = mData[(mFront + i) % mCap];
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  mSize = to-from;
  mCap = mSize;
  mFront = 0;
  mData = new T[mSize]();
  size_t pos = 0;
  for (auto it = from; it != to; ++it) {
    mData[pos++] = *it;
  }
}

#endif
