#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);

        cout << sum - (a[0] * n) << endl;
    }
    return 0;
}