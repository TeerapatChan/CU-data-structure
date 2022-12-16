#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
    T *arr = new T[mSize-pos.size()]();
    size_t j = 0,k = 0;
    for(size_t i = 0; i < mSize; i++){
        if (j < pos.size() && i == pos[j]){
            j++;
        }
        else{
            arr[k++] = mData[i];
        }
    }
    delete [] mData;
    mData = arr;
    mCap = mSize-pos.size();
    mSize = mSize-pos.size();
}

#endif
