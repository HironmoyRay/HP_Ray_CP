#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<string>> v;
        map<string, int> mp;

        for (int i = 0; i < 3; i++){

            vector<string> temp;
            for (int j = 0; j < n; j++){

                string s;
                cin >> s;
                mp[s]++;
                temp.push_back(s);
            }

            v.push_back(temp);
        }

        for (int i = 0; i < 3; i++){

            sort(v[i].begin(), v[i].end());
        }

        int p1 = 0, p2 = 0, p3 = 0;

        for (int i = 0; i < 3; i++){

            for (int j = 0; j < n; j++){

                if (mp[v[i][j]] == 1){
                    if (i == 0){
                        p1 += 3;
                    }
                    if (i == 1){
                        p2 += 3;
                    }
                    if (i == 2){
                        p3 += 3;
                    }
                }
                if (mp[v[i][j]] == 2){
                    if (i == 0){
                        p1 += 1;
                    }
                    if (i == 1){
                        p2 += 1;
                    }
                    if (i == 2){
                        p3 += 1;
                    }
                }
            }
        }

        cout << p1 << " " << p2 << " " << p3 << endl;
    }
    return 0;
}