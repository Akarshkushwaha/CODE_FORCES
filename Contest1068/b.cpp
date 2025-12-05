#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test)
    {
        int n;
        cin >> n;
        vector<long long> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            cin >> b[i];
        }
        vector<long long> even(n + 2, 0LL);
        vector<long long> odd(n + 2, LLONG_MIN / 2);
        even[n + 1] = 0LL;
        for (int i = n; i >= 1; --i)
        {
            long long r_evens = -a[i] + even[i + 1];
            long long b_evens = -b[i] + odd[i + 1];
            even[i] = max(r_evens, b_evens);
            long long r_odds = a[i] + odd[i + 1];
            long long b_odds = b[i] + even[i + 1];
            odd[i] = max(r_odds, b_odds);
        }
        long long ans = max(even[1], odd[1]);
        cout << ans << '\n';
    }
    return 0;
}