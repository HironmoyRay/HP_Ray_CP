// #include <iostream>

// using namespace std;

// int main() {
//     int n; cin >> n;
//     int A[n];

//     for (int i = 0; i < n; ++i) {
//         cin >> A[i];
//     }

//     int gcdness[1001] = {0};

//     for (int i = 0; i < n; i++) {
//         for (int j = 2; j <= A[i]; j++) {
//             if (A[i] % j == 0) {
//                 gcdness[j]++;
//                 while (A[i] % j == 0) {
//                     A[i] /= j;
//                 }
//             }
//         }
//     }

//     int maxGCDness = 0;
//     int result = 2;

//     for (int i = 2; i <= 1000; ++i) {
//         if (gcdness[i] > maxGCDness) {
//             maxGCDness = gcdness[i];
//             result = i;
//         }
//     }

//     cout << result << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x=a[i];
        int y=a[i+1];
    }
    
    
    return 0;
}