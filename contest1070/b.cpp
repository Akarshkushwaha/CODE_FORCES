#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi p;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
        {
            p.push_back(i);
        }
    }

    if (p.empty())
    {
        cout << n << "\n";
        return;
    }

    int max_gap = 0;
    for (size_t i = 0; i < p.size() - 1; ++i)
    {
        max_gap = max(max_gap, p[i + 1] - p[i]);
    }
    max_gap = max(max_gap, n + p[0] - p.back());

    cout << max_gap - 1 << "\n";
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