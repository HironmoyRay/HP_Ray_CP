//Sliding Window technique of Finding Maximum Sum of SubArray of size K.
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
    int i=0, j=0, sum=0, k;
    cin>>k;
    int mx=INT_MIN;
    while (j<n)
    {
        sum=sum+a[j];
        if(j>=k-1){
            // cout<<sum<<endl;
            mx=max(mx,sum);
            sum=sum-a[i];
            i++;
        }
        j++;
    }
    cout<<mx<<endl;
    

    return 0;
}