// Ternary even odd
// The conditional operator used inside an output statement.

#include <iostream>
using namespace std;

int main() {
    int value;
    cout << "Enter an integer: ";
    cin >> value;

    cout << (value % 2 == 0 ? "Even" : "Odd") << endl;
}
