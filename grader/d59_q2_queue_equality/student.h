#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
    if (mSize == other.mSize) {
        for (size_t i = 0; i < mSize; ++i) {
            if (mData[(mFront + i) % mCap] !=
                other.mData[(other.mFront + i) % other.mCap])
                return false;
        }
        return true;
    }
    return false;
}

#endif
