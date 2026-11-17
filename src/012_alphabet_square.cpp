// Alphabet square
// Each row reads A, B, C, ...

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Size: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            cout << (char)('A' + col - 1) << " ";
        }
        cout << endl;
    }
}
