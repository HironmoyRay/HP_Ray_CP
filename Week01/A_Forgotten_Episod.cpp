#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,t; cin >> s;

    int cnt[s + 1] = {0};
    int a[s];

    for (int i = 0; i < s - 1; i++){
        cin >> a[i];
        cnt[a[i]] = 1;
    }

    for (int i = 1; i <= s; i++){
        if (cnt[i] == 0){
            cout << i << endl;
        }
    }
    return 0;
}