#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "...Day of The Week..." << endl;

    // Variable declarations
    int value;
    string day;

    // Data input
    cout << "Enter a whole number between 1 and 7 to see the day of the week: ";
    cin >> value;

    // Switch statement
    if (value < 1 || value > 7) {
        cout << "Invalid value: must be between 1 and 7" << endl;
    } else {
        switch(value) {
            case 1: day = "Monday"; break;
            case 2: day = "Tuesday"; break;
            case 3: day = "Wednesday"; break;
            case 4: day = "Thursday"; break;
            case 5: day = "Friday"; break;
            case 6: day = "Saturday"; break;
            default: day = "Sunday"; break;
        }

        cout << "You entered " << value << endl;
        cout << "The day is " << day << "." << endl;
    }
    
    // Switch case

    return 0;
}