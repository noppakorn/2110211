#pragma GCC optimize("O3")
#define endl "\n";
#include <math.h>
template <class T, class c> int CP::priority_queue<T, c>::height() const {
    return mSize ? int(log2(mSize)) : -1;
}