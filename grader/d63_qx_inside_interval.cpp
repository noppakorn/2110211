#include <bits/stdc++.h>
using namespace std;

bool check_range(map<int, int>::iterator it, int x) {
    return (x >= it->first && x <= it->second);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    cin >> m >> n;
    map<int, int> d;

    while (m--) {
        int a, b;
        cin >> a >> b;

        d[a] = b;
    }

    while (n--) {
        int x;
        cin >> x;
        auto it = d.lower_bound(x);
        if (it->first == x) {
            cout << 1 << " ";
        }
        else if (it == d.end() || it->first > x) {
            it--;
            cout << check_range(it, x) << " ";
        } 
    }
    cout << "\n";
}