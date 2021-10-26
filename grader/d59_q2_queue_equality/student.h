template <class T> bool CP::queue<T>::operator==(const CP::queue<T> &o) const {
    if (size() != o.size())
        return 0;
    for (int i = 0; i < mSize; ++i) {
        if (mData[(mFront + i) % mCap] != o.mData[(o.mFront + i) % o.mCap])
            return 0;
    }
    return 1;
}