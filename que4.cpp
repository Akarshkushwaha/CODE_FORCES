#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        bool used = false;
        int time = 0; 
        int button_expire_time = -1;
        bool can_pass = true;

        for (int i = 0; i < n; ++i) {
            if (a[i] == 0) {
                time++;
                continue;
            }

           
            if (button_expire_time > time) {
               
                time++;
                continue;
            }

            if (!used) {
                
                used = true;
                button_expire_time = time + x;
                time++;
            } else {
                
                can_pass = false;
                break;
            }
        }

        if (can_pass)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}