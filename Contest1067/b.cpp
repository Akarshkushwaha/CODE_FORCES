#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define F first
#define S second

void solve()
{
    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < 2 * n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int odd = 0;
    int even = 0;

    for (auto i : mp)
    {
        if (i.second % 2 != 0)
            odd++;
        else
            even++;
    }

    int ans = odd + 2 * even;

    if (odd == 0)
    {
        if (even % 2 != n % 2)
        {
            ans -= 2;
        }
    }

    cout << ans << "\n";
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