#include <iostream>

using namespace std;

int main() {
    for (int i = 12; i < 50; i++) {
        if ((i & 1) == 1) {
            cout << i << " ";
        }
    }

    return 0;
}