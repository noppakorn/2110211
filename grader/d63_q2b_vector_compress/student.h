#pragma GCC optimize("O3")
#define endl string("\n")
template <class T> void CP::vector<T>::compress() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    T *tmp = new T[mSize];
    for (int i = 0; i < mSize; ++i) {
        tmp[i] = mData[i];
    }
    delete[] mData;
    mData = tmp;
    mCap = mSize;
}