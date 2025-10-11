#include <iostream>
#include <set>
#include <string>
using namespace std;
set<char> getdigits(int x)
{
  set<char> digits;
  string s = to_string(x);
  for (char c : s)
  {
    digits.insert(c);
  }
  return digits;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x;
    cin >> x;
    set<char> digits = getdigits(x);
    for (int y = 0; y < 100; ++y)
    {
      string s = to_string(y);
      bool found = false;
      for (char c : s)
      {
        if (digits.count(c))
        {
          found = true;
          break;
        }
      }
      if (found)
      {
        cout << y << endl;
        break;
      }
    }
  }
  return 0;
}
