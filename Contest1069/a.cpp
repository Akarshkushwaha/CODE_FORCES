#include <bits/stdc++.h>
using namespace std;

template <typename T>
inline T read()
{
    T val;
    cin >> val;
    return val;
}

template <typename T>
inline void maximize(T &a, const T &b)
{
    if (b > a)
        a = b;
}

void solve()
{
    int n = read<int>();
    int k = read<int>();

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = read<int>();
        a[i] = min(a[i], k);
    }

    vector<vector<long long>> dp(k + 1, vector<long long>(k + 1, -1e18));
    dp[0][0] = 0;

    for (int i = 0; i < n; i++)
    {
        vector<vector<long long>> ndp(k + 1, vector<long long>(k + 1, -1e18));

        for (int used = 0; used <= k; used++)
        {
            for (int mx = 0; mx <= k; mx++)
            {
                if (dp[used][mx] < -1e17)
                    continue;

                int limit = min(a[i], k - used);
                for (int give = 0; give <= limit; give++)
                {
                    int nu = used + give;
                    int nm = max(mx, give);
                    maximize(ndp[nu][nm], dp[used][mx] + nm);
                }
            }
        }

        dp = ndp;
    }

    long long ans = 0;
    for (int used = 0; used <= k; used++)
    {
        for (int mx = 0; mx <= k; mx++)
        {
            if (dp[used][mx] > -1e17)
            {
                maximize(ans, dp[used][mx]);
            }
        }
    }

    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = read<int>();
    while (t--)
    {
        solve();
    }

    return 0;
}