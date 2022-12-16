#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
    T *arr = new T[mCap * 2]();
    for(int i = 0; i < mSize; i++){
        arr[i] = mData[i];
    }
    int j = mSize-1;
    for(int i = mSize; i < mSize*2; i++){
        arr[i] = mData[j--];
    }
    delete [] mData;
    mData = arr;
    mSize = mSize*2;

}

#endif
