// Number triangle descending
// Row i counts down from n to i.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Height: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int k = n; k >= row; k--) {
            cout << k << " ";
        }
        cout << endl;
    }
}
