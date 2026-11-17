// Number square rows
// Every row repeats its own row number.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Size: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            cout << row << " ";
        }
        cout << endl;
    }
}
