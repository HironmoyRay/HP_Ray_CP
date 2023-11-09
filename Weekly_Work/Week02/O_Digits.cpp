#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,x,count=1;
    cin>>n>>x;
    while ((n/x) != 0)
    {
        count++;
        n/=x;
        r=n%x;
    }
    if (r!=0)
    {
        cout<<count++;
    }
    else
        cout<<count;
        
    return 0;
}