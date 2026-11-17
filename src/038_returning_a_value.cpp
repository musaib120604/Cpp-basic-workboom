// Returning a value
// A non-void function hands a value back to the caller.

#include <iostream>
using namespace std;

int addThree(int a, int b, int c) {
    cout << "adding..." << endl;
    return a + b + c;
}

int main() {
    int answer = addThree(4, -5, 8);
    cout << answer << endl;
}
