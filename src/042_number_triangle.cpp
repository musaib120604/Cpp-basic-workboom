// Number triangle
// Row i lists 1..i.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Height: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int k = 1; k <= row; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
}
