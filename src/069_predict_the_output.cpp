// Predict the output
// A puzzle: how many times does the loop body run?

#include <iostream>
using namespace std;

int main() {
    int t = 10;
    // t /= 2 is both the update and the condition:
    // 5 (true) -> 2 (true) -> 1 (true) -> 0 (false, stop).
    while (t /= 2) {
        cout << "Hello" << endl;
    }
}
