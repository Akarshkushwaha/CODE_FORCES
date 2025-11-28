#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 1)
        {
            cout << 0 << '\n';
            continue;
        }

        int more_cows = n / 4;
        int cont = 0;

        for (int cows = 0; cows <= more_cows; cows++)
        {
            int rem_legs = n - 4 * cows;
            if (rem_legs % 2 == 0)
            {
                int chick = rem_legs / 2;
                if (chick >= 0)
                {
                    cont++;
                }
            }
        }
        cout << cont << '\n';
    }
    return 0;
}