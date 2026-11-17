// Local shadows global
// A local with the same name hides the global; :: reaches the global.

#include <iostream>
using namespace std;

int x = 9;   // global

void change() {
    int x = 5;   // a different, local x
    x = 19;      // only touches the local one
    cout << x << endl;      // 19, the local copy
}

int main() {
    change();               // prints 19
    cout << x << endl;      // global, still 9
    int x = 10;             // local to main, hides the global
    cout << x << endl;      // 10
    cout << ::x << endl;    // :: asks for the global, 9
}
