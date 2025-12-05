#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<bool> awakes(n, false);
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                for (int j = i; j < n && j < i + k + 1; ++j)
                {
                    awakes[j] = true;
                }
            }
        }
        int sleeps = 0;
        for (bool a : awakes)
        {
            if (!a)
                ++sleeps;
        }
        cout << sleeps << endl;
    }
    return 0;
}