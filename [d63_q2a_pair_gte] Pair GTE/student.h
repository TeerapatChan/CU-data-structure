#ifndef __STUDENT_H_
#define __STUDENT_H_

#include<tuple>

template <typename T1,typename T2>
bool CP::pair<T1,T2>::operator>=(const pair<T1,T2>& other) const {
  //write your code here
  return tie(first,second) >= tie(other.first, other.second);
}

#endif
