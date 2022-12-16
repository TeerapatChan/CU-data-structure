#include <iostream>

using namespace std;

int main()
{
    int hour, minute, p;
    string h,m;
    cin >> hour >> minute;
    cin >> p;
    int plus_hour, plus_minute;
    plus_hour = p/60;
    p -= 60 * plus_hour;
    hour += plus_hour;
    minute += p;
    hour += minute / 60;
    minute -= 60 * (minute / 60);
    hour %= 24;
    if (hour < 10)
        cout << "0" << hour << " ";
    else
        cout << hour << " ";
    if (minute < 10)
        cout << "0" << minute;
    else
        cout << minute;
}
