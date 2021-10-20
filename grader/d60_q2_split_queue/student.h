#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
//#pragma once
#include <vector>
#include <queue>
#include "queue.h"
#define endl "\n"
#pragma GCC optimize("O3")

int fast_mod(const int &input, const int &ceil) {
    return input >= ceil ? input % ceil : input;
};

template <typename T>
std::vector< CP::queue<T> > CP::queue<T>::split_queue(int k) {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::vector<CP::queue<T> > qs(k);
    for (size_t i = 0; i < k; ++i) {
        for (size_t j = i; j < size(); j += k) {
            qs[i].push(mData[fast_mod(j+mFront, mCap)]);
        }
    }
    mSize = 0;
    mFront = 0;
    return qs;
}

#endif

