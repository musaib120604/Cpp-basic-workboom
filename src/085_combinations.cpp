// Combinations
// nCr with a helper that avoids huge intermediate factorials.

#include <iostream>
using namespace std;

// Multiplying then dividing step by step keeps every intermediate value exact.
long long choose(int n, int r) {
    long long result = 1;
    for (int t = 1; t <= r; t++) {
        result = result * (n - r + t) / t;
    }
    return result;
}

int main() {
    int n, r;
    cout << "n = ";
    cin >> n;
    cout << "r = ";
    cin >> r;

    if (r < 0 || r > n) {
        cout << 0 << endl;
    } else {
        cout << choose(n, r) << endl;
    }
}
