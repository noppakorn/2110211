#include <algorithm>
#include <vector>
#include "priority_queue.h"
template <typename T,typename Comp> std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
    std::vector<T> r;
    r.reserve(1 << k);
    size_t ind = 0;
    for (size_t i = 0; i < k; ++i) {
        ind += 1 << i;
    }
    for (size_t i = ind; i < std::min(ind + (1 << k), mSize); ++i) {
        std::cout << i << std::endl;
        r.emplace_back(mData[ind+i]);
    }
    std::sort(r.rbegin(), r.rend(), mLess);
    return r;
}