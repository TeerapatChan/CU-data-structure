// Your code here
#include "map_bst.h"
#include <iostream>
KeyT getValueOfMostImbalanceNode() {
    int m = 0;
    KeyT ans = mRoot->data.first;
    solve(mRoot, m, ans);
    return ans;
}

int getHeight(node *n){
    if (n == NULL) return -1;
    int l = getHeight(n->left);
    int r = getHeight(n->right);
    if (l > r) return l+1;
    return r+1;
}

int getHeightL(node *n){
    return getHeight(n->left);
}

int getHeightR(node *n){
    return getHeight(n->right);
}

void solve(node *n, int &m, KeyT &ans){
    if (n == NULL) return;
    int x = abs(getHeightL(n)-getHeightR(n));
    //std::cout << x << "\n";
    if (x > m) {
        m = x;
        ans = n->data.first;
    }
    solve(n->left,m,ans);
    solve(n->right,m,ans);
}
