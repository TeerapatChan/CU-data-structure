#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<string, int> &a, pair<string, int> &b){
    return a.second > b.second;
}

int main()
{
    int n, need;
    string temp;
    cin >> n >> need;
    map <string, int> candidate;
    vector <int> v;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if (candidate.find(temp) == candidate.end()){
            candidate[temp] = 1;
        }
        else candidate[temp]++;
    }
    int Map_size = candidate.size();
    need = min(need, Map_size);
    for(auto it: candidate){
        v.push_back(it.second);
    }
    sort(v.begin(), v.end(), greater<int>());
    auto it = v.begin();
    while(need--){
        it++;
    }
    cout << *(it-1);
}
