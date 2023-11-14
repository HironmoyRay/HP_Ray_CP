#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int o[n],a[n];
        int cntO=0, cntA=0;
        int Omx=INT_MIN, Amx=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin>>o[i];
            
        }
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            if(o[i]!=0){
                cntO++;
            }
            else{
                cntO=0;
            }
            // cout<<cntO<<" ";
            Omx=max(Omx,cntO);
        }
            // cout<<Omx<<endl;

        // cout<<endl;

        for (int i = 0; i < n; i++)
        {
            if(a[i]!=0){
                cntA++;
            }
            else{
                cntA=0;
            }
            // cout<<cntA<<" ";
            Amx=max(Amx,cntA);
        }
            // cout<<Amx<<endl;

        // cout<<endl;

        if(Amx>Omx){
            cout<<"Addy"<<endl;
        }
        else if(Omx>Amx){
            cout<<"Om"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
        
    }
    
    return 0;
}