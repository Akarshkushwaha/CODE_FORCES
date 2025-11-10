#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long mn = *min_element(a.begin(), a.end());
        vector<long long> b, c;
        for (long long x : a)
        {
            if (x == mn)
                b.push_back(x);
            else
                c.push_back(x);
        }
        if (c.empty())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for (long long x : b)
                cout << x << " ";
            cout << endl;
            for (long long x : c)
                cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}