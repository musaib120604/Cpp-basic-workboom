// Factorial
// n! with a running product (long long keeps it correct up to 20!).

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    cout << result << endl;
}
