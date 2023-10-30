#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x; cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]==x){
            for (int j = i; j <n ; j++)i            {
                a[i-1]=a[i];
            }
            n=n-1;
        }
        for (int j = 0; j < n; j++)
        {
            cout<<a[i]<<" ";
        }
        
    }

    cout<<endl;
    return 0;
}