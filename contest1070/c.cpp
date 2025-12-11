#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vll = vector<long long>;

void solve()
{
    int n;
    cin >> n;
    vll odds, evens;
    for (int i = 0; i < n; ++i)
    {
        ll a;
        cin >> a;
        if (a % 2)
            odds.push_back(a);
        else
            evens.push_back(a);
    }

    sort(odds.rbegin(), odds.rend());
    sort(evens.rbegin(), evens.rend());

    int no = odds.size();
    int ne = evens.size();

    vll pe(ne + 1, 0);
    for (int i = 0; i < ne; ++i)
    {
        pe[i + 1] = pe[i] + evens[i];
    }

    for (int k = 1; k <= n; ++k)
    {
        int c = max(1, k - ne);
        if (c % 2 == 0)
            c++;

        if (c > no || c > k)
        {
            cout << "0 ";
        }
        else
        {
            cout << odds[0] + pe[k - c] << " ";
        }
    }
    cout << "\n";
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