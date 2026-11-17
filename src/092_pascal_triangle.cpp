// Pascal triangle
// Pascal's triangle using a binomial-coefficient helper.

#include <iostream>
using namespace std;

long long choose(int n, int r) {
    long long result = 1;
    for (int t = 1; t <= r; t++) {
        result = result * (n - r + t) / t;
    }
    return result;
}

int main() {
    int n;
    cout << "Last row index: ";
    cin >> n;

    for (int row = 0; row <= n; row++) {
        for (int s = 0; s < n - row; s++) cout << "  ";   // centring
        for (int k = 0; k <= row; k++) {
            cout << choose(row, k) << "   ";
        }
        cout << endl;
    }
}
