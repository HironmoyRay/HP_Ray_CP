#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin>>n;
    string s; cin>>s;
    int i=0, W=0, R=0, B=0;
    bool flag=false;
    while (i<n)
    {
        if(s[i]=='W') W++;
        if(s[i]=='R') R++;
        if(s[i]=='B') B++;
        if(W){
            flag=(flag | ((R==0 && B==0)) || ((R>=1 && B>=1)));
            if(!flag){
                break;
            }
            if(i<n-1){
                flag=false;
            }
            W=0; R=0; B=0;
        }
        i++;
    }
    flag=(flag | ((R==0 && B==0)) || ((R>=1 && B>=1)));

    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
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