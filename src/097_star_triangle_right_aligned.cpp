// Star triangle right aligned
// Right-aligned triangle, via padding and via a square with a condition.

#include <iostream>
using namespace std;

void padThenStars(int n) {
    for (int row = 1; row <= n; row++) {
        for (int s = 1; s <= n - row; s++) cout << "  ";
        for (int k = 1; k <= row; k++)     cout << "* ";
        cout << endl;
    }
}

void squareWithCondition(int n) {
    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            cout << (row + col > n ? "* " : "  ");
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Height: ";
    cin >> n;

    padThenStars(n);
    cout << endl;
    squareWithCondition(n);
}
