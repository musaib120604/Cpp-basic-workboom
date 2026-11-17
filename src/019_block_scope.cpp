// Block scope
// A variable lives only inside the braces where it was declared.

#include <iostream>
using namespace std;

int main() {
    {
        int inner = 4;
        cout << inner << endl;
    }
    // cout << inner << endl;   // error: 'inner' no longer exists here
}
