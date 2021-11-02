#include <algorithm>
template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
    std::rotate(first, first+k, last);
}
