#include <iostream>

using namespace std;

int main() {
    int age;
    cout << "Please enter the age: ";   // Prompt user for age
    cin >> age;                         // Read and store the age

    int minAge = 18;
    int maxAge = 120;

    // if...else condition
    if (age >= minAge && age <= maxAge) {
        cout << "You are qualified to vote" << endl;  // Executed if condition is 'true'
        cout << "Get registered before 2027" << endl;
    } else {    // Executed if condition is 'false'
        cout << "Invalid age. The age must be between " << minAge << " and " << maxAge << endl;
    }
    
    return 0;
}