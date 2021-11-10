#include <iostream>
#include <list>
using namespace std;

void check_and_erase(list<int> &l, list<int>::iterator &it) {
    if (l.size() == 0) return;
    auto begr = it;
    auto endr = it;

    int count = 0;

    while (*begr == *it) {
        --begr;
        ++count;
    }
    ++begr;
    --count;
    while (*endr == *it) {
        ++endr;
        ++count;
    }

    if (count >= 3) {
        while (begr != endr) {
            l.erase(begr++);
        }
        if (*(--begr) == *(--endr)) {
            check_and_erase(l, begr);
            return;
        } else {
            return;
        }
    } else {
        return;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, v, k;
    cin >> n >> v >> k;
    list<int> l;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        l.push_back(tmp);
    }
    auto it = l.begin();
    for (int i = 0; i < v; ++i) {
        it++;
    }
    it = l.insert(it, k);
    check_and_erase(l, it);
    auto it2 = l.begin();
    for (int i = 0; i < l.size(); ++i) {
        cout << *it2++ << " ";
    }
    cout << endl;
}
