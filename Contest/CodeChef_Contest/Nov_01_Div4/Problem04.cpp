
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         vector<int> a(n);

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         int i=0, j=0, count = 0, subArrayOr=0;
//         while (j<n)
//         {
//             subArrayOr |= a[j];
//             if(j>=k-1){
//                 if(subArrayOr%2!=0){
//                     count++;
//                 }
//                 subArrayOr ^= a[i];
//                 i++;
//             }
//             j++;
//         }
        
        
//         // for (int i = 0; i < n; i++) {
//         //     int subarrayOR = 0;
//         //     for (int j = i; j < n; j++) {
//         //         subarrayOR |= a[j];
//         //         if (j - i + 1 == k && subarrayOR % 2 != 0) {
//         //             count++;
//         //         }
//         //     }
//         // }


//         cout << count << endl;
//     }

//     return 0;
// }


