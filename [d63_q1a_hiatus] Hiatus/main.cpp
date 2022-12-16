#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,q,year,month;
    cin >> n >> q;
    vector<pair<int,int>> v;
    while(n--){
        cin >> year >> month;
        pair<int,int> p = {year, month};
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    while(q--){
        cin >> year >> month;
        pair<int,int> p = {year, month};
        if (year < v[0].first || (year == v[0].first && month < v[0].second))
            cout << "-1 -1";
        else{
            auto up = --lower_bound(v.begin(), v.end(), p);
            if ((up+1)->first == year && (up+1)->second == month)
                cout << "0 0";
            else cout << up->first << " " << up->second;
        }
        if (q) cout << " ";
    }
}
