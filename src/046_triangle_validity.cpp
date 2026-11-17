// Triangle validity
// A triangle exists only if every pair of sides beats the third.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the three side lengths: ";
    cin >> a >> b >> c;

    bool valid = (a + b > c) && (b + c > a) && (c + a > b);
    cout << (valid ? "Valid Triangle" : "Invalid Triangle") << endl;
}
