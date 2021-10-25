#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T &value, iterator a, iterator b,
                          CP::list<T> &output) {
    // write your code here
    int count = 0;
    while (a != b) {
        if (*a == value) {
            ++count;
            a.ptr->prev->next = a.ptr->next;
            a.ptr->next->prev = a.ptr->prev;
            delete (a++).ptr;
            --mSize;
        }
        else ++a;
    }
    while (count--) {
      iterator it = output.begin();
      node *n = new node(value,it.ptr->prev, it.ptr);
      it.ptr->prev->next = n;
      it.ptr->prev = n;
      output.mSize++;
    }
}

#endif
