#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure

#include<unordered_map>
template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
    CP::vector<T> v;
    std::unordered_map<T,bool> m;
    for(int i = 0; i < mSize; i++){
        m[mData[i]] = true;
    }
    for(int i = 0; i < mSize; i++){
        if (m[mData[i]] == true){
            v.push_back(mData[i]);
            m[mData[i]] = false;
        }
    }
    *this = v;
}

#endif
