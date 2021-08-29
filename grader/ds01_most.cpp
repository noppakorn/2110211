#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int round;
    cin >> round;
    map<string, int> m;
    int max = 0;
    while (round--) {
        string s;
        cin >> s;
        m[s]++;
        if (m[s] > max)
            max = m[s];
    }

    string out;
    for (auto &p : m) {
        if (p.second == max) {
            stringstream ss;
            ss << p.second;
            out = p.first + " " + ss.str();
        }
    }
    cout << out << endl;
}
