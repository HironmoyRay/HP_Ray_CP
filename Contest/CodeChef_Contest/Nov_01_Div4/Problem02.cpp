#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n,x,d; cin>>n>>x>>d;
        int nX=5*x;
        int day=n/nX;
        cout<<day+d<<endl;
    }
    
    return 0;
}