// Function syntax
// Defining functions with no parameters and calling them.

#include <iostream>
using namespace std;

void greet() {
    cout << "Hello there" << endl;
    cout << "Nice to meet you" << endl;
}

void smallTriangle() {
    for (int row = 1; row <= 4; row++) {
        for (int k = 1; k <= row; k++) cout << "* ";
        cout << endl;
    }
}

int main() {
    cout << "Printed before the calls" << endl;
    smallTriangle();
    cout << "Printed in between" << endl;
    greet();
    smallTriangle();
}
