#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int numData, numInput, k, temp;
    cin >> numData >> numInput >> k;
    vector<int> v1(numData),v2;
    for(int i = 0; i < numData; i++){
        cin >> temp;
        v1[i] = temp;
    }
    sort(v1.begin(), v1.end());
    for(int i = 0; i < numData; i++){
        v2.push_back(v1[i]-k);
        v2.push_back(v1[i]+k);
    }
    //sort(v.begin(), v.end());
    for(auto it : v2)
        cout << it << " ";
    cout << endl;
    for(int i = 0; i < numInput; i++){
        cin >> temp;
        auto it = lower_bound(v2.begin(), v2.end(), temp-k);
        cout << *it << endl;
    }
}
