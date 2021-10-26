template <class T> void CP::queue<T>::move_to_back(size_t pos) {
    while (pos < mSize - 1) {
        std::swap(mData[(mFront + pos) % mCap],
                  mData[(mFront + pos + 1) % mCap]);
        ++pos;
    }
}