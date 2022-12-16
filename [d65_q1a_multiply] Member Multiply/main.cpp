#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void member_multiply(vector<int> &v,
vector<pair<vector<int>::iterator,int>> &multiply) {
//write your code here
    sort(multiply.begin(), multiply.end());
    vector<int> v2;
    vector<int>::iterator it = v.begin();
    int start = 0,j=0;
    //1:1 4:1
    //0 -> 1 3 -> 6
    for(int i = 0; i < multiply.size(); i++){
        while(it != multiply[i].first){
            v2.push_back(*it);
            it++;
        }
        v2.push_back(*it);
        while(multiply[i].second--){
            v2.push_back(*it);
        }
        it++;
    }
    while(it != v.end()){
        v2.push_back(*it++);
    }
    v = v2;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<vector<int>::iterator,int>> multiply(m);
    for (int i = 0;i < n;i++) cin >> v[i];
    for (int i = 0;i < m;i++) {
        int a,b;
        cin >> a >> b;
        multiply[i].first = v.begin()+a;
        multiply[i].second = b;
    }
    member_multiply(v,multiply);
    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v) {
        cout << x << " ";
    }
    cout << endl;
}
