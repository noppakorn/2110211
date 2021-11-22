#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    size_t n, m, k;
    cin >> n >> m >> k;
    vector<size_t> v(k);
    for (size_t i = 0; i < k; ++i) {
        cin >> v[i];
    }
    unordered_set<string> hashed_password;
    for (size_t i = 0; i < n; ++i) {
        string tmp;
        cin >> tmp;
        hashed_password.insert(tmp);
    }
    for (int i = 0; i < m; ++i) {
        string tmp;
        cin >> tmp;
        for (int j = 0; j < k; ++j) {
            tmp[j] = (tmp[j] + v[j] - 'a') % 26 + 'a';
        }
        cout << ((hashed_password.find(tmp) != hashed_password.end())
                     ? "Match\n"
                     : "Unknown\n");
    }
}
