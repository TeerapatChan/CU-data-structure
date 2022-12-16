void shift(int k) {
	// TODO: Add your code here
	if (k > 0){
        int i = 0, shf = k % mSize;
        node *p;
        p = mHeader;
        mHeader->next->prev = mHeader->prev;
        mHeader->prev->next = mHeader->next;
        while(i < shf+1){
            p = p->next;
            i++;
        }
        node *head;
        head->prev = p->prev;
        head->next = p;
        p->prev->next = head;
        p->prev = head;
        delete mHeader;
        mHeader = head;
	}
	else if (k < 0){
        k *= -1;
        int i = 0, shf = k % mSize;
        node *p;
        p = mHeader;
        mHeader->next->prev = mHeader->prev;
        mHeader->prev->next = mHeader->next;
        while(i < shf){
            p = p->prev;
            i++;
        }
        node *head;
        head->prev = p->prev;
        head->next = p;
        p->prev->next = head;
        p->prev = head;
        delete mHeader;
        mHeader = head;
	}

}
