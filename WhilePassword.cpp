#include <iostream>
#include <string>

using namespace std;

int main() {
    // Constant variables.
    const string password = "passwd";
    const int max_attempts = 3;

    // Normal variables.
    string input;
    int attempts = 0;

    // Loop while attempts are less than 3 and password is still invalid
    while (attempts < max_attempts) {
        cout << "Enter your password: ";    // Prompt password
        cin >> input;                       // Get password
        if (input == password) {            // Password is correct
            cout << "Logged in" << endl;
            return 0; 
        } else {    // Password is incorrect. 
            cout << "Invalid password" << endl;
            attempts++; // Increment counts
        }
    }

    cout << "System locked" << endl;

    return 0;
}