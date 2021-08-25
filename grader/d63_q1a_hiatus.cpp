#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    set<pair<int, int>> d;

    while (n--) {
        int a, b;
        cin >> a >> b;

        d.insert(make_pair(a, b));
    }

    while (m--) {
        int a, b;
        cin >> a >> b;

        auto it = d.find(make_pair(a, b));
        if (it != d.end()) {
            cout << "0 0 ";
            continue;
        }

        while (true) {
            auto beg = d.begin();
            if (a < beg->first || ((a == beg->first) && b < beg->second)) {
                cout << "-1 -1 ";
                break;
            }

            if (b - 1 < 1) {
                b = 12;
                --a;
            } else {
                --b;
            }

            auto it2 = d.find(make_pair(a, b));
            if (it2 != d.end()) {
                cout << it2->first << " " << it2->second << " ";
                break;
            } 
        }
    }
}
