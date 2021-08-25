#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

int main() {
    auto ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; ++i) {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < 15; ++i) {
        printf("%d\n", ptr[i]);
    }
}
