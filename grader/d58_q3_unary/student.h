#pragma GCC optimize("O3")
#define endl string("\n");
template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* ptr) const {
  size_t ret = 0;
  if (ptr->left == nullptr && ptr->right != nullptr) {
    ++ret;
  } else if (ptr->right == nullptr && ptr->left != nullptr) {
    ++ret;
  }
  if (ptr->left != nullptr) ret += process(ptr->left);
  if (ptr->right != nullptr) ret += process(ptr->right);
  return ret;
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
size_t CP::map_bst<KeyT,MappedT,CompareT>::count_unary() const {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  return process(mRoot);
}