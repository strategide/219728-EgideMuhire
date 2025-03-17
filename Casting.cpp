#include <iostream>

using namespace std;

int main() {
    int letter;    // Initialize int with value 65
    char character;     // Define character
    float floatValue = 54.8;
    double doubleValue = 338.9;

    cout << "Enter the integer: ";
    cin >> letter;
    
    character = static_cast<char>(letter); // cast int -> char
    
    cout << "Integer: " << letter << endl;          // Show integer
    cout << "Character: " << character << endl;     // Show character

    cout << "Integer: " << static_cast<int>(character) << endl;
    cout << "Int -> Double: " << static_cast<double>(letter) << endl;
    cout << "Int -> Float: " << static_cast<float>(letter) << endl;
    cout << "Float -> Int: " << static_cast<int>(floatValue) << endl;
    cout << "Double -> Int: " << static_cast<int>(doubleValue) << endl;
    cout << "Double -> Float: " << static_cast<float>(doubleValue) << endl;
    cout << "Float -> Double: " << static_cast<double>(floatValue) << endl;

    return 0;
}