#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
     cin >> a[i];
    sort(a, a + n);
    cout << "Mean: " << ((n % 2 == 1) ? a[n/2] : double(a[n/2 - 1] + a[n/2])/2) << endl;
    cout << "Max: " << a[n - 1] << endl;
    cout << "Min: " << a[0] << endl;
    return 0;
}
