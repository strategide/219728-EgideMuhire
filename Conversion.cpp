#include <iostream>

using namespace std;

int main() {
    double myNum = 15.5;    // Initialize and double variable
    int myNewNum;           // Create a new integer variable
    myNewNum = myNum;       // Assign the double to the integer
    cout << myNum << " typecast to " << myNewNum << endl;       // Output the value

    // Implicit / Automatic Typecasting
    int myNum2 = 12;        // Initialize integer with int type
    double myNewDouble = myNum2;    // Assign integer to double
    cout << myNum2 << " typecast to " << myNewDouble << endl; // Output the value

    bool notTrue = false;
    bool trueValue = true;

    cout << "Not true: " << notTrue << endl;
    cout << "True value: " << trueValue << endl;

    // Explicit / Manual Typecasting
    char myChar;
    int myInt = 45;
    float myFloat = 4.567;
    int myNum3;

    myChar = static_cast<char>(myInt);  // int to char
    myNum3 = static_cast<int>(myFloat);  // float to int

    cout << "myChar: " << myChar << endl;   // Output myChar
    cout << "myNum: " << myNum3 << endl;    // Output myNum3

    return 0;
}