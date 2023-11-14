#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        set<string>melody;
        for (int i = 0; i < n-1; i++)
        {
            string temp;
            temp.push_back(s[i]);
            temp.push_back(s[i+1]);
            // cout<<temp<<endl;
            melody.insert(temp);
        }
        cout<<melody.size()<<endl;
    }
    
    return 0;
}