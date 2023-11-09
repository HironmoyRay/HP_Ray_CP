//Longest Distinct characters in string
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string s)
{
    int i=0, j=0, n=s.size();
    int fr[26]={0};
    int ans=0;
    while (j<n)
    {
        if(fr[s[j]-'a']==1){
            while (true)
            {
                fr[s[i]-'a']=0;
                i++;
                if(s[i-1]==s[j]) break;
            }
            
        }
        fr[s[j]-'a']=1;
        ans=max(ans,j-i+1);
        j++;
    }
    return ans;
}
int main()
{
    string s; cin>>s;
    
    cout<<longestSubstrDistinctChars(s)<<endl;
    return 0;
}