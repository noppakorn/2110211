template <class T> T CP::queue<T>::operator[](int i) {
    return mData[(i < 0 ? mFront + mSize + i : mFront + i) % mCap];
}