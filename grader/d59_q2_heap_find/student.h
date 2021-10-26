#include <bits/stdc++.h>
template <class T, class C> bool CP::priority_queue<T, C>::find(T k) const {
    return std::find(mData, mData + mSize, k) != mData + mSize;
}
template <class T, class C>
int CP::priority_queue<T, C>::find_level(T k) const {
    int i = mSize - 1;
    for (; i >= 0; --i) {
        if (mData[i] == k) {
            break;
        }
    }
    return i == 0 ? i : log2(i);
}