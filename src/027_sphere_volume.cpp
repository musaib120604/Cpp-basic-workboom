// Sphere volume
// Volume = 4/3 * pi * r^3 (watch out for integer division).

#include <iostream>
using namespace std;

int main() {
    double radius;
    cout << "Radius: ";
    cin >> radius;

    // 4.0 / 3 forces floating-point; plain 4 / 3 would collapse to 1.
    double volume = 4.0 / 3 * 3.141592 * radius * radius * radius;
    cout << "Volume is: " << volume << endl;
}
