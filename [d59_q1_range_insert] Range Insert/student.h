#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
    CP::vector<T> v;
    for(auto it = begin(); it!=position; it++){
        v.push_back(*it);
    }
    for(auto it = first; it != last; it++){
        v.push_back(*it);
    }
    for(auto it = position; it != end(); it++){
        v.push_back(*it);
    }
    *this = v;
}

#endif
