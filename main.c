#include <stdint.h>
#include <stdio.h>
#pragma GCC optimize("O3")
int main() {
    int_fast16_t m, n;
    scanf("%ld%ld", &m, &n);
    while (n--) {
        int_fast16_t a, b;
        scanf("%ld%ld", &a, &b);
        if (a == b) {
            printf("a and b are the same node\n");
        } else if (a > b) {
            while (a > b) {
                --a;
                a>>=1;
            }
            if (b == a)
                printf("b is an ancestor of a\n");
            else
                printf("a and b are not related\n");
        } else if (a < b) {
            while (b > a) {
                --b;
                b>>=1;
            }
            if (b == a)
                printf("a is an ancestor of b\n");
            else
                printf("a and b are not related\n");
        }
    }
}