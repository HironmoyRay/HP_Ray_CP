#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;

        map<char,ll>f_occ;
        map<char,ll>s_occ;
        map<string,ll>occ;

        vector<string>v(n);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            f_occ[v[i][0]]++;
            s_occ[v[i][1]]++;
            occ[v[i]]++;
        }
        
        ll ans=0;

        for (int i = 0; i < n; i++)
        {
            ll x = max((ll)0, f_occ[v[i][0]]-occ[v[i]]);
            ans+=x;
            x=max((ll)0,s_occ[v[i][1]]-occ[v[i]]);
            ans+=x;

            if(f_occ[v[i][0]]>0){
                f_occ[v[i][0]]--;
            }
            if(s_occ[v[i][1]]>0){
                s_occ[v[i][1]]--;
            }
            if(occ[v[i]]>0){
                occ[v[i]]--;
            }
        }
        cout<<ans<<endl;
        

    }
    
    return 0;
}