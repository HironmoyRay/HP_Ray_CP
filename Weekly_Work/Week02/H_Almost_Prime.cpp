#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int primeCount[3001] = {0};

    for (int i = 2; i <= n; i++) {
        if (primeCount[i] == 0) {
            for (int j = i; j <= n; j += i) {
                primeCount[j]++;
            }
        }
    }
    // count:
    // 2=1
    // 3=1
    // 4=1
    // 5=1
    // 6=2
    // 7=1
    // 8=1
    // 9=1
    // 10=2
    // 11=1
    // 12=2
    // 13=1
    // 14=2
    // 15=2
    // 16=1
    // 17=1
    // 18=2
    // 19=1
    // 20=1
    // 21=2

    int almostPrimeCount = 0;
    for (int i = 2; i <= n; i++) {
        if (primeCount[i] == 2) {
            almostPrimeCount++;
        }
    }

    cout << almostPrimeCount << endl;

    return 0;
}
