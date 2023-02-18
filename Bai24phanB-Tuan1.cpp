#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int d, m, y; cin >> d >> m >> y;
    int DayOfWeek = (d+y+y/4-y/100+y/400+(31*m)/12)%7;
    switch (DayOfWeek)
    {
    case 0:
        {
            cout << "Chu nhat";
            break;
        }
    case 1:
        {
            cout << "Thu hai";
            break;
        }
    case 2:
        {
            cout << "Thu ba";
            break;
        }
    case 3:
        {
            cout << "Thu tu";
            break;
        }
    case 4:
        {
            cout << "Thu nam";
            break;
        }
    case 5:
        {
            cout << "Thu sau";
            break;
        }
    case 6:
        {
            cout << "Thu bay";
            break;
        }
    }
    return 0;
}
