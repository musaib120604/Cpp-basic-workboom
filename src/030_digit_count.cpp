// Digit count
// Peel digits off with /10 and count them.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int digits = (n == 0) ? 1 : 0;   // zero still has one digit
    while (n != 0) {
        n /= 10;
        digits++;
    }
    cout << digits << endl;
}
