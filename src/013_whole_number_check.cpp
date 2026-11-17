// Whole number check
// Decide whether a real number has a fractional part.

#include <iostream>
using namespace std;

int main() {
    float value;
    cout << "Enter a real number: ";
    cin >> value;

    // Casting to int drops the fraction; if nothing changed, it was whole.
    if (value == (int)value) {
        cout << "Integer" << endl;
    } else {
        cout << "Not an Integer" << endl;
    }
}
