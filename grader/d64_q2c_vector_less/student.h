#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  if (mSize == 0 && other.mSize > 0) {
    return true;
  } else if (mSize > 0 && other.mSize > 0) {
    if (mData[0] < other.mData[0]) {
      return true;
    } else if (mData[0] == other.mData[0]) {
      int i = 1;
      for (; i < mSize; ++i) {
        if (i < other.mSize) {
          if (mData[i] < other.mData[i]) {
            return true;
          }
        }
      }
      return other.mSize > i;
    }
  }
  return false;
}

#endif
