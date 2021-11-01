void shift(int k) {
    int count = 0;
    if (k == 0) return;
    auto it = begin();
    if (k > 0) {
        for (int i = 0; i < k; ++i) {
            ++it;
        }
    } else {
        for (int i = 0; i > k; --i) {
            --it;
            ++count;
        }
    }
    std::cout << count << std::endl;
    std::cout << *it << std::endl;
}
