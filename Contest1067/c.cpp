#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    int n;
    ll k;
    cin >> n >> k;

    vll a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    if (k % 2 == 0)
    {
        ll max_sum = -2e18;
        ll current = 0;

        vll dp(n);
        dp[0] = a[0];
        max_sum = dp[0];

        for (int i = 1; i < n; i++)
        {
            dp[i] = max(a[i], a[i] + dp[i - 1]);
            max_sum = max(max_sum, dp[i]);
        }
        cout << max_sum << "\n";
    }
    else
    {
        vll pre(n), suf(n);

        pre[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = max(a[i], a[i] + pre[i - 1]);
        }

        suf[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suf[i] = max(a[i], a[i] + suf[i + 1]);
        }

        ll ans = -2e18;
        for (int i = 0; i < n; i++)
        {
            ll val = pre[i] + suf[i] - a[i] + b[i];
            ans = max(ans, val);
        }
        cout << ans << "\n";
    }
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}