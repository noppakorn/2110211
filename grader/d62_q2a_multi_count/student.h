#pragma GCC optimize("O3")
#define endl string("\n");
// Hey Meen, Thanks for the code!
#define fast_mod(x, y) (x >= y ? (x) % (y) : x)
#include <bits/stdc++.h>
#include <variant>

using std::size_t;

template <typename T>
std::vector<std::pair<T, size_t>>
CP::queue<T>::count_multi(std::vector<T> &k) const {
    // Hey Plum, Thanks for the code!
    const size_t N = mSize + 3UL;
    std::variant<T, bool> key[N];
    for (size_t i = 0; i < N; i++)
        key[i] = false;
    size_t *value = new size_t[N]();
    for (size_t i = 0; i < mSize; i++) {
        size_t cur = std::hash<T>()(mData[fast_mod(mFront + i, mCap)]) % N;
        const T &ref = mData[fast_mod(mFront + i, mCap)];
        while (std::holds_alternative<T>(key[cur]) &&
               std::get<T>(key[cur]) != ref) {
            if (cur+1 == N)
                cur = 1;
            else
                ++cur;
        }
        key[cur] = ref;
        value[cur]++;
    }
    std::vector<std::pair<T, size_t>> ret;
    ret.reserve(k.size());
    for (const T &ref : k) {
        size_t cur = std::hash<T>()(ref) % N;
        while (std::holds_alternative<T>(key[cur]) &&
               std::get<T>(key[cur]) != ref) {
            if (cur+1 == N)
                cur = 1;
            else
                ++cur;
        }
        ret.emplace_back(ref, value[cur]);
    }
    return ret;
}
