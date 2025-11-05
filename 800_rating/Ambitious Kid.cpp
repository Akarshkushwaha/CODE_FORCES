#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    int ans = 100000;
    bool zero = false;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 0)
            zero = true;
        if (abs(x) < ans)
            ans = abs(x);
    }

    if (zero)
        cout << 0;
    else
        cout << ans;

    return 0;
}