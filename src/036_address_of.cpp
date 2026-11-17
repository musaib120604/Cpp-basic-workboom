// Address of
// Every variable lives at its own address; & reveals it.

#include <iostream>
using namespace std;

int main() {
    int first = 10;
    cout << first << endl;
    cout << &first << endl;

    int second = 10;       // same value, different address
    cout << second << endl;
    cout << &second << endl;
}
