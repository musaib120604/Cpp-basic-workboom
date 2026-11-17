// Bridge
// A solid base topped by two shrinking columns that lean inwards.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Size: ";
    cin >> n;

    // Base: 2n-1 stars.
    for (int k = 1; k <= 2 * n - 1; k++) cout << "* ";
    cout << endl;

    // Pillars: each row has a left block, a gap and a right block.
    int rows = n - 1;
    int gap = 1, side = rows;
    for (int row = 1; row <= rows; row++) {
        for (int k = 1; k <= side; k++) cout << "* ";
        for (int g = 1; g <= gap; g++)  cout << "  ";
        for (int k = 1; k <= side; k++) cout << "* ";
        gap += 2;
        side--;
        cout << endl;
    }
}
