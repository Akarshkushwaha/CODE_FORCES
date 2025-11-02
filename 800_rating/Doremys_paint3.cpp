#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        map<int, int> count;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            count[a]++;
        }

        if (count.size() > 2)
        {
            cout << "NO" << endl;
        }
        else if (count.size() == 1)
        {
            cout << "YES" << endl;
        }

        else
        {
            auto it = count.begin();
            int count1 = it->second;
            it++;
            int count2 = it->second;

            if (abs(count1 - count2) <= 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
