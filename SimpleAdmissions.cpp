#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declarations
    int age;
    int yearOfBirth;
    string interest;

    cout << ".......SIMPLE ADMISSIONS PROGRAM.......\n";
    cout << "Enter the child's year of birth: ";
    cin >> yearOfBirth;

    // Operations
    age = 2025 - yearOfBirth;

    // Decision making
    if (age >= 1 && age <= 10) {
        // Assign to specific class
        if (age >= 7) {
            cout << "Admit to Grade School" << endl;
        } else if (age >= 5 && age <= 6) {
            cout << "Admit to Kindergarten" << endl;
        } else if (age >= 3 && age <= 4) {
            cout << "Admit to Pre-School" << endl;
        } else if (age >= 1 && age <= 2) {
            cout << "Admit to Play Ground" << endl;
        } else {
            cout << "Reject" << endl;
        }
    } else {
        cout << "Invalid age entered" << endl;
    }

    // Check the interest and assign to group
    if (interest == "soccer") {
        cout << "Assigned to Soccer Play Group" << endl;
    } else {
        cout << "Assigned to other Play Group" << endl;
    }

    return 0;
}