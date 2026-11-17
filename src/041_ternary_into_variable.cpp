// Ternary into variable
// Storing the result of a conditional expression in a variable.

#include <iostream>
using namespace std;

int main() {
    int value;
    cout << "Enter an integer: ";
    cin >> value;

    int chosen = (value > 7) ? 45 : 18;
    cout << chosen << endl;
}
