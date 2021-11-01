void splitList(list<T>& list1, list<T>& list2) {
    auto it = begin();
    size_t i = 0;
    for (; i < mSize - mSize / 2; ++i) {
        ++it;
    }
    // auto ptr = it.ptr;

    mHeader->next->prev = list1.mHeader->prev;
    list1.mHeader->prev->next = mHeader->next;
    it.ptr->prev->next = list1.mHeader;
    list1.mHeader->prev = it.ptr->prev->next;
    list1.mSize += i;

    it.ptr->prev = list2.mHeader->prev;
    list2.mHeader->prev->next = it.ptr;
    mHeader->prev->next = list2.mHeader;
    list2.mHeader->prev = mHeader->prev;
    list2.mSize += mSize-i;

    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize = 0;
}