#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) { // Odd layers
            cout << "I hate";
        } else {          // Even layers
            cout << "I love";
        }

        if (i < n) {
            cout << " that ";
        }
    }

    cout << " it" << endl;
    
    return 0;
}
