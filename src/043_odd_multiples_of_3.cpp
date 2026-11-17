// Odd multiples of 3
// Four ways to list odd multiples of 3 up to 100, from wasteful to tight.

#include <iostream>
using namespace std;

void filterEverything() {           // 100 iterations
    for (int v = 1; v <= 100; v++) {
        if (v % 3 == 0 && v % 2 == 1) cout << v << " ";
    }
}

void filterOdds() {                 // 50 iterations
    for (int v = 1; v <= 99; v += 2) {
        if (v % 3 == 0) cout << v << " ";
    }
}

void filterMultiples() {            // 33 iterations
    for (int v = 3; v <= 99; v += 3) {
        if (v % 2 == 1) cout << v << " ";
    }
}

void jumpDirectly() {               // 17 iterations
    for (int v = 3; v <= 99; v += 6) cout << v << " ";
}

int main() {
    filterEverything(); cout << endl;
    filterOdds();       cout << endl;
    filterMultiples();  cout << endl;
    jumpDirectly();     cout << endl;
}
