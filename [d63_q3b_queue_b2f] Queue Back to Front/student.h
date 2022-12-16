#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::back_to_front() {
  if (mSize > 0) {
    int new_front = (mFront + mCap - 1) % mCap;
    mData[new_front] = mData[(mFront+mSize-1) % mCap];
    mFront = new_front;
  }
}

#endif

