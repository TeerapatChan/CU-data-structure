#include <iostream>

using namespace std;
// 9 0
bool Descendant(int child, int parent,int n){
    while(child >= parent){
        child = (child-1)/2;
        if (child == parent) return true;
    }
    return false;
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
    int n,m,a,b;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        if (a==b) cout << "a and b are the same node" ;
        else if (a < b && Descendant(b, a, n)){
            cout << "a is an ancestor of b" ;
        }
        else if (a > b && Descendant(a, b, n)){
            cout << "b is an ancestor of a" ;
        }
        else cout << "a and b are not related";
        if (i != m-1) cout << '\n';
    }

}
