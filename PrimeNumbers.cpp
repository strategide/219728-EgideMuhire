#include <iostream>

using namespace std;

bool isPrime(int value) {
    for (int i = 2; i < value; ++i) {
        if (value % i == 0) return false;
    }

    return true;
}

int main() {
    int start = 1;
    int max;

    for (int i = 2; i < 100; ++i) {
        if (isPrime(i)) {
            cout << i << endl;
        }
    }
    return 0;
}