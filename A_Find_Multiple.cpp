
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=-1;
    for (int i = a; i <=b; i++)
    {
        if(i%c==0){
            x=i;
            break;
        }
    }
    cout<<x<<endl;
    
    return 0;
}