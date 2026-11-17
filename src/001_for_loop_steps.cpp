// For loop steps
// A for-loop with a custom start and step size.

#include <iostream>
using namespace std;

int main() {
    // Runs for i = 4, 6, 8, 10 -> four rounds.
    for (int i = 4; i <= 11; i += 2) {
        cout << "round with i = " << i << endl;
    }

    // Counting down works too.
    for (int i = 3; i >= 1; i--) {
        cout << "countdown " << i << endl;
    }
}
