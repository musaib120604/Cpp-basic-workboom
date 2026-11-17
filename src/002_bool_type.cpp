// Bool type
// Any non-zero value converts to true; zero converts to false.

#include <iostream>
using namespace std;

int main() {
    bool fromFalse = false;
    bool fromOne = 1;
    bool fromBig = 45;          // non-zero -> true
    bool fromNegative = -34;    // non-zero -> true
    bool fromFraction = 0.0023; // non-zero -> true
    bool fromNull = '\0';       // zero character -> false
    bool fromComparison = (5 > 2 + 1);

    cout << fromFalse << fromOne << fromBig << fromNegative
         << fromFraction << fromNull << fromComparison << endl;
}
