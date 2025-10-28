// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// using namespace std;
// using ull = unsigned long long;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         ull g = 0;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             ull x;
//             cin >> x;
//             if (i == 0)
//                 g == x;
//             else
//                 g = std::gcd(g, x);
//         }

//         const int LIMIT = 2000000;
//         long long ans = -1;
//         for (int x = 2; x <= LIMIT; x++)
//         {
//             if (std::gcd<ull>(g, (ull)x) == 1ull)
//             {
//                 ans = x;
//                 break;
//             }
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Compute GCD of all elements
        long long g = a[0];
        for (int i = 1; i < n; i++)
        {
            g = gcd(g, a[i]);
        }

        // If GCD is 1, then answer is 2
        // (because gcd(a[i], 2) = 1 for at least one odd element)
        if (g == 1)
        {
            cout << 2 << "\n";
            continue;
        }

        // Otherwise, find smallest prime not dividing g
        set<long long> primeFactors;
        long long temp = g;

        // Extract prime factors from g
        for (long long p = 2; p * p <= temp; p++)
        {
            if (temp % p == 0)
            {
                primeFactors.insert(p);
                while (temp % p == 0)
                {
                    temp /= p;
                }
            }
        }
        if (temp > 1)
        {
            primeFactors.insert(temp);
        }

        // Find smallest number not divisible by any prime factor of g
        for (long long x = 2; x <= 100000; x++)
        {
            bool isValid = true;
            for (long long p : primeFactors)
            {
                if (x % p == 0)
                {
                    isValid = false;
                    break;
                }
            }
            if (isValid)
            {
                cout << x << "\n";
                goto next_test;
            }
        }

        cout << -1 << "\n";
    next_test:;
    }

    return 0;
}