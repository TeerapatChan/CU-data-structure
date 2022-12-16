#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,x;
    cin >> n;
    vector<int> v;
    string str;
    while(n--)
    {
        cin >> str;
        if (str=="sa") sort(v.begin(), v.end());
        else if (str == "sd") sort(v.begin(), v.end(),greater<int>());
        else if (str == "r") reverse(v.begin(),v.end());
        else{
            cin >> x;
            if (str == "pb") v.push_back(x);
            else v.erase(v.begin()+x);
        }
    }
    for(auto i: v){
        cout << i << " ";
    }
}
