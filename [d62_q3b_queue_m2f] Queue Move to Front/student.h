#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    //0 1 2 _ _ 5 6 7
    //0 1 _ _ _ 5 6 7
    //*1 2 3 4
    for(int i = pos; i > 0; i--){
        std::swap(mData[(mFront+i)%mCap],mData[(mFront+i-1)%mCap]);
    }
}
#endif
