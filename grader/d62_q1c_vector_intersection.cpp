#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    set<int> a;
    while (m--) {
        int i;
        scanf("%d", &i);
        a.insert(i);
    }
    set<int> u;
    while (n--) {
        int i;
        scanf("%d", &i);
        if (a.find(i) != a.end())
            u.insert(i);
    }
    for (auto &x : u) {
        printf("%d ", x);
    }
    printf("\n");
}
