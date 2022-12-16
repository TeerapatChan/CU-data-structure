#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  //write something here
  //
  // you need to return something
  // return
    if (idx >= 0){
        return mData[(mFront + idx) % mCap];
    }
    return mData[(mFront + idx + mSize) % mCap];z
}
// 1 2 3 _ _ 4 5 6
#endif
