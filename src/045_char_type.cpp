// Char type
// The char type: letters, symbols and digit characters.

#include <iostream>
using namespace std;

int main() {
    char letter = 'a';
    char capital = 'H';
    char symbol = '#';
    char digit = '5';

    cout << letter << " " << capital << " " << symbol << " " << digit << endl;
    cout << "digit as a number: " << digit - '0' << endl;
}
