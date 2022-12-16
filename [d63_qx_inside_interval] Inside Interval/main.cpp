#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,x,y,data,position;
    cin >> n >> m;
    vector<int> v1,v2;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        v1.push_back(x);
        v2.push_back(y);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i = 0;i < m; i++){
        cin >> data;
        if (data >= v1[0] && data <= v2[n-1]){
            vector<int>::iterator upper = lower_bound(v2.begin(),v2.end(), data);
            position = upper - v2.begin();
            if (data >= v1[position] && data <= *upper)
                cout << '1' << " ";
            else
                cout << '0' << " ";
        }
        else
            cout << '0' << " ";
    }
}
