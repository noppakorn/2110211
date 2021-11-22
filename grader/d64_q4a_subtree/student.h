#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  size_t count = 0;
  if (n->left != NULL) {
    count += process(n->left);
  } 
  if (n->right != NULL) {
    count += process(n->right);
  }
  return 1 + count;
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  if (mSize != 0) {
    left.clear();
    right.clear();
    if (mRoot->left != NULL) {
      left.mRoot = mRoot->left;
      left.mSize = process(mRoot->left);
      mRoot->left->parent = NULL;
      mRoot->left = NULL;
    }
    if (mRoot->right != NULL) {
      right.mRoot = mRoot->right;
      right.mSize = process(mRoot->right);
      mRoot->right->parent = NULL;
      mRoot->right = NULL;
    }
    mSize = 1;
    return mRoot->data;
  } else {
    return std::pair<KeyT,MappedT>();
  }
}

#endif
