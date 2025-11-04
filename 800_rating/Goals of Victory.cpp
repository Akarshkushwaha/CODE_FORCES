#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long s = 0;

        for (int i = 0; i < n - 1; i++)
        {
            long long a;
            cin >> a;
            s += a;
        }

        cout << -s << '\n';
    }
    return 0;
}