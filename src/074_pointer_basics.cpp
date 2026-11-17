// Pointer basics
// Store an address in a pointer and modify the target through it.

#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;   // ptr holds the address of x
    *ptr = 27;       // write through the pointer: x is now 27
    (*ptr)++;        // parentheses first, then increment: x is now 28
    cout << x << endl;
}
