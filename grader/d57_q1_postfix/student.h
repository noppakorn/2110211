#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int calculate(int l, int r, char op) {
    if (op == '+') {
        return l + r;
    } else if (op == '-') {
        return l - r;
    } else if (op == '*') {
        return l * r;
    } else {
        return l / r;
    }
}

int eval_postfix(vector<pair<int, int>> v) {
    // WRITE YOUR CODE HERE
    // DON"T FORGET TO RETURN THE RESULT
    map<int, char> m = {{0, '+'}, {1, '-'}, {2, '*'}, {3, '/'}};
    stack<int> s;
    int l,r;
    for (auto x : v) {
        switch (x.first) {
        case 0:
            r = s.top();
            s.pop();
            l = s.top();
            s.pop();
            s.push(calculate(l, r, m[x.second]));
            break;
        case 1:
            s.push(x.second);
            break;
        }
    }
    return s.top();
}

#endif
