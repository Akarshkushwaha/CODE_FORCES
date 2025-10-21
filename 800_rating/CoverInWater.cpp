#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        // Initialise a flag to check for three continous empty cells
        bool continous_three_empty_cells = false;

        // Initialize a counter for total no. of empty cells

        int total_n0_empty_cells = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                continous_three_empty_cells = true;
                break;
            }

            // count total n0. of empty cells
            if (s[i] == '.')
            {
                total_n0_empty_cells++;
            }
        }

        // if there are three empty cells only 2 actions are needed
        if (continous_three_empty_cells)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << total_n0_empty_cells << endl;
        }
    }
    return 0;
}