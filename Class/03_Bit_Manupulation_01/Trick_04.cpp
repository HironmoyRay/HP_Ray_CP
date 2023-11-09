// Count Set bit (1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int count =0;
    while (n>0)
    {
        if(n&1==1) // AND Operation for Count Set bit
        {
            count++;
            n=n>>1; //Left Shift
        }
    }
    cout<<count<<endl;
    
    return 0;
}