#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        a[i]=a[i]%2;
    }
    
    int x=a[0], y=a[1];
    
    for (int i = 0; i < n; i+=2)
    {
        if(a[i]!=x){
            cout<<"NO"<<endl;
            return;
        }
    }
    for (int i = 1; i < n; i+=2)
    {
        if(a[i]!=y){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    int t; cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}