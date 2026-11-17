// Countdown
// Counting downwards from n to 1.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Start from: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
}
