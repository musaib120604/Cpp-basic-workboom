// Swap two numbers
// Swapping with a temporary and with arithmetic only.

#include <iostream>
using namespace std;

int main() {
    // Way A: borrow a third variable.
    int a = 5, b = 2;
    int spare = a;
    a = b;
    b = spare;
    cout << a << endl << b << endl;

    // Way B: no extra variable, arithmetic only.
    int p = 5, q = 2;
    p = p + q;
    q = p - q;
    p = p - q;
    cout << p << endl << q << endl;
}
