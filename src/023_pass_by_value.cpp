// Pass by value
// The function changes its own copy; the caller's variable is untouched.

#include <iostream>
using namespace std;

void tryToChange(int copy) {
    copy = 10;
    cout << "inside the function: " << copy << endl;
}

int main() {
    int x = 5;
    tryToChange(x);
    cout << "back in main: " << x << endl;   // still 5
}
