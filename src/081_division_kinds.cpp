// Division kinds
// Integer division versus floating-point division.

#include <iostream>
using namespace std;

int main() {
    cout << 5 / 2 << endl;      // int / int     -> 2
    cout << 5.0 / 2 << endl;    // double / int  -> 2.5
    cout << 5 / 2.0 << endl;    // int / double  -> 2.5
    cout << 5.0 / 2.0 << endl;  // double / double
}
