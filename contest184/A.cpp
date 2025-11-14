#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define rep(i, a, b) for (int i = (a); i < (b); i++)
#define per(i, a, b) for (int i = (a); i >= (b); i--)

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    int n;
    ll aliceNum;
    cin >> n >> aliceNum;

    vi marbles(n);
    rep(i, 0, n) cin >> marbles[i];

    int leftSide = 0, rightSide = 0;

    for (auto marble : marbles)
    {
        if (marble < aliceNum)
            leftSide++;
        if (marble > aliceNum)
            rightSide++;
    }

    ll bobChoice = (rightSide >= leftSide) ? aliceNum + 1 : aliceNum - 1;

    cout << bobChoice << '\n';
}

int main()
{
    fastIO();

    int testCases;
    cin >> testCases;

    rep(tc, 0, testCases)
    {
        solve();
    }

    return 0;
}