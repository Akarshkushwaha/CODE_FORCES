#include <iostream>
using namespace std;

int main() {    
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long gellyfish_attacks = min(b, d + b);
        
        long long flower_attacks = min(a, c + a);
        
        
        long long gellyfish_min = min(b, d);
        long long flower_min = min(a, c);
        
        if (gellyfish_min <= flower_min) {
            cout << "Gellyfish\n";
        } else {
            cout << "Flower\n";
        }
    }
    return 0;
}
