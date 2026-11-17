// Absolute value
// Absolute value with a plain if/else.

#include <iostream>
using namespace std;

int main() {
    int value;
    cout << "Enter an integer: ";
    cin >> value;

    if (value < 0) {
        cout << -value << endl;
    } else {
        cout << value << endl;
    }
}
