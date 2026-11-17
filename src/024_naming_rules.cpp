// Naming rules
// What makes a legal identifier (the illegal ones are left commented out).

#include <iostream>
using namespace std;

int main() {
    // Legal names use letters, digits and underscores, never start with a
    // digit, never contain spaces and never collide with a keyword.
    int Public = 6;   // fine: keywords are lowercase, so "Public" is not one
    int _count = 1;
    int total2 = 2;

    // int class = 6;     // error: 'class' is a keyword
    // int my total = 4;  // error: spaces are not allowed
    // int 4th = 4;       // error: starts with a digit
    // int cost# = 7;     // error: '#' is not allowed

    cout << Public << " " << _count << " " << total2 << endl;
}
