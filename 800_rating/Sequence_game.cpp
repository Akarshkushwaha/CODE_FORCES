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

        vector<long long> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<long long> a;
        a.push_back(b[0]); // First element always included

        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] > b[i + 1])
            {
                a.push_back(1); // insert small number to make decrease possible
            }
            a.push_back(b[i + 1]);
        }

        cout << a.size() << "\n";
        for (auto x : a)
            cout << x << " ";
        cout << "\n"; // print newline after the full sequence
    }

    return 0;
}
