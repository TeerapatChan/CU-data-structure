#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
    CP::map_bst<KeyT,MappedT,CompareT> result;
    node *ptr;
    ptr = mRoot;
    while(ptr->data.first < val){
        ptr = ptr->right;
    }
    ptr->parent->left = NULL;
    ptr->parent->right = NULL;
    ptr->parent = result.mRoot;
    return result;
}

#endif
