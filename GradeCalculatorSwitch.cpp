#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "............Simple Grade Calculator...........\n";
    // Variable declarations
    string names;
    string unit;
    int score;
    char grade;

    // Ask the user for the names
    cout << "Enter the full names: ";
    getline(cin, names);

    // Ask the user for the unit name
    cout << "Enter the unit name: ";
    getline(cin, unit);

    // Ask the user to enter in the score
    cout << "Enter in the score: ";
    cin >> score;

    // Ensure the grade is within the given range
    if (score >= 100 || score <= 0) {
        cout << "The grade must be between 0 and 100";
    } else {
        // Determine the grade via switch statement
        switch (score) {
            case 100:
        }
    }

    // Output data
    cout << "\nStudent name = " << names << endl;
    cout << "Subject = " << unit << endl;
    cout << "Score = " << score << endl;
    cout << "Grade = " << grade << endl;

    return 0;
}