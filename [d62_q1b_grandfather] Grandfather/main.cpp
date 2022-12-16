#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    string f,s,s1,s2;
    map<string, string> StoF;
    int n,check;
    cin >> n >> check;
    while (n--){
        cin >> f >> s;
        StoF[s] = f;
    }
    /*for(auto it : StoF){
        cout << it.first << ": " << it.second << " ";
    }*/
    cout << endl;
    while (check--){
        cin >> s1 >> s2;
        //cout << StoF[StoF[s1]] <<" "<<StoF[StoF[s2]]<<endl;
        if (s1 != s2 && StoF[StoF[s1]] != "" && StoF[StoF[s1]] != ""){
            if (StoF[StoF[s1]] == StoF[StoF[s2]])
                cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
}
