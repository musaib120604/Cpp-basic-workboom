// For as while
// Every part of a for header is optional, so it can mimic while.

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    for (; i <= 10;) {      // no init, no update in the header
        cout << i << " ";
        i++;
    }
    cout << endl;
}
