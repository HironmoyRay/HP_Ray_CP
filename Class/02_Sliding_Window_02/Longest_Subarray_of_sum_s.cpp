#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int i=0,j=0,sum=0;

    int k; cin>>k;
    int window=0;
    int mx_window=INT_MIN;
    while (j<n)
    {
        sum+=a[j];
        while (sum>k)
        {
            sum-=a[i];
            i++;
        }
        
        if(sum==k){
            window=j-i+1;
        }
        mx_window=max(mx_window,window);
        j++;
    }
    cout<<mx_window<<endl;
    
    return 0;
}