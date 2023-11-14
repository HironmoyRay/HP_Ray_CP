#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        string ss="";
        for (int i = 2; i < n; i++)
        {
            ss.push_back(s[i]);
        }

        int sIndex=0, ssIndex=0;
        long long int ans=1;
        while (sIndex<n-2)
        {
            if(s[sIndex]!=ss[ssIndex]){
                ans++;
            }
            sIndex++;
            ssIndex++;
        }
        
        cout<<ans<<endl;
    }
    return 0;
}