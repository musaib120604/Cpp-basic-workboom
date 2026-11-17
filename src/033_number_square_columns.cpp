// Number square columns
// Every row counts 1..n.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Size: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            cout << col << " ";
        }
        cout << endl;
    }
}
