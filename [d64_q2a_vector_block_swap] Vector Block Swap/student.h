#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
    if (m > 0 && (a+m-1 < b || b+m-1 < a) && a >= begin() && a < end() && b >= begin() && b < end()
        && a+m-1 < end() && b+m-1 < end() && a+m-1 >= begin() && b+m-1 >= begin()){
        for(int i = 0; i < m; i++){
            std::swap(*a,*b);
            a++;
            b++;
        }
        return true;
    }
    return false;
}

#endif
