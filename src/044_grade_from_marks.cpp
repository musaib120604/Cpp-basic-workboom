// Grade from marks
// Grade bands written as nested if/else and as an else-if ladder.

#include <iostream>
#include <string>
using namespace std;

string gradeNested(int marks) {
    if (marks > 90) return "A";
    else {
        if (marks > 70) return "B";
        else {
            if (marks > 50) return "C";
            else {
                if (marks >= 33) return "D";
                else return "Fail";
            }
        }
    }
}

string gradeLadder(int marks) {
    if (marks > 90) return "A";
    else if (marks > 70) return "B";
    else if (marks > 50) return "C";
    else if (marks >= 33) return "D";
    else return "Fail";
}

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    cout << "Nested: " << gradeNested(marks) << endl;
    cout << "Ladder: " << gradeLadder(marks) << endl;
}
