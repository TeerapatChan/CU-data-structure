#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  int h = -1;
  int i  = 0;
  int size = 1,count = 0;
  while(i < mSize){
    if (count == 0) h++;
    i++;
    count++;
    if (count == size){
        count = 0;
        size *= 2;
    }
  }
  return h;
}

#endif

