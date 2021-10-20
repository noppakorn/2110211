#pragma GCC optimize("O3")
#define endl string("\n")
int fast_mod(const int &input, const int &ceil) {
    return input >= ceil ? input % ceil : input;
};
template <typename T> T CP::queue<T>::operator[](int idx) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    if (idx < 0) idx += mSize;
    return mData[fast_mod(mFront + idx, mCap)];
}
