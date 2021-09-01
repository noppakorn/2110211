#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x < 1 || x > n) {
            cout << "NO\n";
            return 0;
        }
        auto it = s.find(x);
        if (it == s.end()) {
            s.insert(x);
        } else {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}
