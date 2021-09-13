#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>
template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T>> data) {
    // write your code here
    std::sort(data.begin(), data.end());
    T* tmp = new T[size() + data.size()];
    size_t count = 0;
    size_t curr_pos = 0;

    for (auto &p : data) {
        for (; curr_pos-count < (size_t)p.first; ++curr_pos) {
            tmp[curr_pos] = mData[curr_pos-count];
        }
        tmp[curr_pos++] = p.second;
        ++count;
    }

    while (curr_pos-count < size()) {
        tmp[curr_pos] = mData[curr_pos-count];
        ++curr_pos;
    }
    delete [] mData;
    mData = tmp;
    mSize = size() + data.size();
    mCap = mSize;
}
#endif
