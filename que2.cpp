
// // #include <iostream>
// // #include <vector>
// // #include <algorithm>
// // using namespace std;

// // int main() {
// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         int n;
// //         cin >> n;
// //         vector<int> a(n);
// //         for (int i = 0; i < n; ++i) cin >> a[i];
// //         int ans = n - 1; // at worst, keep one element
// //         for (int i = 0; i < n; ++i) {
// //             for (int j = 0; j < n; ++j) {
// //                 if ((a[i] + a[j]) % 2 == 0) {
// //                     int mn = min(a[i], a[j]);
// //                     int mx = max(a[i], a[j]);
// //                     int cnt = 0;
// //                     for (int k = 0; k < n; ++k) {
// //                         if (a[k] >= mn && a[k] <= mx) cnt++;
// //                     }
// //                     ans = min(ans, n - cnt);
// //                 }
// //             }
// //         }
// //         cout << ans << endl;
// //     }
// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         string s;
//         cin >> s;

//         int count = 0;
//         int sum = 0;

//         for (auto i : s) {
//             if (i == ')') {
//                 sum -= 1;
//             } else {
//                 sum += 1;
//             }

//             if (sum == 0) {
//                 count++;
//             }
//         }

//         if (count > 1) {
//             cout << "Yes" << endl;
//         } else {
//             cout << "No" << endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
//     #include <vector>
//     #include <algorithm>
//     #include <string>
     
//     using namespace std;
     
//     int main() {
//         int t;
//         cin >> t;
//         while (t--) {
//             string s;
//             cin >> s;
     
//             int ans = stoi(s);
//             bool found = false;
//             for (int a = 0; a <= 99 && !found; a++) {
//                 for (int b = 0; b <= 99; b++) {
//                     int value = a + b;
//                     if (value * value == ans) {
//                         cout << a << " " << b << endl;
//                         found = true;
//                         break;
//                     }
//                 }
//             }
//             if (!found) {
//                 cout << -1 << endl;
//             }
//         }
//         return 0;
//     }


#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        
}
