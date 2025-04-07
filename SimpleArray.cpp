#include <iostream>

using namespace std;

int main() {
    // Declare an array of integers with 5 elements
    int nums[5];

    // Prompt the user to enter 5 integers
    for (int i = 0; i < 5; i++) {
        cout << "Enter an integer: " << (i + 1) << endl;
        cin >> nums[i];
    }

    // Output the integers
    for (const int& i : nums) {
        cout << i << endl;
    }
    
    return 0;
}