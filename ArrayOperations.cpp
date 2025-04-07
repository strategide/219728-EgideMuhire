#include <iostream>

using namespace std;

int main() {
    // Declare an array of integers with 5 elements
    int nums[5];

    for (int& i : nums) {
        cout << "Enter an integer: ";
        cin >> i;
    }

    for(int i: nums) {
        cout << "You've entered: " << i << endl;
    }

    // Delete the last element
    nums[4] = 0;

    // After deletion
    for (int i : nums) {
        cout << i << endl;
    }

    // Add a new element at index 3
    nums[3] = 200;   // Set the element at position 3 to 200

    for (int i : nums) {
        cout << i << endl;
    }

    // Print a value at index 5
    cout << "Value at index 5: " << nums[5] << endl;

    // Calculate sum of all elements in the array
    int sum = 0;
    for (int i : nums) {
        sum += i;
    }

    cout << "Sum: " << sum << endl;

    // Compute the product of the array elements
    int product = 1;
    for (int i : nums) {
        product *= i;
    }
    cout << "Product: " << product << endl;

    // Find the max and min values in the array
    int max = 0, min = 0;
    for (int i : nums) {
        max = max > i ? max : i;
        min = min < i ? min : i;
    }

    cout << "Max = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}