// Alphabet codes
// Each letter next to its ASCII code, upper and lower case.

#include <iostream>
using namespace std;

int main() {
    for (int code = 'A'; code <= 'Z'; code++) {
        int lower = code + 32;
        cout << (char)code << " " << code << "   "
             << (char)lower << " " << lower << endl;
    }
}
