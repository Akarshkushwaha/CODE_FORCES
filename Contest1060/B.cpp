#include <
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

        // If already small, no changes needed
        if (n == 2)
        {
            cout << 0 << "\n";
            continue;
        }

        // Case 1: make valleys at odd indices (1,3,5,...)
        long long cost1 = 0;
        for (int i = 1; i < n; i += 2)
        {
            long long left = (i - 1 >= 0 ? a[i - 1] : (long long)1e18);
            long long right = (i + 1 < n ? a[i + 1] : (long long)1e18);
            long long min_neigh = min(left, right);
            if (a[i] >= min_neigh)
                cost1 += a[i] - (min_neigh - 1);
        }

        // Case 2: make valleys at even indices (2,4,6,...)
        long long cost2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            long long left = (i - 1 >= 0 ? a[i - 1] : (long long)1e18);
            long long right = (i + 1 < n ? a[i + 1] : (long long)1e18);
            long long min_neigh = min(left, right);
            if (a[i] >= min_neigh)
                cost2 += a[i] - (min_neigh - 1);
        }

        // If array length is odd, only one pattern possible (valleys on odd indices)
        if (n % 2 == 1)
            cout << cost1 << "\n";
        else
            cout << min(cost1, cost2) << "\n";
    }
    return 0;
}
