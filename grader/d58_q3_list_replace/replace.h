void replace(const T &x, list<T> &y) {
    auto it = begin();
    while (it != end()) {
        if (*it == x) {
            it = erase(it);
            for (auto val : y) {
                insert(it, val);
            }
        } else {
            ++it;
        }
    }
}
