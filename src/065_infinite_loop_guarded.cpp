// Infinite loop guarded
// What infinite loops look like, with a safety break so it is safe to run.

#include <iostream>
using namespace std;

int main() {
    // Two classic ways to loop forever (do not run these unguarded):
    //   while (true) { ... }
    //   for (int i = 1; i >= 0; i++) { ... }   // condition can never fail

    int ticks = 0;
    while (true) {
        ticks++;
        cout << "tick " << ticks << endl;
        if (ticks == 5) break;      // the escape hatch
    }
}
