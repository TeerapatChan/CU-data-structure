#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "stack.h"
#include<math.h>
template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
    std::vector<std::vector<T>> V;
    std::vector<T> v;
    int n = mSize/k;
    int remain = mSize%k;
    int count = 0;
    int j = 0;
    for(int i = 0; i < k; i++){
        if (remain > 0){
            v.push_back(mData[j++]);
            remain--;
        }
        for(int k = 0; k < n; k++){
            v.push_back(mData[j++]);
        }
        V.push_back(v);
        v.clear();
    }
    return V;
}
#endif
/*
10 4
1 2 3 4 5 6 7 8 9 10
*/
