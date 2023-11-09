#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s; cin>>s;

    for(int i=0;i<=s.size();i++){
        if(i%2==0){
        cout<<s[i];
        }
    }
    // cout<<endl;
    return 0;
}