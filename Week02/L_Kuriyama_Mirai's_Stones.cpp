#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n; cin>>n;
    ll a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }

    vector<ll> b(a,a+n);
    sort(b.begin(),b.end());

    vector<ll>prefix_sum_a(n+1,0);
    vector<ll>prefix_sum_b(n+1,0);

    for (int i = 0; i < n; i++)
    {
        prefix_sum_a[i+1]=prefix_sum_a[i]+a[i];
        prefix_sum_b[i+1]=prefix_sum_b[i]+b[i];
    }

    int t; cin >> t;
    while (t--) {
        ll m, l, r;
        cin >> m >> l >> r;
        ll sum = 0;
        if (m == 1) {
            sum = prefix_sum_a[r] - prefix_sum_a[l - 1];
        } else if (m == 2) {
            sum = prefix_sum_b[r] - prefix_sum_b[l - 1];
        }
        cout << sum << endl;
    }
    

    return 0;
}