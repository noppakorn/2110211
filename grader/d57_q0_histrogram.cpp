#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    map<string,int> m;
    while (n--) {
        string s;
        cin >> s;
        m[s]++;
    }
    for (auto &p : m) {
        if (p.second <= 1) {
            continue;
        }
        cout << p.first << " " << p.second << "\n";
    }
}
