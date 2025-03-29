#include <iostream>

using namespace std;

int main() {
    int num = 12;   // Starting number
    while (num <= 28) {
        cout << num;
        cout << (num == 28 ? ". " : ", ");
        num += 2;
    }

    return 0;
}