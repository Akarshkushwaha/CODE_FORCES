#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> A(n), B(n);
    int xorSum = 0;

    for (int &x : A)
    {
        cin >> x;
        xorSum ^= x;
    }
    for (int &x : B)
    {
        cin >> x;
        xorSum ^= x;
    }

    if (xorSum == 0)
    {
        cout << "Tie\n";
        return;
    }

    int msb = 31 - __builtin_clz(xorSum);

    int last = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (((A[i] >> msb) & 1) != ((B[i] >> msb) & 1))
        {
            last = i + 1;
            break;
        }
    }

    cout << (last % 2 ? "Ajisai" : "Mai") << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;
    while (tests--)
        solve();
}
