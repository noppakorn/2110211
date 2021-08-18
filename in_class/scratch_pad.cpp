#include <bits/stdc++.h>
#include <sstream>
using namespace std;

std::string to_string(const vector<int> &v) {
    stringstream ss;
    for (auto i : v) {
        ss << i << ", ";
    }
    return ss.str();
}

int main() {
    vector<int> v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    cout << to_string(v) << endl;
    auto &v2 = v;
    vector<int>* xxx = &v;
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    cout << to_string(v) << endl;
    cout << to_string(v2) << endl;
    cout << to_string(*(xxx)) << endl;
}
