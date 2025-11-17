#include <bits/stdc++.h>
using namespace std;

void solop()
{
    long long a, b, n;
    cin >> a >> b >> n;

    if (b * n <= a)
    {
        cout << 1 << "\n";
    }

    else if (a <= b)
    {
        cout << 1 << "\n";
    }

    else
    {
        cout << 2 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solop();
    }
    return 0;
}