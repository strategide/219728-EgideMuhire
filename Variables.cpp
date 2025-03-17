#include <iostream>

using namespace std;

void addAndDisplay(int value1, int value2, int value3) {
    int sum = value1 + value2;  // Sum is a local variable within
    cout << "Sum of " << value1 << " and " << value2 << " is " << sum << endl;
}

int main() {
    int arg1 = 10;
    int arg2 = 20;

    // Call the function with arg1 and arg2 as arguments
    addAndDisplay(arg1, arg2);
    
    return 0;
}