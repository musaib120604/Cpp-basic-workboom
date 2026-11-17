// Multiplication table
// First ten multiples of a number, two ways.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Table of: ";
    cin >> n;

    // Way A: multiply the loop counter.
    for (int i = 1; i <= 10; i++) {
        cout << i * n << " ";
    }
    cout << endl;

    // Way B: step the loop variable by n itself.
    for (int m = n; m <= 10 * n; m += n) {
        cout << m << " ";
    }
    cout << endl;
}
