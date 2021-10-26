#include <bits/stdc++.h>
using namespace std;
int main() {
    uint64_t n, k, s, f;
    cin >> n >> k;
    if (k == 1)
        cout << n - k << "\n";
    else {
        s = 0;
        f = 0;
        while (s < n) {
            s += pow(k, f++);
        }
        cout << f - 1 << "\n";
    }
}