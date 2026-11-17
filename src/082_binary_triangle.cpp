// Binary triangle
// Alternating 1s and 0s decided by the parity of row+col.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Height: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            cout << ((row + col) % 2 == 0 ? 1 : 0) << " ";
        }
        cout << endl;
    }
}
