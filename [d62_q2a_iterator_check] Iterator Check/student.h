#ifndef __STUDENT_H_
#define __STUDENT_H_
#include "vector.h"
template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const {
  //write your code here
    return (it >= mData) && (it < mData+mSize);
}

#endif
