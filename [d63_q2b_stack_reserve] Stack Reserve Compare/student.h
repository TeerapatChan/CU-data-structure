#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const {
    //write your code here
    int CapA = mSize, CapB = other.size();
    int n = 2;
    int a,b;
    while(n < CapA){
        n *= 2;
        //std::cout << n << " ";
    }
    CapA = n;
    n = 2;
    while(n < CapB){
        n *= 2;
        //std::cout << n << " ";
    }
    CapB = n;
    a= CapA - size();
    b= CapB - other.size();
    if (a < b) return -1;
    if (a > b) return 1;
    return 0;
}

#endif
