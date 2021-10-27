#pragma GCC optimize("O3")
#define endl string("\n");
#include <bits/stdc++.h>

size_t fast_mod(const int &input, const int &ceil) {
    return input >= ceil ? input % ceil : input;
};

template <class T>
std::vector<std::pair<T, size_t>>
CP::queue<T>::count_multi(std::vector<T> &k) const {
    // Look mom, I'm hall of fame now!
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::unordered_map<T, size_t> m(k.size() * 2);
    for (const auto &x : k)
        m[x];
    for (size_t i = 0; i < mSize; ++i) {
        auto t = m.find(mData[fast_mod(mFront + i, mCap)]);
        if (t != m.end())
            t->second++;
    }
    std::vector<std::pair<T, size_t>> v;
    v.reserve(k.size());
    for (const auto &x : k)
        v.push_back({x, m[x]});
    return v;
}