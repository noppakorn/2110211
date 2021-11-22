#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    map<int,int> to_pow;
    for (int i = 0; i < n; ++i) {
        // cin >> to_pow[i];
        int tmp;
        cin >> tmp;
        ++to_pow[tmp];
    }
    int winnings = 0;
    for (int i = 0; i < m; ++i) {
        int c,t;
        cin >> c;
        for (int j = 0; j < c; ++j) {
            cin >> t;
            auto end = --to_pow.end();
            if (to_pow.size() == 0 || end->first <= t) {
                cout << winnings + 1 << "\n";
                return 0;
            }
            // auto used_card = upper_bound(to_pow.begin() + new_beg, to_pow.end(), t);
            auto used_card = to_pow.upper_bound(t);
            if (used_card == to_pow.end()) {
                // to_pow.erase(to_pow.begin());
                to_pow.begin()->second--;
                if (to_pow.begin()->second == 0) {
                    to_pow.erase(to_pow.begin());
                }
            } else {
                // to_pow.erase(used_card);
                used_card->second--;
                if (used_card->second == 0) {
                    to_pow.erase(used_card);
                }
            }
        }
        ++winnings;
    }
    cout << winnings + 1 << "\n";
}
