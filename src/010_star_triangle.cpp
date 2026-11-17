// Star triangle
// Right triangle that grows by one star per row.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Height: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int k = 1; k <= row; k++) {
            cout << "* ";
        }
        cout << endl;
    }
}
