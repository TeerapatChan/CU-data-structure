#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //write your code here
  if (n == NULL) return 0;
  return 1 + process(n->left) + process(n->right);
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  if (mSize == 0) return std::pair<KeyT,MappedT>();
  left.clear();
  right.clear();
  left.mRoot = mRoot->left;
  left.mSize = process(mRoot->left);
  mRoot->left = NULL;
  right.mRoot = mRoot->right;
  right.mSize = process(mRoot->right);
  mRoot->right = NULL;
  std::pair<KeyT, MappedT> p;
  p.first = mRoot->data.first;
  p.second = mRoot->data.second;
  mSize = 1;
  return p;
}

#endif

