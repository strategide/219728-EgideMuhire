#include <iostream>

using namespace std;

double division(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }

    return a / b;
}