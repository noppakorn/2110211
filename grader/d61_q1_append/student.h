#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        size_t new_size = size() + s.size();
        T* tmp = new T[new_size]();
        size_t i = new_size - 1;
        for (; i >= s.size(); --i) {
            tmp[i] = top();
            pop();
        }
        for (; i > 0; --i) {
            tmp[i] = s.top();
            s.pop();
        }
        tmp[0] = s.top();
        delete [] mData;
        mData = tmp;
        mSize = new_size;
        mCap = new_size;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        size_t new_size = size() + q.size();
        T* tmp = new T[new_size]();
        size_t i = new_size - 1;
        for (; i >= q.size(); --i) {
            tmp[i] = top();
            pop();
        }
        // std::cout << "Hello" << std::endl;
        for (; i > 0; --i) {
            tmp[i] = q.front();
            q.pop();
        }
        tmp[0] = q.front();
        delete [] mData;
        mData = tmp;
        mSize = new_size;
        mCap = new_size;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        size_t new_size = size() + s.size();
        T* tmp = new T[new_size]();
        size_t i = 0;
        for (; i < size(); ++i) {
            tmp[i] = mData[i];
        }
        while (!s.empty()) {
            tmp[i++] = s.top();
            s.pop();
        }
        delete [] mData;
        mData = tmp;
        mSize = new_size;
        mCap = new_size;
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while (!q.empty()) {
            push(q.front());
            q.pop();
        }
    }
}
