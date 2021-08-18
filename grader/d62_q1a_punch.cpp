#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it, int k) {
    // write some code here
    // don’t forget to return something
    int index = it - v.begin();
    int first = max(index - k, 0);
    int second = min(index + k + 1, (int)v.size());
    vector<string> out(v);
    out.erase(out.begin() + first, out.begin() + second);
    return out;
}
int main() {
    int n, j, k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result) {
        cout << x << endl;
    }
}