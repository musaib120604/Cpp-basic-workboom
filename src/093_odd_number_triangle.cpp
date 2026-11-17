// Odd number triangle
// Rows of odd numbers 1, 3, 5, ... generated two different ways.

#include <iostream>
using namespace std;

void byFormula(int n) {              // k-th odd number is 2k-1
    for (int row = 1; row <= n; row++) {
        for (int k = 1; k <= row; k++) cout << 2 * k - 1 << " ";
        cout << endl;
    }
}

void byStepping(int n) {             // start at 1 and jump by 2
    for (int row = 1; row <= n; row++) {
        for (int v = 1; v <= 2 * row - 1; v += 2) cout << v << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Height: ";
    cin >> n;

    byFormula(n);
    cout << endl;
    byStepping(n);
}
