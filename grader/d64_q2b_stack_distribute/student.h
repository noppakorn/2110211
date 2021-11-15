#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <algorithm>
#include <vector>

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
    std::vector<std::vector<T>> v(k);
    size_t least = mSize / k;
    size_t remain = mSize % k;
    int ind = mSize - 1;
    for (size_t i = 0; i < k; ++i) {
      size_t size = least; 
      if (remain > 0) {
        size++;
        remain--;
      }
      for (size_t j = 0; j < size; ++j) {
        v[i].push_back(*(mData+(ind--)));
      }
    }
    return v;
}
#endif
