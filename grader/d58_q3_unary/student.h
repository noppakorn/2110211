#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename KeyT, typename MappedT, typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::process(node *ptr) const {
    int count = 0;
    if (ptr == nullptr)
        return 0;
    else if (ptr->left != nullptr && ptr->right == nullptr) {
        ++count;
        count += process(ptr->left);
    } else if (ptr->left == nullptr && ptr->right != nullptr) {
        ++count;
        count += process(ptr->right);
    } else {
        count += process(ptr->left);
        count += process(ptr->right);
    }
    return count;
}

template <typename KeyT, typename MappedT, typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::count_unary() const {
    return process(mRoot);
}

#endif
