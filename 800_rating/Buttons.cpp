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
        int a, b, c;
        cin >> a >> b >> c;
        if (a + (c + 1) / 2 > b + c / 2)
        {
            cout << "First\n";
        }
        else
        {
            cout << "Second\n";
        }
    }
    return 0;
}