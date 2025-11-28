#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n + 1), b(n + 1);
        int xoA = 0, xoB = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            xoA ^= a[i];
        }

        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            xoB ^= b[i];
        }

        if ((xoA ^ xoB) == 0)
        {
            cout << "Tie\n";
            continue;
        }

        int lasto = -1;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != b[i])
                lasto = i;
        }

        if (lasto == -1)
        {
            cout << "Tie\n";
        }
        else if (lasto % 2 == 1)
        {
            cout << "Ajisai\n";
        }
        else
        {
            cout << "Mai\n";
        }
    }
    return 0;
}
