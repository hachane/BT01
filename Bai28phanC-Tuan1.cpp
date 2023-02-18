#include <bits/stdc++.h>
using namespace std;
int main ()
{
    cout << "12 midnight" << endl;
    int check = 0;
    for (int i = 1; i < 12; i++)
    {

        cout << i << (check == 0 ? "am" : "pm") << endl;
        if (i == 11)
        {
            check++;
            if (check != 2)
            {
            cout << "12 noon" << endl;
            i = 1;
            }
            else break;
        }

    }
    return 0;
}
