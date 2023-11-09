#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x; cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int b[n];
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=x){
            b[j]=a[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        cout<<b[i];
        if(i<j-1){
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}