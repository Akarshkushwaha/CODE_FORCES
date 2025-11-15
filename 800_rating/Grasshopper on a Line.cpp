#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;

        if (x % k == 0) // if x is divisible by k then we need two moves
        {
            cout << 2 << endl;
            cout << 1 << " " << x - 1 << endl;
        }
        else // if x is not divisible by k then we can reach x in one move
        {
            cout << 1 << endl;
            cout << x << endl;
        }
    }
    return 0;
}
