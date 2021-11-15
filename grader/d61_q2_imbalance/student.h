int get_height(node *n, KeyT &ans, int &maxImb) {
    if (n == nullptr)
        return -1;
    int hL = get_height(n->left, ans, maxImb);
    int hR = get_height(n->right, ans, maxImb);
    int imb = std::abs(hL - hR);
    int h = 1 + (hL > hR ? hL : hR);
    if (imb > maxImb) {
        maxImb = imb;
        ans = n->data.first;
    } else if (imb == maxImb && mLess(n->data.first, ans)) {
        ans = n->data.first;
    }
    return h;
}

KeyT getValueOfMostImbalanceNode() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int maxImb = 0;
    KeyT ans = mRoot->data.first;
    get_height(mRoot, ans, maxImb);
    return ans;
}