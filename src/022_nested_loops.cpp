// Nested loops
// Outer 5 rounds times inner 4 rounds gives 20 prints.

#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int outer = 2; outer <= 11; outer += 2) {   // 2,4,6,8,10
        for (int inner = 3; inner < 7; inner++) {    // 3,4,5,6
            count++;
            cout << "print #" << count << " (outer=" << outer
                 << ", inner=" << inner << ")" << endl;
        }
    }
}
