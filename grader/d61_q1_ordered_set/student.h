#include <set>
#include <vector>

using namespace std;

template <typename T>
vector<T> Union(const vector<T> &A, const vector<T> &B) {
    vector<T> v;
    set<T> s;
    for (auto &x : A) {
        v.emplace_back(x);
        s.insert(x);
    }
    for (auto &x : B) {
        if (s.find(x) == s.end()) {
            v.emplace_back(x);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T> &A, const vector<T> &B) {
    vector<T> v;
    set<T> s;
    set<T> sA;
    set<T> sB;
    for (auto &x : A) {
        sA.insert(x);
    }
    for (auto &x : B) {
        sB.insert(x);
    }
    for (auto &x : A) {
        if (sA.find(x) != sA.end() && sB.find(x) != sB.end()) {
            v.emplace_back(x);
            s.insert(x);
        }
    }
    for (auto &x : A) {
        if (sA.find(x) != sA.end() && sB.find(x) != sB.end() && s.find(x) == s.end()) {
            v.emplace_back(x);
        }
    }
    return v;
}
