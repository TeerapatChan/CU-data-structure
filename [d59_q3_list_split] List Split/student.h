#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  //write your code here
  CP::list<T> result;
  if (it == end()) return result;
  int i =0;
  node *p = it.ptr;
  result.mSize = mSize - pos;

  node *last = mHeader->prev;
  p->prev->next = mHeader;
  mHeader->prev = p->prev;
  mSize = pos;

  node *head = new node();
  p->prev = head;
  last->next = head;
  head->next = p;
  head->prev = last;
  result.mHeader = head;

  return result;
}

#endif
