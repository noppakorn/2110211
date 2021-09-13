#include <bits/stdc++.h>
int main() {
    int n;
    std::cin >> n;
    std::cout << (1 << (int)ceil(log2(n))) - n;
}
