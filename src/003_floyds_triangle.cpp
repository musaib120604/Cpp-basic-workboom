// Floyds triangle
// Consecutive numbers fill the triangle row by row.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Height: ";
    cin >> n;

    int next = 1;   // keeps counting across rows
    for (int row = 1; row <= n; row++) {
        for (int k = 1; k <= row; k++) {
            cout << next++ << " ";
        }
        cout << endl;
    }
}
