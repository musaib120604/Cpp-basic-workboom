// Text versus value
// Quotes print text literally; without quotes the expression is evaluated.

#include <iostream>
using namespace std;

int main() {
    // Everything after a double slash is a comment and is ignored.
    cout << "4+3" << endl;  // inside quotes: printed exactly as written
    cout << 4 + 3 << endl;  // no quotes: evaluated first, then printed
}
