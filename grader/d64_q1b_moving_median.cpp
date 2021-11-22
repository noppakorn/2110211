#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    size_t n,w;
    cin >> n >> w;
    vector<int> v(n);
    for (size_t i = 0; i < n; ++i) {
        cin >> v[i];
    }
    multiset<int> s;
    for (size_t i = 0; i < w+1; ++i) {
        s.insert(v[i]);
    }
    auto it = s.begin();
    for (size_t i = 0; i < w/2; ++i) {
        ++it;
    }
    for (size_t i = 0; i < n-w; ++i) {
        cout << *it << " ";
        auto tmp = s.find(v[i]);
        s.erase(tmp);
        s.insert(v[i+w+1]);
        it = s.begin();
        for (size_t i = 0; i < w/2; ++i) {
            ++it;
        }
    }
    cout << endl;
}