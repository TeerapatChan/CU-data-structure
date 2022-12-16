#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,l,temp;
    string temps;
    cin >> n >> m >> l;
    vector<int> key(l);
    set<string> data;
    for(int i = 0; i < l; i++){
        cin >> temp;
        key[i] = temp;
    }
    for(int i = 0; i < n; i++){
        cin >> temps;
        data.insert(temps);
    }
    for(int i = 0; i < m; i++){
        cin >> temps;
        string check = "";
        for(int j = 0; j < l; j++){
            check += (temps[j]+key[j]-97)%26 +97;
            //cout << check;
        }
        //cout << check << endl;
        if (data.find(check) != data.end()){
            cout << "Match" << '\n';
        }
        else cout << "Unknown" << '\n';
        //if (check == data[i]) cout << "Match" << '\n';
        //else cout << "Unknown" << '\n';
    }
}
