#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string f0 = "a";
    string f1 = "b";
    string fn = "";
    int n; cin >> n;
    for (int i = 0; i < n - 2; i++)
    {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    cout << fn;
    return 0;
}
