#include <iostream>
#include <bits/stdc++.h>

using namespace std;
vector<int> x;
void ans(int s, int node){
    x.push_back(node);
    for(int i = 0; i < s; i++){
        int left = x[i]*2+1;
        int right = left+1;
        if (left < s){
            x.push_back(left);
        }
        else break;
        if (right < s){
            x.push_back(right);
        }
        else break;
    }
}
int main()
{
/*
         0
       /   \
      1     2
     / \   / \
    3  4   5  6
   / \/ \ / \/ \
  7  89 A B CD E
*/
    int size, node,i = 0;
    cin >> size >> node;
    ans(size, node);
    sort(x.begin(), x.end());
    cout << x.size() << "\n";
    for(int i = 0; i < x.size(); i++){
        cout << x[i] << " ";
    }
}
