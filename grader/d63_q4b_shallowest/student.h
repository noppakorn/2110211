#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>
#include "map_bst.h"

//you can use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf(node* n) {
  if (n == nullptr) return -1;
  if (n->left == nullptr && n->right != nullptr) return 1 + shallowest_leaf(n->right);
  if (n->left != nullptr && n->right == nullptr) return 1 + shallowest_leaf(n->left);
  return 1 + std::min(shallowest_leaf(n->left), shallowest_leaf(n->right));
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT,MappedT,CompareT>::shallowest_leaf() {
  //write your code here
  return shallowest_leaf(mRoot);
}


#endif
