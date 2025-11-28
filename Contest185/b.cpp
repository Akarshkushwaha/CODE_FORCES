#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    sort(a.begin(), a.end());

    for (int k = n; k >= 1; k--)
    {
        if (s - k < n - 1)
            continue;

        if (a[n - k] < 1)
            continue;

        if (k < n && a[n - k - 1] > n - 1)
            continue;

        cout << k << "\n";
        return;
    }
    cout << 1 << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}