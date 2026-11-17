// Global variable
// A global is visible, and writable, from every function.

#include <iostream>
using namespace std;

int shared = 9;   // global

void overwrite() {
    shared = 8;
}

int main() {
    overwrite();
    cout << shared << endl;   // 8
}
