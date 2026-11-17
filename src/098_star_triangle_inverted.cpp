// Star triangle inverted
// Triangle that shrinks by one star per row, built two ways.

#include <iostream>
using namespace std;

void invertedByCount(int n) {
    for (int row = 1; row <= n; row++) {
        for (int k = 1; k <= n + 1 - row; k++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedByCountdown(int n) {
    for (int row = 1; row <= n; row++) {
        for (int k = n; k >= row; k--) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Height: ";
    cin >> n;

    invertedByCount(n);
    cout << endl;
    invertedByCountdown(n);
}
