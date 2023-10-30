#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Timur";

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string a; cin>>a;
        int count_T=0,count_i=0,count_m=0,count_u=0,count_r=0;
        if(n!=s.length()){
            cout<<"NO"<<endl;
            continue;
        }
        for(char c:a){
            if( c == 'T'){
                count_T++;
            }
            if(c== 'i'){
                count_i++;
            }
            if(c== 'm'){
                count_m++;
            }
            if(c=='u'){
                count_u++;
            }
            if(c=='r'){
                count_r++;
            }
        }

        if(count_T==1 && count_i==1 && count_m==1 && count_u==1 && count_r==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}