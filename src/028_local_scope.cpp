// Local scope
// One function cannot see another function's locals; pass values in.

#include <iostream>
using namespace std;

void show(int y) {            // receives its own copy through the parameter
    cout << y << endl;
    // cout << main_local;    // error: that name only exists inside main
}

int main() {
    int y = 4;
    show(y);
}
