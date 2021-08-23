#include <map>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n];
    map<int, int> mi;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
        mi[arr[i]]++;
    }
wl:
    while (m--) {
        int tgt;
        scanf("%d", &tgt);
        for (int i = 0; i < n; ++i) {
            if (2 * arr[i] == tgt) {
                if (mi.find(arr[i])->second > 1) {
                    printf("YES\n");
                    goto wl;
                }
            } else if (mi.find(tgt - arr[i]) != mi.end()) {
                printf("YES\n");
                goto wl;
            }
        }
        printf("NO\n");
    }
}
