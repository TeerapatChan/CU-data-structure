#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,c;
    cin >> n >> m;
    vector<int> v,ans;
    for(int i = 0; i < n; i++)
    {
        cin >> c;
        v.push_back(c);
    }
    for(int i = 0; i < m; i++)
    {
        cin >> c;
        if (find(v.begin(), v.end(), c) != v.end() && find(ans.begin(), ans.end(), c) == ans.end())
            ans.push_back(c);
    }
    sort(ans.begin(), ans.end());
    for(auto it = ans.begin(); it != ans.end(); it++)
        cout << *it << " ";
}
