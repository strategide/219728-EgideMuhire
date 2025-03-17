#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Please enter the age: ";   // Prompt user for age
    cin >> age;                         // Read and store the age

    // if condition
    if (age >= 18) {
        cout << "You are qualified to vote" << endl;  // Executed if condition is 'true'
        cout << "Get registered before 2027" << endl;
    } else {    // Executed if condition is 'false'
        cout << "You're underage and not allowed to vote" << endl;
    }
    
    return 0;
}