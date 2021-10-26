template <class T> std::vector<T> CP::queue<T>::to_vector(int k) const {
    if (k > mSize)
        k = mSize;
    std::vector<T> v(k);
    for (int i = 0; i < k; ++i)
        v[i] = mData[(mFront + i) % mCap];
    return v;
}
template <class T> CP::queue<T>::queue(iterator from, iterator to) {
    mData = new T[1];
    mCap = 1;
    mSize = 0;
    while (from != to) {
        push(*(from++));
    }
}