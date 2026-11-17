// Star plus
// A plus sign drawn on the middle row and column.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Size (odd works best): ";
    cin >> n;

    int middle = n / 2 + 1;
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            cout << ((row == middle || col == middle) ? "* " : "  ");
        }
        cout << endl;
    }
}
