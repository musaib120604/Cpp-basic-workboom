// Continue statement
// continue skips the rest of the current round.

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 1) continue;   // skip odd numbers
        cout << i << " ";
    }
    cout << endl;
}
