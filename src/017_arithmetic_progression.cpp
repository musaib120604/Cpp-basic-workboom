// Arithmetic progression
// Print the first n terms of 4, 9, 14, ...

#include <iostream>
using namespace std;

int main() {
    int terms;
    cout << "How many terms? ";
    cin >> terms;

    int term = 4;          // first term
    const int step = 5;    // common difference
    for (int k = 0; k < terms; k++) {
        cout << term << " ";
        term += step;
    }
    cout << endl;
}
