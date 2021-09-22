#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>
#include <vector>
#include <cstdlib>

template <typename T>
std::vector<std::pair<T, size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    // write your code here
    std::vector<std::pair<T, size_t>> v(k.size());
    std::map<T,int> m;
    for (size_t i = 0; i < mSize; ++i) {
        ++m[mData[(mFront+i) % mCap]];
    }
    for (size_t i = 0; i < k.size(); ++i) {
        v[i] = std::make_pair(k[i], m[k[i]]);
    }
    return v;
}

#endif
