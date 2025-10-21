// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x;
//         cin >> n >> x;
//         vector<int> a(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int max_dist = 0;

//         // distances from 0 to first location

//         max_dist = max(max_dist, a[0]);

//         for (int i = 0; i < n; i++)
//         {
//             max_dist = max(max_dist, a[i] - a[i - 1]);
//         }

//         max_dist = max(max_dist, 2 * (x - a[n - 1]));

//         cout << max_dist << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<long long> a;
        a.push_back(0);

        for (int i = 0; i < n; i++)
        {
            long long point;
            cin >> point;
            a.push_back(point);
        }
        a.push_back(x);
        n = a.size();

        long long max_dist_between_points = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            if (i == n - 1)
            {
                max_dist_between_points = max(max_dist_between_points, 2 * (a[i] - a[i - 1]));
            }
            else
            {
                max_dist_between_points = max(max_dist_between_points, a[i] - a[i - 1]);
            }
        }
        cout << max_dist_between_points << endl;
    }
    return 0;
}