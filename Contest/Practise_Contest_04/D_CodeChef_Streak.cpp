#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int>a(n);
        vector<int>o(n);

        for (int i = 0; i < n; i++)
        {
            cin>>o[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        int o_streak=0;
        int o_max=0;

        int a_streak=0;
        int a_max=0;

        for (int i = 0; i < n; i++)
        {
            if(o[i]>0){
                o_streak++;
                o_max=max(o_max,o_streak);
            }
            else{
                o_streak=0;
            }
            
            if(a[i]>0){
                a_streak++;
                a_max=max(a_max,a_streak);
            }
            else{
                a_streak=0;
            }

        }
        

        if(a_max>o_max){
            cout<<"Addy"<<endl;
        }
        else if(a_max<o_max){
            cout<<"Om"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }

    }
    
    return 0;
}