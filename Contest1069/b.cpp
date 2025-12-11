#include <bits/stdc++.h>

using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(x) (int)x.size()

void run_case()
{
    string s;
    cin >> s;
    string t;
    cin >> t;

    vector<int> cnt_s(26, 0);
    for (char c : s)
    {
        cnt_s[c - 'a']++;
    }

    vector<int> cnt_t(26, 0);
    for (char c : t)
    {
        cnt_t[c - 'a']++;
    }

    string rem = "";
    for (int i = 0; i < 26; i++)
    {
        if (cnt_t[i] < cnt_s[i])
        {
            cout << "Impossible" << "\n";
            return;
        }
        for (int j = 0; j < cnt_t[i] - cnt_s[i]; j++)
        {
            rem += (char)('a' + i);
        }
    }

    string ans = "";
    int ptr_s = 0;
    int ptr_rem = 0;
    int n_s = sz(s);
    int n_rem = sz(rem);

    while (ptr_s < n_s && ptr_rem < n_rem)
    {
        if (rem[ptr_rem] < s[ptr_s])
        {
            ans += rem[ptr_rem];
            ptr_rem++;
        }
        else
        {
            ans += s[ptr_s];
            ptr_s++;
        }
    }

    while (ptr_rem < n_rem)
    {
        ans += rem[ptr_rem];
        ptr_rem++;
    }

    while (ptr_s < n_s)
    {
        ans += s[ptr_s];
        ptr_s++;
    }

    cout << ans << "\n";
}

int main()
{
    fast_io;
    int t;
    if (cin >> t)
    {
        while (t--)
        {
            run_case();
        }
    }
    return 0;
}