#include <bits/stdc++.h>
using namespace std;

void get_father_son(unordered_map<long long, long long> &d) {
    long long f, s;
    cin >> f >> s;
    d[s] = f;
    return;
}

void solve(const unordered_map<long long, long long> &d) {
    auto e = d.end();

    long long a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "NO\n";
        return;
    }
    auto da = d.find(a), db = d.find(b);
    if (da == e || db == e) {
        cout << "NO\n";
        return;
    }

    auto dda = d.find(da->second), ddb = d.find(db->second);
    if (dda == e || ddb == e) {
        cout << "NO\n";
        return;
    }

    if (dda->second == ddb->second) {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    unordered_map<long long, long long> d;
    while (n--)
        get_father_son(d);
    while (m--)
        solve(d);
}
