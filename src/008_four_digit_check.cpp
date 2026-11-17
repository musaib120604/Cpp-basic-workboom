// Four digit check
// Range test with the logical AND operator.

#include <iostream>
using namespace std;

int main() {
    int value;
    cout << "Enter an integer: ";
    cin >> value;

    if (value >= 1000 && value <= 9999) {
        cout << "4 Digit Number" << endl;
    } else {
        cout << "Not a 4 digit number" << endl;
    }
}
