// Pointer addresses
// A pointer is itself a variable with an address of its own.

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;
    cout << ptr << endl;    // the address stored inside ptr (that of x)
    cout << &ptr << endl;   // the address of ptr itself

    float f = 3.14f;
    float* fptr = &f;       // pointer types match the variable type
    cout << *fptr << endl;
}
