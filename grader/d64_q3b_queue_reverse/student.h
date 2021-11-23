template <class T> void CP::queue<T>::reverse(int a, int b) {
    while (a < b)
        std::swap(mData[(mFront + (a++)) % mCap],
                  mData[(mFront + (b--)) % mCap]);
}