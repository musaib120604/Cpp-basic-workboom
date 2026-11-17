// Do while loop
// do-while always runs its body once; while and for may not run at all.

#include <iostream>
using namespace std;

int main() {
    int i = 11;
    cout << "do-while : ";
    do {
        cout << i << " ";   // runs once even though 11 <= 10 is false
        i++;
    } while (i <= 10);
    cout << endl;

    int j = 11;
    cout << "while    : ";
    while (j <= 10) {       // condition checked first: body never runs
        cout << j << " ";
        j++;
    }
    cout << endl;

    cout << "for      : ";
    for (int k = 11; k <= 10; k++) {   // same story for for
        cout << k << " ";
    }
    cout << endl;
}
