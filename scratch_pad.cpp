#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    auto comp = [](int a, int b){
        return a > b;
    };
    set<int, decltype(comp)> s({5,7,6,8},comp);
    
    for (auto &x : s) {
        cout << x << "\n";
    }
}

