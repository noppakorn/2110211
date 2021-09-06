#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M, A;
    cin >> N >> M >> A;
    vector<int> v(N);
    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }
    int U, I, P;
    vector<map<int, int>> vm(N);
    for (int i = 0; i < A; ++i) {
        char action;
        cin >> action;
        switch (action) {
        case 'B':
            cin >> U >> I >> P;
            vm[I - 1][U - 1] = P;
            break;
        case 'W':
            cin >> U >> I;
            auto it = vm[I - 1].find(U - 1);
            if (it != vm[I - 1].end()) {
                vm[I - 1].erase(it);
            }
            break;
        }
    }
    vector<vector<int>> user_winnings(M);
    for (size_t e = 0; e < vm.size(); e++) {
        priority_queue<pii> pq;
        for (auto &k : vm[e]) {
            pq.push(make_pair(k.second, k.first));
        }
        while (!pq.empty() && v[e] > 0) {
            user_winnings[pq.top().second].emplace_back(e);
            pq.pop();
            v[e]--;
        }
    }
    for (auto &x : user_winnings) {
        if (x.size() > 0) {
            for (auto &y : x) {
                cout << y + 1 << " ";
            }
            cout << "\n";
        } else {
            cout << "NONE\n";
        }
    }
}
