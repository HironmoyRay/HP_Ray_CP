//x^x=0  
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        ans=ans^a[i];
    }
    cout<<ans<<endl;
    
    return 0;
}