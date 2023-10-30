#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll x, y;
    cin >> x >> y;

    ll a[100005] = {0};
    
    a[1] = x;
    ll cnt = 0, i = 2;
    while (true){

        a[i] = (a[i - 1] * 2);

        if (a[i] > y){
            break;
        }
        i++;
    }

    cout << i - 1 << endl;

    return 0;
}