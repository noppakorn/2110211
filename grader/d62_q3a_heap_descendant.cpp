#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, a;
    cin >> n >> a;
    vector<int> desc;
    desc.push_back(a);
    int idx = 0;
    while (true) {
        if (2 * a + 1 < n) {
            desc.push_back(2 * a + 1);
            if (2 * a + 2 < n) desc.push_back(2 * a + 2);
            a = desc[++idx];
        }
        else {
            break;
        }
    }
    cout << desc.size() << "\n";
    for (const auto &x : desc) cout << x << " ";
}
