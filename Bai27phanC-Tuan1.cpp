#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin >> n;
    while(1)
    {
        cout << ((n % 5 == 0 && n > 0) ? n / 5 : -1) << endl;
        if (!(n%5 == 0 && n > 0))
        {
            cout << "Bye";
            break;
        }
        n /= 5;
    }
    return 0;
}
