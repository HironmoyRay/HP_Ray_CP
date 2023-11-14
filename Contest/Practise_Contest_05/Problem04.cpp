
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int w, l;
        cin >> w >> l;
        
        bool flag = false;
        for (int i = 1; i <= w; i++) {
            for (int j = 1; j <= l; j++) {
                int d = 2 * (i + j);
                
                if (d % 4 != 0) {
                    flag = true;
                    break;
                }
                
            }
            
        }
        if (flag == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}




