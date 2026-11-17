// Digit sum
// Add up the digits using % 10 and / 10.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int total = 0;
    while (n != 0) {
        total += n % 10;   // last digit
        n /= 10;           // drop it
    }
    cout << total << endl;
}
