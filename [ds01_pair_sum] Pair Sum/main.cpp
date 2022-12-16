#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int Size, Size_sum, temp;
    bool check = false;
    cin >> Size >> Size_sum;
    vector<int> data(Size);
    vector<int>::iterator it;
    for(int i = 0; i < Size; i++){
        cin >> temp;
        data[i] = temp;
    }
    sort(data.begin(), data.end());
    for(int i = 0; i < Size_sum; i++){
        int j;
        cin >> temp;
        check = false;
        for( j = 0; j < data.size(); j++)
        {
            it = lower_bound(data.begin(), data.end(), temp - data[j]);
            if (*it == data[j] && *it+1 == data[j]){
                check = true;
                break;
            }
            else if (*it != data[j] && *it == temp - data[j]){
                check = true;
                break;
            }
        }
        //0 1 2 2 3
        //0 1 2 3 4
        if (check){
            //cout << *it << " " << data[j] << ":" << temp << endl;
            cout << "YES" <<endl;
        }
        else{
            //cout << *it << " " << data[j] << ":" << temp << endl;
            cout << "NO"<<endl;
        }
    }
}
