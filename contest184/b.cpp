#include <bits/stdc++.h>
using namespace std;

typedef long long int64_t_custom;
typedef unsigned long long uint64_t_custom;
typedef long double longdbl_custom;

vector<vector<int>> buffer_matrix;

void processCase()
{
    string str;
    cin >> str;
    int length = str.size();
    bool conflictFound = false;

    for (int idx = 0; idx < length - 1; idx++)
    {
        bool condA = (str[idx] == '>' || str[idx] == '*');
        bool condB = (str[idx + 1] == '<' || str[idx + 1] == '*');
        if (condA && condB)
        {
            conflictFound = true;
            break;
        }
    }

    if (conflictFound)
    {
        cout << -1 << endl;
        return;
    }

    int pointer = 0;
    int leftCount = 0;

    while (pointer < length && str[pointer] == '<')
    {
        leftCount++;
        pointer++;
    }

    bool hasStarInside = (pointer < length && str[pointer] == '*');
    int starPosition = hasStarInside ? pointer : -1;
    pointer += hasStarInside ? 1 : 0;

    int remaining = length - pointer;
    int result = max(leftCount, remaining);

    if (hasStarInside)
    {
        int tempValue = 1 + max(leftCount, remaining);
        result = max(result, tempValue);
    }

    cout << result << endl;
}

int main()
{

    int testCount = 1;
    cin >> testCount;
    while (testCount--)
    {
        processCase();
    }

    return 0;
}
