#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
    while(a != b){
        if (a.ptr->data == value){
            a.ptr->prev->next = a.ptr->next;
            a.ptr->next->prev = a.ptr->prev;
            /*
            node *n = new node(a.ptr->data, a.ptr->prev, a.ptr->next);
            a.ptr->prev = output.mHeader;
            a.ptr->next = output.mHeader->next;
            output.mHeader->next = a.ptr;
            output.mHeader->next->prev = a.ptr;
            //mSize--;
            output.mSize++;*/
            node *n = new node(a.ptr->data, output.mHeader, output.mHeader->next);
            output.mHeader->next->prev = n;
            output.mHeader->next = n;
            mSize--;
            output.mSize++;

        }
        a++;
    }
}

#endif
