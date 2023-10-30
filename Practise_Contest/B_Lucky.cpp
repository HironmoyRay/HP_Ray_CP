#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin>>x;
        int a=x%10;
        int m=x/10;

        int b=m%10;
        int n=m/10;

        int c=n%10;
        int o=n/10;

        int d=o%10;
        int p=o/10;

        int e=p%10;
        int q=p/10;

        int f=q%10;
        int r=q/10;

        if((a+b+c)==(d+e+f)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}