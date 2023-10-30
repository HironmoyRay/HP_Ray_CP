#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> st;
        int a[n];
        int cnt[10005] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }

        sort(cnt, cnt + 10005);

        vector<int> v;

        int ans = 0, sum = 0;
        for (int i = 10004; i >= 1; i--){
            if (cnt[i] != 0){
                v.push_back(cnt[i]);
                sum += cnt[i];
            }
        }

        sort(v.begin(), v.end());

        int sub = 0;

        for (int i = 0; i < v.size(); i++){
            if (v[i] >= 2){
                sub += (v[i] - 1);
            }
        }

        if (sub % 2){
            sub++;
        }
        ans = sum - sub;

        cout << ans << endl;
    }
    return 0;
}