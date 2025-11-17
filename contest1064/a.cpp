#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    if (!cin >> t)
        return 0;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        char sumo = s.back();
        int opo = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            if (s[i] != sumo)
            {
                opo++;
            }
        }
        cout << opo << '\n';
    }
    return 0;
}