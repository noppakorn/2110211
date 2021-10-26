template <class T> void CP::queue<T>::move_to_front(size_t pos) {
    while (pos > 0) {
        std::swap(mData[(mFront + pos) % mCap],
                  mData[(mFront + pos - 1) % mCap]);
        --pos;
    }
}