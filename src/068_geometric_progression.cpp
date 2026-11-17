// Geometric progression
// Print the first n terms of 2, 6, 18, ...

#include <iostream>
using namespace std;

int main() {
    int terms;
    cout << "How many terms? ";
    cin >> terms;

    long long term = 2;      // first term
    const int ratio = 3;     // common ratio
    for (int k = 0; k < terms; k++) {
        cout << term << " ";
        term *= ratio;
    }
    cout << endl;
}
