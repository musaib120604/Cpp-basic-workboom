// Ascii codes
// Characters are small integers; implicit and explicit conversion.

#include <iostream>
using namespace std;

int main() {
    char question = '?';
    int explicitCode = (int)question;  // explicit conversion
    cout << explicitCode << endl;

    char capitalA = 'A';
    int implicitCode = capitalA;       // implicit conversion
    cout << implicitCode << endl;

    char at = '@';
    cout << at + 0 << endl;            // arithmetic promotes char to int
}
