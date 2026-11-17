// Divisible by 5 or 3
// Combining conditions with the logical OR operator.

#include <iostream>
using namespace std;

int main() {
    int value;
    cout << "Enter an integer: ";
    cin >> value;

    if (value % 5 == 0 || value % 3 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
