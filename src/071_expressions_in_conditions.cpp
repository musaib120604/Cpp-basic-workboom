// Expressions in conditions
// Any expression can be a condition: assignments, side effects, literals.

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 0;
    if ((a = b)) {                    // assigns 0 to a, then tests it (false)
        cout << "then-branch, a = " << a << endl;
    } else {
        cout << "else-branch, a = " << a << endl;
    }

    int c = 0;
    if (c++) {                        // tests the old value 0, then c becomes 1
        cout << "then-branch" << endl;
    } else {
        cout << "else-branch, c = " << c << endl;
    }

    if (5) cout << "a non-zero literal is true" << endl;
    if (true) cout << "true is true" << endl;
}
