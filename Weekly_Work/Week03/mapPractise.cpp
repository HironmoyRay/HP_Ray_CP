#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    map<int , int>mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    for(auto ii: mp){
        cout<<ii.first<<" "<<ii.second<<endl;
    }
    
    
    return 0;
}