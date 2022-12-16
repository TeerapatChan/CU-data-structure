#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left() {
  // your code here
  if (mSize == 1) return;
    node *first = mHeader->next;
    node *last = mHeader->prev;

    mHeader->prev = first;
    mHeader->next = first->next;
    first->prev = last;
    first->next = mHeader;
    last->next = first;
    first->next->next->prev = mHeader;
}

#endif
