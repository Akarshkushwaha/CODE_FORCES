#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1 \n";
        return;
    }

    ll max_cost = 0;

    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n; c++)
        {
            ll val = 1LL * (r - 1) * n + c;
            ll curr_sum = val;

            if (r > 1)
                curr_sum += (val - n);
            if (r < n)
                curr_sum += (val + n);
            if (c > 1)
                curr_sum += (val - 1);
            if (c < n)
                curr_sum += (val + 1);

            max_cost = max(max_cost, curr_sum);
        }
    }
    cout << max_cost << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}