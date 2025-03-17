#include <iostream>

using namespace std;

int main() {
    // Arithmetic / mathematical operators
    int number1 = 50;
    int number2 = 10;

    // Addition
    cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;

    // Subtraction
    cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;

    // Multiplication
    cout << number1 << " x " << number2 << " = " << number1 * number2 << endl;

    // Subtraction
    cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;

    // Modulus
    cout << number1 << " % " << number2 << " = " << number1 % number2 << endl;

    // Compound addition
    cout << number1 << " += " << number2 << " = " << (number1 += number2) << endl;
    
    // Compound subtraction
    cout << number1 << " -= " << number2 << " = " << (number1 -= number2) << endl;
    
    // Compound multiplication
    cout << number1 << " *= " << number2 << " = " << (number1 *= number2) << endl;
    
    // Compound division
    cout << number1 << " -= " << number2 << " = " << (number1 -= number2) << endl;
    
    // Compound modulus
    cout << number1 << " %= " << number2 << " = " << (number1 %= number2) << endl;

    // Postfix-increment
    cout << number1 << "++" << number1++ << endl;
    
    // Postfix-decrement
    cout << number1 << "--" << number1-- << endl;
    
    // Prefix-increment
    cout << "++" << number1 << ++number1 << endl;

    // Prefix-decrement
    cout << "--" << number1 << --number1 << endl;

    // Power
    cout << "2^3 = " << pow(2, 3) << endl;

    // Comparison operators
    // Greater than
    cout << number1 << " > " << number2 << " = " << (number1 > number2) << endl;

    // Greater than or equals to
    cout << number1 << " >= " << number2 << " = " << (number1 >= number2) << endl;

    // Less than
    cout << number1 << " < " << number2 << " = " << (number1 < number2) << endl;

    // Less than or equals to
    cout << number1 << " <= " << number2 << " = " << (number1 <= number2) << endl;

    // Equals to
    cout << number1 << " == " << number2 << " = " << (number1 == number2) << endl;

    // Not equals to
    cout << number1 << " != " << number2 << " = " << (number1 != number2) << endl;

    // BOOLEAN OPERATORS
    // Logical AND
    cout << "true && true"  << " = " << (true && true) << endl;
    cout << "true && false"  << " = " << (true and false) << endl;
    cout << "false && true"  << " = " << (false && true) << endl;
    cout << "false && false"  << " = " << (false and false) << endl;
    
    // Logical OR
    cout << "true || true" << " = " << (true or true) << endl;
    cout << "true || false" << " = " << (true || false) << endl;
    cout << "false || true" << " = " << (false or true) << endl;
    cout << "false || false" << " = " << (false || false) << endl;

    // Logical NOT
    cout << "!true" << " = " << (!true) << endl;
    cout << "!false" << " = " << (!false) << endl;

    return 0;
}