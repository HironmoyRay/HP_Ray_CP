#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n,k,l; cin>>n>>k>>l;
        // int ans=0;
        vector<int>songs;
        for (int i = 0; i < n; i++)
        {
            int m, ll; cin>>m>>ll;
            if(ll==l){
                songs.push_back(m);
            }
        }
        if(songs.size()<k){
            cout<<-1<<endl;
        }
        else{

            sort(songs.begin(),songs.end());
            int ans=0;
            for (int i = 1; i <= k; i++)
            {
                ans=ans+songs.back();
                songs.pop_back();
            }
            cout<<ans<<endl;
        }
        

    }
    
    return 0;
}



