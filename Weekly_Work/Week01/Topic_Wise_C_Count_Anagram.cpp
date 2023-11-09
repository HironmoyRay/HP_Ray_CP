#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    string p; cin>>p;
    int k=p.size();
    int fp[26]={0};

    for(char c:p){
        fp[c-'a']++;   
    }

    int i=0,j=0,cnt=0;
    int fs[26]={0};

    while (j<s.size())
    {
        fs[s[j]-'a']++;

        if(j>=k-1)
        {    
            bool tmp=true;
            for (int c = 0; c < 26; c++)
            {
                if(fs[c]!=fp[c]){
                    tmp=false;
                    break;
                }
            }
            if(tmp){
                cnt++;
            }
            fs[s[i]-'a']--;
            i++;
        }
        j++;
    }
    
    cout<<cnt<<endl;

    return 0;
}