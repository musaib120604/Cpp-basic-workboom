// Pass by reference
// Changing the caller's variable through a pointer or a reference.

#include <iostream>
using namespace std;

void setViaPointer(int* target) {
    *target = 90;
}

void setViaReference(int& target) {
    target = 90;
}

int main() {
    int x = 10;
    setViaPointer(&x);
    cout << x << endl;

    int y = 10;
    setViaReference(y);
    cout << y << endl;
}
