// Modulo
// The remainder operator, including negative operands.

#include <iostream>
using namespace std;

int main() {
    cout << 37 % (-8) << endl;   // sign follows the left operand
    cout << 30 % 6 << endl;
    cout << 5 % 9000 << endl;    // smaller % larger is the smaller number
    cout << (-37) % 8 << endl;
}
