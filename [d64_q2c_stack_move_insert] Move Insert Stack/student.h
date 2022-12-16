#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
    //stack = 2 7 4 3, s2 = 10 6 9
    CP::stack<T> temp1,temp2;
    int K = 0, M = 0;
    while(!empty() && K != k){
        temp1.push(top());
        pop();
        K++;
    }
    // stack = 2 7 4 temp1 = 3 s2 = 10 6 9
    while(!s2.empty() && M != m){
        temp2.push(s2.top());
        s2.pop();
        M++;
    }
    // stack = 2 7 4 s2 = 10 temp2 = 9 6
    while(!temp2.empty()){
        push(temp2.top());
        temp2.pop();
    }
    while(!temp1.empty()){
        push(temp1.top());
        temp1.pop();
    }
}
#endif
