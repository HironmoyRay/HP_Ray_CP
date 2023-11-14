#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t; 
    while (t--)
    {
        int n; cin>>n;
        int a[n+1][n];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                cin>>a[i][j];
            }
            
        }
        map<int, int>mp;
        map<int, int>m;

        for (int i = 1; i <= n; i++)
        {
            mp[a[i][n-1]]=i;
            m[a[i][n-1]]++;
        }

        int idx=0, val;
        for(auto u:m){
            if(u.second==1){
                idx=u.first;
            }
            else val = u.first;
        }
        
        for (int i = 1; i < n; i++)
        {
            cout<<a[mp[idx]][i]<<" "; //Bujte Parsi...Need to be research on Example 
        }
        cout<<val<<endl;
        
    }
    
    return 0;
}

