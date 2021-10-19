#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    cin >> m >> n;
    while (n--) {
        int a,b;
        cin >> a >> b;
        if (a == b) {
            cout << "a and b are the same node" << endl;
        } else if (a > b) {
            while (a > b) {
                a = (a - 1) / 2;
            }
            if (b == a)
                cout << "b is an ancestor of a" << endl;
            else
                cout << "a and b are not related" << endl;
        } else if (a < b) {
            while (b > a) {
                b = (b - 1) / 2;
            }
            if (b == a)
                cout << "a is an ancestor of b" << endl;
            else
                cout << "a and b are not related" << endl;
        }
    }
}
