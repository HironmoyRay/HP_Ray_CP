#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int sum=1;
        for (int i = 1; i <= n; i++)
        {
            sum=sum*i;
        }
        for (int i = 1; i <=n-2; i++)
        {
            sum=sum/i;
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}