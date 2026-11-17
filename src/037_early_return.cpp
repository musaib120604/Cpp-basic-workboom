// Early return
// return exits a function immediately, even a void one.

#include <iostream>
using namespace std;

void showAndSquare(int x) {
    cout << x << endl;
    if (x > 10) return;      // large values stop here
    cout << x * x << endl;
}

int main() {
    showAndSquare(8);    // prints 8 then 64
    showAndSquare(15);   // prints 15 only
}
