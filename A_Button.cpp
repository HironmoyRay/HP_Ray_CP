#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b){
        a--;
        if(a>b){
            cout<<a+a+1<<endl;
        }
        else if(a=b){
            cout<<a+b+1<<endl;
        }
    }
    else if(a<b){
        b--;
        if(b>a){
        cout<<b+b+1<<endl;
        }
        else if(a=b){
            cout<<a+b+1<<endl;
        }
    }
    else if(a==b){
        cout<<a+b<<endl;
    }
    return 0;
}