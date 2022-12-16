#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
    if (mSize == other.size()){
        for(int i = 0; i < mSize; i++){
            if (mData[i] < other[i]) return true;
            if (mData[i] > other[i]) return false;
        }
    }
    if (mSize < other.size()) return true;
    return false;
}

#endif
