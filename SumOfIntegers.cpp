#include <iostream>

using namespace std;

int main() {
    // Variables
    int sum = 0;
    int input;

    // Begin loop
    do {
        cout << "Enter a number: "; // Prompt for input
        cin >> input;               // Get input
        sum += input;               // Add input to running total
    } while (input != 0);           // While input != 0

    cout << "sum = " << sum << endl;
    
    return 0;
}