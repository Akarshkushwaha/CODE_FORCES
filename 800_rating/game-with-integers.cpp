#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if (n % 3 == 0)
        {
            cout << "Second" << endl; // vova wins
        }
        else
        {
            cout << "First" << endl; // vanya wins
        }
    }
    return 0;
}