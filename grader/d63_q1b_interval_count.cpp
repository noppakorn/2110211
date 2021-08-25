#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m, n, k;
    cin >> m >> n >> k;
    vector<int> v;
    while (m--) {
        int x;
        cin >> x;
        v.emplace_back(x);
    }
    sort(v.begin(), v.end());
    while (n--) {
        int p;
        cin >> p;
        if (p - k > v[v.size() - 1]) {
            cout << 0 << " ";
            continue;
        }
        if (p + k < v[0]) {
            cout << 0 << " ";
            continue;
        }
        auto low = lower_bound(v.begin(), v.end(), max(p - k, v[0]));
        auto high = lower_bound(v.begin(), v.end(), min(p + k, v[v.size() - 1]));
        if (*high > p + k) {
            high--;
        }
        cout << (high-low+1) << " ";
    }
    cout << "\n";
}
