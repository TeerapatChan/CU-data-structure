#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
    int n = 0;
    while(!empty() && n != K){
        n++;
        pop();
    }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
    std::stack<T> st1,st2;
    int n = 0;
    while(!empty() && n != K){
        n++;
        st1.push(top());
        pop();
    }
    while(!st1.empty()){
        st2.push(st1.top());
        st1.pop();
    }
    return st2;
}

#endif
