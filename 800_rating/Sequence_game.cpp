#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        // Step 1: Find the two largest values from DIFFERENT indices
        vector<pair<long long, int>> all;
        all.reserve(2 * n);
        for (int i = 0; i < n; i++) {
            all.push_back({a[i], i});
            all.push_back({b[i], i});
        }

        sort(all.begin(), all.end(), greater<>());

        long long max1 = all[0].first;
        int idx1 = all[0].second;

        long long max2 = -1;
        for (auto [val, idx] : all) {
            if (idx != idx1) {  // ensure from different index
                max2 = val;
                break;
            }
        }

        long long limit = max1 + max2;

        // Step 2: Count indices i >= 3 satisfying the condition
        int count_small = 0;
        for (int i = 2; i < n; i++) {
            long long c1 = a[i], c2 = b[i];
            if (c1 <= limit || c2 <= limit) count_small++;
        }

        cout << count_small << "\n";
    }

    return 0;
}
