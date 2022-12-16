#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  int i = 0;
  while(i < mSize){
    if (mData[i] == k) return true;
    i++;
  }
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  //0 ->0   1
  //1,2 ->1   2
  //3,4,5,6->2   4
  //7,8,9,10, 11,12,13,14->3
  //29->4
  int pos = -1, i = 0, size = 1,count = 0, h = -1;
  int curr_h = 0;
  while(i < mSize){
    if (mData[i] == k) {
        pos = i;
        h = curr_h;
    }
    i++;
    count++;
    if (count == size){
        count = 0;
        size = size*2;
        curr_h++;
    }
  }
  return h;
}

#endif

