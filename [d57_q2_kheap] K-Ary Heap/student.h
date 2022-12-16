#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
//                 15
//   12        12      13    15
//11 10 9 8  7 4 12
//temp = 16
    T temp = mData[idx];
    while(idx > 0){
        int p = (idx-1)/4;
        if (mLess(temp,mData[p])) break;
        else mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] =temp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
     T tmp = mData[idx];
      size_t c;
      while ((c = 4 * idx + 1) < mSize) {
        size_t pos = 0;
        if (c + 1 < mSize && mLess(mData[c+pos],mData[c+1]) ) pos = 1;
        if (c + 2 < mSize && mLess(mData[c+pos],mData[c+2]) ) pos = 2;
        if (c + 3 < mSize && mLess(mData[c+pos],mData[c+3]) ) pos = 3;
        if ( mLess(mData[c+pos],tmp) ) break;
        mData[idx] = mData[c+pos];
        idx = c+pos;
      }
      mData[idx] = tmp;
}

#endif

