#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int a[n];
        map<int,int>count;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            count[a[i]]++;
        }
        int ans=-1;
        for (int i = 0; i < n; i++)
        {
            if(count[a[i]]>=3){
                ans=a[i];
                break;
            }
        }
        cout<<ans<<endl;
        
        
    }
    
    return 0;
}