#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            cout << "Bob" << endl;
        } 
        else {
            bool prime = true;
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) {
                cout << "Alice" << endl;
            } else {
                cout << "Bob" << endl;
            }
        }
    }

    return 0;
}
