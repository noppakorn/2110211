#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, w;
    cin >> n >> w;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    if (n == w) {
        cout << v[n / 2];
    }
    for (int i = 0; i < n - w; ++i) {
        int curr = i;
        vector<int> u(w + 1);
        for (int j = 0; j < w + 1; ++j) {
            u[j] = v[curr++];
        }
        sort(u.begin(), u.end());
        cout << u[w / 2] << " ";
    }
}