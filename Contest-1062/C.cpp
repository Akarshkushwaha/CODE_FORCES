#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        bool haseven = false;
        bool hasodd = false;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                haseven = true;
            }
            else
            {
                hasodd = true;
            }
        }

        if (haseven && hasodd)
        {
            sort(a.begin(), a.end());
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}