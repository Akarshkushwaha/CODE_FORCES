#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x;
        string s;
        cin >> x >> s;

        bool found = false;
        int operation = 0;

        for (int i = 0; i <= 6; i++)
        {
            if (x.find(s) != string::npos)
            {
                cout << operation << endl;
                found = true;
                break;
            }
            x = x + x;
            operation++;
        }
        if (!found)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}