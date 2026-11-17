// Largest of three
// Nested conditions, and the same idea written with a helper.

#include <iostream>
using namespace std;

// Version 1: compare in stages with nested ifs.
int largestNested(int a, int b, int c) {
    if (a > b) {
        if (a > c) return a;
        return c;          // c >= a > b
    }
    if (b > c) return b;   // b >= a
    return c;              // c >= b >= a
}

// Version 2: one flat chain of conditions.
int largestFlat(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= c) return b;
    return c;
}

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    cout << largestNested(a, b, c) << " is greatest (nested)" << endl;
    cout << largestFlat(a, b, c) << " is greatest (flat)" << endl;
}
