#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, i = 0;
    std::cin >> n >> k;
    long long p = 0;
    if (k <= 1) {
        cout << n-k;
        return 0;
    }
    while (true) {
        p += pow(k, i);
        if (p > n) {
            cout << i;
            break;
        } else if (p == n) {
            cout << i;
            break;
        }
        ++i;
    }
}