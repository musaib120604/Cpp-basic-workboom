// Rhombus
// A star square slanted by leading blanks.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Size: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int s = 1; s <= n - row; s++) cout << "  ";
        for (int k = 1; k <= n; k++)       cout << "* ";
        cout << endl;
    }
}
