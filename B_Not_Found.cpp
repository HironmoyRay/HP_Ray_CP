#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    cin>>s;
    int cnt[26]={0};
    int flag=0;
    for (int i = 0; i < strlen(s); i++)
    {   
        int value=s[i]-'a';
        cnt[value]++;
    }
    for (int i = 0; i <26; i++)
    {
        
        if(cnt[i]==0){
            cout<<char(i+'a');
            flag++;
            break;
        }
    }
    if(flag==0){
        cout<<"None";
    }
    cout<<endl;
    return 0;
}