#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int  i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        for (int  i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int mn=INT_MAX;
        for (int  i = 0; i < n; i++)
        {
            if(a[i]<mn){
                mn=a[i];
            }
        }
        // cout<<mn<<endl;
        int sum=0;
        for (int  i = 0; i < n; i++)
        {
            sum=sum+(a[i]-mn);
            // cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
    
        
        
    return 0;
}