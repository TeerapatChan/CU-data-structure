#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,card;
    int nFight,round = 0, win = 0;
    bool lose = false;
    map<int,int> M;
    cin >> n >> m;
    while(n--){
        cin >> card;
        M[card]++;
    }
    while(m--){
        cin >> nFight;
        round = 0;
        while(nFight--){
            cin >> card;
            //cout << *(v.end()-1) << endl;
            if (!lose && (--M.end())->first > card){
                auto up = M.upper_bound(card);
                    //cout << *up << endl;
                if (up != M.end()){
                    up->second--;
                    round = 1;
                    if (up->second == 0)
                        M.erase(up);
                }
            }
            else lose = true;
        }
        if (lose){
            break;
        }
        win += round;
    }
    cout << win+1;
}
