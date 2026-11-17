// Multiples of 3 and 5
// Four-way branching on divisibility by 3 and 5.

#include <iostream>
using namespace std;

int main() {
    int value;
    cout << "Enter an integer: ";
    cin >> value;

    bool by3 = (value % 3 == 0);
    bool by5 = (value % 5 == 0);

    if (by3 && by5)  cout << "FizzBuzz";
    else if (by5)    cout << "Buzz";
    else if (by3)    cout << "Fizz";
    else             cout << "None";
    cout << endl;
}
