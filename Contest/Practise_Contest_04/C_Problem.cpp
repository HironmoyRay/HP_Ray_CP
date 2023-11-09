#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        int flag = 0;
        
        if (n == m) {
            flag = 1;
        } 
        else if (n > m) {
            while (n > m && n > 0) {
                n -= 1;
                m += 1;
                if (n == m) {
                    flag = 1;
                    break;
                }
            }
        } 
        else {
            while (m > n && m > 0) {
                m -= 1;
                n += 3;
                if (n == m) {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}





