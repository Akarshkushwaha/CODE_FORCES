#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n; // size of permutations
        cin >> n;

        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}