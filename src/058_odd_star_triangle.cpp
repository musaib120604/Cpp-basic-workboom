// Odd star triangle
// Row i holds 2i-1 stars (1, 3, 5, ...).

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Height: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int k = 1; k <= 2 * row - 1; k++) {
            cout << "* ";
        }
        cout << endl;
    }
}
