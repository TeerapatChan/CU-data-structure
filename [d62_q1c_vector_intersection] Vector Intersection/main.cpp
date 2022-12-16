#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    int m,n,x;
    set<int> Set;
    map<int, int> Map;
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        cin >> x;
        if (Map.find(x) == Map.end())
            Map[x] = 1;
    }
    for(int i = 0; i < n; i++){
        cin >> x;
        if (Map[x] == 1)
            Set.insert(x);
    }
    for(auto it = Set.begin(); it != Set.end(); it++){
        cout << *it << " ";
    }
}
