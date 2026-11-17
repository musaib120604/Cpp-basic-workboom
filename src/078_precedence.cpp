// Precedence
// Operator precedence and why parentheses matter.

#include <iostream>
using namespace std;

int main() {
    cout << 6 * 4 / 3 << endl;     // left to right: (6*4)/3
    cout << 6 * (4 / 3) << endl;   // 4/3 is integer division first
}
