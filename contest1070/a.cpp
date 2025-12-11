#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define all(v) v.begin(), v.end()

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int keep = 0;
    int Current_max = 0;

    for (int x : a)
    {
        if (x >= Current_max)
        {
            keep++;
            Current_max = x;
        }
    }

    cout << n - keep << "\n";
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