#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void list_erase(vector<int> &v, vector<int> &pos)
{ //write your code here
    vector<int> o;
    int start = 0;
    sort(pos.begin(),pos.end());
    for (int i = 0; i < pos.size(); i++){
        o.insert(o.end(), v.begin()+start, v.begin() + pos[i]);
        start = pos[i]+1;
    }
    o.insert(o.end(), v.begin()+start, v.end());
    v = o;
}
int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> v(n), pos(m);
    for (int i = 0;i < n;i++) cin >> v[i];
    for (int i = 0;i < m;i++) cin >> pos[i];
    list_erase(v,pos);
    cout << "After call list_erase" << endl << "Size = " << v.size() << endl;
    for (auto &x : v) cout << x << " ";
    cout << endl;
}
