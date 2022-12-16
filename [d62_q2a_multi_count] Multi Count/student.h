#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::vector<std::pair<T,size_t>> v(k.size());
    std::map<T,size_t> m;
    for(int i = 0; i < mSize; i++){
        m[mData[i]]++;
    }
    for(int i = 0; i < v.size() ; i++){
        v[i] = {k[i], m[k[i]]};
    }
    return v;
}

#endif
