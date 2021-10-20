#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for (char c = 'a'; c < 'z'; c += 2) {
        cout << "#define ";
        cout << c << " " << (char)(c+1) << "\n";
    }
}
