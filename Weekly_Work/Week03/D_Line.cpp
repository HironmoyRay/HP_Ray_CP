#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        string s; cin>>s;

        ll change=0;
        ll total=0;
        vector<ll>v;

        for (int i = 0; i < n; i++)
        {
            int Left=i;
            int Right=n-i-1;

            if(s[i]=='L'){
                if(Right>Left){
                    change++;
                    total=total+Right;
                    v.push_back(Right-Left);
                }
                else{
                    total=total+Left;
                }
            }
            else if(s[i]=='R'){
                if(Left>Right){
                    change++;
                    total+=Left;
                    v.push_back(Left-Right);
                }
                else{
                    total+=Right;
                }
            }
        }

        sort(v.begin(),v.end(),greater<ll>());

        vector<ll>ans(n+1);

        for (int i = change; i <= n ; i++)
        {
            ans[i]=total;
        }
        for (int i = change-1; i>=1; i--)
        {
            total=total-v.back();
            v.pop_back();
            ans[i]=total;
        }

        for (int i = 1; i <= n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}