#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    size_t n, k;
    cin >> n >> k;
    map<string, int> m;

    while (n--) {
        string s;
        cin >> s;
        m[s]++;
    }
    vector<int> v;
    for (auto &x : m) {
        v.push_back(x.second);
    }
    sort(v.begin(), v.end());

    if (k > v.size()) {
        cout << *(v.begin()) << "\n";
    } else {
        cout << *(v.begin() + v.size() - k) << "\n";
    }
}
