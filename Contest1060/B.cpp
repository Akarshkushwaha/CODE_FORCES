#include <iostream>
#include <vector>
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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        a.insert(a.begin(), (long long)1e18);
        a.push_back((long long)1e18);

        long long cost1 = 0, cost2 = 0;

        for (int i = 1; i < n + 1; i++)
        {
            if (i % 2 == 1)
            { // peak
                long long limit = min(a[i - 1], a[i + 1]) - 1;
                if (a[i] > limit)
                    cost1 += a[i] - limit;
            }
        }

        for (int i = 1; i < n + 1; i++)
        {
            if (i % 2 == 0)
            { // peak
                long long limit = min(a[i - 1], a[i + 1]) - 1;
                if (a[i] > limit)
                    cost2 += a[i] - limit;
            }
        }

        cout << min(cost1, cost2) << "\n";
    }

    return 0;
}
