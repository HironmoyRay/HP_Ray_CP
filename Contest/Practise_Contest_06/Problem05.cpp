#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int a[n];
        int o[n];
        for (int i = 0; i < n; i++)
        {
            cin>>o[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            
        }
        
        int addyCount=0;
        int mxAddy=INT_MIN;

        int omCount=0;
        int mxOm=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==0){
                addyCount=0;
            }
            else  {
                addyCount++;
                mxAddy=max(mxAddy,addyCount);
            }
            if(o[i]==0){
                omCount=0;
            }
            else {
                omCount++;
                mxOm=max(mxOm,omCount);
            }
        }

        // cout<<mxAddy<<" "<<mxOm<<endl;

        if(mxAddy>mxOm){
            cout<<"Addy"<<endl;
            // cout<<mxAddy<<endl;
        }
        else if(mxOm>mxAddy){
            cout<<"Om"<<endl;
            // cout<<mxOm<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
        
    }
    
    return 0;
}