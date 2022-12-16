#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  int s=0;
  for(auto p = begin(); p != end(); p++)
    if (p.ptr->data == value){
        p.ptr->next->prev = p.ptr->prev;
        p.ptr->prev->next = p.ptr->next;
        delete p.ptr;
        s++;
    }
  mSize -= s;
}

#endif
