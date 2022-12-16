#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int n,k;
    cin >> n >> k;
    long long int i = 0, h = -1, last = 1;
    while(i < n){
        i = k*i+1;
        h++;
    }
    cout << h;
}
