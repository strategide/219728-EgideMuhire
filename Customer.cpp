#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variable declaration
    int age;
    double balance;
    string status;
    int customerAge;

    // Get the age
    cout << "Enter the age: ";
    cin >> age;

    // Get the balance
    cout << "Enter the balance: ";
    cin >> balance;

    // Get CRB status
    cout << "Enter the CRB status: ";
    cin >> status;

    // Get customer age
    cout << "Enter customer account age: ";
    cin >> customerAge;

    // if age is valid
    if (age >= 22) {
        // if balance
        if (balance >= 50000) {
            // if status is good
            if (status == "good") {
                // if customer age
                if (customerAge >= 6) {
                    cout << "You qualify for loan" << endl;
                } else {
                    cout << "Customer account age is less than 6 months" << endl;
                }
            } else {
                cout << "CRB status is not good" << endl;
            }
        } else {
            cout << "Customer does not have enough balance" << endl;
        }
    } else {
        cout << "Customer is not old enough to qualify for loan" << endl;
    }

    return 0;
}