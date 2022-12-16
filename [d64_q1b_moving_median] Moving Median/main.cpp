#include <bits/stdc++.h>

using namespace std;

int find_median(vector<int> v){
    nth_element(v.begin(),v.begin()+v.size()/2, v.end());
    /*for(int i = 0;i<v.size();i++)
        cout << v[i] << " ";*/
    return v[(v.size())/2];
}
int main()
{
    int n,w,temp;
    cin >> n >> w;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> temp;
        v[i] = temp;
    }
    if (w == n){
        cout << find_median(v);
    }
    else{
        vector<int> v2(v.begin(), v.begin()+w+1);
        for(int i = 0; i < n - w; i++){
            cout << find_median(v2) << " ";
            v2.erase(v2.begin());
            v2.push_back(v[i+w+1]);
        }
    }
}
