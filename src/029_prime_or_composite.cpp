// Prime or composite
// Trial division up to the square root.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n < 2) {
        cout << "Neither prime nor composite" << endl;
        return 0;
    }

    bool hasDivisor = false;
    for (long long d = 2; d * d <= n; d++) {   // no divisor beyond sqrt(n) is needed
        if (n % d == 0) {
            hasDivisor = true;
            break;
        }
    }
    cout << (hasDivisor ? "Composite" : "Prime") << endl;
}
