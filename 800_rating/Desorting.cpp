#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

int32_t main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool not_sorted = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                not_sorted = true;
                break;
            }
        }
        if (not_sorted)
        {
            cout << 0 << endl;
            continue;
        }

        int min_diff = LLONG_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            min_diff = min(min_diff, a[i + 1] - a[i]);
        }

        cout << (min_diff / 2 + 1) << endl;
    }
    return 0;
}
