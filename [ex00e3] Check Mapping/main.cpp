#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    bool check_1 = true,check_2 = true;
    cin >> n;
    map<int,int> m,u;
    for(int i = 1; i <= n; i++){
        u[i] = 1;
    }
    for (int i = 0; i < n; i++){
        cin >> x;
        if (m.find(x) == m.end()){
            m[x] = 1;
            if (u.find(x) != u.end())
                u[x]--;
        }
        else m[x]++;
    }
    for (auto it: u){
            //cout << it.first << ":" << it.second << endl;
        if (it.second > 0) {
            check_2 = false;
            break;
        }
    }
    for(auto it: m){
        if (it.second > 1){
            check_1 = false;
        }
    }
    if (check_1 && check_2) cout << "YES";
    else cout << "NO";
}
