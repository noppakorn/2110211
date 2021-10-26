#pragma GCC optimize("O3")
#define endl string("\n");
#include <ext/pb_ds/assoc_container.hpp>
template <class T>
std::vector<std::pair<T, size_t>>
CP::queue<T>::count_multi(std::vector<T> &k) const {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    __gnu_pbds::cc_hash_table<T, size_t> m;
    for (auto &x : k)
        m[x];
    for (size_t i = 0; i < mSize; ++i) {
        auto t = m.find(mData[(mFront + i) % mCap]);
        if (t != m.end())
            t->second++;
    }
    std::vector<std::pair<T, size_t>> v;
    for (auto &x : k)
        v.push_back({x, m[x]});
    return v;
}