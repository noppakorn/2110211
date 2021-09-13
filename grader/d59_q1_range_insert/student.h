#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last) {
    // write your code here
    size_t pos = position - begin();
    T *tmp = new T[size() + last - first];
    int count = 0; 
    int i = 0;
    for (; i < size(); ++i) {
        if (i == pos) {
            for (auto it = first; it != last; ++it) {
                tmp[i + count] = *it;
                ++count;
            }
        }
        tmp[i + count] = mData[i];
    }
    if (pos == size()) {
        for (auto it = first; it != last; ++it) {
            tmp[i + count] =*it;
            ++count;
        }
    }
    delete[] mData;
    mData = tmp;
    mSize = size() + last - first;
    mCap = mSize;
}

#endif
