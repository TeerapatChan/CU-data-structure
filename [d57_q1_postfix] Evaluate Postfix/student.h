#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
    int ans = 0,one,two,isNum,op;
    stack<int> s;
    for(auto it = v.begin(); it != v.end(); it++){
        isNum = it->first;
        if (isNum == 1){
            s.push(it->second);
        }
        else{
            ans = 0;
            two = s.top();
            s.pop();
            one = s.top();
            s.pop();
            op = it->second;
            if (op == 0) ans = one + two;
            else if (op == 1) ans = one - two;
            else if (op == 2) ans = one * two;
            else ans = one / two;
            s.push(ans);
        }
        //cout << s.top() << endl;
    }
    return s.top();
}

#endif
