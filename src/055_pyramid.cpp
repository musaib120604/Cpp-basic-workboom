// Pyramid
// Centered pyramid, tracked with blank/star counters or with formulas.

#include <iostream>
using namespace std;

void pyramidCounters(int n) {
    int blanks = n - 1, stars = 1;
    for (int row = 1; row <= n; row++) {
        for (int s = 1; s <= blanks; s++) cout << "  ";
        for (int k = 1; k <= stars; k++)  cout << "* ";
        blanks--;
        stars += 2;
        cout << endl;
    }
}

void pyramidFormulas(int n) {
    for (int row = 1; row <= n; row++) {
        for (int s = 1; s <= n - row; s++)      cout << "  ";
        for (int k = 1; k <= 2 * row - 1; k++)  cout << "* ";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Height: ";
    cin >> n;

    pyramidCounters(n);
    cout << endl;
    pyramidFormulas(n);
}
