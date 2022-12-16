#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
    auto f = first;
    auto l = last;
    int size =  0;
    while(f != l){
        f++;
        size++;
    }
    mData = new T[size]();
    mCap = size;
    mSize = size;
    int i = 0;
    last--;
    first--;
    while(last != first){
        mData[i] = *last;
        i++;
        last--;
    }
    //set = top 1 2 3 4 5 6 7 8 bottom
}

#endif
