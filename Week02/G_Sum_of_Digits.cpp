#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n; cin>>n;
    int cnt=0;
    while (n.size()>1)
    {
        int sum=0;
        for(char digit:n){
            sum=sum+(digit-'0');
        }
        n=to_string(sum);
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}