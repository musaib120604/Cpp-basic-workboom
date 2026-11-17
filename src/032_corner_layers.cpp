// Corner layers
// One quadrant of the concentric pattern: min(row, col).

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Size: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            cout << min(row, col) << " ";
        }
        cout << endl;
    }
}
