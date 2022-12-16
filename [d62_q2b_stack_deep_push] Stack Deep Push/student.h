#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
    CP::stack<T> st;
    int n = 0;
    while(!empty() && n != pos){
        st.push(top());
        pop();
        n++;
    }
    push(value);
    while(!st.empty()){
        push(st.top());
        st.pop();
    }
}

#endif
