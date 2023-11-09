#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>vec;
        for (int i = 0; i < n; i++)
        {
            int a; cin>>a;
            vec.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            int length; cin>>length;
            string s; cin>>s;
            for (int j = 0; j < length; j++)
            {
                if(s[j]=='U'){
                    if(vec[i]==0){
                        vec[i]=9;
                    }
                    else{
                        vec[i]--;
                    }
                }
                else if(s[j]=='D'){
                    if(vec[i]==9){
                        vec[i]=0;
                    }
                    else{
                        vec[i]++;
                    }
                    
                }

            }
            
        }
        for(auto &v:vec){
            cout<<v<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}