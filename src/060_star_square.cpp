// Star square
// n x n block of stars.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Side length: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}
