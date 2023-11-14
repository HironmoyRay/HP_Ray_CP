#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n=6;
        int a[n];
        for (int  i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector<int>alice;
        vector<int>bob;

        for (int i = 0; i < n; i++)
        {
            if(i<3){
                alice.push_back(a[i]);
            }
            else{
                bob.push_back(a[i]);
            }
        }
        sort(alice.begin(),alice.end(),greater<int>());
        sort(bob.begin(),bob.end(),greater<int>());

        int aliceScore = alice[0] * 100 + alice[1] * 10 + alice[2];
        int bobScore = bob[0] * 100 + bob[1] * 10 + bob[2];

        if (aliceScore > bobScore) {
            cout << "Alice\n";
        } else if (bobScore > aliceScore) {
            cout << "Bob\n";
        } else {
            cout << "Tie\n";
        }
    }
    
    return 0;
}

