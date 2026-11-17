// Diamond
// A pyramid plus its mirror: one loop with counters, or two loops.

#include <iostream>
using namespace std;

void diamondOneLoop(int n) {
    int blanks = n - 1, stars = 1;
    for (int row = 1; row <= 2 * n - 1; row++) {
        for (int s = 1; s <= blanks; s++) cout << "  ";
        for (int k = 1; k <= stars; k++)  cout << "* ";
        bool growing = (row < n);
        blanks += growing ? -1 : 1;
        stars  += growing ?  2 : -2;
        cout << endl;
    }
}

void diamondTwoHalves(int n) {
    int blanks = n - 1, stars = 1;
    for (int row = 1; row <= n; row++) {          // upper half
        for (int s = 1; s <= blanks; s++) cout << "  ";
        for (int k = 1; k <= stars; k++)  cout << "* ";
        blanks--;
        stars += 2;
        cout << endl;
    }
    blanks = 1;
    stars = 2 * n - 3;
    for (int row = 1; row <= n - 1; row++) {      // lower half
        for (int s = 1; s <= blanks; s++) cout << "  ";
        for (int k = 1; k <= stars; k++)  cout << "* ";
        blanks++;
        stars -= 2;
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Half height: ";
    cin >> n;

    diamondOneLoop(n);
    cout << endl;
    diamondTwoHalves(n);
}
