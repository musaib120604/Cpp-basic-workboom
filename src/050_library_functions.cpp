// Library functions
// A home-made minimum next to <cmath> and <algorithm> helpers.

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// Our own three-way minimum, to show what a library function replaces.
int smallestOfThree(int a, int b, int c) {
    if (a <= b && a <= c) return a;
    if (b <= c) return b;
    return c;
}

int main() {
    cout << smallestOfThree(5, -3, 4) << endl;  // -3
    cout << max(7, 4) << endl;                  // 7
    cout << floor(-6.2) << endl;                // -7 (rounds toward -infinity)
    cout << (int)(-6.2) << endl;                // -6 (truncates toward zero)
    cout << sqrt(7.7) << endl;
    cout << cbrt(8) << endl;                    // 2
}
