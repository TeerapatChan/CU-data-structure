void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    if (mSize == 0) return;
    node *p,*p2;
    int pos;
    p = mHeader;
    if (mSize % 2 == 1)  pos = mSize/2+1;
    else pos = mSize/2;
    int j = 0;
    for(int i = 0; i < pos; i++){
        p = p->next;
        j++;
    }
    p2 = p->next;
    mHeader->next->prev = list1.mHeader->prev;
    list1.mHeader->prev->next = mHeader->next;
    list1.mHeader->prev = p;
    p->next = list1.mHeader;
    mHeader->next = p2;
    list1.mSize += j;

    mHeader->next->prev = list2.mHeader->prev;
    list2.mHeader->prev->next = mHeader->next;
    list2.mHeader->prev = mHeader->prev;
    mHeader->prev->next = list2.mHeader;
    list2.mSize += mSize-j;

    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize = 0;
}
