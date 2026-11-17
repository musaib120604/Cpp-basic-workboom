// Expressions in loops
// while (a--) runs a times: the old value is tested, then it drops.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int rounds = 0;
    while (a--) {              // tests 10, 9, ... 1 (true), stops at 0
        rounds++;
        cout << "round " << rounds << endl;
    }
    cout << "a ended at " << a << endl;   // -1, because the decrement still ran
}
