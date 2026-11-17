// Star rectangle
// Rows x columns block of stars.

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Rows and columns: ";
    cin >> rows >> cols;

    for (int r = 1; r <= rows; r++) {
        for (int c = 1; c <= cols; c++) {
            cout << "* ";
        }
        cout << endl;
    }
}
