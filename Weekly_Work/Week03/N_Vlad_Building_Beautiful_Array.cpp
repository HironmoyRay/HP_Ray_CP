#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        vector<int> even;
        vector<int>odd;

        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==0){
                even.push_back(a[i]);
            }
            else{
                odd.push_back(a[i]);
            }
        }

        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());

        bool eBool=true, oBool=true;
        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==0){
                continue;
            }
            if(even.empty() || odd[0]>=a[i]){
                eBool=false;
                break;
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==1){
                continue;
            }
            if(odd.empty() || odd[0]>=a[i]){
                oBool=false;
                break;
            }
        }
        if(eBool || oBool){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}