// Hollow rectangle
// Stars on the border, blanks inside.

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Rows and columns: ";
    cin >> rows >> cols;

    for (int r = 1; r <= rows; r++) {
        for (int c = 1; c <= cols; c++) {
            bool onBorder = (r == 1 || r == rows || c == 1 || c == cols);
            cout << (onBorder ? "* " : "  ");
        }
        cout << endl;
    }
}
