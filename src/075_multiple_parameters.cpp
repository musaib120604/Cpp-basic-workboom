// Multiple parameters
// A function that takes two parameters.

#include <iostream>
using namespace std;

void printPower(int base, int exponent) {
    long long result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    cout << result << endl;
}

int main() {
    printPower(2, 9);
    printPower(3, 7);
}
