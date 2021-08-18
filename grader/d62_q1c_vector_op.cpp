#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v) {
    for (int i = 0; i < v.size() / 2; i++) {
        swap(v[i], v[v.size() - 1 - i]);
    }
}

int main() {
    int round;
    cin >> round;
    vector<int> v;
    while (round--) {
        string s;
        cin >> s;

        if (s == "pb") {
            int x;
            cin >> x;
            v.push_back(x);
        } else if (s == "sa") {
            sort(v.begin(), v.end());
        } else if (s == "sd") {
            sort(v.begin(), v.end());
            reverse(v);
        } else if (s == "r") {
            reverse(v);
        } else if (s == "d") {
            int i;
            cin >> i;
            v.erase(v.begin() + i);
        }
    }
    for (auto e : v) {
        cout << e << " ";
    }
    cout << "\n";
}