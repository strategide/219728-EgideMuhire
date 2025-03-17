#include <iostream>

using namespace std;

void add(int a, int b) {
    cout << a << " + " << b << " = " << a + b << endl;
}

void subtract(int a, int b) {
    cout << a << " - " << b << " = " << a - b << endl;
}

void multiply(int a, int b) {
    cout << a << " x " << b << " = " << a * b << endl;
}

void divide(int a, int b) {
    cout << a << " / " << b << " = " << a / b << endl;
}

void modulo(int a, int b) {
    cout << a << " % " << b << " = " << a % b << endl;
}

int main() {
    // Declarations
    int a, b;

    // Ask user for input for a
    cout << "Enter in the first number: ";
    cin >> a;

    // Ask user for input for a
    cout << "Enter in the second number: ";
    cin >> b;

    // Addition
    cout << a << " + " << b << " = " << a + b << endl;

    // Subtraction
    cout << a << " - " << b << " = " << a - b << endl;

    // Multiplication
    cout << a << " x " << b << " = " << a * b << endl;

    // Division
    cout << a << " / " << b << " = " << a / b << endl;

    // Modulo
    cout << a << " % " << b << " = " << a % b << endl;
    
    return 0;
}