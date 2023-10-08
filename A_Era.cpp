#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    bool f = true;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int mx = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];

            if (a[i] - i - 1 > mx){
                mx = a[i] - i - 1;
            }
        }
        cout << mx << endl;
    }
}
