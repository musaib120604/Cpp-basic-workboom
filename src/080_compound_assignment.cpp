// Compound assignment
// -=, +=, *= and /= as shorthand for the long form.

#include <iostream>
using namespace std;

int main() {
    int v = 10;
    cout << v << endl;
    v -= 2;   // v = v - 2
    cout << v << endl;
    v += 8;   // v = v + 8
    cout << v << endl;
    v *= 3;   // v = v * 3
    cout << v << endl;
    v /= 4;   // v = v / 4
    cout << v << endl;
}
