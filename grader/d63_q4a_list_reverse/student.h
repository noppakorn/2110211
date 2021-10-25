#pragma GCC optimize("O3")
#include <algorithm>
#define endl string("\n")
template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    if (a == b)
        return a;
    iterator ret = a;
    --b;
    while (a != b) {
        std::swap(*a, *b);
        if (++a == b)
            break;
        --b;
    }
    return ret;
}
