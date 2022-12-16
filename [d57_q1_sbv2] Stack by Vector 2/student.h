#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template <typename T>
size_t CP::stack<T>::size() const {
  //write your code here
    return v.size();
}

template <typename T>
const T& CP::stack<T>::top() const {
  //write your code here
    return v.back();
}

template <typename T>
void CP::stack<T>::push(const T& element) {
  //write your code here
    v.push_back(element);
}

template <typename T>
void CP::stack<T>::pop() {
  //write your code here
    v.pop_back();
}

template <typename T>
void CP::stack<T>::deep_push(const T& element, int depth) {
  //write your code here
    CP::stack<T> st;
    int n = 0;
    if (depth >= v.size()){
        while(!empty()){
            st.push(top());
            pop();
        }
        push(element);
        while(!st.empty()){
            push(st.top());
            st.pop();
        }
    }
    else{
        while(n != depth){
            n++;
            st.push(top());
            pop();
        }
        push(element);
        while(!st.empty()){
            push(st.top());
            st.pop();
        }
    }
}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w) {
  //write your code here
    int i = 0;
    while(i != w.size()){
        push(w[i++]);
    }
}

template <typename T>
void CP::stack<T>::pop_until(const T& e) {
  //write your code here
    while(!empty() && top() != e){
        pop();
    }
}

#endif

