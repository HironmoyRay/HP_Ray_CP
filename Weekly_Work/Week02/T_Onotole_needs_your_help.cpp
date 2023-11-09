#include<bits/stdc++.h>
#include <map>
using namespace std;
int main()
{
    int n; cin>>n;
    map<int,int>count;

    for (int i = 0; i < n; i++)
    {
        int pyani;
        cin>>pyani;
        count[pyani]++;
    }
    int unique;
    for(auto x:count){
        if((x.second)%2==1){
            unique=x.first;
        }
    }
    cout<<unique<<endl;
    return 0;
}
