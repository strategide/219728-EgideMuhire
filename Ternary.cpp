#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;

    cout << "Please enter the age: ";   // Prompt user for age
    cin >> age;                         // Read and store the age

    // Ternary condition
    string output = age >= 18 && age <= 120 ? 
        "You are qualified to vote. Get registered before 2027" : 
        "Invalid age. The age must be between 18 and 120";

    cout << output;

    return 0;
}