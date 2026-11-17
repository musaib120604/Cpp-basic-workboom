// Parameters and arguments
// A parameter is the name in the definition; an argument is the value passed in.

#include <iostream>
using namespace std;

void triangle(int height) {          // 'height' is the parameter
    for (int row = 1; row <= height; row++) {
        for (int k = 1; k <= row; k++) cout << "* ";
        cout << endl;
    }
}

int main() {
    triangle(5);   // 5 is the argument
    cout << endl;
    triangle(7);
    cout << endl;
    triangle(3);
}
