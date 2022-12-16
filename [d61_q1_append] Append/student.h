#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        T *x = new T[mSize + s.size()]();
        int j = 0;
        for(int i = 0; i < s.size(); i++){
            x[j++] = s.mData[i];
        }
        for(int i = 0; i < mSize; i++){
            x[j++] = mData[i];
        }
        delete[] mData;
        mData = x;
        mSize += s.size();
        mCap = mSize;
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        T *x = new T[mSize + q.size()]();
        int j = 0;
        for(int i = q.size() - 1; i >= 0; i--){
            x[j++] = q.mData[i];
        }
        for(int i = 0; i < mSize; i++){
            x[j++] = mData[i];
        }
        delete[] mData;
        mData = x;
        mSize += q.size();
        mCap = mSize;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        T *x = new T[mSize+s.size()]();
        int j = 0;
        for(int i = 0; i < mSize; i++){
            x[j++] = mData[i];
        }
        for(int i = s.size() - 1; i >= 0; i--){
            x[j++] = s.mData[i];
        }
        delete[] mData;
        mData = x;
        mCap = mSize + s.size();
        mSize = mCap;
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        T *x = new T[mSize+q.size()]();
        int j = 0;
        for(int i = 0; i < mSize; i++){
            x[j++] = mData[i];
        }
        for(int i = 0;i < q.size(); i++){
            x[j++] = q.mData[i];
        }
        delete[] mData;
        mData = x;
        mCap = mSize + q.size();
        mSize = mCap;
    }

}
