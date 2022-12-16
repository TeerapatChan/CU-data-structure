#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<algorithm>
template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  //
  int j = mFront;
  for(int i=0;i<k;i++){
    res.push_back(mData[j++]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
    mData = new T[to-from]();
    int i =0;
    for(auto it = from; it != to; it++){
        mData[i++] = *it;
    }
    mSize = to - from;
    mCap = mSize;
    mFront = 0;
}
#endif
