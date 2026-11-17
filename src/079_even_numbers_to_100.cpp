// Even numbers to 100
// Three loops that print the same evens, with different iteration counts.

#include <iostream>
using namespace std;

void byDoubling() {                 // 50 iterations
    for (int k = 1; k <= 50; k++) cout << 2 * k << " ";
}

void bySkipping() {                 // 50 iterations
    for (int v = 2; v <= 100; v += 2) cout << v << " ";
}

void byFiltering() {                // 100 iterations
    for (int v = 1; v <= 100; v++) {
        if (v % 2 == 0) cout << v << " ";
    }
}

int main() {
    byDoubling();   cout << endl;
    bySkipping();   cout << endl;
    byFiltering();  cout << endl;
}
