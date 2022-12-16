#include <iostream>

using namespace std;

int main()
{
    int mFront, mSize, mCap, last, correct, n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> mFront>> mSize>> mCap>> last >>correct;
        if (mSize <= mCap && mFront <= mCap && last == (mFront+mSize)%mCap){
            cout <<  "OK" << '\n';
        }
        else if (correct == 1){
            cout << "WRONG" << ' ' << last - mSize + mCap) % mCap; << '\n';
        }
        else if (correct == 2){
            cout << "WRONG" << ' ' << mFront<< '\n';
        }
        else if (correct == 3){
            cout << "WRONG" << ' ' << (mFront+mSize)-((mFront+mSize)/mCap)*mCap<< '\n';
        }
        else if (correct == 4){
            cout << "WRONG" << ' ' << (mFront+mSize)%mCap<< '\n';
        }
        else{
            cout << "WRONG"<< '\n';
        }
        //0 1 2 3 _ _ 6 7
    }
}
