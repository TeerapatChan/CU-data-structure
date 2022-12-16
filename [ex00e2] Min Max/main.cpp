#include <iostream>
#include <vector>

using namespace std;
/**********************
5 6
3
1 2 5 7 8 2
4 3 3 6 2 9
5 -1 2 3 -7 8
8 9 6 -5 -2 0
0 1 3 7 -9 0
**********************/
int main()
{
    int m,n,num;
    cin >> m >> n >> num;
    int x[m][n];
    //input to array
     for (int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> x[i][j];
    int r1,c1,r2,c2;
    while (num--)
    {
        int Max = -9999999;
        cin >> r1 >> c1 >> r2 >> c2;
        if (r1>r2 || c1>c2)
            cout << "INVALID" << endl;
        else if ((r1>m || c1>n) && (r2>m || c2>n))
            cout << "OUTSIDE" << endl;
        else
        {
            for (int i=r1-1;i<r2;i++)
            {
                if (i == m) break;
                for (int j=c1-1;j<c2;j++)
                {
                    if (j == n) break;
                    if (x[i][j] > Max) Max = x[i][j];
                }
            }
            cout << Max << endl;
        }
    }
}
