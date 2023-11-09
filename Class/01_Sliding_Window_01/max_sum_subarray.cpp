//BrutForce method of Finding Maximum Sum of SubArray of size K.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; 
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k; cin>>k;
    int mx=INT_MIN;
    for (int i = 0; i < n-k+1; i++)
    {
        int sum=0;
        for (int j = i; j < i+k; j++)
        {
            sum=sum+a[j];
        }
        mx=max(sum,mx);
    }
    cout<<mx<<endl;
    
    return 0;
}