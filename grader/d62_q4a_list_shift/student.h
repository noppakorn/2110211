template <typename T> void CP::list<T>::shift_left() {
    mHeader->prev->next = mHeader->next;
    mHeader->next->prev = mHeader->prev;
    mHeader->prev = mHeader->next;
    mHeader->next = mHeader->next->next;
    mHeader->prev->next = mHeader;
    mHeader->next->prev = mHeader;
}