#pragma GCC optimize("O3")
#define endl string("\n")
template <typename T> void CP::list<T>::remove_all(const T &value) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    auto it = begin();
    while (it != end()) {
        if (*it == value) {
            it.ptr->prev->next = it.ptr->next;
            it.ptr->next->prev = it.ptr->prev;
            delete (it++).ptr;
            mSize--;
        }
        else {
            ++it;
        }
    }
}
