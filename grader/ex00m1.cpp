#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

class Comp {
  public:
    bool operator()(pii a, pii b) { return a.first > b.first; }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    Comp c;
    priority_queue<pii, vector<pii>, Comp> wait(c);
    for (int i = 0; i < N; ++i) {
        if (i == M) return 0;
        int x;
        cin >> x;
        wait.push(make_pair(x, x));
        cout << "0\n";
    }
    vector<int> time;
    int i = 1;
    while (time.size() < (size_t)M-N) {
        if (wait.top().first <= i) {
            auto top = wait.top();
            wait.pop();
            time.emplace_back(top.first);
            wait.push(make_pair(top.first + top.second,
                                top.second));
        }
        ++i;
    }

    for (auto &e : time) {
        cout << e << "\n";
    }
}