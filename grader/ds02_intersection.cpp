#include <algorithm>
#include <iostream>
#include <vector>
int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<int> v1(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v1[i];
    }
    std::sort(v1.begin(), v1.end());
    std::vector<int> res;
    res.reserve(m);
    for (int i = 0; i < m; ++i) {
        int tmp;
        std::cin >> tmp;
        if (std::binary_search(v1.begin(), v1.end(), tmp)) {
            res.emplace_back(tmp);
        }
    }
    std::sort(res.begin(), res.end());
    if (res.size() > 0) {
        int prev = res[0];
        std::cout << prev << " ";
        for (auto &x : res) {
            if (prev != x) {
                std::cout << x << " ";
                prev = x;
            }
        }
    }
}