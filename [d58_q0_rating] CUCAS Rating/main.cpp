#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,score;
    string inSubj, inName;
    cin >> n;
    map<string, float> name, subj, count_name, count_subj;
    while (n--){
        cin >> inSubj >> inName >> score;
        if (subj.find(inSubj) == subj.end()) {
            subj[inSubj] = score;
            count_subj[inSubj] = 1;
        }else {
            subj[inSubj] += score;
            count_subj[inSubj]++;
        }
        if (name.find(inName) == name.end()) {
            name[inName] = score;
            count_name[inName] = 1;
        }else {
            name[inName] += score;
            count_name[inName]++;
        }
    }
    cout << std::fixed << setprecision(2);
    for(auto it : subj){
        cout << it.first << " " << it.second/count_subj[it.first] << '\n';
    }
    for(auto it : name){
        cout << it.first << " " << it.second/count_name[it.first] << '\n';
    }
}
