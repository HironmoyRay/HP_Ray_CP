//(a^b) + (b^x) = (a^b);
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while (t--)
    {
        int a,b; cin>>a>>b;
        int x= a^b;
        cout<<x<<endl;
        
    }
    
    return 0;
}