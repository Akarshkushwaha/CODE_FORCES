#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define dec(i, a, b) for (int i = a; i > (b); --i)

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void sol()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int lt = a[0];
    int rt = a[n - 1];

    int bes_left, bes_right;
    if (lt != -1 && rt != -1)
    {
        bes_left = lt;
        bes_right = rt;
    }
    else if (lt != -1)
    {
        bes_left = lt;
        bes_right = lt;
    }
    else if (rt != -1)
    {
        bes_left = rt;
        bes_right = rt;
    }
    else
    {
        bes_left = 0;
        bes_right = 0;
    }

    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            res[i] = a[i];
        }
        else
        {
            if (i == 0)
            {
                res[i] = bes_left;
            }
            else if (i == n - 1)
            {
                res[i] = bes_right;
            }
            else
            {
                res[i] = 0;
            }
        }
    }

    if (lt != -1)
        res[0] = lt;
    else
        res[0] = bes_left;

    if (rt != -1)
        res[n - 1] = rt;
    else
        res[n - 1] = bes_right;

    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] == -1)
        {
            res[i] = 0;
        }
        else
        {
            res[i] = a[i];
        }
    }

    int min_diff = abs(res[n - 1] - res[0]);

    cout << min_diff << endl;
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            cout << " ";
        cout << res[i];
    }
    cout << endl;
}

signed main()
{
    fast_io();
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}