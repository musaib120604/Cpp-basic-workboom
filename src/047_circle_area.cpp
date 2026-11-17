// Circle area
// Area = pi * r * r with a rounded pi.

#include <iostream>
using namespace std;

int main() {
    float radius;
    cout << "Radius: ";
    cin >> radius;

    float area = 3.1415 * radius * radius;
    cout << area << endl;
}
