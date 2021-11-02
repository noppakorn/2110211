template <typename T> CP::list<T> CP::list<T>::split(iterator it, size_t pos) {
    CP::list<T> result;
    if (it != end()) {
        result.mHeader->next = it.ptr;
        result.mHeader->prev = mHeader->prev;

        it.ptr->prev->next = mHeader;
        mHeader->prev->next = result.mHeader;
        mHeader->prev = it.ptr->prev;
        it.ptr->prev = result.mHeader;
        result.mSize = mSize - pos;
        mSize = pos;
    }
    return result;
}