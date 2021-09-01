#include <iostream>
#include <queue>
#include <vector>
using namespace std;
size_t qcount(queue<int> q, int k) {
    // write your code here
    int count = 0;
    while (!q.empty()) {
        if (q.front() == k) count++;
        q.pop();
    }
    return count;
}
int main() {
    // for faster cin, cout
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    queue<int> q;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        q.push(a);
    }
    cout << qcount(q, k) << endl;
}