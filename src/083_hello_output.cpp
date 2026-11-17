// Hello output
// cout basics: escape sequences, endl and chained insertions.

#include <iostream>
using namespace std;

int main() {
    cout << "Line one\nLine two";
    cout << " (same line, no break yet)";
    cout << endl;
    cout << "Chained" << endl << "insertions";
    cout << endl;
}
