#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        string s; cin>>s;
        int size=s.length();
        int sum=0;
        if(s=="Yess" || s=="YES" || s=="se"){
            cout<<"NO"<<endl;
        }
        else{
            if(size==1){
                if(s=="Y" || s=="s" || s=="e"){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            // else if(size==2){
            //     if(s=="Ye" || s=="es" || s=="sY"){
            //         cout<<"YES"<<endl;
            //     }
            //     else{
            //         cout<<"NO"<<endl;
            //     }
            // }
            // else if(size==3){
            //     if(s=="Yes" || s=="esY" || s=="sYe"){
            //         cout<<"YES"<<endl;
            //     }
            //     else{
            //         cout<<"NO"<<endl;
            //     }
            // }
            else{
                for (int i = 0; i < size-1; i++)
                {
                    if(s[i]=='Y' && s[i+1]=='e'){
                        sum=0;

                    }
                    else if(s[i]=='e' && s[i+1]=='s'){
                        sum=0;
                    }
                    else if(s[i]=='s' && s[i+1]=='Y'){
                        sum=0;
                    }
                    else{
                        sum=1;
                        break;
                    }
                }
                if(sum==0){
                    cout<<"YES"<<endl;
                    sum=0;
                }
                else if(sum==1){
                    cout<<"NO"<<endl;
                    sum=0;
                }
            }
                
        }
    }
    
    return 0;
}