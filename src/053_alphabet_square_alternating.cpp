// Alphabet square alternating
// Each row repeats one letter; odd rows lowercase, even rows uppercase.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Size: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        char letter = (row % 2 == 1) ? (char)('a' + row - 1)
                                     : (char)('A' + row - 1);
        for (int col = 1; col <= n; col++) {
            cout << letter << " ";
        }
        cout << endl;
    }
}
