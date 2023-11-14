// #include<bits/stdc++.h>
// #define ll long long int 
// using namespace std;
// int main()
// {
//     ll t; cin>>t;
//     while (t--)
//     {
//         ll n, m;
//         cin>>n>>m;
//         ll s[n];
//         ll q[m];
//         for (ll  i = 0; i < n; i++)
//         {
//             s[i]=i+1;
//         }
//         for (ll i = 0; i <m; i++)
//         {
//             cin>>q[i];
//         }

//         ll nSum=0;
//         ll mSum=0;
//         for (ll  i = 0; i < n; i++)
//         {
//             nSum=nSum+s[i];
//         }
//         for (ll i = 0; i < m; i++)
//         {
//             mSum=mSum+q[i];
//         }
        
        
//         cout<<nSum-mSum<<endl;
        
        
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n, m;
        cin >> n >> m;


        ll nSum = n * (n + 1) / 2;

        ll mSum = 0;
        for (ll i = 0; i < m; i++) {
            ll q;
            cin >> q;
            mSum += q;
        }

        cout << nSum - mSum << endl;
    }

    return 0;
}
