#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    while (n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=0;
        
        if(a<b) count++;
        if(a<c) count++;
        if(a<d) count++;

        cout<<count<<endl;
    }
    
    return 0;
}