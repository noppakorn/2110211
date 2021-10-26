#pragma GCC optimize("Ofast")
#define endl string("\n")
int fast_mod(const int &input, const int &ceil) {
    return input >= ceil ? input % ceil : input;
};
template <class T> void CP::queue<T>::back_to_front() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    if (mSize == 0)
        return;
    T tmp = mData[fast_mod(mFront + mSize - 1, mCap)];
    mFront = mFront == 0 ? mCap - 1 : mFront - 1;
    mData[mFront] = tmp;
}