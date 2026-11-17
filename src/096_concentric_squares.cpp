// Concentric squares
// Each cell shows its distance from the nearest edge, plus one.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Size: ";
    cin >> n;

    int side = 2 * n - 1;
    for (int row = 1; row <= side; row++) {
        for (int col = 1; col <= side; col++) {
            int fromTopOrBottom = (row <= n) ? row : 2 * n - row;
            int fromLeftOrRight = (col <= n) ? col : 2 * n - col;
            cout << min(fromTopOrBottom, fromLeftOrRight) << " ";
        }
        cout << endl;
    }
}
