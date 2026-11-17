// Post versus pre
// How prefix and postfix differ when the result is used.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = a--;                  // b gets the OLD value, then a drops
    cout << a << " " << b << endl;

    int c = 10;
    cout << ++c << endl;          // increments first, prints 11
    cout << c << endl;

    int d = 10;
    cout << d++ << endl;          // prints 10, increments afterwards
    cout << d << endl;
}
