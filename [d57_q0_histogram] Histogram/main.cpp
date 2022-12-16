#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    map<string,int> m;
    while(n--){
        cin >> s;
        m[s]++;
    }
    for(auto it = m.begin(); it != m.end(); it++){
        if (it->second > 1){
            cout << it->first << " " << it->second << '\n';
        }
    }
}
