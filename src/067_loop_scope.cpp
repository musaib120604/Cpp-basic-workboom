// Loop scope
// A counter declared in the for-header dies with the loop.

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;
    // cout << i;     // error: 'i' only existed inside the loop

    int j;            // declared outside, so it survives the loop
    for (j = 1; j <= 5; j++) {
    }
    cout << j << endl;   // 6
}
