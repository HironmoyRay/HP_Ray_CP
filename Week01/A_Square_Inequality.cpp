#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c; cin>>a>>b>>c;
    int x=a*a;
    int y=b*b;
    int z=c*c;
    if(x+y<z){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}