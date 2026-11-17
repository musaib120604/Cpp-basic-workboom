// Even or odd
// Parity check using the remainder operator.

#include <iostream>
using namespace std;

int main() {
    int value;
    cout << "Enter an integer: ";
    cin >> value;

    // Test against 0: for negative odd numbers value % 2 is -1, not 1.
    if (value % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}
