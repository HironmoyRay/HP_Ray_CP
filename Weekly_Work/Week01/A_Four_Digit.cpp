// Four_Digit_Problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;

    if(x>=0 && x<10){
        cout<<0<<0<<0<<x<<endl;
    }
    else if(x>=10 && x<100){
        cout<<0<<0<<x<<endl;
    }
    else if(x>=100 && x<1000){
        cout<<0<<x<<endl;
    }
    else if(x>=1000 && x<10000){
        cout<<x<<endl;
    }
    return 0;
}