#pragma GCC optimize("O3")
#define endl "\n"
using namespace std;
template <typename T, typename Comp>
size_t CP::priority_queue<T, Comp>::get_rank(size_t pos) const {
    size_t count = 0;
    size_t size = mSize;
    while (size--) {
        if (mLess(mData[pos], mData[mSize-size]))
            ++count;
    }
    return count;
}