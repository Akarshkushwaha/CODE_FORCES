#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    int n, y, r;
    cin >> n >> y >> r;

    int ans = r;
    int rem = n - r;
    ans += min(rem, y / 2);

    cout << ans << "\n";
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