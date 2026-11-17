// Factors
// List every divisor of a number.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int d = 1; d <= n; d++) {
        if (n % d == 0) cout << d << " ";
    }
    cout << endl;
}
