void shift(int k) {
    auto it = begin();
    if (k < 0) {
        k = k % (int)mSize;
        k = (k + (int)mSize) % (int)mSize;
    } else {
        k = k % (int)mSize;
    }
    if (k == 0) {
        return;
    } else {
        for (int i = 0; i < k; ++i)
            ++it;
    }
    auto ofirst = mHeader->next;
    auto olast = mHeader->prev;
    ofirst->prev = olast;
    olast->next = ofirst;

    auto nfirst = it.ptr;
    auto nlast = it.ptr->prev;

    mHeader->next = nfirst;
    nfirst->prev = mHeader;

    mHeader->prev = nlast;
    nlast->next = mHeader;
}