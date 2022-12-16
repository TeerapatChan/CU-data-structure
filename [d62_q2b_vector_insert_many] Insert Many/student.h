#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<algorithm>
template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
    std::sort(data.begin(), data.end());
    T *arr = new T[mSize+data.size()]();
    size_t j = 0,curr = 0;
    for(size_t i = 0; i < data.size(); i++){
        size_t pos = data[i].first;
        T element = data[i].second;
        while(j != pos){
            arr[curr++] = mData[j++];
        }
        arr[curr] = element;
        curr++;
    }
    while(curr != mSize+data.size()){
        arr[curr++] = mData[j++];
    }
    delete [] mData;
    mData = arr;
    mSize = mSize+data.size();
    /*6
1 2 3 4 5 6
3
0 10
6 11
2 12
*/
}

#endif
